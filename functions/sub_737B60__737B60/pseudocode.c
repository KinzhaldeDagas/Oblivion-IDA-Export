int __thiscall sub_737B60(char *this, _DWORD *a2, int a3)
{
  DWORD CurrentThreadId; // eax
  bool v5; // zf
  int v7; // ebx
  NiPixelData *v8; // eax
  NiPixelData *v9; // eax
  void (__cdecl *v10)(_DWORD *, _BYTE *, int, int *, int); // ecx
  char *v11; // eax
  int v12; // edi
  char v13; // cl
  NiObject *v14; // eax
  NiObject *v15; // eax
  NiObject *v16; // edi
  int v17; // eax
  unsigned __int16 v18; // dx
  int v19; // ecx
  int v20; // edi
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // ebx
  void (__cdecl *v27)(_DWORD *, unsigned int, int, int *, int); // ecx
  int v28; // edi
  _BYTE *v29; // ecx
  _BYTE *i; // eax
  _BYTE *v31; // eax
  bool v32; // cf
  char *v33; // eax
  int v34; // esi
  int v35; // edi
  char v36; // cl
  LPCRITICAL_SECTION v37; // eax
  int v38; // ebx
  void (__cdecl *v39)(_DWORD *, int, int, int *, int); // ecx
  void (__cdecl *v40)(_DWORD *, int *, int, int *, int); // edx
  void (__cdecl *v41)(_DWORD *, int, int, int *, int); // ecx
  int v42; // ebx
  int v43; // ebx
  void (__cdecl *v44)(_DWORD *, int, int, int *, int); // edx
  void (__cdecl *v45)(_DWORD *, int *, int, int *, int); // eax
  void (__cdecl *v46)(_DWORD *, int, unsigned int, int *, int); // ecx
  int v47; // eax
  int v48; // [esp+8h] [ebp-4A0h]
  unsigned int v49; // [esp+8h] [ebp-4A0h]
  NiObject *v50; // [esp+28h] [ebp-480h]
  unsigned int v51; // [esp+28h] [ebp-480h]
  unsigned int v52; // [esp+28h] [ebp-480h]
  int v53; // [esp+2Ch] [ebp-47Ch] BYREF
  int v54; // [esp+30h] [ebp-478h]
  int v55; // [esp+34h] [ebp-474h] BYREF
  int v56; // [esp+38h] [ebp-470h]
  int v57; // [esp+3Ch] [ebp-46Ch] BYREF
  char v58; // [esp+43h] [ebp-465h] BYREF
  int v59; // [esp+44h] [ebp-464h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [esp+48h] [ebp-460h]
  char v61[4]; // [esp+4Ch] [ebp-45Ch] BYREF
  char v62[4]; // [esp+50h] [ebp-458h] BYREF
  char v63[4]; // [esp+54h] [ebp-454h] BYREF
  NiSurfaceData v64; // [esp+58h] [ebp-450h] BYREF
  _BYTE Src[2]; // [esp+9Ch] [ebp-40Ch] BYREF
  char v66; // [esp+9Eh] [ebp-40Ah] BYREF
  int v67; // [esp+4A4h] [ebp-4h]

  InitSurfacEData(&v64); /*0x737b93*/
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x80); /*0x737b9f*/
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x737ba3*/
  CurrentThreadId = GetCurrentThreadId(); /*0x737ba9*/
  ++*((_DWORD *)this + 0x3F); /*0x737bcf*/
  *((_DWORD *)this + 0x3E) = CurrentThreadId; /*0x737bd6*/
  if ( !(*(unsigned __int8 (__thiscall **)(char *, _DWORD *, char *, char *, NiSurfaceData *, char *, char *))(*(_DWORD *)this + 0xC))( /*0x737be3*/
          this,
          a2,
          v62,
          v63,
          &v64,
          &v58,
          v61) )
  {
    v5 = (*((_DWORD *)this + 0x3F))-- == 1; /*0x737be9*/
    if ( v5 ) /*0x737bed*/
      *((_DWORD *)this + 0x3E) = 0; /*0x737bef*/
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x737bf7*/
    return 0; /*0x737bff*/
  }
  v7 = a3; /*0x737c04*/
  if ( a3 /*0x737c33*/
    && **(_DWORD **)(a3 + 0x54) == *((_DWORD *)this + 0x40)
    && **(_DWORD **)(a3 + 0x58) == *((_DWORD *)this + 0x41)
    && sub_71AD40((_DWORD *)(a3 + 8), (int)(this + 0x108)) )
  {
    v54 = a3; /*0x737c3c*/
  }
  else
  {
    v8 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x737c44*/
    v53 = (int)v8; /*0x737c4c*/
    v67 = 0; /*0x737c52*/
    if ( v8 ) /*0x737c5d*/
      v9 = NiPixelData::NiPixelData(v8, *((_DWORD *)this + 0x40), *((_DWORD *)this + 0x41), (int)(this + 0x108), 1u, 1); /*0x737c78*/
    else
      v9 = 0; /*0x737c7f*/
    v67 = 0xFFFFFFFF; /*0x737c81*/
    v54 = (int)v9; /*0x737c8c*/
    v7 = (int)v9; /*0x737c90*/
  }
  if ( sub_71AD40((_DWORD *)this + 0x42, (int)&unk_B25D70) ) /*0x737c9d*/
  {
    v10 = (void (__cdecl *)(_DWORD *, _BYTE *, int, int *, int))a2[1]; /*0x737cb0*/
    v48 = 4 * *((_DWORD *)this + 0x54); /*0x737cbd*/
    v55 = 1; /*0x737cc7*/
    v10(a2, Src, v48, &v55, 1); /*0x737ccb*/
    if ( *((_DWORD *)this + 0x54) ) /*0x737ccd*/
    {
      v11 = &v66; /*0x737cda*/
      v12 = *((_DWORD *)this + 0x54); /*0x737ce1*/
      do /*0x737cf7*/
      {
        v13 = v11[0xFFFFFFFE]; /*0x737ce3*/
        v11[0xFFFFFFFE] = *v11; /*0x737ce8*/
        *v11 = v13; /*0x737ceb*/
        v11[1] = 0xFF; /*0x737ced*/
        v11 += 4; /*0x737cf1*/
        --v12; /*0x737cf4*/
      }
      while ( v12 ); /*0x737cf7*/
    }
    v14 = (NiObject *)FormHeapAlloc(0x24u); /*0x737d00*/
    v53 = (int)v14; /*0x737d08*/
    v67 = 1; /*0x737d0e*/
    if ( v14 ) /*0x737d15*/
    {
      v15 = sub_732750(v14, 0, 0x100, Src); /*0x737d28*/
      v50 = v15; /*0x737d2d*/
    }
    else
    {
      v50 = 0; /*0x737d33*/
      v15 = 0; /*0x737d3b*/
    }
    v16 = *(NiObject **)(v7 + 0x4C); /*0x737d3f*/
    v67 = 0xFFFFFFFF; /*0x737d44*/
    if ( v16 != v15 ) /*0x737d4f*/
    {
      if ( v16 ) /*0x737d53*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v16->members) ) /*0x737d59*/
          v16->__vftable->super.Destructor((NiRefObject *)v16, 1); /*0x737d6f*/
        v15 = v50; /*0x737d71*/
      }
      *(_DWORD *)(v7 + 0x4C) = v15; /*0x737d77*/
      if ( v15 ) /*0x737d7a*/
        InterlockedIncrement((volatile LONG *)&v15->members); /*0x737d80*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int, int))(*a2 + 0xC))(a2, 4 * *((_DWORD *)this + 0x54), BSFile_FilePos_Cur); /*0x737da1*/
  }
  v17 = *((_DWORD *)this + 0x55) - 4 * *((_DWORD *)this + 0x54) - 0x36; /*0x737db5*/
  if ( v17 > 0 ) /*0x737dba*/
    (*(void (__thiscall **)(_DWORD *, int, int))(*a2 + 0xC))(a2, v17, BSFile_FilePos_Cur); /*0x737dcb*/
  v18 = *((_WORD *)this + 0xA6); /*0x737dcd*/
  v19 = *((_DWORD *)this + 0x41); /*0x737dd7*/
  v20 = *(_DWORD *)(v7 + 0x64) * **(_DWORD **)(v7 + 0x54); /*0x737ddf*/
  v21 = v19 * (((*((_DWORD *)this + 0x40) * (unsigned int)v18 + 0x1F) >> 3) & 0x1FFFFFFC); /*0x737df8*/
  if ( v18 == 4 ) /*0x737dff*/
  {
    v22 = *((_DWORD *)this + 0x40) & 1; /*0x737e0f*/
    v23 = v22 + (*((_DWORD *)this + 0x40) >> 1); /*0x737e12*/
    v24 = ((_BYTE)v22 + (unsigned __int8)(*((_DWORD *)this + 0x40) >> 1)) & 3; /*0x737e16*/
    v53 = v23; /*0x737e19*/
    if ( (v23 & 3) != 0 ) /*0x737e1d*/
      v25 = 4 - v24; /*0x737e24*/
    else
      v25 = 0; /*0x737e28*/
    v56 = v25 + v23; /*0x737e2d*/
    v51 = FormHeapAlloc(v25 + v23); /*0x737e40*/
    if ( *(this + 0x158) ) /*0x737e39*/
    {
      v26 = *(_DWORD *)(v54 + 0x50) + **(_DWORD **)(v54 + 0x5C) + v20 * (**(_DWORD **)(v7 + 0x58) - 1); /*0x737e5a*/
      v20 = -v20; /*0x737e5d*/
    }
    else
    {
      v26 = *(_DWORD *)(v54 + 0x50) + **(_DWORD **)(v7 + 0x5C); /*0x737e6a*/
    }
    v5 = *((_DWORD *)this + 0x41) == 0; /*0x737e6d*/
    v55 = v20; /*0x737e74*/
    v57 = 0; /*0x737e78*/
    if ( !v5 ) /*0x737e80*/
    {
      do /*0x737ee5*/
      {
        v27 = (void (__cdecl *)(_DWORD *, unsigned int, int, int *, int))a2[1]; /*0x737e91*/
        v59 = 1; /*0x737e97*/
        v27(a2, v51, v56, &v59, 1); /*0x737e9f*/
        v28 = v53; /*0x737ea1*/
        v29 = (_BYTE *)v51; /*0x737ea5*/
        for ( i = (_BYTE *)v26; v28; --v28 ) /*0x737eb0*/
        {
          *i = *v29 >> 4; /*0x737eb8*/
          v31 = i + 1; /*0x737ebd*/
          *v31 = *v29 & 0xF; /*0x737ec3*/
          i = v31 + 1; /*0x737ec5*/
          ++v29; /*0x737ec8*/
        }
        v26 += v55; /*0x737ed4*/
        v32 = (unsigned int)++v57 < *((_DWORD *)this + 0x41); /*0x737edb*/
      }
      while ( v32 ); /*0x737ee5*/
    }
    FormHeapFree(v51); /*0x737eec*/
LABEL_43:
    v7 = v54; /*0x737ef4*/
    goto LABEL_44; /*0x737ef4*/
  }
  if ( *(this + 0x158) ) /*0x737f87*/
  {
    v52 = 0; /*0x737fa3*/
    v38 = *(_DWORD *)(v54 + 0x50) + **(_DWORD **)(v54 + 0x5C) + v20 * (v19 - 1); /*0x737fab*/
    if ( (v20 & 3) != 0 ) /*0x737fb3*/
    {
      v56 = 4 - (v20 & 3); /*0x737fbe*/
      if ( v19 ) /*0x737fc2*/
      {
        do /*0x73801c*/
        {
          v39 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a2[1]; /*0x737fd0*/
          v53 = 1; /*0x737fdd*/
          v39(a2, v38, v20, &v53, 1); /*0x737fe5*/
          v40 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a2[1]; /*0x737ff2*/
          v53 = 1; /*0x737ffc*/
          v40(a2, &v59, v56, &v53, 1); /*0x738004*/
          v38 -= v20; /*0x738010*/
          ++v52; /*0x738018*/
        }
        while ( v52 < *((_DWORD *)this + 0x41) ); /*0x73801c*/
      }
    }
    else if ( v19 ) /*0x738025*/
    {
      do /*0x73805d*/
      {
        v41 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a2[1]; /*0x738030*/
        v53 = 1; /*0x73803d*/
        v41(a2, v38, v20, &v53, 1); /*0x738045*/
        v38 -= v20; /*0x738051*/
        ++v52; /*0x738059*/
      }
      while ( v52 < *((_DWORD *)this + 0x41) ); /*0x73805d*/
    }
    goto LABEL_43; /*0x73801c*/
  }
  if ( (v20 & 3) != 0 ) /*0x738069*/
  {
    v42 = **(_DWORD **)(v7 + 0x5C); /*0x738075*/
    v56 = 4 - (v20 & 3); /*0x738077*/
    v43 = *(_DWORD *)(v54 + 0x50) + v42; /*0x73807f*/
    v55 = 0; /*0x738084*/
    if ( v19 ) /*0x73808c*/
    {
      do /*0x7380de*/
      {
        v44 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a2[1]; /*0x738092*/
        v53 = 1; /*0x73809f*/
        v44(a2, v43, v20, &v53, 1); /*0x7380a7*/
        v45 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a2[1]; /*0x7380b4*/
        v53 = 1; /*0x7380be*/
        v45(a2, &v59, v56, &v53, 1); /*0x7380c6*/
        v43 += v20; /*0x7380d2*/
        v32 = (unsigned int)++v55 < *((_DWORD *)this + 0x41); /*0x7380d4*/
      }
      while ( v32 ); /*0x7380de*/
    }
    goto LABEL_43; /*0x7380de*/
  }
  v46 = (void (__cdecl *)(_DWORD *, int, unsigned int, int *, int))a2[1]; /*0x7380ef*/
  v49 = v21; /*0x7380f2*/
  v47 = *(_DWORD *)(v7 + 0x50) + **(_DWORD **)(v7 + 0x5C); /*0x7380f5*/
  v57 = 1; /*0x7380f8*/
  v46(a2, v47, v49, &v57, 1); /*0x738102*/
