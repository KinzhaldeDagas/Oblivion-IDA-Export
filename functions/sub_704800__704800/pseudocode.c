NiObjectNET *__thiscall NiTexturingProperty_CreateFromSourceTexture(NiObjectNET *this, NiSourceTexture *a1)
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

  NiObjectNET::NiObjectNET(this); /*0x70482b*/
  this->vtbl = (NiObjectVtbl **)&NiTexturingProperty::`vftable'; /*0x704832*/
  *((_WORD *)this + 0xC) = 0; /*0x704838*/
  *((_WORD *)this + 0x12) = 7; /*0x704846*/
  *((_DWORD *)this + 7) = &NiTArray<NiTexturingProperty::Map *>::`vftable'; /*0x704858*/
  *((_WORD *)this + 0x15) = 1; /*0x70485e*/
  *((_WORD *)this + 0x13) = 0; /*0x704864*/
  *((_WORD *)this + 0x14) = 0; /*0x704868*/
  *((_DWORD *)this + 8) = FormHeapAlloc(0x1Cu); /*0x704876*/
  v14 = (NiPixelData *)a1; /*0x704882*/
  *((_DWORD *)this + 0xB) = 0; /*0x704888*/
  a1 = NiSourceTexture::LoadTexturePixelData(v14, (PixelLayout *)OB_TES_DefaultSourceTextureFormatPrefs_010201A0); /*0x704892*/
  v3 = FormHeapAlloc(0x10u); /*0x70489b*/
  if ( v3 ) /*0x7048a2*/
  {
    v4 = a1; /*0x7048a4*/
    v5 = a1 == 0; /*0x7048a8*/
    *(_DWORD *)v3 = &NiTexturingProperty::Map::`vftable'; /*0x7048aa*/
    *(_WORD *)(v3 + 4) = 0; /*0x7048b1*/
    *(_DWORD *)(v3 + 8) = v4; /*0x7048b5*/
    if ( !v5 ) /*0x7048b8*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7048be*/
    v6 = *(_WORD *)(v3 + 4) & 0xC000 | 0x3100;  // Initial map mode 0x3100 = WrapS|WrapT|Bilerp with texcoord set 0. /*0x7048cd*/
    *(_DWORD *)(v3 + 0xC) = 0; /*0x7048d2*/
    *(_WORD *)(v3 + 4) = v6; /*0x7048d5*/
  }
  else
  {
    v3 = 0; /*0x7048db*/
  }
  v5 = *((_WORD *)this + 0x12) == 0; /*0x7048dd*/
  a1 = (NiSourceTexture *)v3; /*0x7048e1*/
  if ( v5 ) /*0x7048e5*/
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15)); /*0x7048ee*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 0, &a1); /*0x7048fb*/
  v7 = *((_WORD *)this + 0x12) <= 1u; /*0x704900*/
  a1 = 0; /*0x704905*/
  if ( v7 ) /*0x704909*/
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15) + 1); /*0x704915*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 1u, &a1); /*0x704923*/
  v7 = *((_WORD *)this + 0x12) <= 2u; /*0x704928*/
  a1 = 0; /*0x70492d*/
  if ( v7 ) /*0x704931*/
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15) + 2); /*0x70493d*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 2u, &a1); /*0x70494b*/
  v7 = *((_WORD *)this + 0x12) <= 3u; /*0x704950*/
  a1 = 0; /*0x704955*/
  if ( v7 ) /*0x704959*/
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15) + 3); /*0x704965*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 3u, &a1); /*0x704973*/
  v7 = *((_WORD *)this + 0x12) <= 4u; /*0x704978*/
  a1 = 0; /*0x70497d*/
  if ( v7 ) /*0x704981*/
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15) + 4); /*0x70498d*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 4u, &a1); /*0x70499b*/
  v7 = *((_WORD *)this + 0x12) <= 5u; /*0x7049a0*/
  a1 = 0; /*0x7049a5*/
  if ( v7 ) /*0x7049a9*/
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15) + 5); /*0x7049b5*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 5u, &a1); /*0x7049c3*/
  v7 = *((_WORD *)this + 0x12) <= 6u; /*0x7049c8*/
  a1 = 0; /*0x7049cd*/
  if ( v7 ) /*0x7049d1*/
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, *((unsigned __int16 *)this + 0x15) + 6); /*0x7049dd*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), 6u, &a1); /*0x7049eb*/
  v8 = *((unsigned __int16 *)this + 0x13); /*0x7049f0*/
  *((_WORD *)this + 0xC) &= 0xF00Fu; /*0x7049f4*/
  v9 = *((_WORD *)this + 0xC); /*0x7049fa*/
  v10 = 1; /*0x7049fe*/
  if ( v8 <= 1 ) /*0x704a05*/
  {
LABEL_24:
    v12 = v9 & 0xFFFE; /*0x704a1e*/
  }
  else
  {
    v11 = (_DWORD *)(*((_DWORD *)this + 8) + 4); /*0x704a0a*/
    while ( !*v11 ) /*0x704a12*/
    {
      ++v10; /*0x704a14*/
      ++v11; /*0x704a17*/
      if ( v10 >= v8 ) /*0x704a1c*/
        goto LABEL_24; /*0x704a1c*/
    }
    v12 = v9 | 1; /*0x704a50*/
  }
  *((_WORD *)this + 0xC) = v12; /*0x704a30*/
  *((_WORD *)this + 0xC) = v12 & 0xFFF1 | 4; /*0x704a34*/
  return this; /*0x704a3a*/
}
