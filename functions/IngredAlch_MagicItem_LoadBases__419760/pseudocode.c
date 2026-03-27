void __thiscall IngredAlch_MagicItem_LoadBases(float *this, int *a2, signed int a3)
{
  if ( a3 <= 0x4C444F4D )
  {
    if ( a3 != 0x4C444F4D )
    {
      if ( a3 == 0x41544144 )
      {
        TESForm_LoadGenericComponents((TESForm *)(this + 0xFFFFFFF7), (int)a2, 0, 0);
        return;
      }
      if ( a3 != 0x42444F4D )
      {
        if ( a3 == 0x49524353 )
        {
          a3 = 0;
          TESFile_GetChunkData4(a2, (int)&a3);
          *((_DWORD *)this + 0x11) = a3;
          TESScriptableForm_Link((int)(this + 0x10), (TESForm *)(this + 0xFFFFFFF7));
        }
        return;
      }
    }
    goto LABEL_10;
  }
  if ( a3 != 0x4E4F4349 )
  {
    if ( a3 != 0x54444F4D )
      return;
LABEL_10:
    if ( this == (float *)0x24 )
      TESModel_Load(0, a2);
    else
      TESModel_Load(this + 7, a2);
    return;
  }
  if ( this == (float *)0x24 )
    TESTexture_Load(0, a2);
  else
    TESTexture_Load((int)(this + 0xD), a2);
}
