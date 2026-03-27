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

  InitSurfacEData(&v64);
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x80);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
  CurrentThreadId = GetCurrentThreadId();
  ++*((_DWORD *)this + 0x3F);
  *((_DWORD *)this + 0x3E) = CurrentThreadId;
  if ( !(*(unsigned __int8 (__thiscall **)(char *, _DWORD *, char *, char *, NiSurfaceData *, char *, char *))(*(_DWORD *)this + 0xC))(
          this,
          a2,
          v62,
          v63,
          &v64,
          &v58,
          v61) )
  {
    v5 = (*((_DWORD *)this + 0x3F))-- == 1;
    if ( v5 )
      *((_DWORD *)this + 0x3E) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 4);
    return 0;
  }
  v7 = a3;
  if ( a3
    && **(_DWORD **)(a3 + 0x54) == *((_DWORD *)this + 0x40)
    && **(_DWORD **)(a3 + 0x58) == *((_DWORD *)this + 0x41)
    && sub_71AD40((_DWORD *)(a3 + 8), (int)(this + 0x108)) )
  {
    v54 = a3;
  }
  else
  {
    v8 = (NiPixelData *)FormHeapAlloc(0x70u);
    v53 = (int)v8;
    v67 = 0;
    if ( v8 )
      v9 = NiPixelData::NiPixelData(v8, *((_DWORD *)this + 0x40), *((_DWORD *)this + 0x41), (int)(this + 0x108), 1u, 1);
    else
      v9 = 0;
    v67 = 0xFFFFFFFF;
    v54 = (int)v9;
    v7 = (int)v9;
  }
  if ( sub_71AD40((_DWORD *)this + 0x42, (int)&unk_B25D70) )
  {
    v10 = (void (__cdecl *)(_DWORD *, _BYTE *, int, int *, int))a2[1];
    v48 = 4 * *((_DWORD *)this + 0x54);
    v55 = 1;
    v10(a2, Src, v48, &v55, 1);
    if ( *((_DWORD *)this + 0x54) )
    {
      v11 = &v66;
      v12 = *((_DWORD *)this + 0x54);
      do
      {
        v13 = v11[0xFFFFFFFE];
        v11[0xFFFFFFFE] = *v11;
        *v11 = v13;
        v11[1] = 0xFF;
        v11 += 4;
        --v12;
      }
      while ( v12 );
    }
    v14 = (NiObject *)FormHeapAlloc(0x24u);
    v53 = (int)v14;
    v67 = 1;
    if ( v14 )
    {
      v15 = sub_732750(v14, 0, 0x100, Src);
      v50 = v15;
    }
    else
    {
      v50 = 0;
      v15 = 0;
    }
    v16 = *(NiObject **)(v7 + 0x4C);
    v67 = 0xFFFFFFFF;
    if ( v16 != v15 )
    {
      if ( v16 )
      {
        if ( !InterlockedDecrement((volatile LONG *)&v16->members) )
          v16->__vftable->super.Destructor((NiRefObject *)v16, 1);
        v15 = v50;
      }
      *(_DWORD *)(v7 + 0x4C) = v15;
      if ( v15 )
        InterlockedIncrement((volatile LONG *)&v15->members);
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, int, int))(*a2 + 0xC))(a2, 4 * *((_DWORD *)this + 0x54), BSFile_FilePos_Cur);
  }
  v17 = *((_DWORD *)this + 0x55) - 4 * *((_DWORD *)this + 0x54) - 0x36;
  if ( v17 > 0 )
    (*(void (__thiscall **)(_DWORD *, int, int))(*a2 + 0xC))(a2, v17, BSFile_FilePos_Cur);
  v18 = *((_WORD *)this + 0xA6);
  v19 = *((_DWORD *)this + 0x41);
  v20 = *(_DWORD *)(v7 + 0x64) * **(_DWORD **)(v7 + 0x54);
  v21 = v19 * (((*((_DWORD *)this + 0x40) * (unsigned int)v18 + 0x1F) >> 3) & 0x1FFFFFFC);
  if ( v18 == 4 )
  {
    v22 = *((_DWORD *)this + 0x40) & 1;
    v23 = v22 + (*((_DWORD *)this + 0x40) >> 1);
    v24 = ((_BYTE)v22 + (unsigned __int8)(*((_DWORD *)this + 0x40) >> 1)) & 3;
    v53 = v23;
    if ( (v23 & 3) != 0 )
      v25 = 4 - v24;
    else
      v25 = 0;
    v56 = v25 + v23;
    v51 = FormHeapAlloc(v25 + v23);
    if ( *(this + 0x158) )
    {
      v26 = *(_DWORD *)(v54 + 0x50) + **(_DWORD **)(v54 + 0x5C) + v20 * (**(_DWORD **)(v7 + 0x58) - 1);
      v20 = -v20;
    }
    else
    {
      v26 = *(_DWORD *)(v54 + 0x50) + **(_DWORD **)(v7 + 0x5C);
    }
    v5 = *((_DWORD *)this + 0x41) == 0;
    v55 = v20;
    v57 = 0;
    if ( !v5 )
    {
      do
      {
        v27 = (void (__cdecl *)(_DWORD *, unsigned int, int, int *, int))a2[1];
        v59 = 1;
        v27(a2, v51, v56, &v59, 1);
        v28 = v53;
        v29 = (_BYTE *)v51;
        for ( i = (_BYTE *)v26; v28; --v28 )
        {
          *i = *v29 >> 4;
          v31 = i + 1;
          *v31 = *v29 & 0xF;
          i = v31 + 1;
          ++v29;
        }
        v26 += v55;
        v32 = (unsigned int)++v57 < *((_DWORD *)this + 0x41);
      }
      while ( v32 );
    }
    FormHeapFree(v51);
LABEL_43:
    v7 = v54;
    goto LABEL_44;
  }
  if ( *(this + 0x158) )
  {
    v52 = 0;
    v38 = *(_DWORD *)(v54 + 0x50) + **(_DWORD **)(v54 + 0x5C) + v20 * (v19 - 1);
    if ( (v20 & 3) != 0 )
    {
      v56 = 4 - (v20 & 3);
      if ( v19 )
      {
        do
        {
          v39 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a2[1];
          v53 = 1;
          v39(a2, v38, v20, &v53, 1);
          v40 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a2[1];
          v53 = 1;
          v40(a2, &v59, v56, &v53, 1);
          v38 -= v20;
          ++v52;
        }
        while ( v52 < *((_DWORD *)this + 0x41) );
      }
    }
    else if ( v19 )
    {
      do
      {
        v41 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a2[1];
        v53 = 1;
        v41(a2, v38, v20, &v53, 1);
        v38 -= v20;
        ++v52;
      }
      while ( v52 < *((_DWORD *)this + 0x41) );
    }
    goto LABEL_43;
  }
  if ( (v20 & 3) != 0 )
  {
    v42 = **(_DWORD **)(v7 + 0x5C);
    v56 = 4 - (v20 & 3);
    v43 = *(_DWORD *)(v54 + 0x50) + v42;
    v55 = 0;
    if ( v19 )
    {
      do
      {
        v44 = (void (__cdecl *)(_DWORD *, int, int, int *, int))a2[1];
        v53 = 1;
        v44(a2, v43, v20, &v53, 1);
        v45 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))a2[1];
        v53 = 1;
        v45(a2, &v59, v56, &v53, 1);
        v43 += v20;
        v32 = (unsigned int)++v55 < *((_DWORD *)this + 0x41);
      }
      while ( v32 );
    }
    goto LABEL_43;
  }
  v46 = (void (__cdecl *)(_DWORD *, int, unsigned int, int *, int))a2[1];
  v49 = v21;
  v47 = *(_DWORD *)(v7 + 0x50) + **(_DWORD **)(v7 + 0x5C);
  v57 = 1;
  v46(a2, v47, v49, &v57, 1);
LABEL_44:
  if ( sub_71AD40((_DWORD *)this + 0x42, (int)&unk_B25E48) || sub_71AD40((_DWORD *)this + 0x42, (int)&unk_B25E00) )
  {
    v33 = (char *)(*(_DWORD *)(v7 + 0x50) + **(_DWORD **)(v7 + 0x5C));
    v34 = *(_DWORD *)(v7 + 0x64);
    if ( *((_DWORD *)this + 0x40) * *((_DWORD *)this + 0x41) )
    {
      v35 = *((_DWORD *)this + 0x40) * *((_DWORD *)this + 0x41);
      do
      {
        v36 = *v33;
        *v33 = v33[2];
        v33[2] = v36;
        v33 += v34;
        --v35;
      }
      while ( v35 );
    }
  }
  v37 = lpCriticalSection;
  v5 = HIDWORD(lpCriticalSection[3].SpinCount)-- == 1;
  if ( v5 )
    LODWORD(v37[3].SpinCount) = 0;
  LeaveCriticalSection(v37);
  return v7;
}
