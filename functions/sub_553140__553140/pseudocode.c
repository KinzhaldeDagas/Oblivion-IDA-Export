_DWORD *__thiscall sub_553140(_DWORD *this)
{
  bool v2; // bl
  int **v3; // edi
  _DWORD *v4; // esi
  int *v5; // ecx
  int v6; // eax
  int v7; // ecx
  NiObjectNET *v8; // eax
  NiObjectNET *v9; // esi
  NiObjectNET *v10; // edi
  NiObjectNET *v11; // esi
  NiPixelData *v12; // eax
  NiPixelData *v13; // eax
  int v14; // ecx
  _BYTE *v15; // ecx
  int v16; // esi
  int v17; // edx
  NiSourceTexture *TexturePixelData; // eax
  NiSourceTexture *v19; // esi
  NiSourceTexture *v20; // edi
  NiPixelData *v21; // eax
  NiPixelData *v22; // eax
  int v23; // ecx
  _BYTE *v24; // ecx
  int v25; // esi
  int v26; // edx
  NiSourceTexture *v27; // eax
  NiSourceTexture *v28; // esi
  NiSourceTexture *v29; // edi
  rsize_t v31; // [esp+0h] [ebp-50h]
  rsize_t v32; // [esp+0h] [ebp-50h]
  bool v33; // [esp+1Bh] [ebp-35h]
  int v34; // [esp+1Ch] [ebp-34h]
  int v35; // [esp+20h] [ebp-30h]
  int v36; // [esp+28h] [ebp-28h] BYREF
  unsigned int v37; // [esp+2Ch] [ebp-24h]
  int v38; // [esp+3Ch] [ebp-14h]
  unsigned int v39; // [esp+40h] [ebp-10h]
  int v40; // [esp+4Ch] [ebp-4h]

  sub_552ED0(this);
  v40 = 0;
  ArrayConstructor(this + 0x22, 0x10u, 4, (int)sub_6EF4A0, (void (__thiscall *)(void *))sub_552E50);
  sub_552D90((_BYTE *)this + 0xC8);
  *(this + 0x36C) = 0;
  *(this + 0x36D) = 0;
  *(this + 0x36E) = 0;
  LODWORD(v31) = 0xE;
  LOBYTE(v40) = 5;
  v39 = 0xF;
  v38 = 0;
  LOBYTE(v37) = 0;
  sub_414500(&v36, (int)(this + 0x32), "FaceGen\\si.ctl", v31);
  LOBYTE(v40) = 6;
  v33 = sub_6ED850(&v36, this, this + 1, this + 0x367, (int)(this + 0x22), (_BYTE *)this + 0xC8) == 0;
  LOBYTE(v40) = 5;
  if ( v39 >= 0x10 )
    FormHeapFree(v37);
  if ( v33 )
  {
    LODWORD(v32) = 0xE;
    v39 = 0xF;
    v38 = 0;
    LOBYTE(v37) = 0;
    sub_414500(&v36, (int)(this + 0x32), "FaceGen\\si.ctl", v32);
    LOBYTE(v40) = 7;
    v2 = sub_6ED850(&v36, this, this + 1, this + 0x367, (int)(this + 0x22), (_BYTE *)this + 0xC8) == 0;
    LOBYTE(v40) = 5;
    if ( v39 >= 0x10 )
      FormHeapFree(v37);
    if ( v2 )
      PrintError("Unable to load CTL file");
  }
  v3 = (int **)(this + 0x23);
  v4 = this + 4;
  v35 = 2;
  do
  {
    v34 = 2;
    do
    {
      if ( *v3 && ((char *)v3[1] - (char *)*v3) / 0x34 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = *v5;
          v7 = v5[1];
          v4[0xFFFFFFFF] = v6;
          v4[0xFFFFFFFE] = v7;
          sub_527160(v4, v7 * v6, COERCE_INT(0.0));
        }
      }
      else
      {
        v4[0xFFFFFFFE] = 0;
        v4[0xFFFFFFFF] = 0;
        sub_527160(v4, 0, COERCE_INT(0.0));
      }
      v3 += 4;
      v4 += 6;
      --v34;
    }
    while ( v34 );
    --v35;
  }
  while ( v35 );
  *(this + 0x36B) = 0;
  v8 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v9 = v8;
  LOBYTE(v40) = 8;
  if ( v8 )
  {
    NiObjectNET::NiObjectNET(v8);
    v9->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable';
    LOWORD(v9[1].vtbl) = 0xEC;
    BYTE2(v9[1].vtbl) = 0;
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  v11 = (NiObjectNET *)*(this + 0x36C);
  LOBYTE(v40) = 5;
  if ( v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v11->members) )
        (*(void (__thiscall **)(NiObjectNET *, int))v11->vtbl)(v11, 1);
    }
    *(this + 0x36C) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)&v10->members);
  }
  *(_WORD *)(*(this + 0x36C) + 0x18) |= 0x200u;
  *(_WORD *)(*(this + 0x36C) + 0x18) = *(_WORD *)(*(this + 0x36C) + 0x18) & 0xE3FF | 0x1000;
  *(_BYTE *)(*(this + 0x36C) + 0x1A) = 0x64;
  v12 = (NiPixelData *)FormHeapAlloc(0x70u);
  LOBYTE(v40) = 9;
  if ( v12 )
    v13 = NiPixelData::NiPixelData(v12, 0x20u, 0x20u, (int)&unk_B25E48, 1u, 1);
  else
    v13 = 0;
  v14 = *((_DWORD *)v13 + 0x14) + **((_DWORD **)v13 + 0x17);
  LOBYTE(v40) = 5;
  v15 = (_BYTE *)(v14 + 2);
  v16 = 0x20;
  do
  {
    v17 = 0x20;
    do
    {
      v15[0xFFFFFFFE] = 0x80;
      v15[0xFFFFFFFF] = 0x80;
      *v15 = 0x80;
      v15 += 3;
      --v17;
    }
    while ( v17 );
    --v16;
  }
  while ( v16 );
  ++*((_DWORD *)v13 + 0x1A);
  TexturePixelData = NiSourceTexture::LoadTexturePixelData(v13, (PixelLayout *)dword_B256D0);
  v19 = (NiSourceTexture *)*(this + 0x36D);
  v20 = TexturePixelData;
  if ( v19 != TexturePixelData )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->members) )
        v19->vtbl->super.super.super.Destructor((NiRefObject *)v19, 1);
    }
    *(this + 0x36D) = v20;
    if ( v20 )
      InterlockedIncrement((volatile LONG *)&v20->members);
  }
  v21 = (NiPixelData *)FormHeapAlloc(0x70u);
  LOBYTE(v40) = 0xA;
  if ( v21 )
    v22 = NiPixelData::NiPixelData(v21, 0x20u, 0x20u, (int)&unk_B25E48, 1u, 1);
  else
    v22 = 0;
  v23 = *((_DWORD *)v22 + 0x14) + **((_DWORD **)v22 + 0x17);
  LOBYTE(v40) = 5;
  v24 = (_BYTE *)(v23 + 2);
  v25 = 0x20;
  do
  {
    v26 = 0x20;
    do
    {
      v24[0xFFFFFFFE] = 0x40;
      v24[0xFFFFFFFF] = 0x40;
      *v24 = 0x40;
      v24 += 3;
      --v26;
    }
    while ( v26 );
    --v25;
  }
  while ( v25 );
  ++*((_DWORD *)v22 + 0x1A);
  v27 = NiSourceTexture::LoadTexturePixelData(v22, (PixelLayout *)dword_B256D0);
  v28 = (NiSourceTexture *)*(this + 0x36E);
  v29 = v27;
  if ( v28 != v27 )
  {
    if ( v28 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v28->members) )
        v28->vtbl->super.super.super.Destructor((NiRefObject *)v28, 1);
    }
    *(this + 0x36E) = v29;
    if ( v29 )
      InterlockedIncrement((volatile LONG *)&v29->members);
  }
  return this;
}
