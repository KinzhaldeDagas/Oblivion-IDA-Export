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

  InitSurfacEData(&v66); /*0x735d00*/
  lpCriticalSection = this + 4; /*0x735d0c*/
  EnterCriticalSection(this + 4); /*0x735d10*/
  CurrentThreadId = GetCurrentThreadId(); /*0x735d16*/
  ++*((_DWORD *)this + 0x3F); /*0x735d1c*/
  v5 = a2; /*0x735d20*/
  *((_DWORD *)this + 0x3E) = CurrentThreadId; /*0x735d3f*/
  if ( !((unsigned __int8 (__thiscall *)(_RTL_CRITICAL_SECTION_0 *, int, char *, char *, NiSurfaceData *, char *, char *))this->DebugInfo->ProcessLocksList.Blink)( /*0x735d4b*/
          this,
          v5,
          v65,
          v64,
          &v66,
          &v56,
          v63) )
    goto LABEL_2; /*0x735d4f*/
  v8 = a3; /*0x735d6c*/
  if ( a3 /*0x735da1*/
    && **((_DWORD **)a3 + 0x15) == *((unsigned __int16 *)this + 0x80)
    && **((_DWORD **)a3 + 0x16) == *((unsigned __int16 *)this + 0x81)
    && sub_71AD40((_DWORD *)a3 + 2, (int)this + 0x108) )
  {
    a3 = v8; /*0x735daa*/
  }
  else
  {
    v9 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x735db5*/
    a2 = (int)v9; /*0x735dbd*/
    v67 = 0; /*0x735dc6*/
    if ( v9 ) /*0x735dd1*/
      v10 = (char *)NiPixelData::NiPixelData( /*0x735df0*/
                      v9,
                      *((unsigned __int16 *)this + 0x80),
                      *((unsigned __int16 *)this + 0x81),
                      (int)this + 0x108,
                      1u,
                      1);
    else
      v10 = 0; /*0x735df7*/
    v67 = 0xFFFFFFFF; /*0x735df9*/
    a3 = v10; /*0x735e04*/
  }
  v6 = *((_BYTE *)this + 0x107) == 0; /*0x735e0b*/
  v11 = *((unsigned __int16 *)this + 0x81); /*0x735e12*/
  v59 = 0; /*0x735e19*/
  if ( v6 )
  {
    i = v11 /*0x735ebb*/
      * *((unsigned __int16 *)this + 0x82)
      * *((unsigned __int16 *)this + 0x80)
      * *((unsigned __int8 *)this + 0x106);
  }
  else
  {
    v12 = v11 * *((unsigned __int16 *)this + 0x82); /*0x735e2a*/
    v13 = FormHeapAlloc((unsigned __int64)(unsigned int)v12 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v12);
    v59 = v13; /*0x735e4a*/
    if ( !v13 ) /*0x735e4e*/
    {
LABEL_2:
      v6 = (*((_DWORD *)this + 0x3F))-- == 1; /*0x735d51*/
      if ( v6 ) /*0x735d55*/
        *((_DWORD *)this + 0x3E) = 0; /*0x735d57*/
      LeaveCriticalSection(this + 4); /*0x735d5f*/
      return 0; /*0x735d67*/
    }
    sub_735A40(v5, v13, v12); /*0x735e57*/
    for ( i = 0; v12; --v12 ) /*0x735e63*/
    {
      v15 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v5 + 4); /*0x735e70*/
      a2 = 4; /*0x735e85*/
      v15(v5, &v61, 4, &a2, 1); /*0x735e90*/
      i += v61; /*0x735e92*/
    }
  }
  v16 = FormHeapAlloc(i); /*0x735ebf*/
  v58 = (_BYTE *)v16; /*0x735ec9*/
  if ( !v16 ) /*0x735ecd*/
  {
    v17 = lpCriticalSection; /*0x735ecf*/
    v6 = HIDWORD(lpCriticalSection[3].SpinCount)-- == 1; /*0x735ed3*/
    if ( v6 ) /*0x735ed7*/
      LODWORD(v17[3].SpinCount) = 0; /*0x735ed9*/
    LeaveCriticalSection(v17); /*0x735ee1*/
    return 0; /*0x735ee9*/
  }
  v18 = *(void (__cdecl **)(int, int, unsigned int, unsigned int *, int))(v5 + 4); /*0x735eee*/
  v60 = 1; /*0x735efb*/
  v18(v5, v16, i, &v60, 1); /*0x735f03*/
  v19 = a3; /*0x735f05*/
  v20 = *((_DWORD *)a3 + 0x19); /*0x735f0f*/
  v21 = v20 * **((_DWORD **)a3 + 0x15); /*0x735f17*/
  v22 = *((_DWORD *)a3 + 0x14) + **((_DWORD **)a3 + 0x17); /*0x735f1c*/
  v6 = *((_BYTE *)this + 0x107) == 0; /*0x735f22*/
  a2 = v21; /*0x735f29*/
  v57 = v22; /*0x735f30*/
  if ( !v6 ) /*0x735f34*/
  {
    v23 = *((unsigned __int16 *)this + 0x82); /*0x735f3a*/
    v24 = *((unsigned __int16 *)this + 0x81); /*0x735f41*/
    v61 = 8 * v24 * v23 + 0x200; /*0x735f54*/
    v25 = 0; /*0x735f58*/
    v6 = *((_BYTE *)this + 0x106) == 1; /*0x735f5a*/
    v60 = 0; /*0x735f61*/
    if ( v6 ) /*0x735f65*/
    {
      if ( v23 ) /*0x735f69*/
      {
        while ( 1 ) /*0x735f7d*/
        {
          v26 = (_BYTE *)(v22 + v25 + v21 * (v24 - 1)); /*0x735f7d*/
          v27 = 0; /*0x735f7f*/
          if ( v24 ) /*0x735f83*/
          {
            do /*0x735fba*/
            {
              sub_735800(this, v26, &v58[*(_DWORD *)(v59 + 4 * (v27 + v25 * v24)) - v61], v20); /*0x735f9e*/
              v24 = *((unsigned __int16 *)this + 0x81); /*0x735fa3*/
              v26 -= a2; /*0x735faa*/
              v25 = v60; /*0x735fb1*/
              ++v27; /*0x735fb5*/
            }
            while ( v27 < v24 ); /*0x735fba*/
            v21 = a2; /*0x735fbc*/
          }
          v28 = *((unsigned __int16 *)this + 0x82); /*0x735fc3*/
          v60 = ++v25; /*0x735fcf*/
          if ( v25 >= v28 ) /*0x735fd3*/
            break; /*0x735fd3*/
          v22 = v57; /*0x735f71*/
        }
      }
    }
    else if ( v23 ) /*0x735fdc*/
    {
      while ( 1 ) /*0x735ff0*/
      {
        v29 = (char *)(v22 + v25 + v21 * (v24 - 1)); /*0x735ff0*/
        v30 = 0; /*0x735ff2*/
        if ( v24 ) /*0x735ff6*/
        {
          do /*0x736035*/
          {
            sub_735890(this, v29, &v58[*(_DWORD *)(v59 + 4 * (v30 + v25 * v24)) - v61], v20); /*0x736019*/
            v24 = *((unsigned __int16 *)this + 0x81); /*0x73601e*/
            v29 -= a2; /*0x736025*/
            v25 = v60; /*0x73602c*/
            ++v30; /*0x736030*/
          }
          while ( v30 < v24 ); /*0x736035*/
          v21 = a2; /*0x736037*/
        }
        v31 = *((unsigned __int16 *)this + 0x82); /*0x73603e*/
        v60 = ++v25; /*0x73604a*/
        if ( v25 >= v31 ) /*0x73604e*/
          break; /*0x73604e*/
        v22 = v57; /*0x735fe4*/
      }
    }
LABEL_60:
    v19 = a3; /*0x7361c2*/
    goto LABEL_61; /*0x7361c2*/
  }
  v6 = *((_BYTE *)this + 0x106) == 1; /*0x736055*/
  v32 = v58; /*0x73605c*/
  v61 = 0; /*0x736060*/
  if ( v6 ) /*0x736068*/
  {
    if ( *((_WORD *)this + 0x82) ) /*0x73606e*/
    {
      do /*0x73610b*/
      {
        v33 = *((unsigned __int16 *)this + 0x81); /*0x736083*/
        v60 = 0; /*0x736094*/
        v34 = (_BYTE *)(v22 + v61 + v21 * (v33 - 1)); /*0x73609c*/
        if ( v33 ) /*0x7360a0*/
        {
          v35 = *((_WORD *)this + 0x80); /*0x7360a9*/
          v36 = 2 * a2; /*0x7360b0*/
          do /*0x7360ea*/
          {
            for ( j = 0; (unsigned __int16)j < v35; v34 += v20 ) /*0x7360b7*/
            {
              *v34 = *v32; /*0x7360c2*/
              v35 = *((_WORD *)this + 0x80); /*0x7360c4*/
              ++j; /*0x7360cb*/
              ++v32; /*0x7360ce*/
            }
            v38 = *((unsigned __int16 *)this + 0x81); /*0x7360d8*/
            ++v60; /*0x7360df*/
            v34 -= v36; /*0x7360e4*/
          }
          while ( v60 < v38 ); /*0x7360ea*/
          v21 = a2; /*0x7360ec*/
          v22 = v57; /*0x7360f3*/
        }
        v39 = *((unsigned __int16 *)this + 0x82); /*0x7360fb*/
        ++v61; /*0x736107*/
      }
      while ( v61 < v39 ); /*0x73610b*/
      goto LABEL_60; /*0x73610b*/
    }
  }
  else if ( *((_WORD *)this + 0x82) ) /*0x736116*/
  {
    do /*0x7361bc*/
    {
      v40 = *((unsigned __int16 *)this + 0x81); /*0x736137*/
      v60 = 0; /*0x736148*/
      v41 = (_BYTE *)(v22 + v61 + v21 * (v40 - 1)); /*0x736150*/
      if ( v40 ) /*0x736154*/
      {
        v42 = *((_WORD *)this + 0x80); /*0x736156*/
        do /*0x73619b*/
        {
          for ( k = 0; (unsigned __int16)k < v42; v41 += v20 ) /*0x736162*/
          {
            *v41 = *v32; /*0x736166*/
            v42 = *((_WORD *)this + 0x80); /*0x736168*/
            ++k; /*0x73616f*/
            v32 += 2; /*0x736172*/
          }
          v44 = *((unsigned __int16 *)this + 0x81); /*0x736183*/
          v41 += 0xFFFFFFFE * a2; /*0x73618c*/
          ++v60; /*0x736197*/
        }
        while ( v60 < v44 ); /*0x73619b*/
        v21 = a2; /*0x73619d*/
        v22 = v57; /*0x7361a4*/
      }
      v45 = *((unsigned __int16 *)this + 0x82); /*0x7361ac*/
      ++v61; /*0x7361b8*/
    }
    while ( v61 < v45 ); /*0x7361bc*/
    goto LABEL_60; /*0x7361bc*/
  }
