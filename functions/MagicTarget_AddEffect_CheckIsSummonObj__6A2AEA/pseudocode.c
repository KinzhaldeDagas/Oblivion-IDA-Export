int __usercall MagicTarget_AddEffect_::CheckIsSummonObj@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void *a10,
        float a11)
{
  _DWORD *v11; // ebx

  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x58) & 0x30000) != 0
    && (v11 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2)) != 0 )
  {
    return MagicTarget_AddEffect_::TargetEffectLoop_Check(v11, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  }
  else
  {
    return MagicTarget_AddEffect_::CloneActiveEffect(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  }
}
