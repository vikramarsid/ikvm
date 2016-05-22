/*
* count_exits.c
* 
* Copyright 2016 ubuntu <ubuntu@ubuntu-VPCEB46FG>
* 
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
* MA 02110-1301, USA.
* 
* 
*/

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Vikram Arsid");
MODULE_DESCRIPTION("Facility to print counter info for VMM Exits");

//Referring global varaibles
extern unsigned int count_handle_rmode_exception;
extern unsigned int count_handle_invalid_guest_state;
extern unsigned int count_handle_set_cr0;
extern unsigned int count_handle_set_cr4;
extern unsigned int count_handle_clts;
extern unsigned int count_handle_nop;
extern unsigned int count_handle_exception;
extern unsigned int count_handle_external_interrupt;
extern unsigned int count_handle_triple_fault;
extern unsigned int count_handle_nmi_window;
extern unsigned int count_handle_io;
extern unsigned int count_handle_cr;
extern unsigned int count_handle_dr;
extern unsigned int count_handle_cpuid;
extern unsigned int count_handle_rdmsr;
extern unsigned int count_handle_wrmsr;
extern unsigned int count_handle_interrupt_window;
extern unsigned int count_handle_halt;
extern unsigned int count_handle_invd;
extern unsigned int count_handle_invlpg;
extern unsigned int count_handle_rdpmc;
extern unsigned int count_handle_vmcall;
extern unsigned int count_handle_vmclear;
extern unsigned int count_handle_vmlaunch;
extern unsigned int count_handle_vmptrld;
extern unsigned int count_handle_vmptrst;
extern unsigned int count_handle_vmread;
extern unsigned int count_handle_vmresume;
extern unsigned int count_handle_vmwrite;
extern unsigned int count_handle_vmoff;
extern unsigned int count_handle_vmon;
extern unsigned int count_handle_tpr_below_threshold;
extern unsigned int count_handle_apic_access;
extern unsigned int count_handle_apic_write;
extern unsigned int count_handle_apic_eoi_induced;
extern unsigned int count_handle_wbinvd;
extern unsigned int count_handle_monitor_trap;
extern unsigned int count_handle_xsetbv;
extern unsigned int count_handle_task_switch;
extern unsigned int count_handle_machine_check;
extern unsigned int count_handle_ept_violation;
extern unsigned int count_handle_ept_misconfig;
extern unsigned int count_handle_pause;
extern unsigned int count_handle_mwait;
extern unsigned int count_handle_monitor;
extern unsigned int count_handle_pcommit;
extern unsigned int count_handle_invept;
extern unsigned int count_handle_invvpid;
extern unsigned int count_handle_xsaves;
extern unsigned int count_handle_xrstors;
extern unsigned int count_handle_pml_full;


static int __init show_entry(void)
{
	printk(KERN_INFO "In VMX Exit printing facility\n");
	char heading[100] = "Exit reason          number of exits";
	printk("%s", heading);
	printk("\n=====================      ==============");
	printk("\n");
	printk(" rmode_exception_exit %-2i\n" ,count_handle_rmode_exception);
	printk(" invalid_guest_state_exit %-2i\n" , count_handle_invalid_guest_state);
	printk(" set_cr0_exit %-2i\n" , count_handle_set_cr0);
	printk(" set_cr4_exit %-2i\n" , count_handle_set_cr4);
	printk(" clts_exit %-2i\n" , count_handle_clts);
	printk(" nop_exit %-2i\n" , count_handle_nop);
	printk(" exception_exit %-2i\n" , count_handle_exception);
	printk(" external_interrupt_exit %-2i\n" , count_handle_external_interrupt);
	printk(" triple_fault_exit %-2i\n" , count_handle_triple_fault);
	printk(" nmi_window_exit %-2i\n" , count_handle_nmi_window);
	printk(" io_exit %-2i\n" , count_handle_io);
	printk(" cr_exit %-2i\n" , count_handle_cr);
	printk(" dr_exit %-2i\n" , count_handle_dr);
	printk(" cpuid_exit %-2i\n" , count_handle_cpuid);
	printk(" rdmsr_exit %-2i\n" , count_handle_rdmsr);
	printk(" wrmsr_exit %-2i\n" , count_handle_wrmsr);
	printk(" interrupt_window_exit %-2i\n" , count_handle_interrupt_window);
	printk(" halt_exit %-2i\n" , count_handle_halt);
	printk(" handle_invd %-2i\n" , count_handle_invd);
	printk(" invlpg_exit %-2i\n" , count_handle_invlpg);
	printk(" rdpmc_exit %-2i\n" , count_handle_rdpmc);
	printk(" vmcall_exit %-2i\n" , count_handle_vmcall);
	printk(" vmclear_exit %-2i\n" , count_handle_vmclear);
	printk(" vmlaunch_exit %-2i\n" , count_handle_vmlaunch);
	printk(" vmptrld_exit %-2i\n" , count_handle_vmptrld);
	printk(" vmptrst_exit %-2i\n" , count_handle_vmptrst);
	printk(" vmread_exit %-2i\n" , count_handle_vmread);
	printk(" vmresume_exit %-2i\n" , count_handle_vmresume);
	printk(" vmwrite_exit %-2i\n" , count_handle_vmwrite);
	printk(" vmoff_exit %-2i\n" , count_handle_vmoff);
	printk(" vmon_exit %-2i\n" , count_handle_vmon);
	printk(" tpr_below_threshold_exit %-2i\n" , count_handle_tpr_below_threshold);
	printk(" apic_access_exit %-2i\n" , count_handle_apic_access);
	printk(" apic_write_exit %-2i\n" , count_handle_apic_write);
	printk(" apic_eoi_induced_exit %-2i\n" , count_handle_apic_eoi_induced);
	printk(" wbinvd_exit %-2i\n" , count_handle_wbinvd);
	printk(" xsetbv_exit %-2i\n" , count_handle_xsetbv);
	printk(" task_switch_exit %-2i\n" , count_handle_task_switch);
	printk(" machine_check_exit %-2i\n" , count_handle_machine_check);
	printk(" ept_violation_exit %-2i\n" , count_handle_ept_violation);
	printk(" ept_misconfig_exit %-2i\n" , count_handle_ept_misconfig);
	printk(" pause_exit %-2i\n" , count_handle_pause);
	printk(" mwait_exit %-2i\n" , count_handle_mwait);
	printk(" monitor_exit %-2i\n" , count_handle_monitor);
	printk(" pcommit_exit %-2i\n" , count_handle_pcommit);
	printk(" monitor_trap_exit %-2i\n" , count_handle_monitor_trap);
	printk(" invept_exit %-2i\n" , count_handle_invept);
	printk(" invvpid_exit %-2i\n" , count_handle_invvpid);
	printk(" xsaves_exit %-2i\n" , count_handle_xsaves);
	printk(" xrstors_exit %-2i\n" , count_handle_xrstors);
	printk(" pml_full_exit %-2i\n" , count_handle_pml_full);
	return 0;
}


static void __exit show_exit(void)
{
	printk(KERN_INFO "Exiting VMM exit printing facility.\n");
}

module_init(show_entry);
module_exit(show_exit);

