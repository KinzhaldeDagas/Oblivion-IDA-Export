int __usercall ActiveEffect_Base_SaveEffect_::SaveCaster@<eax>(
        int a1@<ebp>,
        int a2,
        int a3,
        unsigned int source,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  void *v11; // ecx

  v11 = *(void **)(a1 + 0x24); /*0x68db3d*/
  source = 0; /*0x68db44*/
  if ( v11 ) /*0x68db48*/
    source = MagicCaster_GetFormID(v11); /*0x68db4f*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &source, 4u); /*0x68db60*/
  return ActiveEffect_Base_SaveEffect_::SaveTarget(a1, 0, a2, a3, source, a5, a6, a7, a8, a9, a10, a11);
}
