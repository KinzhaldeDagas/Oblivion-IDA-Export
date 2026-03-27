void __thiscall LowProcess::CopyFrom(LowProcess *a1, LowProcess *a3)
{
  LowProcess_vtbl *v3; // ebx
  double unk00C; // st7
  UInt8 unk084; // cl
  UInt32 unk048; // eax
  int v7; // ebx
  PathLow *v8; // eax
  float v9; // [esp+0h] [ebp-10h]

  v3 = a1->__vftable;
  v9 = a3->GetCurHour(a3);
  ((void (__thiscall *)(LowProcess *, _DWORD))v3->SetCurHour)(a1, LODWORD(v9));
  a1->editorPackage = a3->editorPackage;
  unk00C = a3->unk00C;
  a3->editorPackage = 0;
  a1->unk00C = unk00C;
  a1->isAlerted = a3->isAlerted;
  a1->unk01D = a3->Unk_2F(a3);
  a1->unk01C = a3->GetUnk01C(a3);
  a1->unk044 = a3->unk044;
  unk084 = a3->unk084;
  a3->unk044 = 0;
  a1->unk084 = unk084;
  a1->unk028 = a3->unk028;
  a1->usedItem = a3->usedItem;
  a1->unk01E = a3->GetUnk01E(a3);
  unk048 = a3->unk048;
  if ( unk048 )
  {
    a1->unk048 = unk048;
    a3->unk048 = 0;
  }
  if ( a3->CreatePath(a3) )
  {
    if ( !a1->pathing )
      a1->Unk_101(a1);
    v7 = *(_DWORD *)a1->pathing;
    v8 = a3->CreatePath(a3);
    (*(void (__thiscall **)(PathLow *, PathLow *))(v7 + 8))(a1->pathing, v8);
  }
  a1->curPackedDate = a3->GetCurPackedDate(a3);
  a1->follow = a3->follow;
  a1->editorPackProcedure = a3->editorPackProcedure;
  a1->unk038 = a3->unk038;
  AVCollection_CopyFrom(&a1->avDamageModifiers.avList.entry, (int *)&a3->avDamageModifiers);
  a1->unk088 = a3->unk088;
  a1->unk08C = a3->unk08C;
}
