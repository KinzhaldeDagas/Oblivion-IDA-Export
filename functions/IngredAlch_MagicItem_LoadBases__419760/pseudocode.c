void __thiscall IngredAlch_MagicItem_LoadBases(float *this, Data *a2, signed int a3)
{
  if ( a3 <= 0x4C444F4D ) /*0x41976c*/
  {
    if ( a3 != 0x4C444F4D ) /*0x41976e*/
    {
      if ( a3 == 0x41544144 ) /*0x419775*/
      {
        TESForm_LoadGenericComponents((TESForm *)(this + 0xFFFFFFF7), a2, 0, 0); /*0x4197c2*/
        return; /*0x4197c8*/
      }
      if ( a3 != 0x42444F4D ) /*0x41977c*/
      {
        if ( a3 == 0x49524353 ) /*0x419783*/
        {
          a3 = 0; /*0x419792*/
          TESFile_GetChunkData4(a2, (char *)&a3); /*0x41979a*/
          *((_DWORD *)this + 0x11) = a3; /*0x4197a6*/
          TESScriptableForm_Link((int)(this + 0x10), (TESForm *)(this + 0xFFFFFFF7)); /*0x4197ad*/
        }
        return; /*0x4197b3*/
      }
    }
    goto LABEL_10; /*0x41977c*/
  }
  if ( a3 != 0x4E4F4349 ) /*0x4197d0*/
  {
    if ( a3 != 0x54444F4D ) /*0x4197d7*/
      return; /*0x4197d7*/
LABEL_10:
    if ( this == (float *)0x24 ) /*0x4197de*/
      TESModel_Load(0, a2); /*0x4197fd*/
    else
      TESModel_Load(this + 7, a2); /*0x4197e9*/
    return; /*0x4197f2*/
  }
  if ( this == (float *)0x24 ) /*0x41980e*/
    TESTexture_Load(0, a2); /*0x41982d*/
  else
    TESTexture_Load((int)(this + 0xD), a2); /*0x419819*/
}
