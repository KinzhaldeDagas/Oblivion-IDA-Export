int __usercall ActiveEffect_Base_SaveEffect_::SaveTarget@<eax>(
        int a1@<ebp>,
        _DWORD *a2@<edi>,
        int a3,
        int a4,
        int a5,
        _DWORD *ParentFormID,
        int a7,
        TESForm::ModReferenceList *a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  _DWORD *v12; // ecx

  v12 = *(_DWORD **)(a1 + 0x20); /*0x68db65*/
  ParentFormID = a2; /*0x68db6a*/
  if ( v12 != a2 ) /*0x68db6e*/
    ParentFormID = (_DWORD *)MagicTarget_GetParentFormID(v12); /*0x68db75*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, (const unsigned int *)&ParentFormID, 4u); /*0x68db86*/
  return ActiveEffect_Base_SaveEffect_::SaveBoundObj(
           a1,
           (int)a2,
           a3,
           a4,
           a5,
           (int)ParentFormID,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
