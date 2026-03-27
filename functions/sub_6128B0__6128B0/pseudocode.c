char __usercall sub_6128B0@<al>(void **this@<ecx>, double a2@<st0>, int a3@<esi>)
{
  bool v4; // zf
  TESSaveLoad *v5; // ecx
  int *v6; // ecx
  void *v7; // ecx
  size_t v9; // [esp-8h] [ebp-10h]
  bool Src; // [esp+3h] [ebp-5h] BYREF
  int FormID; // [esp+4h] [ebp-4h] BYREF

  HIDWORD(v9) = a3;
  v4 = *(this + 1) == 0;
  LODWORD(v9) = 1;
  v5 = SaveLoad_CurrentSavegame;
  Src = !v4;
  SaveLoad_SaveData((int)v5, &Src, v9);
  v6 = (int *)*(this + 1);
  if ( v6 )
    SaveGame(v6, a2);
  v7 = *this;
  v4 = *this == 0;
  FormID = 0;
  if ( !v4 )
    FormID = MagicItem_GetFormID(v7);
  return SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&FormID, 4u);
}
