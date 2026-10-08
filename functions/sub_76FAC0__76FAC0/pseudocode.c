char sub_76FAC0()
{
  unsigned int i; // esi
  _DWORD *v1; // eax
  unsigned __int16 *v2; // eax
  NiTArray_NiTexturingPropertyMap *v3; // edi
  int (*j)(); // edi
  unsigned int k; // esi
  int v7; // eax
  unsigned __int16 *v8; // [esp+0h] [ebp-4h] BYREF

  v7 = FormHeapAlloc(0x10u); /*0x76fac2*/
  if ( v7 ) /*0x76face*/
  {
    *(_DWORD *)v7 = &NiTArray<NiD3DShaderDeclaration::NiPackerEntry *>::`vftable'; /*0x76fad0*/
    *(_WORD *)(v7 + 8) = 0; /*0x76fad6*/
    *(_WORD *)(v7 + 0xE) = 1; /*0x76fada*/
    *(_WORD *)(v7 + 0xA) = 0; /*0x76fae0*/
    *(_WORD *)(v7 + 0xC) = 0; /*0x76fae4*/
    *(_DWORD *)(v7 + 4) = 0; /*0x76fae8*/
    unk_B42700 = v7; /*0x76faeb*/
  }
  else
  {
    unk_B42700 = 0; /*0x76faf5*/
  }
  v8 = 0; /*0x76f9b0*/
  if ( *(_WORD *)(unk_B42700 + 0xA) != 0x12 ) /*0x76f9bb*/
  {
    unk_B42708[0] = 4; /*0x76f9cd*/
    unk_B4270C = 8; /*0x76f9d2*/
    unk_B42710 = 0xC; /*0x76f9d8*/
    unk_B42714 = 0x10; /*0x76f9e2*/
    unk_B42718 = 4; /*0x76f9ec*/
    unk_B4271C = 4; /*0x76f9f1*/
    unk_B42720 = 4; /*0x76f9f6*/
    unk_B42724 = 8; /*0x76f9fb*/
    unk_B42728 = 4; /*0x76fa01*/
    unk_B4272C = 4; /*0x76fa06*/
    unk_B42730 = 8; /*0x76fa0b*/
    unk_B42734 = 4; /*0x76fa11*/
    unk_B42738 = 8; /*0x76fa16*/
    unk_B4273C = 4; /*0x76fa1c*/
    unk_B42740 = 4; /*0x76fa21*/
    unk_B42744 = 4; /*0x76fa26*/
    unk_B42748 = 8; /*0x76fa2b*/
    for ( i = 0; i < 0x12; ++i ) /*0x76fa31*/
    {
      v1 = (_DWORD *)FormHeapAlloc(0x14u); /*0x76fa35*/
      if ( v1 ) /*0x76fa3f*/
        v2 = (unsigned __int16 *)sub_76F520(v1); /*0x76fa43*/
      else
        v2 = 0; /*0x76fa4a*/
      v8 = v2; /*0x76fa51*/
      *(_DWORD *)v2 = i; /*0x76fa55*/
      NiTArray_SetSize(v2 + 2, 0x26u); /*0x76fa57*/
      v3 = (NiTArray_NiTexturingPropertyMap *)unk_B42700; /*0x76fa68*/
      if ( i >= *(unsigned __int16 *)(unk_B42700 + 8) ) /*0x76fa6a*/
        NiTArray_SetSize((unsigned __int16 *)unk_B42700, i + *(unsigned __int16 *)(unk_B42700 + 0xE)); /*0x76fa73*/
      NiTArray_SetAt(v3, i, &v8); /*0x76fa80*/
    }
    for ( j = 0; (unsigned int)j < 0x12; j = (int (*)())((char *)j + 1) ) /*0x76fa8d*/
    {
      for ( k = 0; k < 0x21; ++k ) /*0x76fa90*/
        sub_771300(j, k); /*0x76fa94*/
    }
  }
  return 1; /*0x76fab1*/
}
