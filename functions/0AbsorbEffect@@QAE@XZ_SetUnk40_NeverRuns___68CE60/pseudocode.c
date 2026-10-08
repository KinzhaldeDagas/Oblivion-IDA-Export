int __userpurge AbsorbEffect::AbsorbEffect@<eax>(
        int a1@<ebx>,
        LONG (__stdcall *a2)(volatile LONG *lpAddend)@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7)
{
  if ( !a2((volatile LONG *)(a3 + 4)) && a3 != a1 ) /*0x68ce6c*/
    (**(void (__thiscall ***)(int, int))a3)(a3, 1); /*0x68ce76*/
  *(_DWORD *)(a4 + 0x40) = a1; /*0x68ce78*/
  return AbsorbEffect::AbsorbEffect(a4, a5, a6, a7);
}
