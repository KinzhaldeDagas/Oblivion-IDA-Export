int __usercall ActiveEffect_Base_SaveEffect_::SaveBoundObj@<eax>(
        int a1@<ebp>,
        unsigned int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int source,
        TESForm::ModReferenceList *a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  int v12; // eax

  v12 = *(_DWORD *)(a1 + 0x30); /*0x68db8b*/
  source = a2; /*0x68db90*/
  if ( v12 != a2 ) /*0x68db94*/
    source = *(_DWORD *)(v12 + 0xC); /*0x68db99*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &source, 4u); /*0x68dbaa*/
  return ActiveEffect_Base_SaveEffect_::SaveRemoved(a1, a2, a3, a4, a5, a6, source, a8, a9, a10, a11, a12);
}
