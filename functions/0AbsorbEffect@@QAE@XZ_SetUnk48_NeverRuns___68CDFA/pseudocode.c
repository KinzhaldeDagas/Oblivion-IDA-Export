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

  if ( !a2((volatile LONG *)(a3 + 4)) && a3 != a1 ) /*0x68ce06*/
    (**(void (__thiscall ***)(int, int))a3)(a3, 1); /*0x68ce10*/
  *(_DWORD *)(a4 + 0x48) = a1; /*0x68ce12*/
  v7 = *(_DWORD *)(a4 + 0x3C); /*0x68ce15*/
  if ( v7 == a1 ) /*0x68ce1a*/
    JUMPOUT(0x68CE37); /*0x68ce37*/
  return AbsorbEffect::AbsorbEffect(a1, a2, v7, a4, a5, a6, a7);
}
