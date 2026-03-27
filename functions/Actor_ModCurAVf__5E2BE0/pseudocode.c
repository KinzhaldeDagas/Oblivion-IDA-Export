int __usercall Actor_ModCurAVf@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9)
{
  int v10; // ebp

  if ( a4 == 0xA && *(float *)&a5 < 0.0 && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x278))(a1) )
    return Actor_ModCurAVf_::Done(0xA, a5, a6);
  v10 = a1[0x16];
  if ( !v10 )
    return Actor_ModCurAVf_::CheckHealthDmg(a4, a5, a6, a7, a8, a9);
  if ( (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 0x170))(a1, a2, a3) )
    (*(int (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 0x288))(v10);
  return Actor_ModCurAVf_::CheckHealthDmg(a4, a5, a6, a7, a8, a9);
}
