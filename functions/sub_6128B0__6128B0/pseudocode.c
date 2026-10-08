void __usercall sub_6128B0(void **this@<ecx>, double a2@<st0>)
{
  bool v4; // zf
  TESSaveLoadGame_SerializationView *v5; // ecx
  int *v6; // ecx
  void *v7; // ecx
  bool Src; // [esp+3h] [ebp-5h] BYREF
  unsigned int source; // [esp+4h] [ebp-4h] BYREF

  v4 = *(this + 1) == 0; /*0x6128b6*/
  v5 = g_TESSaveLoadGame; /*0x6128c4*/
  Src = !v4; /*0x6128ca*/
  SaveLoad_SaveData(v5, &Src, 1u); /*0x6128ce*/
  v6 = (int *)*(this + 1); /*0x6128d3*/
  if ( v6 ) /*0x6128d8*/
    SaveGame(v6, a2); /*0x6128da*/
  v7 = *this; /*0x6128df*/
  v4 = *this == 0; /*0x6128e1*/
  source = 0; /*0x6128e3*/
  if ( !v4 ) /*0x6128ec*/
    source = MagicItem_GetFormID(v7); /*0x6128f3*/
  SaveLoad_SaveFormID(g_TESSaveLoadGame, &source, 4u); /*0x612904*/
}
