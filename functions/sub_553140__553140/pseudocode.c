// Constructs the 0xDBC-byte FaceGen manager, loads FaceGen\\si.ctl, initializes the four parameter basis lists and FanControls at +0xC8, then creates fallback face textures.
void *__thiscall FaceGenManager_Construct(void *this)
{
  bool v2; // bl
  unsigned int ***v3; // edi
  OB_stVector4_010201A0 *v4; // esi
  unsigned int **v5; // ecx
  unsigned int *v6; // eax
  unsigned int *v7; // ecx
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
  bool v31; // [esp+1Bh] [ebp-35h]
  int v32; // [esp+1Ch] [ebp-34h]
  int v33; // [esp+20h] [ebp-30h]
  OB_stString28_010201A0 path; // [esp+28h] [ebp-28h] BYREF
  int v35; // [esp+4Ch] [ebp-4h]

  sub_552ED0((char *)this); /*0x55316d*/
  v35 = 0; /*0x553189*/
  ArrayConstructor( /*0x55318d*/
    (char *)this + 0x88,
    0x10u,
    4,
    (void (__thiscall *)(char *))FaceGenEgtBasisBank_Construct,
    (void (__thiscall *)(void *))sub_552E50);
  sub_552D90((char *)this + 0xC8); /*0x55319f*/
  *((_DWORD *)this + 0x36C) = 0; /*0x5531a4*/
  *((_DWORD *)this + 0x36D) = 0; /*0x5531aa*/
  *((_DWORD *)this + 0x36E) = 0; /*0x5531b0*/
  LOBYTE(v35) = 5; /*0x5531c1*/
  path.capacity = 0xF; /*0x5531c6*/
  path.size = 0; /*0x5531ce*/
  path.storage.inlineData[0] = 0; /*0x5531d2*/
  OB_stString28_AssignBytes_010201A0(&path, "FaceGen\\si.ctl", 0xEu); /*0x5531d6*/
  LOBYTE(v35) = 6; /*0x5531ee*/
  v31 = !FaceGen_LoadCtlFile( /*0x5531fd*/
           &path,
           (unsigned int *)this,
           (unsigned int *)this + 1,
           (unsigned int *)this + 0x367,
           (char *)this + 0x88,
           (char *)this + 0xC8);                // First CTL load attempt: outputs header scalars at manager+0/+4, four basis dimensions at +0xD9C, named control banks at +0x88, FanControls at +0xC8.
  LOBYTE(v35) = 5; /*0x553207*/
  if ( path.capacity >= 0x10 ) /*0x55320c*/
    FormHeapFree((unsigned int)path.storage.heapData); /*0x553213*/
  if ( v31 ) /*0x553220*/
  {
    path.capacity = 0xF; /*0x55322d*/
    path.size = 0; /*0x553235*/
    path.storage.inlineData[0] = 0; /*0x55323d*/
    OB_stString28_AssignBytes_010201A0(&path, "FaceGen\\si.ctl", 0xEu); /*0x553242*/
    LOBYTE(v35) = 7; /*0x553254*/
    v2 = !FaceGen_LoadCtlFile( /*0x553263*/
            &path,
            (unsigned int *)this,
            (unsigned int *)this + 1,
            (unsigned int *)this + 0x367,
            (char *)this + 0x88,
            (char *)this + 0xC8);               // Retries the same FaceGen\\si.ctl load after first failure; constructor prints Unable to load CTL file if the second attempt fails.
    LOBYTE(v35) = 5; /*0x55326b*/
    if ( path.capacity >= 0x10 ) /*0x553270*/
      FormHeapFree((unsigned int)path.storage.heapData); /*0x553277*/
    if ( v2 ) /*0x553281*/
      PrintError("Unable to load CTL file"); /*0x553288*/
  }
  v3 = (unsigned int ***)((char *)this + 0x8C); /*0x553290*/
  v4 = (OB_stVector4_010201A0 *)((char *)this + 0x10); /*0x553296*/
  v33 = 2; /*0x553299*/
  do /*0x553315*/
  {
    v32 = 2; /*0x5532a1*/
    do /*0x55330e*/
    {
      if ( *v3 && ((char *)v3[1] - (char *)*v3) / 0x34 ) /*0x5532c5*/
      {
        v5 = *v3; /*0x5532d2*/
        if ( *v3 ) /*0x5532d2*/
        {
          v6 = *v5; /*0x5532d8*/
          v7 = v5[1]; /*0x5532dc*/
          v4[0xFFFFFFFF].capacity = v6; /*0x5532df*/
          v4[0xFFFFFFFF].end = v7; /*0x5532e6*/
          FaceGenFloatVector_ResizeFill(v4, (int)v3, (_DWORD)v7 * (_DWORD)v6, COERCE_UNSIGNED_INT(0.0)); /*0x5532ed*/
        }
      }
      else
      {
        v4[0xFFFFFFFF].end = 0; /*0x5532f5*/
        v4[0xFFFFFFFF].capacity = 0; /*0x5532f8*/
        FaceGenFloatVector_ResizeFill(v4, (int)v3, 0, COERCE_UNSIGNED_INT(0.0)); /*0x5532fe*/
      }
      v3 += 4; /*0x553303*/
      v4 = (OB_stVector4_010201A0 *)((char *)v4 + 0x18); /*0x553306*/
      --v32; /*0x553309*/
    }
    while ( v32 ); /*0x55330e*/
    --v33; /*0x553310*/
  }
  while ( v33 ); /*0x553315*/
  *((_DWORD *)this + 0x36B) = 0; /*0x553319*/
  v8 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x553323*/
  v9 = v8; /*0x553328*/
  LOBYTE(v35) = 8; /*0x553333*/
  if ( v8 ) /*0x553338*/
  {
    NiObjectNET::NiObjectNET(v8); /*0x55333c*/
    v9->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable'; /*0x553341*/
    LOWORD(v9[1].vtbl) = 0xEC; /*0x553347*/
    BYTE2(v9[1].vtbl) = 0; /*0x55334d*/
    v10 = v9; /*0x553351*/
  }
  else
  {
    v10 = 0; /*0x553355*/
  }
  v11 = *((NiObjectNET **)this + 0x36C); /*0x553357*/
  LOBYTE(v35) = 5; /*0x55335f*/
  if ( v11 != v10 ) /*0x553364*/
  {
    if ( v11 ) /*0x553368*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v11->members) ) /*0x55336e*/
        (*(void (__thiscall **)(NiObjectNET *, int))v11->vtbl)(v11, 1); /*0x553384*/
    }
    *((_DWORD *)this + 0x36C) = v10; /*0x553388*/
    if ( v10 ) /*0x55338e*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x553394*/
  }
  *(_WORD *)(*((_DWORD *)this + 0x36C) + 0x18) |= 0x200u; /*0x5533a0*/
  *(_WORD *)(*((_DWORD *)this + 0x36C) + 0x18) = *(_WORD *)(*((_DWORD *)this + 0x36C) + 0x18) & 0xE3FF | 0x1000; /*0x5533ba*/
  *(_BYTE *)(*((_DWORD *)this + 0x36C) + 0x1A) = 0x64; /*0x5533c6*/
  v12 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x5533ca*/
  LOBYTE(v35) = 9; /*0x5533d8*/
  if ( v12 ) /*0x5533dd*/
    v13 = NiPixelData::NiPixelData(v12, 0x20u, 0x20u, (int)&unk_B25E48, 1u, 1); /*0x5533ee*/
  else
    v13 = 0; /*0x5533f5*/
  v14 = *((_DWORD *)v13 + 0x14) + **((_DWORD **)v13 + 0x17); /*0x5533fc*/
  LOBYTE(v35) = 5; /*0x5533ff*/
  v15 = (_BYTE *)(v14 + 2); /*0x553404*/
  v16 = 0x20; /*0x553407*/
  do /*0x553428*/
  {
    v17 = 0x20; /*0x553410*/
    do /*0x553423*/
    {
      v15[0xFFFFFFFE] = 0x80; /*0x553415*/
      v15[0xFFFFFFFF] = 0x80; /*0x553418*/
      *v15 = 0x80; /*0x55341b*/
      v15 += 3; /*0x55341d*/
      --v17; /*0x553420*/
    }
    while ( v17 ); /*0x553423*/
    --v16; /*0x553425*/
  }
  while ( v16 ); /*0x553428*/
  ++*((_DWORD *)v13 + 0x1A); /*0x55342a*/
  TexturePixelData = NiSourceTexture::LoadTexturePixelData( /*0x553434*/
                       v13,
                       &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout);
  v19 = *((NiSourceTexture **)this + 0x36D); /*0x553439*/
  v20 = TexturePixelData; /*0x55343f*/
  if ( v19 != TexturePixelData ) /*0x553446*/
  {
    if ( v19 ) /*0x55344a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->members) ) /*0x553450*/
        v19->vtbl->super.super.super.Destructor((NiRefObject *)v19, 1); /*0x553466*/
    }
    *((_DWORD *)this + 0x36D) = v20; /*0x55346a*/
    if ( v20 ) /*0x553470*/
      InterlockedIncrement((volatile LONG *)&v20->members); /*0x553476*/
  }
  v21 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x55347e*/
  LOBYTE(v35) = 0xA; /*0x55348c*/
  if ( v21 ) /*0x553491*/
    v22 = NiPixelData::NiPixelData(v21, 0x20u, 0x20u, (int)&unk_B25E48, 1u, 1); /*0x5534a2*/
  else
    v22 = 0; /*0x5534a9*/
  v23 = *((_DWORD *)v22 + 0x14) + **((_DWORD **)v22 + 0x17); /*0x5534b0*/
  LOBYTE(v35) = 5; /*0x5534b3*/
  v24 = (_BYTE *)(v23 + 2); /*0x5534b8*/
  v25 = 0x20; /*0x5534bb*/
  do /*0x5534da*/
  {
    v26 = 0x20; /*0x5534c2*/
    do /*0x5534d5*/
    {
      v24[0xFFFFFFFE] = 0x40; /*0x5534c7*/
      v24[0xFFFFFFFF] = 0x40; /*0x5534ca*/
      *v24 = 0x40; /*0x5534cd*/
      v24 += 3; /*0x5534cf*/
      --v26; /*0x5534d2*/
    }
    while ( v26 ); /*0x5534d5*/
    --v25; /*0x5534d7*/
  }
  while ( v25 ); /*0x5534da*/
  ++*((_DWORD *)v22 + 0x1A); /*0x5534dc*/
  v27 = NiSourceTexture::LoadTexturePixelData(v22, &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout); /*0x5534e6*/
  v28 = *((NiSourceTexture **)this + 0x36E); /*0x5534eb*/
  v29 = v27; /*0x5534f1*/
  if ( v28 != v27 ) /*0x5534f8*/
  {
    if ( v28 ) /*0x5534fc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v28->members) ) /*0x553502*/
        v28->vtbl->super.super.super.Destructor((NiRefObject *)v28, 1); /*0x553518*/
    }
    *((_DWORD *)this + 0x36E) = v29; /*0x55351c*/
    if ( v29 ) /*0x553522*/
      InterlockedIncrement((volatile LONG *)&v29->members); /*0x553528*/
  }
  return this; /*0x553530*/
}
