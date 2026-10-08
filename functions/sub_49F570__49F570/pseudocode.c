// Serializes BSAnimGroupSequence effective sample time, active state, fields +0x34/+0x38 and +0x54; save versions below 0x71 include the legacy extra time copy.
void *__thiscall BSAnimGroupSequence_SaveState(float *this, float Src)
{
  double v3; // st7
  TESSaveLoad *v4; // ecx
  TESSaveLoad *v5; // ecx
  size_t v7; // [esp-4h] [ebp-8h]
  size_t v8; // [esp-4h] [ebp-8h]
  size_t v9; // [esp-4h] [ebp-8h]
  size_t v10; // [esp-4h] [ebp-8h]
  size_t v11; // [esp-4h] [ebp-8h]

  v3 = *(this + 0x12); /*0x49f573*/
  v4 = g_TESSaveLoadGame; /*0x49f576*/
  LODWORD(v7) = 4; /*0x49f580*/
  Src = v3 + Src; /*0x49f587*/
  SaveLoad_SaveData((int)v4, &Src, v7); /*0x49f58b*/
  LODWORD(v8) = 4; /*0x49f590*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, this + 0x11, v8); /*0x49f59c*/
  v5 = g_TESSaveLoadGame; /*0x49f5a1*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x71u ) /*0x49f5ab*/
  {
    LODWORD(v9) = 4; /*0x49f5ad*/
    SaveLoad_SaveData((int)v5, &Src, v9); /*0x49f5b4*/
    v5 = g_TESSaveLoadGame; /*0x49f5b9*/
  }
  LODWORD(v9) = 4; /*0x49f5bf*/
  SaveLoad_SaveData((int)v5, this + 0xD, v9); /*0x49f5c5*/
  LODWORD(v10) = 4; /*0x49f5ca*/
  SaveLoad_SaveData((int)g_TESSaveLoadGame, this + 0xE, v10); /*0x49f5d6*/
  LODWORD(v11) = 4; /*0x49f5e1*/
  return SaveLoad_SaveData((int)g_TESSaveLoadGame, this + 0x15, v11); /*0x49f5ec*/
}
