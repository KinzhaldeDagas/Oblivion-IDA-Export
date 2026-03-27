int __usercall Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Check_@<eax>(
        char a1@<bl>,
        int ebp0@<ebp>,
        int a3,
        int a4,
        int a5,
        char a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12)
{
  int v12; // edi
  int v13; // esi

  if ( !*(_DWORD *)(ebp0 + 8) && !*(_DWORD *)(ebp0 + 4) || a1 )
    return Actor_MagicCaster_IsMagicItemUseable_::SetFailureCode(a3, a4, a5, a6, a7, a8, a9, a10);
  v12 = *(_DWORD *)(ebp0 + 4);
  if ( v12
    && (*(_DWORD *)(*(_DWORD *)(v12 + 0x1C) + 0x58) & 0x30000) != 0
    && (v13 = (*(int (__thiscall **)(int))(*(_DWORD *)(a8 + 0xC) + 8))(a8 + 0xC)) != 0 )
  {
    return Actor_MagicCaster_IsMagicItemUseable_::ActvEffLoop_Check(
             ebp0,
             v13,
             0,
             v12,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
  }
  else
  {
    return Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Next(ebp0, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  }
}
