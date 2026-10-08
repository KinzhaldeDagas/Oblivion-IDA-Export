void __thiscall sub_73AC20(NiTriShapeData *this, NiStream *stream)
{
  NiStream *v3; // edi
  void (__cdecl *v4)(int, NiStream **, int, int *, int); // eax
  void (__cdecl *v5)(int, unsigned int *, int, int *, int); // edx
  void (__cdecl *v6)(int, UInt16 *, int, int *, int); // eax
  void (__cdecl *v7)(int, unsigned int *, int, int *, int); // eax
  unsigned int v8; // eax
  bool v9; // zf
  int v10; // eax
  int v11; // eax
  void (__cdecl *v12)(int, unsigned int *, int, int *, int); // eax
  int v13; // eax
  void (__cdecl *v14)(int, int *, int, int *, int); // eax
  int v15; // eax
  void (__cdecl *v16)(int, char *, int, int *, int); // eax
  int v17; // ebx
  void (__cdecl *v18)(int, int, int, int *, int); // eax
  void (__cdecl *v19)(int, char *, int, int *, int); // eax
  int v20; // ebp
  void *v21; // eax
  void *v22; // esi
  void *v23; // ecx
  void (__cdecl *v24)(int, void *, int, int *, int); // eax
  void (__cdecl *v25)(int, int *, int, int *, int); // eax
  int v26; // esi
  void (__cdecl *v27)(int, int, int, int *, int); // eax
  unsigned int *v28; // ecx
  _DWORD *v29; // ebp
  int **v30; // esi
  int *v31; // eax
  int v32; // esi
  NiTArray_NiTexturingPropertyMap *v33; // ecx
  int v34; // [esp-28h] [ebp-70h]
  int v35; // [esp-18h] [ebp-60h]
  int v36; // [esp-18h] [ebp-60h]
  int v37; // [esp-14h] [ebp-5Ch]
  int v38; // [esp-14h] [ebp-5Ch]
  int v39; // [esp-14h] [ebp-5Ch]
  int v40; // [esp-14h] [ebp-5Ch]
  int v41; // [esp-14h] [ebp-5Ch]
  int v42; // [esp-14h] [ebp-5Ch]
  int v43; // [esp-14h] [ebp-5Ch]
  int v44; // [esp-14h] [ebp-5Ch]
  int v45; // [esp-14h] [ebp-5Ch]
  int v46; // [esp-14h] [ebp-5Ch]
  int v47; // [esp-10h] [ebp-58h]
  unsigned int v48; // [esp-8h] [ebp-50h]
  unsigned int v49; // [esp-4h] [ebp-4Ch]
  unsigned int v50; // [esp-4h] [ebp-4Ch]
  char v51; // [esp+16h] [ebp-32h] BYREF
  char v52; // [esp+17h] [ebp-31h] BYREF
  unsigned int i; // [esp+18h] [ebp-30h] BYREF
  int v54; // [esp+1Ch] [ebp-2Ch] BYREF
  unsigned int v55; // [esp+20h] [ebp-28h] BYREF
  int v56; // [esp+24h] [ebp-24h] BYREF
  void *v57; // [esp+28h] [ebp-20h]
  int v58; // [esp+2Ch] [ebp-1Ch] BYREF
  int v59; // [esp+30h] [ebp-18h] BYREF
  int v60; // [esp+34h] [ebp-14h] BYREF
  int *v61; // [esp+38h] [ebp-10h]
  unsigned int v62; // [esp+44h] [ebp-4h]

  v3 = stream; /*0x73ac49*/
  if ( *((_DWORD *)stream + 0x36) >= 0xA00010Fu ) /*0x73ac59*/
    NiTriShapeData_Load(this, stream); /*0x73ac62*/
  else
    sub_729450((NiTriBasedGeomData *)this, (unsigned int *)stream); /*0x73ac5b*/
  v37 = *((_DWORD *)v3 + 0x87); /*0x73ac7b*/
  v4 = *(void (__cdecl **)(int, NiStream **, int, int *, int))(v37 + 4); /*0x73ac7c*/
  v58 = 1; /*0x73ac7f*/
  v4(v37, &stream, 1, &v58, 1); /*0x73ac87*/
  *((_BYTE *)this + 0x58) = (_BYTE)stream != 0; /*0x73ac99*/
  if ( *((_DWORD *)v3 + 0x36) < 0xA00010Fu ) /*0x73aca7*/
  {
    v5 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(*((_DWORD *)v3 + 0x87) + 4); /*0x73acb6*/
    v38 = *((_DWORD *)v3 + 0x87); /*0x73acbf*/
    v58 = 2; /*0x73acc0*/
    v5(v38, &i, 2, &v58, 1); /*0x73acc4*/
    this->member.super.super.m_usVertices = i; /*0x73acd2*/
    v34 = *((_DWORD *)v3 + 0x87); /*0x73ace1*/
    v6 = *(void (__cdecl **)(int, UInt16 *, int, int *, int))(v34 + 4); /*0x73ace2*/
    v58 = 2; /*0x73ace5*/
    v6(v34, &this->member.super.m_usTriangles, 2, &v58, 1); /*0x73ace9*/
  }
  if ( *((_DWORD *)v3 + 0x36) < 0xA00010Fu )
  {
    v39 = *((_DWORD *)v3 + 0x87); /*0x73ad0d*/
    v7 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v39 + 4); /*0x73ad0e*/
    v58 = 2; /*0x73ad11*/
    v7(v39, &i, 2, &v58, 1); /*0x73ad15*/
    v8 = (unsigned __int16)i; /*0x73ad1c*/
    v9 = (_WORD)i == 0; /*0x73ad24*/
    this->member.m_uiTriListLength = (unsigned __int16)i; /*0x73ad27*/
    if ( !v9 )
    {
      v10 = FormHeapAlloc((unsigned __int64)v8 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v8);
      v58 = 2; /*0x73ad46*/
      v47 = 2 * (unsigned __int16)i; /*0x73ad51*/
      this->member.m_pusTriList = (UInt16 *)v10; /*0x73ad52*/
      (*(void (__cdecl **)(_DWORD, int, int, int *, int))(*((_DWORD *)v3 + 0x87) + 4))( /*0x73ad60*/
        *((_DWORD *)v3 + 0x87),
        v10,
        v47,
        &v58,
        1);
    }
  }
  v11 = *((_DWORD *)v3 + 0x87); /*0x73ad6e*/
  v55 = 0; /*0x73ad82*/
  v40 = v11; /*0x73ad86*/
  v12 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v11 + 4); /*0x73ad87*/
  v58 = 4; /*0x73ad8a*/
  v12(v40, &v55, 4, &v58, 1); /*0x73ad92*/
  if ( v55 )
  {
    v61 = (int *)((char *)this + 0x60); /*0x73ada7*/
    NiTArray_SetSize((unsigned __int16 *)this + 0x30, v55); /*0x73adab*/
    for ( i = 0; i < v55; ++i )
    {
      v13 = *((_DWORD *)v3 + 0x87); /*0x73adc0*/
      v54 = 0; /*0x73add3*/
      v41 = v13; /*0x73add7*/
      v14 = *(void (__cdecl **)(int, int *, int, int *, int))(v13 + 4); /*0x73add8*/
      v58 = 2; /*0x73addb*/
      v14(v41, &v54, 2, &v58, 1); /*0x73addf*/
      if ( (_WORD)v54 )
      {
        v15 = *((_DWORD *)v3 + 0x87); /*0x73adef*/
        v56 = 0; /*0x73ae06*/
        v42 = v15; /*0x73ae0a*/
        v16 = *(void (__cdecl **)(int, char *, int, int *, int))(v15 + 4); /*0x73ae0b*/
        v17 = 0; /*0x73ae0e*/
        v57 = 0; /*0x73ae10*/
        v58 = 0; /*0x73ae14*/
        v59 = 1; /*0x73ae18*/
        v16(v42, &v51, 1, &v59, 1); /*0x73ae1c*/
        if ( v51 )
        {
          v17 = FormHeapAlloc((unsigned __int64)(unsigned __int16)v54 >> 0x1D != 0 ? 0xFFFFFFFF : 8
                                                                                                * (unsigned __int16)v54);
          v35 = *((_DWORD *)v3 + 0x87); /*0x73ae5d*/
          v18 = *(void (__cdecl **)(int, int, int, int *, int))(v35 + 4); /*0x73ae5e*/
          v59 = 8; /*0x73ae61*/
          v18(v35, v17, 8 * (unsigned __int16)v54, &v59, 1); /*0x73ae69*/
        }
        v43 = *((_DWORD *)v3 + 0x87); /*0x73ae80*/
        v19 = *(void (__cdecl **)(int, char *, int, int *, int))(v43 + 4); /*0x73ae81*/
        v59 = 1; /*0x73ae84*/
        v19(v43, &v52, 1, &v59, 1); /*0x73ae88*/
        if ( v52 )
        {
          v20 = (unsigned __int16)v54; /*0x73ae94*/
          v21 = (void *)FormHeapAlloc(
                          (unsigned __int64)(unsigned __int16)v54 >> 0x1C != 0
                        ? 0xFFFFFFFF
                        : 0x10 * (unsigned __int16)v54);
          v22 = v21; /*0x73aeb1*/
          v59 = (int)v21; /*0x73aeb6*/
          v23 = 0; /*0x73aeba*/
          v62 = 0; /*0x73aebe*/
          if ( v21 ) /*0x73aec2*/
          {
            sub_401080(v21, 0x10, v20, (void *(__thiscall *)(void *))sub_47EA50); /*0x73aecd*/
            v23 = v22; /*0x73aed2*/
          }
          v44 = *((_DWORD *)v3 + 0x87); /*0x73aeeb*/
          v24 = *(void (__cdecl **)(int, void *, int, int *, int))(v44 + 4); /*0x73aeec*/
          v62 = 0xFFFFFFFF; /*0x73aeef*/
          v57 = v23; /*0x73aef7*/
          v59 = 0x10; /*0x73aefb*/
          v24(v44, v23, 0x10 * (unsigned __int16)v54, &v59, 1); /*0x73af03*/
        }
        v45 = *((_DWORD *)v3 + 0x87); /*0x73af1e*/
        v25 = *(void (__cdecl **)(int, int *, int, int *, int))(v45 + 4); /*0x73af1f*/
        v59 = 2; /*0x73af22*/
        v25(v45, &v56, 2, &v59, 1); /*0x73af2a*/
        if ( (_WORD)v56 )
        {
          v26 = (unsigned __int16)v54 * (unsigned __int16)v56; /*0x73af40*/
          v46 = FormHeapAlloc((unsigned __int64)(unsigned int)v26 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v26);
          v36 = *((_DWORD *)v3 + 0x87); /*0x73af73*/
          v27 = *(void (__cdecl **)(int, int, int, int *, int))(v36 + 4); /*0x73af74*/
          v58 = v46; /*0x73af77*/
          v60 = 8; /*0x73af7b*/
          v27(v36, v46, 8 * v26, &v60, 1); /*0x73af83*/
        }
        v28 = (unsigned int *)unk_B40134; /*0x73af88*/
        v29 = (_DWORD *)(unk_B40134 + 8); /*0x73af92*/
        v30 = (int **)unk_B40134; /*0x73af95*/
        if ( !*v29 ) /*0x73af8e*/
        {
          v49 = v28[3]; /*0x73af9f*/
          v59 = (int)(v28 + 3); /*0x73afa0*/
          sub_73A510(v28, v49); /*0x73afa4*/
          *(_DWORD *)v59 *= 2; /*0x73afb1*/
        }
        v31 = *v30; /*0x73afb3*/
        v32 = **v30; /*0x73afb5*/
        *v31 = v31[--*v29]; /*0x73afc1*/
        v50 = *(_DWORD *)(v32 + 8); /*0x73afc6*/
        v59 = v32; /*0x73afc7*/
        FormHeapFree(v50); /*0x73afcb*/
        *(_WORD *)(v32 + 4) = v54; /*0x73afd5*/
        *(_DWORD *)(v32 + 8) = v17; /*0x73afd9*/
        FormHeapFree(*(_DWORD *)(v32 + 0xC)); /*0x73afe0*/
        *(_DWORD *)(v32 + 0xC) = v57; /*0x73afe9*/
        FormHeapFree(*(_DWORD *)(v32 + 0x10)); /*0x73aff0*/
        *(_DWORD *)(v32 + 0x10) = v58; /*0x73affc*/
        v33 = (NiTArray_NiTexturingPropertyMap *)v61; /*0x73b00d*/
        v48 = i; /*0x73b011*/
        *(_WORD *)(v32 + 6) = v56; /*0x73b012*/
        NiTArray_SetAt(v33, v48, &v59); /*0x73b016*/
      }
    }
  }
}
