char *__thiscall sub_7354B0(char *this, int a2, char *a3)
{
  DWORD CurrentThreadId; // eax
  bool v5; // zf
  unsigned __int8 v7; // cl
  unsigned int v8; // eax
  unsigned int v9; // ebx
  char *v10; // ebp
  NiPixelData *v11; // eax
  char *v12; // eax
  NiObject *v13; // eax
  NiObject *v14; // eax
  int v15; // edi
  unsigned int v16; // eax
  int v17; // ebp
  unsigned int v18; // ebx
  void (__cdecl *v19)(int, int, unsigned int, int *, int); // edx
  LPCRITICAL_SECTION v20; // eax
  int v21; // [esp-10h] [ebp-90h]
  unsigned int v22; // [esp-4h] [ebp-84h]
  char v23; // [esp+17h] [ebp-69h] BYREF
  unsigned int v24; // [esp+18h] [ebp-68h]
  int v25; // [esp+1Ch] [ebp-64h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [esp+20h] [ebp-60h]
  _BYTE v27[4]; // [esp+24h] [ebp-5Ch] BYREF
  _BYTE v28[4]; // [esp+28h] [ebp-58h] BYREF
  _BYTE v29[4]; // [esp+2Ch] [ebp-54h] BYREF
  NiSurfaceData v30; // [esp+30h] [ebp-50h] BYREF
  int v31; // [esp+7Ch] [ebp-4h]

  InitSurfacEData(&v30); /*0x7354dd*/
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x80); /*0x7354e9*/
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x7354ed*/
  CurrentThreadId = GetCurrentThreadId(); /*0x7354f3*/
  ++*((_DWORD *)this + 0x3F); /*0x7354f9*/
  *((_DWORD *)this + 0x3E) = CurrentThreadId; /*0x73551c*/
  if ( !(*(unsigned __int8 (__thiscall **)(char *, int, _BYTE *, _BYTE *, NiSurfaceData *, char *, _BYTE *))(*(_DWORD *)this + 0xC))( /*0x735528*/
          this,
          a2,
          v29,
          v28,
          &v30,
          &v23,
          v27) )
    goto LABEL_2; /*0x73552c*/
  v7 = *(this + 0x114); /*0x735549*/
  v8 = *((unsigned __int16 *)this + 0x87); /*0x73554f*/
  v9 = v8 * v7; /*0x735559*/
  v24 = v9; /*0x73555e*/
  if ( !v7 ) /*0x735562*/
  {
    if ( *(this + 0x112) != 4 ) /*0x73556b*/
      goto LABEL_2; /*0x73556b*/
    v24 = v8 >> 1; /*0x73556f*/
    v9 = v8 >> 1; /*0x735573*/
  }
  if ( *(this + 0x101) ) /*0x735575*/
  {
    if ( *((unsigned __int16 *)this + 0x82) + (unsigned int)*((unsigned __int16 *)this + 0x83) + 1 < 0x4000 ) /*0x735596*/
    {
      sub_734E10((int)this, a2); /*0x73559b*/
      goto LABEL_12; /*0x7355a0*/
    }
LABEL_2:
    v5 = (*((_DWORD *)this + 0x3F))-- == 1; /*0x73552e*/
    if ( v5 ) /*0x735532*/
      *((_DWORD *)this + 0x3E) = 0; /*0x735534*/
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x73553c*/
    return 0; /*0x735544*/
  }
  if ( *(this + 0x116) ) /*0x7355a2*/
    goto LABEL_2; /*0x7355a9*/
