void __userpurge Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Check_(
        char a1@<bl>,
        int ebp0@<ebp>,
        _DWORD *a3@<esi>,
        void *edi0@<edi>,
        double st7_0@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v15; // edi
  int v16; // esi

  if ( (*(_DWORD *)(ebp0 + 8) || *(_DWORD *)(ebp0 + 4)) && !a1 ) /*0x5f4687*/
  {
    v15 = *(_DWORD *)(ebp0 + 4); /*0x5f4689*/
    if ( v15 /*0x5f46af*/
      && (*(_DWORD *)(*(_DWORD *)(v15 + 0x1C) + 0x58) & 0x30000) != 0
      && (v16 = (*(int (__thiscall **)(int))(*(_DWORD *)(a9 + 0xC) + 8))(a9 + 0xC)) != 0 )
    {
      Actor_MagicCaster_IsMagicItemUseable_::ActvEffLoop_Check( /*0x5f46b0*/
        ebp0,
        v16,
        0,
        v15,
        a4,
        a5,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13);
    }
    else
    {
      Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Next(ebp0, 0, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13); /*0x5f468e*/
    }
  }
  else
  {
    Actor_MagicCaster_IsMagicItemUseable_::SetFailureCode( /*0x5f4683*/
      a1,
      a3,
      edi0,
      st7_0,
      a4,
      (float *)a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      *(float *)&a13);
  }
}
