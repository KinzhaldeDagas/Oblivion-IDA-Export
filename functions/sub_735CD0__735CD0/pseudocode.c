char *__thiscall sub_735CD0(_RTL_CRITICAL_SECTION_0 *this, int a2, char *a3)
{
  DWORD CurrentThreadId; // eax
  int v5; // edi
  bool v6; // zf
  char *v8; // ebp
  NiPixelData *v9; // eax
  char *v10; // eax
  int v11; // edx
  int v12; // ebp
  unsigned int v13; // eax
  unsigned int i; // ebx
  void (__cdecl *v15)(int, unsigned int *, int, int *, int); // edx
  int v16; // eax
  LPCRITICAL_SECTION v17; // eax
  void (__cdecl *v18)(int, int, unsigned int, unsigned int *, int); // edx
  char *v19; // edi
  int v20; // ebx
  int v21; // edx
  int v22; // ebp
  int v23; // edi
  unsigned int v24; // eax
  unsigned int v25; // ecx
  _BYTE *v26; // edi
  unsigned int v27; // ebp
  unsigned int v28; // edi
  char *v29; // edi
  unsigned int v30; // ebp
  unsigned int v31; // edi
  _BYTE *v32; // ecx
  int v33; // edi
  _BYTE *v34; // eax
  unsigned __int16 v35; // dx
  int v36; // ebp
  int j; // edi
  unsigned int v38; // edi
  unsigned int v39; // edi
  int v40; // edi
  _BYTE *v41; // eax
  unsigned __int16 v42; // dx
  int k; // edi
  unsigned int v44; // ebp
  unsigned int v45; // edi
  __int16 v46; // ax
  int v47; // edx
  char *v48; // eax
  int v49; // edx
  char v50; // cl
  int v51; // edx
  char *v52; // eax
  int v53; // edx
  char v54; // cl
  LPCRITICAL_SECTION v55; // eax
  char v56; // [esp+17h] [ebp-75h] BYREF
  int v57; // [esp+18h] [ebp-74h]
  _BYTE *v58; // [esp+1Ch] [ebp-70h]
  unsigned int v59; // [esp+20h] [ebp-6Ch]
  unsigned int v60; // [esp+24h] [ebp-68h] BYREF
  unsigned int v61; // [esp+28h] [ebp-64h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [esp+2Ch] [ebp-60h]
  char v63[4]; // [esp+30h] [ebp-5Ch] BYREF
  char v64[4]; // [esp+34h] [ebp-58h] BYREF
  char v65[4]; // [esp+38h] [ebp-54h] BYREF
  NiSurfaceData v66; // [esp+3Ch] [ebp-50h] BYREF
  unsigned int v67; // [esp+88h] [ebp-4h]

  InitSurfacEData(&v66);
  lpCriticalSection = this + 4;
  EnterCriticalSection(this + 4);
  CurrentThreadId = GetCurrentThreadId();
  ++*((_DWORD *)this + 0x3F);
  v5 = a2;
  *((_DWORD *)this + 0x3E) = CurrentThreadId;
  if ( !((unsigned __int8 (__thiscall *)(_RTL_CRITICAL_SECTION_0 *, int, char *, char *, NiSurfaceData *, char *, char *))this->DebugInfo->ProcessLocksList.Blink)(
          this,
          v5,
          v65,
          v64,
          &v66,
          &v56,
          v63) )
    goto LABEL_2;
  v8 = a3;
  if ( a3
    && **((_DWORD **)a3 + 0x15) == *((unsigned __int16 *)this + 0x80)
    && **((_DWORD **)a3 + 0x16) == *((unsigned __int16 *)this + 0x81)
    && sub_71AD40((_DWORD *)a3 + 2, (int)this + 0x108) )
  {
    a3 = v8;
  }
  else
  {
    v9 = (NiPixelData *)FormHeapAlloc(0x70u);
    a2 = (int)v9;
    v67 = 0;
    if ( v9 )
      v10 = (char *)NiPixelData::NiPixelData(
                      v9,
                      *((unsigned __int16 *)this + 0x80),
                      *((unsigned __int16 *)this + 0x81),
                      (int)this + 0x108,
                      1u,
                      1);
    else
      v10 = 0;
    v67 = 0xFFFFFFFF;
    a3 = v10;
  }
  v6 = *((_BYTE *)this + 0x107) == 0;
  v11 = *((unsigned __int16 *)this + 0x81);
  v59 = 0;
  if ( v6 )
  {
    i = v11
      * *((unsigned __int16 *)this + 0x82)
      * *((unsigned __int16 *)this + 0x80)
      * *((unsigned __int8 *)this + 0x106);
  }
  else
  {
    v12 = v11 * *((unsigned __int16 *)this + 0x82);
    v13 = FormHeapAlloc((unsigned __int64)(unsigned int)v12 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v12);
    v59 = v13;
    if ( !v13 )
    {
LABEL_2:
      v6 = (*((_DWORD *)this + 0x3F))-- == 1;
      if ( v6 )
        *((_DWORD *)this + 0x3E) = 0;
      LeaveCriticalSection(this + 4);
      return 0;
    }
    sub_735A40(v5, v13, v12);
    for ( i = 0; v12; --v12 )
    {
      v15 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v5 + 4);
      a2 = 4;
      v15(v5, &v61, 4, &a2, 1);
      i += v61;
    }
  }
  v16 = FormHeapAlloc(i);
  v58 = (_BYTE *)v16;
  if ( !v16 )
  {
    v17 = lpCriticalSection;
    v6 = HIDWORD(lpCriticalSection[3].SpinCount)-- == 1;
    if ( v6 )
      LODWORD(v17[3].SpinCount) = 0;
    LeaveCriticalSection(v17);
    return 0;
  }
  v18 = *(void (__cdecl **)(int, int, unsigned int, unsigned int *, int))(v5 + 4);
  v60 = 1;
  v18(v5, v16, i, &v60, 1);
  v19 = a3;
  v20 = *((_DWORD *)a3 + 0x19);
  v21 = v20 * **((_DWORD **)a3 + 0x15);
  v22 = *((_DWORD *)a3 + 0x14) + **((_DWORD **)a3 + 0x17);
  v6 = *((_BYTE *)this + 0x107) == 0;
  a2 = v21;
  v57 = v22;
  if ( !v6 )
  {
    v23 = *((unsigned __int16 *)this + 0x82);
    v24 = *((unsigned __int16 *)this + 0x81);
    v61 = 8 * v24 * v23 + 0x200;
    v25 = 0;
    v6 = *((_BYTE *)this + 0x106) == 1;
    v60 = 0;
    if ( v6 )
    {
      if ( v23 )
      {
        while ( 1 )
        {
          v26 = (_BYTE *)(v22 + v25 + v21 * (v24 - 1));
          v27 = 0;
          if ( v24 )
          {
            do
            {
              sub_735800(this, v26, &v58[*(_DWORD *)(v59 + 4 * (v27 + v25 * v24)) - v61], v20);
              v24 = *((unsigned __int16 *)this + 0x81);
              v26 -= a2;
              v25 = v60;
              ++v27;
            }
            while ( v27 < v24 );
            v21 = a2;
          }
          v28 = *((unsigned __int16 *)this + 0x82);
          v60 = ++v25;
          if ( v25 >= v28 )
            break;
          v22 = v57;
        }
      }
    }
    else if ( v23 )
    {
      while ( 1 )
      {
        v29 = (char *)(v22 + v25 + v21 * (v24 - 1));
        v30 = 0;
        if ( v24 )
        {
          do
          {
            sub_735890(this, v29, &v58[*(_DWORD *)(v59 + 4 * (v30 + v25 * v24)) - v61], v20);
            v24 = *((unsigned __int16 *)this + 0x81);
            v29 -= a2;
            v25 = v60;
            ++v30;
          }
          while ( v30 < v24 );
          v21 = a2;
        }
        v31 = *((unsigned __int16 *)this + 0x82);
        v60 = ++v25;
        if ( v25 >= v31 )
          break;
        v22 = v57;
      }
    }
LABEL_60:
    v19 = a3;
    goto LABEL_61;
  }
  v6 = *((_BYTE *)this + 0x106) == 1;
  v32 = v58;
  v61 = 0;
  if ( v6 )
  {
    if ( *((_WORD *)this + 0x82) )
    {
      do
      {
        v33 = *((unsigned __int16 *)this + 0x81);
        v60 = 0;
        v34 = (_BYTE *)(v22 + v61 + v21 * (v33 - 1));
        if ( v33 )
        {
          v35 = *((_WORD *)this + 0x80);
          v36 = 2 * a2;
          do
          {
            for ( j = 0; (unsigned __int16)j < v35; v34 += v20 )
            {
              *v34 = *v32;
              v35 = *((_WORD *)this + 0x80);
              ++j;
              ++v32;
            }
            v38 = *((unsigned __int16 *)this + 0x81);
            ++v60;
            v34 -= v36;
          }
          while ( v60 < v38 );
          v21 = a2;
          v22 = v57;
        }
        v39 = *((unsigned __int16 *)this + 0x82);
        ++v61;
      }
      while ( v61 < v39 );
      goto LABEL_60;
    }
  }
  else if ( *((_WORD *)this + 0x82) )
  {
    do
    {
      v40 = *((unsigned __int16 *)this + 0x81);
      v60 = 0;
      v41 = (_BYTE *)(v22 + v61 + v21 * (v40 - 1));
      if ( v40 )
      {
        v42 = *((_WORD *)this + 0x80);
        do
        {
          for ( k = 0; (unsigned __int16)k < v42; v41 += v20 )
          {
            *v41 = *v32;
            v42 = *((_WORD *)this + 0x80);
            ++k;
            v32 += 2;
          }
          v44 = *((unsigned __int16 *)this + 0x81);
          v41 += 0xFFFFFFFE * a2;
          ++v60;
        }
        while ( v60 < v44 );
        v21 = a2;
        v22 = v57;
      }
      v45 = *((unsigned __int16 *)this + 0x82);
      ++v61;
    }
    while ( v61 < v45 );
    goto LABEL_60;
  }
