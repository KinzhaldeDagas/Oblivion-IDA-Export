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

  NiObjectNET::NiObjectNET((NiObjectNET *)this);
  this->vtbl = &NiTexturingProperty::`vftable';
  this->unk018 = 0;
  this->unk01C.capacity = 7;
  this->unk01C._vtbl = &NiTArray<NiTexturingProperty::Map *>::`vftable';
  this->unk01C.growSize = 1;
  this->unk01C.end = 0;
  this->unk01C.numObjs = 0;
  this->unk01C.data = (NiTexturingProperty_Map *)FormHeapAlloc(0x1Cu);
  v4 = a3;
  v5 = a3 == 0;
  this->unk02C = 0;
  if ( v5 )
  {
    Src = (char *)NiSourceTexture::LoadTextureByFilename(Src, (PixelLayout *)dword_B256D0, 1u);
  }
  else
  {
    TextureNothing = NiSourceTexture::LoadTextureNothing(v4, (PixelLayout *)dword_B256D0, 1u);
    a3 = TextureNothing;
    if ( TextureNothing )
      InterlockedIncrement((volatile LONG *)&TextureNothing->members);
    Src = (char *)(*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)dword_B3FAC8 + 4))(dword_B3FAC8, Src, 0);
    if ( TextureNothing )
    {
      if ( !InterlockedDecrement((volatile LONG *)&TextureNothing->members) )
        TextureNothing->vtbl->super.super.super.Destructor((NiRefObject *)TextureNothing, 1);
    }
  }
  v7 = (NiTexturingProperty_Map *)FormHeapAlloc(0x10u);
  if ( v7 )
  {
    v8 = Src;
    v5 = Src == 0;
    v7->vtbl = (NiTexturingProperty_Map_Vtbl *)&NiTexturingProperty::Map::`vftable';
    v7->unk04 = 0;
    v7->unk08 = v8;
    if ( !v5 )
      InterlockedIncrement((volatile LONG *)v8 + 1);
    v9 = v7->unk04 & 0xC000 | 0x3100;
    v7->unk0C = 0;
    v7->unk04 = v9;
  }
  else
  {
    v7 = 0;
  }
  v5 = this->unk01C.capacity == 0;
  Src = (char *)v7;
  if ( v5 )
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize);
  NiTArray_SetAt(&this->unk01C, 0, &Src);
  v10 = this->unk01C.capacity <= 1u;
  Src = 0;
  if ( v10 )
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize + 1);
  NiTArray_SetAt(&this->unk01C, 1u, &Src);
  v10 = this->unk01C.capacity <= 2u;
  Src = 0;
  if ( v10 )
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize + 2);
  NiTArray_SetAt(&this->unk01C, 2u, &Src);
  v10 = this->unk01C.capacity <= 3u;
  Src = 0;
  if ( v10 )
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize + 3);
  NiTArray_SetAt(&this->unk01C, 3u, &Src);
  v10 = this->unk01C.capacity <= 4u;
  Src = 0;
  if ( v10 )
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize + 4);
  NiTArray_SetAt(&this->unk01C, 4u, &Src);
  v10 = this->unk01C.capacity <= 5u;
  Src = 0;
  if ( v10 )
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize + 5);
  NiTArray_SetAt(&this->unk01C, 5u, &Src);
  v10 = this->unk01C.capacity <= 6u;
  Src = 0;
  if ( v10 )
    NiTArray_SetSize((unsigned __int16 *)&this->unk01C, this->unk01C.growSize + 6);
  NiTArray_SetAt(&this->unk01C, 6u, &Src);
  end = this->unk01C.end;
  this->unk018 &= 0xF00Fu;
  unk018 = this->unk018;
  v13 = 1;
  if ( end <= 1 )
  {
LABEL_31:
    v15 = unk018 & 0xFFFE;
  }
  else
  {
    p_unk04 = &this->unk01C.data->unk04;
    while ( !*(_DWORD *)p_unk04 )
    {
      ++v13;
      p_unk04 += 2;
      if ( v13 >= end )
        goto LABEL_31;
    }
    v15 = unk018 | 1;
  }
  this->unk018 = v15;
  this->unk018 = v15 & 0xFFF1 | 4;
  return this;
}
