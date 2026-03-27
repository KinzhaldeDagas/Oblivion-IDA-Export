int __thiscall AVCollection_Save(void *this, int a2, int a3, int a4, int a5, int a6, float a7)
{
  TESSaveLoad *v8; // ecx
  size_t v10; // [esp-4h] [ebp-20h]
  int Src; // [esp+14h] [ebp-8h] BYREF

  v8 = SaveLoad_CurrentSavegame;
  LODWORD(v10) = 2;
  Src = 0;
  SaveLoad_SaveData((int)v8, &Src, v10);
  if ( this )
    return AVCollection_Save_::SaveListLoop();
  else
    return AVCollection_Save_::SaveMagickaNode();
}
