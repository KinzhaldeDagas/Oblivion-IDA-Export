// positive sp value has been detected, the output may be wrong!
char __userpurge Actor_MagicCaster_IsMagicItemUseable_::GetMagicItem@<al>(
        int a1@<ebx>,
        double a2@<st0>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10,
        int a11,
        int a12)
{
  int v13; // edi

  if ( a3 )
    return Actor_MagicCaster_IsMagicItemUseable_::CheckGodMode(a1, a3, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( !(*(int (**)(void))(*(_DWORD *)a1 + 0x30))() )
    return 0;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x30))(a1);
  return Actor_MagicCaster_IsMagicItemUseable_::CheckGodMode(a1, v13, a2, 0, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
