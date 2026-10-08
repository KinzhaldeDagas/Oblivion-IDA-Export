// Xref audit: only 0x56090C (MakeBase load failure) and 0x5635A6 (BSTreeModel destructor) call this function in Oblivion. These are the complete observed shared-ownership release paths.
void __thiscall CSpeedTreeRT__dtor(void *this)
{
  unsigned int v1; // ebp
  void **v2; // edi
  int v4; // ebp
  void **v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  void **v10; // ecx
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int *v14; // edi
  unsigned int *v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int *v19; // edi
  rsize_t v21; // [esp-Ch] [ebp-24h]
  rsize_t v22; // [esp-Ch] [ebp-24h]
  _BYTE v23[12]; // [esp-4h] [ebp-1Ch]

  if ( !*((_DWORD *)this + 0xD) ) /*0x78c9ba*/
  {
    v4 = MEMORY[0xB4298C]; /*0x78c9c4*/
    v5 = (void **)MEMORY[0xB42988]; /*0x78c9ca*/
    if ( (unsigned int)MEMORY[0xB42988] > MEMORY[0xB4298C] ) /*0x78c9d2*/
    {
      _invalid_parameter_noinfo(0, (int)v2, (int)this); /*0x78c9d4*/
      v5 = (void **)MEMORY[0xB42988]; /*0x78c9d9*/
    }
    v2 = v5; /*0x78c9e5*/
    if ( (unsigned int)v5 > MEMORY[0xB4298C] ) /*0x78c9e7*/
    {
      _invalid_parameter_noinfo(0, (int)v5, (int)this); /*0x78c9e9*/
      v5 = (void **)MEMORY[0xB42988]; /*0x78c9ee*/
    }
    for ( ; v2 != (void **)v4; ++v2 ) /*0x78ca01*/
    {
      if ( *v2 == this ) /*0x78ca05*/
        break; /*0x78ca05*/
    }
    v1 = MEMORY[0xB4298C]; /*0x78ca0e*/
    if ( (unsigned int)v5 > MEMORY[0xB4298C] ) /*0x78ca16*/
      _invalid_parameter_noinfo((int)&stru_B42984, (int)v2, (int)this); /*0x78ca18*/
    if ( !&stru_B42984 ) /*0x78ca1f*/
      _invalid_parameter_noinfo((int)&stru_B42984, (int)v2, (int)this); /*0x78ca29*/
    if ( v2 != (void **)v1 ) /*0x78ca30*/
    {
      v6 = (MEMORY[0xB4298C] - (int)(v2 + 1)) >> 2; /*0x78ca3c*/
      if ( v6 > 0 ) /*0x78ca41*/
      {
        HIDWORD(v21) = v2 + 1; /*0x78ca48*/
        LODWORD(v21) = 4 * v6; /*0x78ca49*/
        memmove_s(v2, v21, (const void *)v21, *(rsize_t *)&v23[4]); /*0x78ca4b*/
      }
      MEMORY[0xB4298C] -= 4; /*0x78ca53*/
    }
  }
  --**((_DWORD **)this + 0xC);                  // Destructor performs a plain -- of the shared count before testing zero. This is the authoritative final-cleanup transition; overlapping same-tree MakeInstance/dtor is not made thread-safe by stock. /*0x78ca5f*/
  if ( *((_DWORD *)this + 0xD) ) /*0x78ca62*/
  {
    v7 = *((_DWORD *)this + 0xE); /*0x78ca67*/
    v1 = *(_DWORD *)(v7 + 8); /*0x78ca6a*/
    if ( *(_DWORD *)(v7 + 4) > v1 ) /*0x78ca70*/
      _invalid_parameter_noinfo(0, (int)v2, (int)this); /*0x78ca72*/
    v8 = *((_DWORD *)this + 0xE); /*0x78ca77*/
    v9 = *(_DWORD *)(v8 + 4); /*0x78ca7a*/
    if ( v9 > *(_DWORD *)(v8 + 8) ) /*0x78ca80*/
      _invalid_parameter_noinfo(0, v9, (int)this); /*0x78ca82*/
    v10 = (void **)v9; /*0x78ca89*/
    if ( v9 != v1 ) /*0x78ca8b*/
    {
      do /*0x78ca99*/
      {
        if ( *v10 == this ) /*0x78ca92*/
          break; /*0x78ca92*/
        ++v10; /*0x78ca94*/
      }
      while ( v10 != (void **)v1 ); /*0x78ca99*/
    }
    v2 = *((void ***)this + 0xE); /*0x78ca9b*/
    v11 = ((_BYTE *)v2[2] - (_BYTE *)(v10 + 1)) >> 2; /*0x78caa6*/
    if ( v11 > 0 ) /*0x78caab*/
    {
      HIDWORD(v22) = v10 + 1; /*0x78cab2*/
      LODWORD(v22) = 4 * v11; /*0x78cab3*/
      memmove_s(v10, v22, (const void *)v22, *(rsize_t *)&v23[4]); /*0x78cab5*/
    }
    v2[2] = (char *)v2[2] + 0xFFFFFFFC; /*0x78cabd*/
    FormHeapFree(*((_DWORD *)this + 0xD)); /*0x78cac5*/
    *((_DWORD *)this + 0xD) = 0; /*0x78cacd*/
  }
  if ( !**((_DWORD **)this + 0xC) ) /*0x78cad3*/
  {
    if ( *(_BYTE *)(*(_DWORD *)this + 0x21) ) /*0x78cadd*/
    {
      OB_CTreeEngine_FreeTransientData_010201A0(*(_DWORD *)this, v1, (unsigned int)this); /*0x78cae3*/
    }
    else
    {
      *(_DWORD *)v23 = 0x3A; /*0x78caea*/
      OB_stString28_AssignBytes_010201A0( /*0x78caf6*/
        &OB_g_strError_010201A0,
        (int)v2,
        "DeleteTransientData() called with no intact transient data",
        *(rsize_t *)v23);
    }
    v12 = *((_DWORD *)this + 1); /*0x78cafb*/
    if ( v12 ) /*0x78cb00*/
    {
      OB_CIndexedGeometry_dtor_010201A0(*((OB_CIndexedGeometry_010201A0 **)this + 1)); /*0x78cb04*/
      FormHeapFree(v12); /*0x78cb0a*/
    }
    FormHeapFree(*((_DWORD *)this + 3)); /*0x78cb16*/
    FormHeapFree(*((_DWORD *)this + 4)); /*0x78cb1f*/
    v13 = *((_DWORD *)this + 2); /*0x78cb24*/
    if ( v13 ) /*0x78cb2c*/
    {
      OB_CLeafGeometry_dtor_010201A0(*((OB_CLeafGeometry_010201A0 **)this + 2)); /*0x78cb30*/
      FormHeapFree(v13); /*0x78cb36*/
    }
    FormHeapFree(*((_DWORD *)this + 5)); /*0x78cb42*/
    if ( *(_DWORD *)this ) /*0x78cb47*/
      (***(void (__thiscall ****)(_DWORD, int))this)(*(_DWORD *)this, 1); /*0x78cb56*/
    FormHeapFree(*((_DWORD *)this + 0xC));      // Frees the shared +0x30 refcount/identity allocation only on the authoritative transition to shared count zero. Individual instance-wrapper destruction does not free this identity. /*0x78cb5c*/
    v14 = *((unsigned int **)this + 0xE); /*0x78cb61*/
    if ( v14 ) /*0x78cb69*/
    {
      if ( v14[1] ) /*0x78cb6b*/
        FormHeapFree(v14[1]); /*0x78cb73*/
      v14[1] = 0; /*0x78cb7c*/
      v14[2] = 0; /*0x78cb7f*/
      v14[3] = 0; /*0x78cb82*/
      FormHeapFree((unsigned int)v14); /*0x78cb85*/
    }
    FormHeapFree(*((_DWORD *)this + 0x10)); /*0x78cb91*/
    v15 = *((unsigned int **)this + 0x16); /*0x78cb96*/
    if ( v15 ) /*0x78cb9e*/
    {
      if ( v15[1] ) /*0x78cba0*/
        FormHeapFree(v15[1]); /*0x78cba8*/
      v15[1] = 0; /*0x78cbb1*/
      v15[2] = 0; /*0x78cbb4*/
      v15[3] = 0; /*0x78cbb7*/
      FormHeapFree((unsigned int)v15); /*0x78cbba*/
    }
    v16 = *((_DWORD *)this + 0x13); /*0x78cbc2*/
    if ( v16 ) /*0x78cbc7*/
    {
      OB_CSpeedTreeRT_SEmbeddedTexCoords_Dtor_010201A0(*((_DWORD **)this + 0x13));// Final CSpeedTreeRT destruction path destroys embedded texcoord block at +0x4C via 0x788B90, then frees the 0x54-byte object. /*0x78cbcb*/
      FormHeapFree(v16); /*0x78cbd1*/
    }
    v17 = *((_DWORD *)this + 0x17); /*0x78cbd9*/
    if ( v17 ) /*0x78cbde*/
    {
      OB_CFrondEngine_dtor_010201A0(*((OB_CFrondEngine_010201A0 **)this + 0x17));// Final shared CSpeedTreeRT cleanup destroys and then frees the owned CFrondEngine at +0x5C. /*0x78cbe2*/
      FormHeapFree(v17); /*0x78cbe8*/
    }
    v18 = *((_DWORD *)this + 0x18); /*0x78cbf0*/
    if ( v18 ) /*0x78cbf5*/
    {
      OB_CIndexedGeometry_dtor_010201A0(*((OB_CIndexedGeometry_010201A0 **)this + 0x18)); /*0x78cbf9*/
      FormHeapFree(v18); /*0x78cbff*/
    }
    FormHeapFree(*((_DWORD *)this + 0xB)); /*0x78cc0b*/
    v19 = *((unsigned int **)this + 0x14); /*0x78cc10*/
    if ( v19 ) /*0x78cc18*/
    {
      if ( v19[0xF] >= 0x10 ) /*0x78cc1e*/
        FormHeapFree(v19[0xA]); /*0x78cc24*/
      v19[0xF] = 0xF; /*0x78cc2c*/
      v19[0xE] = 0; /*0x78cc33*/
      *((_BYTE *)v19 + 0x28) = 0; /*0x78cc37*/
      FormHeapFree((unsigned int)v19); /*0x78cc3b*/
    }
    FormHeapFree(*((_DWORD *)this + 0x1A)); /*0x78cc47*/
  }
  *((_DWORD *)this + 1) = 0; /*0x78cc50*/
  *((_DWORD *)this + 3) = 0; /*0x78cc53*/
  *((_DWORD *)this + 4) = 0; /*0x78cc56*/
  *((_DWORD *)this + 2) = 0; /*0x78cc59*/
  *((_DWORD *)this + 5) = 0; /*0x78cc5c*/
  *(_DWORD *)this = 0; /*0x78cc5f*/
  *((_DWORD *)this + 0xC) = 0; /*0x78cc61*/
  *((_DWORD *)this + 0x10) = 0; /*0x78cc64*/
  *((_DWORD *)this + 0xE) = 0; /*0x78cc67*/
  *((_DWORD *)this + 0x16) = 0; /*0x78cc6a*/
  *((_DWORD *)this + 0x13) = 0; /*0x78cc6d*/
  *((_DWORD *)this + 0x17) = 0; /*0x78cc70*/
  *((_DWORD *)this + 0x18) = 0; /*0x78cc73*/
  *((_DWORD *)this + 0xB) = 0; /*0x78cc76*/
  *((_DWORD *)this + 0x14) = 0; /*0x78cc79*/
  *((_DWORD *)this + 0x1A) = 0; /*0x78cc7c*/
  if ( unk_B42980-- == 1 ) /*0x78cc7f*/
    OB_StBezierSpline_ClearCache_010201A0(); /*0x78cc8e*/
}
