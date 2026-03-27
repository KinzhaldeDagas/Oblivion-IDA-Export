void __usercall __security_check_cookie(
        int a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4@<ebx>,
        int a5@<edi>,
        int a6@<esi>,
        char a7)
{
  if ( a3 != __security_cookie )
    __report_gsfailure(a1, a2, a3, a4, a5, a6, a7);
}