LABEL_12:
  v10 = a3; /*0x7355ab*/
  if ( !a3 /*0x7355e0*/
    || **((_DWORD **)a3 + 0x15) != *((unsigned __int16 *)this + 0x87)
    || **((_DWORD **)a3 + 0x16) != *((unsigned __int16 *)this + 0x88)
    || !sub_71AD40((_DWORD *)a3 + 2, (int)(this + 0x11C)) )
  {
    v11 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x7355f4*/
    v31 = 0; /*0x735605*/
    if ( v11 ) /*0x73560d*/
      v12 = (char *)NiPixelData::NiPixelData( /*0x73562c*/
                      v11,
                      *((unsigned __int16 *)this + 0x87),
                      *((unsigned __int16 *)this + 0x88),
                      (int)(this + 0x11C),
                      1u,
                      1);
    else
      v12 = 0; /*0x735633*/
    v31 = 0xFFFFFFFF; /*0x735635*/
    a3 = v12; /*0x73563d*/
    v10 = v12; /*0x735644*/
  }
  if ( *(this + 0x116) ) /*0x735646*/
  {
    v13 = (NiObject *)FormHeapAlloc(0x24u); /*0x735651*/
    v25 = (int)v13; /*0x735659*/
    v31 = 1; /*0x73565f*/
    if ( v13 ) /*0x735667*/
      v14 = sub_732750(v13, *(this + 0x115), *((unsigned __int16 *)this + 0x83), *((void **)this + 0x5B)); /*0x735682*/
    else
      v14 = 0; /*0x735689*/
    v31 = 0xFFFFFFFF; /*0x73568e*/
    sub_71B140(v10, (int)v14); /*0x735699*/
  }
  if ( *((_DWORD *)this + 0x58) < v9 ) /*0x7356a4*/
  {
    v22 = *((_DWORD *)this + 0x59); /*0x7356ac*/
    *((_DWORD *)this + 0x58) = v9; /*0x7356ad*/
    FormHeapFree(v22); /*0x7356b3*/
    *((_DWORD *)this + 0x59) = FormHeapAlloc(*((_DWORD *)this + 0x58)); /*0x7356c7*/
  }
  v15 = *((_DWORD *)v10 + 0x14) + **((_DWORD **)v10 + 0x17); /*0x7356d5*/
  v16 = **((_DWORD **)v10 + 0x15); /*0x7356d8*/
  v17 = v16 * *((_DWORD *)v10 + 0x19); /*0x7356dd*/
  if ( !v17 ) /*0x7356e2*/
    v17 = v16 >> 1; /*0x7356e6*/
  if ( *(this + 0x117) ) /*0x7356e8*/
  {
    v15 += v17 * (*((unsigned __int16 *)this + 0x88) - 1); /*0x7356fe*/
    v17 = -v17; /*0x735700*/
  }
  v18 = 0; /*0x735702*/
  if ( *(this + 0x118) ) /*0x735704*/
  {
    if ( *((_WORD *)this + 0x88) ) /*0x73570c*/
    {
      do /*0x73575d*/
      {
        sub_734CB0(this, a2, *((char **)this + 0x59), *((_DWORD *)this + 0x58)); /*0x735738*/
        (*((void (__thiscall **)(char *, _DWORD, int))this + 0x5C))(this, *((_DWORD *)this + 0x59), v15); /*0x73574d*/
        ++v18; /*0x735756*/
        v15 += v17; /*0x735759*/
      }
      while ( v18 < *((unsigned __int16 *)this + 0x88) ); /*0x73575d*/
    }
  }
  else if ( *((_WORD *)this + 0x88) ) /*0x735761*/
  {
    do /*0x7357bb*/
    {
      v19 = *(void (__cdecl **)(int, int, unsigned int, int *, int))(a2 + 4); /*0x735789*/
      v21 = *((_DWORD *)this + 0x59); /*0x73578c*/
      v25 = 1; /*0x73578e*/
      v19(a2, v21, v24, &v25, 1); /*0x735796*/
      (*((void (__thiscall **)(char *, _DWORD, int))this + 0x5C))(this, *((_DWORD *)this + 0x59), v15); /*0x7357ab*/
      ++v18; /*0x7357b4*/
      v15 += v17; /*0x7357b7*/
    }
    while ( v18 < *((unsigned __int16 *)this + 0x88) ); /*0x7357bb*/
  }
  v20 = lpCriticalSection; /*0x7357bd*/
  v5 = HIDWORD(lpCriticalSection[3].SpinCount)-- == 1; /*0x7357c1*/
  if ( v5 ) /*0x7357c5*/
    LODWORD(v20[3].SpinCount) = 0; /*0x7357c7*/
  LeaveCriticalSection(v20); /*0x7357cf*/
  return a3; /*0x7357dc*/
}
