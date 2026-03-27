NiObjectNET *__thiscall sub_704800(NiObjectNET *this, NiSourceTexture *a1)
{
  int v3; // ebp
  NiSourceTexture *v4; // eax
  bool v5; // zf
  __int16 v6; // cx
  bool v7; // cc
  unsigned int v8; // edx
  __int16 v9; // si
  unsigned int v10; // eax
  _DWORD *v11; // ecx
  __int16 v12; // si
  NiPixelData *v14; // [esp-Ch] [ebp-30h]

  NiObjectNET::NiObjectNET(this);
  this->vtbl = (NiObjectVtbl **)&NiTexturingProperty::`vftable';
  *((_WORD *)this + 0xC) = 0;
  *((_WORD *)this + 0x12) = 7;
  *((_DWORD *)this + 7) = &NiTArray<NiTexturingProperty::Map *>::`vftable';
  *((_WORD *)this + 0x15) = 1;
  *((_WORD *)this + 0x13) = 0;
  *((_WORD *)this + 0x14) = 0;
  *((_DWORD *)this + 8) = FormHeapAlloc(0x1Cu);
  v14 = (NiPixelData *)a1;
  *((_DWORD *)this + 0xB) = 0;
  a1 = NiSourceTexture::LoadTexturePixelData(v14, (PixelLayout *)dword_B256D0);
  v3 = FormHeapAlloc(0x10u);
  if ( v3 )
  {
    v4 = a1;
    v5 = a1 == 0;
    *(_DWORD *)v3 = &NiTexturingProperty::Map::`vftable';
    *(_WORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 8) = v4;
    if ( !v5 )
      InterlockedIncrement((volatile LONG *)&v4->members);
    v6 = *(_WORD *)(v3 + 4) & 0xC000 | 0x3100;
    *(_DWORD *)(v3 + 0xC) = 0;
    *(_WORD *)(v3 + 4) = v6;
  }
  else
  {
    v3 = 0;
  }
  v5 = *((_WORD *)this + 0x12) == 0;
  a1 = (NiSourceTexture *)v3;
  if ( v5 )
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15));
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 0, &a1);
  v7 = *((_WORD *)this + 0x12) <= 1u;
  a1 = 0;
  if ( v7 )
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15) + 1);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 1u, &a1);
  v7 = *((_WORD *)this + 0x12) <= 2u;
  a1 = 0;
  if ( v7 )
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15) + 2);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 2u, &a1);
  v7 = *((_WORD *)this + 0x12) <= 3u;
  a1 = 0;
  if ( v7 )
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15) + 3);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 3u, &a1);
  v7 = *((_WORD *)this + 0x12) <= 4u;
  a1 = 0;
  if ( v7 )
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15) + 4);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 4u, &a1);
  v7 = *((_WORD *)this + 0x12) <= 5u;
  a1 = 0;
  if ( v7 )
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15) + 5);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 5u, &a1);
  v7 = *((_WORD *)this + 0x12) <= 6u;
  a1 = 0;
  if ( v7 )
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15) + 6);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 6u, &a1);
  v8 = *((unsigned __int16 *)this + 0x13);
  *((_WORD *)this + 0xC) &= 0xF00Fu;
  v9 = *((_WORD *)this + 0xC);
  v10 = 1;
  if ( v8 <= 1 )
  {
LABEL_24:
    v12 = v9 & 0xFFFE;
  }
  else
  {
    v11 = (_DWORD *)(*((_DWORD *)this + 8) + 4);
    while ( !*v11 )
    {
      ++v10;
      ++v11;
      if ( v10 >= v8 )
        goto LABEL_24;
    }
    v12 = v9 | 1;
  }
  *((_WORD *)this + 0xC) = v12;
  *((_WORD *)this + 0xC) = v12 & 0xFFF1 | 4;
  return this;
}
