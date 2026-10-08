// positive sp value has been detected, the output may be wrong!
char __userpurge Actor_MagicCaster_IsMagicItemUseable_::GetMagicItem@<al>(
        int a1@<ebx>,
        double a2@<st0>,
        void *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  void *v13; // edi

  if ( a3 ) /*0x5f44c0*/
    return Actor_MagicCaster_IsMagicItemUseable_::CheckGodMode( /*0x5f44de*/
             a1,
             a3,
             a2,
             (int)a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
  if ( !(*(int (**)(void))(*(_DWORD *)a1 + 0x30))() ) /*0x5f44c7*/
    return 0; /*0x5f44cf*/
  v13 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x30))(a1); /*0x5f44ed*/
  return Actor_MagicCaster_IsMagicItemUseable_::CheckGodMode(a1, v13, a2, 0, a4, a5, a6, a7, a8, a9, a10, a11, a12); /*0x5f44d5*/
}