LABEL_44:
  if ( sub_71AD40((_DWORD *)this + 0x42, (int)&unk_B25E48) || sub_71AD40((_DWORD *)this + 0x42, (int)&unk_B25E00) ) /*0x737f15*/
  {
    v33 = (char *)(*(_DWORD *)(v7 + 0x50) + **(_DWORD **)(v7 + 0x5C)); /*0x737f30*/
    v34 = *(_DWORD *)(v7 + 0x64); /*0x737f35*/
    if ( *((_DWORD *)this + 0x40) * *((_DWORD *)this + 0x41) ) /*0x737f24*/
    {
      v35 = *((_DWORD *)this + 0x40) * *((_DWORD *)this + 0x41); /*0x737f3a*/
      do /*0x737f4f*/
      {
        v36 = *v33; /*0x737f40*/
        *v33 = v33[2]; /*0x737f45*/
        v33[2] = v36; /*0x737f47*/
        v33 += v34; /*0x737f4a*/
        --v35; /*0x737f4c*/
      }
      while ( v35 ); /*0x737f4f*/
    }
  }
  v37 = lpCriticalSection; /*0x737f51*/
  v5 = HIDWORD(lpCriticalSection[3].SpinCount)-- == 1; /*0x737f55*/
  if ( v5 ) /*0x737f59*/
    LODWORD(v37[3].SpinCount) = 0; /*0x737f5b*/
  LeaveCriticalSection(v37); /*0x737f63*/
  return v7; /*0x737f6b*/
}