LABEL_61:
  FormHeapFree((unsigned int)v58);
  FormHeapFree(v59);
  v46 = *((_WORD *)this + 0x82);
  if ( v46 == 1 )
  {
    v47 = *((unsigned __int16 *)this + 0x81);
    v48 = (char *)(*((_DWORD *)v19 + 0x14) + **((_DWORD **)v19 + 0x17));
    if ( v47 * *((unsigned __int16 *)this + 0x80) )
    {
      v49 = v47 * *((unsigned __int16 *)this + 0x80);
      do
      {
        v50 = *v48;
        v48[2] = *v48;
        v48[1] = v50;
        v48 += 3;
        --v49;
      }
      while ( v49 );
    }
  }
  else if ( v46 == 2 )
  {
    v51 = *((unsigned __int16 *)this + 0x81);
    v52 = (char *)(*((_DWORD *)v19 + 0x14) + **((_DWORD **)v19 + 0x17));
    if ( v51 * *((unsigned __int16 *)this + 0x80) )
    {
      v53 = v51 * *((unsigned __int16 *)this + 0x80);
      do
      {
        v52[3] = v52[1];
        v54 = *v52;
        v52[2] = *v52;
        v52[1] = v54;
        v52 += 4;
        --v53;
      }
      while ( v53 );
    }
  }
  v55 = lpCriticalSection;
  v6 = HIDWORD(lpCriticalSection[3].SpinCount)-- == 1;
  if ( v6 )
    LODWORD(v55[3].SpinCount) = 0;
  LeaveCriticalSection(v55);
  return v19;
}
