#include <stdio.h>
static unsigned int count_handle_rmode_exception=0;
static unsigned int count_handle_invalid_guest_state=0;
static unsigned int count_handle_set_cr0=0;
static unsigned int count_handle_set_cr4=0;
static unsigned int count_handle_clts=0;
static unsigned int count_handle_nop=0;
static unsigned int count_handle_exception=0;
static unsigned int count_handle_external_interrupt=0;
static unsigned int count_handle_triple_fault=0;
static unsigned int count_handle_nmi_window=0;
static unsigned int count_handle_io=0;
static unsigned int count_handle_cr=0;
static unsigned int count_handle_dr=0;
static unsigned int count_handle_cpuid=0;
static unsigned int count_handle_rdmsr=0;
static unsigned int count_handle_wrmsr=0;
static unsigned int count_handle_interrupt_window=0;
static unsigned int count_handle_halt=0;
static unsigned int count_handle_invd=0;
static unsigned int count_handle_invlpg=0;
static unsigned int count_handle_rdpmc=0;
static unsigned int count_handle_vmcall=0;
static unsigned int count_handle_vmclear=0;
static unsigned int count_handle_vmlaunch=0;
static unsigned int count_handle_vmptrld=0;
static unsigned int count_handle_vmptrst=0;
static unsigned int count_handle_vmread=0;
static unsigned int count_handle_vmresume=0;
static unsigned int count_handle_vmwrite=0;
static unsigned int count_handle_vmoff=0;
static unsigned int count_handle_vmon=0;
static unsigned int count_handle_tpr_below_threshold=0;
static unsigned int count_handle_apic_access=0;
static unsigned int count_handle_apic_write=0;
static unsigned int count_handle_apic_eoi_induced=0;
static unsigned int count_handle_wbinvd=0;
static unsigned int count_handle_xsetbv=0;
static unsigned int count_handle_task_switch=0;
static unsigned int count_handle_machine_check=0;
static unsigned int count_handle_ept_violation=0;
static unsigned int count_handle_ept_misconfig=0;
static unsigned int count_handle_pause=0;
static unsigned int count_handle_mwait=0;
static unsigned int count_handle_monitor=0;
static unsigned int count_handle_invept=0;
static unsigned int count_handle_invvpid=0;
static unsigned int count_handle_xsaves=0;
static unsigned int count_handle_xrstors=0;
static unsigned int count_handle_pml_full=0;
int main(void)
{
//const char * exits[] = {"rmode_exception_exit","invalid_guest_state_exit","set_cr0_exit","set_cr4_exit","clts_exit","nop_exit","exception_exit", \
//"external_interrupt_exit","triple_fault_exit","nmi_window_exit","io_exit","cr_exit","dr_exit","cpuid_exit","rdmsr_exit",\
//"wrmsr_exit","interrupt_window_exit","halt_exit","invd_exit","invlpg_exit","rdpmc_exit","vmcall_exit","vmclear_exit",\
//"vmlaunch_exit","vmptrld_exit","vmptrst_exit","vmread_exit","vmresume_exit","vmwrite_exit","vmoff_exit","vmon_exit",\
//"tpr_below_threshold_exit","apic_access_exit","apic_write_exit","apic_eoi_induced_exit","wbinvd_exit","xsetbv_exit",\
//"task_switch_exit","machine_check_exit","ept_violation_exit","ept_misconfig_exit","pause_exit","mwait_exit","monitor_exit",\
//"invept_exit","invvpid_exit","xsaves_exit","xrstors_exit","pml_full_exit"};

//const char * counts[] = {"count_handle_rmode_exception","count_handle_invalid_guest_state","count_handle_set_cr0","count_handle_set_cr4","count_handle_clts","count_handle_nop","count_handle_exception",\
//"count_handle_external_interrupt","count_handle_triple_fault","count_handle_nmi_window","count_handle_io","count_handle_cr","count_handle_dr","count_handle_cpuid","count_handle_rdmsr",\
//"count_handle_wrmsr","count_handle_interrupt_window","count_handle_halt","count_handle_invd","count_handle_invlpg","count_handle_rdpmc","count_handle_vmcall","count_handle_vmclear",\
//"count_handle_vmlaunch","count_handle_vmptrld","count_handle_vmptrst","count_handle_vmread","count_handle_vmresume","count_handle_vmwrite","count_handle_vmoff","count_handle_vmon",\
//"count_handle_tpr_below_threshold","count_handle_apic_access","count_handle_apic_write","count_handle_apic_eoi_induced","count_handle_wbinvd","count_handle_xsetbv",\
//"count_handle_task_switch","count_handle_machine_check","count_handle_ept_violation","count_handle_ept_misconfig","count_handle_pause","count_handle_mwait","count_handle_monitor",\
//"count_handle_invept","count_handle_invvpid","count_handle_xsaves","count_handle_xrstors","count_handle_pml_full"};

char heading[100] = "S.No          Exit reason          number of exits";
//char er[100] = "Page_Fault";
printf("%s", heading);
printf("\n====      =====================      ==============");
printf("\n");
//for(int i=0;i<sizeof(exits)-1;i++){
//printf("printf("%-3i %-30s %-2s" ,%-30s %s\n", exits[i],counts[i]);
//}
printf("%-3i rmode_exception_exit %-2s" ,i,count_handle_rmode_exception);
printf("%-3i invalid_guest_state_exit %-2s" ,i, count_handle_invalid_guest_state);
printf("%-3i set_cr0_exit %-2s" ,i, count_handle_set_cr0);
printf("%-3i set_cr4_exit %-2s" ,i, count_handle_set_cr4);
printf("%-3i clts_exit %-2s" ,i, count_handle_clts);
printf("%-3i nop_exit %-2s" ,i, count_handle_nop);
printf("%-3i exception_exit %-2s" ,i, count_handle_exception);
printf("%-3i external_interrupt_exit %-2s" ,i, count_handle_external_interrupt);
printf("%-3i triple_fault_exit %-2s" ,i, count_handle_triple_fault);
printf("%-3i nmi_window_exit %-2s" ,i, count_handle_nmi_window);
printf("%-3i io_exit %-2s" ,i, count_handle_io);
printf("%-3i cr_exit %-2s" ,i, count_handle_cr);
printf("%-3i dr_exit %-2s" ,i, count_handle_dr);
printf("%-3i cpuid_exit %-2s" ,i, count_handle_cpuid);
printf("%-3i rdmsr_exit %-2s" ,i, count_handle_rdmsr);
printf("%-3i wrmsr_exit %-2s" ,i, count_handle_wrmsr);
printf("%-3i interrupt_window_exit %-2s" ,i, count_handle_interrupt_window);
printf("%-3i halt_exit %-2s" ,i, count_handle_halt);
printf("%-3i %-30s %-2s" ,invd_exit, count_handle_invd);
printf("%-3i %-30s %-2s" ,invlpg_exit, count_handle_invlpg);
printf("%-3i %-30s %-2s" ,rdpmc_exit, count_handle_rdpmc);
printf("%-3i %-30s %-2s" ,vmcall_exit, count_handle_vmcall);
printf("%-3i %-30s %-2s" ,vmclear_exit, count_handle_vmclear);
printf("%-3i %-30s %-2s" ,vmlaunch_exit, count_handle_vmlaunch);
printf("%-3i %-30s %-2s" ,vmptrld_exit, count_handle_vmptrld);
printf("%-3i %-30s %-2s" ,vmptrst_exit, count_handle_vmptrst);
printf("%-3i %-30s %-2s" ,vmread_exit, count_handle_vmread);
printf("%-3i %-30s %-2s" ,vmresume_exit, count_handle_vmresume);
printf("%-3i %-30s %-2s" ,vmwrite_exit, count_handle_vmwrite);
printf("%-3i %-30s %-2s" ,vmoff_exit, count_handle_vmoff);
printf("%-3i %-30s %-2s" ,vmon_exit, count_handle_vmon);
printf("%-3i %-30s %-2s" ,tpr_below_threshold_exit, count_handle_tpr_below_threshold);
printf("%-3i %-30s %-2s" ,apic_access_exit, count_handle_apic_access);
printf("%-3i %-30s %-2s" ,apic_write_exit, count_handle_apic_write);
printf("%-3i %-30s %-2s" ,apic_eoi_induced_exit, count_handle_apic_eoi_induced);
printf("%-3i %-30s %-2s" ,wbinvd_exit, count_handle_wbinvd);
printf("%-3i %-30s %-2s" ,xsetbv_exit, count_handle_xsetbv);
printf("%-3i %-30s %-2s" ,task_switch_exit, count_handle_task_switch);
printf("%-3i %-30s %-2s" ,machine_check_exit, count_handle_machine_check);
printf("%-3i %-30s %-2s" ,ept_violation_exit, count_handle_ept_violation);
printf("%-3i %-30s %-2s" ,ept_misconfig_exit, count_handle_ept_misconfig);
printf("%-3i %-30s %-2s" ,pause_exit, count_handle_pause);
printf("%-3i %-30s %-2s" ,mwait_exit, count_handle_mwait);
printf("%-3i %-30s %-2s" ,monitor_exit, count_handle_monitor);
printf("%-3i %-30s %-2s" ,invept_exit, count_handle_invept);
printf("%-3i %-30s %-2s" ,invvpid_exit, count_handle_invvpid);
printf("%-3i %-30s %-2s" ,xsaves_exit, count_handle_xsaves);
printf("%-3i %-30s %-2s" ,xrstors_exit, count_handle_xrstors);
printf("%-3i %-30s %-2s" ,pml_full_exit, count_handle_pml_full);
return 0;    
}
