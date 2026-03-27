int __usercall ActiveEffect_Base_SaveEffect_::SaveBoundObj@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        TESForm::ModReferenceList *a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  int v12; // eax

  v12 = *(_DWORD *)(a1 + 0x30);
  a7 = a2;
  if ( v12 != a2 )
    a7 = *(_DWORD *)(v12 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&a7, 4u);
  return ActiveEffect_Base_SaveEffect_::SaveRemoved(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
