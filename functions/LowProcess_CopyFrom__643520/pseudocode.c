// Verified copy relationship: transfers LowProcess avDamageModifiers +0x70 through AVCollection_CopyFrom 65CD10, whose list/indexed entries are deep-copied and permanent values assigned.
void __thiscall LowProcess::CopyFrom(LowProcess *a1, LowProcess *a3)
{
  LowProcess_vtbl *v3; // ebx
  double unk00C; // st7
  UInt8 unk084; // cl
  UInt32 unk048; // eax
  int v7; // ebx
  PathLow *v8; // eax
  float v9; // [esp+0h] [ebp-10h]

  v3 = a1->__vftable; /*0x64352e*/
  v9 = a3->GetCurHour(a3); /*0x64353a*/
  ((void (__thiscall *)(LowProcess *, _DWORD))v3->SetCurHour)(a1, LODWORD(v9)); /*0x64353d*/
  a1->editorPackage = a3->editorPackage; /*0x643542*/
  unk00C = a3->unk00C; /*0x643545*/
  a3->editorPackage = 0; /*0x64354a*/
  a1->unk00C = unk00C; /*0x64354d*/
  a1->isAlerted = a3->isAlerted; /*0x643553*/
  a1->procedureCompleted = a3->Unk_2F(a3); /*0x643562*/
  a1->unk01C = a3->GetUnk01C(a3); /*0x643571*/
  a1->unk044 = a3->unk044; /*0x643577*/
  unk084 = a3->unk084; /*0x64357a*/
  a3->unk044 = 0; /*0x643580*/
  a1->unk084 = unk084; /*0x643583*/
  a1->unk028 = a3->unk028; /*0x64358c*/
  a1->usedItem = a3->usedItem; /*0x643592*/
  a1->unk01E = a3->GetUnk01E(a3); /*0x6435a1*/
  unk048 = a3->unk048; /*0x6435a4*/
  if ( unk048 ) /*0x6435a9*/
  {
    a1->unk048 = unk048; /*0x6435ab*/
    a3->unk048 = 0; /*0x6435ae*/
  }
  if ( a3->CreatePath(a3) ) /*0x6435bb*/
  {
    if ( !a1->pathing ) /*0x6435c1*/
      a1->Unk_101(a1); /*0x6435d0*/
    v7 = *(_DWORD *)a1->pathing; /*0x6435d7*/
    v8 = a3->CreatePath(a3); /*0x6435e1*/
    (*(void (__thiscall **)(PathLow *, PathLow *))(v7 + 8))(a1->pathing, v8); /*0x6435ea*/
  }
  a1->curPackedDate = a3->GetCurPackedDate(a3); /*0x6435f5*/
  a1->follow = a3->follow; /*0x6435fb*/
  a1->editorPackProcedure = a3->editorPackProcedure; /*0x643601*/
  a1->unk038 = a3->unk038; /*0x64360e*/
  AVCollection_CopyFrom(&a1->avDamageModifiers, &a3->avDamageModifiers); /*0x643611*/
  a1->unk088 = a3->unk088; /*0x64361c*/
  a1->unk08C = a3->unk08C; /*0x643628*/
}
