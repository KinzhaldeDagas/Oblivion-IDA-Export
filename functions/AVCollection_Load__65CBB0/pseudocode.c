int __usercall AVCollection_Load@<eax>(unsigned int **this@<ecx>, int a2@<esi>)
{
  unsigned int v3; // edi
  int v4; // eax
  float *v5; // esi
  float *v6; // eax
  size_t v8; // [esp-Ch] [ebp-24h]
  size_t v9; // [esp-Ch] [ebp-24h]
  size_t v10; // [esp-4h] [ebp-1Ch]
  char v11; // [esp+Bh] [ebp-Dh] BYREF
  unsigned __int16 Dst; // [esp+Ch] [ebp-Ch] BYREF
  float v13; // [esp+10h] [ebp-8h] BYREF
  float v14; // [esp+14h] [ebp-4h]

  LODWORD(v10) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v10);
  v3 = 0;
  if ( !Dst )
    return AVCollection_Load_::Done();
  HIDWORD(v8) = a2;
  do
  {
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x34u )
      goto LABEL_8;
    LODWORD(v8) = 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v11, v8);
    LODWORD(v9) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v13, v9);
    v4 = FormHeapAlloc(8u);
    if ( v4 )
    {
      v14 = v13;
      *(_BYTE *)v4 = v11;
      *(float *)(v4 + 4) = v14;
    }
    else
    {
      v4 = 0;
    }
    v5 = (float *)v4;
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x34u )
    {
LABEL_8:
      v6 = (float *)FormHeapAlloc(8u);
      if ( v6 )
      {
        *(_BYTE *)v6 = 0;
        v6[1] = 0.0;
      }
      else
      {
        v6 = 0;
      }
      LODWORD(v8) = 8;
      v5 = v6;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v6, v8);
    }
    AVCollection_Add(this, v5);
    ++v3;
  }
  while ( v3 < Dst );
  return AVCollection_Load_::Done();
}