LABEL_61:
  FormHeapFree((unsigned int)v58); /*0x7361c9*/
  FormHeapFree(v59); /*0x7361d8*/
  v46 = *((_WORD *)this + 0x82); /*0x7361dd*/
  if ( v46 == 1 ) /*0x7361eb*/
  {
    v47 = *((unsigned __int16 *)this + 0x81); /*0x7361f4*/
    v48 = (char *)(*((_DWORD *)v19 + 0x14) + **((_DWORD **)v19 + 0x17)); /*0x736203*/
    if ( v47 * *((unsigned __int16 *)this + 0x80) ) /*0x7361fe*/
    {
      v49 = v47 * *((unsigned __int16 *)this + 0x80); /*0x73620a*/
      do /*0x73621e*/
      {
        v50 = *v48; /*0x736210*/
        v48[2] = *v48; /*0x736212*/
        v48[1] = v50; /*0x736215*/
        v48 += 3; /*0x736218*/
        --v49; /*0x73621b*/
      }
      while ( v49 ); /*0x73621e*/
    }
  }
  else if ( v46 == 2 ) /*0x736226*/
  {
    v51 = *((unsigned __int16 *)this + 0x81); /*0x73622f*/
    v52 = (char *)(*((_DWORD *)v19 + 0x14) + **((_DWORD **)v19 + 0x17)); /*0x73623e*/
    if ( v51 * *((unsigned __int16 *)this + 0x80) ) /*0x736239*/
    {
      v53 = v51 * *((unsigned __int16 *)this + 0x80); /*0x736245*/
      do /*0x73625c*/
      {
        v52[3] = v52[1]; /*0x73624b*/
        v54 = *v52; /*0x73624e*/
        v52[2] = *v52; /*0x736250*/
        v52[1] = v54; /*0x736253*/
        v52 += 4; /*0x736256*/
        --v53; /*0x736259*/
      }
      while ( v53 ); /*0x73625c*/
    }
  }
  v55 = lpCriticalSection; /*0x73625e*/
  v6 = HIDWORD(lpCriticalSection[3].SpinCount)-- == 1; /*0x736262*/
  if ( v6 ) /*0x736266*/
    LODWORD(v55[3].SpinCount) = 0; /*0x736268*/
  LeaveCriticalSection(v55); /*0x736270*/
  return v19; /*0x736278*/
}
