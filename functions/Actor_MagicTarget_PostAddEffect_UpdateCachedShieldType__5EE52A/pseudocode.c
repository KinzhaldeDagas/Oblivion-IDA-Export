int __usercall Actor_MagicTarget_PostAddEffect_::UpdateCachedShieldType@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7,
        int a8,
        int *a9)
{
  int ShieldType; // eax
  int v10; // ebx
  int v11; // eax

  ShieldType = Magic_GetShieldType(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0x1C) + 0x98));
  if ( ShieldType )
  {
    v10 = **(_DWORD **)(a1 - 0x10);
    v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 8))(a1, ShieldType);
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(v10 + 0x44C))(*(_DWORD *)(a1 - 0x10), v11) )
      a5 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 - 0x10) + 0x450))(*(_DWORD *)(a1 - 0x10));
  }
  return Actor_MagicTarget_PostAddEffect_::PlayElementalShieldFX(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
