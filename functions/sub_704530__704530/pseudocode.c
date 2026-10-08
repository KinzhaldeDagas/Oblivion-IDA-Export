NiTexturingProperty *__thiscall sub_704530(NiTexturingProperty *this, char *Src, NiSourceTexture *a3)
{
  NiSourceTexture *v4; // eax
  bool v5; // zf
  NiSourceTexture *TextureNothing; // ebp
  NiTexturingProperty_Map *v7; // ebp
  char *v8; // eax
  UInt16 v9; // dx
  bool v10; // cc
  unsigned int end; // edx
  UInt16 unk018; // si
  unsigned int v13; // eax
  UInt16 *p_unk04; // ecx
  UInt16 v15; // si

  NiObjectNET::NiObjectNET((NiObjectNET *)this); /*0x70455b*/
  this->vtbl = &NiTexturingProperty::`vftable'; /*0x704562*/
  this->unk018 = 0; /*0x704568*/
  this->unk01C.capacity = 7; /*0x704576*/
  this->unk01C._vtbl = &NiTArray<NiTexturingProperty::Map *>::`vftable'; /*0x704588*/
  this->unk01C.growSize = 1; /*0x70458e*/
  this->unk01C.end = 0; /*0x704594*/
  this->unk01C.numObjs = 0; /*0x704598*/
  this->unk01C.data = (NiTexturingProperty_Map *)FormHeapAlloc(0x1Cu); /*0x7045a9*/
  v4 = a3; /*0x7045ac*/
  v5 = a3 == 0; /*0x7045b0*/
  this->unk02C = 0; /*0x7045b9*/
  if ( v5 ) /*0x7045c1*/
  {
    Src = (char *)NiSourceTexture::LoadTextureByFilename( /*0x70462d*/
                    Src,
                    &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout,
                    1);
  }
  else
  {
    TextureNothing = NiSourceTexture::LoadTextureNothing( /*0x7045c9*/
                       v4,
                       &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout,
                       1u);
    a3 = TextureNothing; /*0x7045d0*/
    if ( TextureNothing ) /*0x7045d4*/
      InterlockedIncrement((volatile LONG *)&TextureNothing->members); /*0x7045da*/
    Src = (char *)(*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)unk_B3FAC8 + 4))(unk_B3FAC8, Src, 0); /*0x7045fa*/
    if ( TextureNothing ) /*0x704603*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&TextureNothing->members) ) /*0x704609*/
        TextureNothing->vtbl->super.super.super.Destructor((NiRefObject *)TextureNothing, 1); /*0x70461c*/
    }
  }
  v7 = (NiTexturingProperty_Map *)FormHeapAlloc(0x10u); /*0x704638*/
  if ( v7 ) /*0x70463f*/
  {
    v8 = Src; /*0x704641*/
    v5 = Src == 0; /*0x704645*/
    v7->vtbl = (NiTexturingProperty_Map_Vtbl *)&NiTexturingProperty::Map::`vftable'; /*0x704647*/
    v7->unk04 = 0; /*0x70464e*/
    v7->unk08 = v8; /*0x704652*/
    if ( !v5 ) /*0x704655*/
      InterlockedIncrement((volatile LONG *)v8 + 1); /*0x70465b*/
    v9 = v7->unk04 & 0xC000 | 0x3100; /*0x70466a*/
    v7->unk0C = 0; /*0x70466f*/
    v7->unk04 = v9; /*0x704672*/
  }
  else
  {
    v7 = 0; /*0x704678*/
  }
  v5 = this->unk01C.capacity == 0; /*0x70467a*/
  Src = (char *)v7; /*0x70467e*/
  if ( v5 ) /*0x704682*/
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize); /*0x70468b*/
  NiTArray_SetAt(&this->unk01C, 0, &Src); /*0x704698*/
  v10 = this->unk01C.capacity <= 1u; /*0x70469d*/
  Src = 0; /*0x7046a2*/
  if ( v10 ) /*0x7046a6*/
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize + 1); /*0x7046b2*/
  NiTArray_SetAt(&this->unk01C, 1u, &Src); /*0x7046c0*/
  v10 = this->unk01C.capacity <= 2u; /*0x7046c5*/
  Src = 0; /*0x7046ca*/
  if ( v10 ) /*0x7046ce*/
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize + 2); /*0x7046da*/
  NiTArray_SetAt(&this->unk01C, 2u, &Src); /*0x7046e8*/
  v10 = this->unk01C.capacity <= 3u; /*0x7046ed*/
  Src = 0; /*0x7046f2*/
  if ( v10 ) /*0x7046f6*/
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize + 3); /*0x704702*/
  NiTArray_SetAt(&this->unk01C, 3u, &Src); /*0x704710*/
  v10 = this->unk01C.capacity <= 4u; /*0x704715*/
  Src = 0; /*0x70471a*/
  if ( v10 ) /*0x70471e*/
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize + 4); /*0x70472a*/
  NiTArray_SetAt(&this->unk01C, 4u, &Src); /*0x704738*/
  v10 = this->unk01C.capacity <= 5u; /*0x70473d*/
  Src = 0; /*0x704742*/
  if ( v10 ) /*0x704746*/
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize + 5); /*0x704752*/
  NiTArray_SetAt(&this->unk01C, 5u, &Src); /*0x704760*/
  v10 = this->unk01C.capacity <= 6u; /*0x704765*/
  Src = 0; /*0x70476a*/
  if ( v10 ) /*0x70476e*/
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize + 6); /*0x70477a*/
  NiTArray_SetAt(&this->unk01C, 6u, &Src); /*0x704788*/
  end = this->unk01C.end; /*0x70478d*/
  this->unk018 &= 0xF00Fu; /*0x704791*/
  unk018 = this->unk018; /*0x704797*/
  v13 = 1; /*0x70479b*/
  if ( end <= 1 ) /*0x7047a2*/
  {
LABEL_31:
    v15 = unk018 & 0xFFFE; /*0x7047be*/
  }
  else
  {
    p_unk04 = &this->unk01C.data->unk04; /*0x7047a7*/
    while ( !*(_DWORD *)p_unk04 ) /*0x7047b2*/
    {
      ++v13; /*0x7047b4*/
      p_unk04 += 2; /*0x7047b7*/
      if ( v13 >= end ) /*0x7047bc*/
        goto LABEL_31; /*0x7047bc*/
    }
    v15 = unk018 | 1; /*0x7047f0*/
  }
  this->unk018 = v15; /*0x7047d0*/
  this->unk018 = v15 & 0xFFF1 | 4; /*0x7047d4*/
  return this; /*0x7047da*/
}
