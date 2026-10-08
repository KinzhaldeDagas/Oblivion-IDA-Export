int __userpurge AbsorbEffect::AbsorbEffect@<eax>(
        int a1@<ebx>,
        LONG (__stdcall *a2)(volatile LONG *lpAddend)@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7)
{
  int v7; // edi

  if ( !a2((volatile LONG *)(a3 + 4)) && a3 != a1 ) /*0x68ce4a*/
    (**(void (__thiscall ***)(int, int))a3)(a3, 1); /*0x68ce54*/
  *(_DWORD *)(a4 + 0x44) = a1; /*0x68ce56*/
  v7 = *(_DWORD *)(a4 + 0x40); /*0x68ce59*/
  if ( v7 == a1 ) /*0x68ce5e*/
    return AbsorbEffect::AbsorbEffect(a4, a5, a6, a7); /*0x68ce5e*/
  else
    return AbsorbEffect::AbsorbEffect(a1, a2, v7, a4, a5, a6, a7); /*0x68ce5f*/
}
