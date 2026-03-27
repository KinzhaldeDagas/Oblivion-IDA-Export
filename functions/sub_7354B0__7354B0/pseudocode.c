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

  InitSurfacEData(&v30);
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x80);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 4);
  CurrentThreadId = GetCurrentThreadId();
  ++*((_DWORD *)this + 0x3F);
  *((_DWORD *)this + 0x3E) = CurrentThreadId;
  if ( !(*(unsigned __int8 (__thiscall **)(char *, int, _BYTE *, _BYTE *, NiSurfaceData *, char *, _BYTE *))(*(_DWORD *)this + 0xC))(
          this,
          a2,
          v29,
          v28,
          &v30,
          &v23,
          v27) )
    goto LABEL_2;
  v7 = *(this + 0x114);
  v8 = *((unsigned __int16 *)this + 0x87);
  v9 = v8 * v7;
  v24 = v9;
  if ( !v7 )
  {
    if ( *(this + 0x112) != 4 )
      goto LABEL_2;
    v24 = v8 >> 1;
    v9 = v8 >> 1;
  }
  if ( *(this + 0x101) )
  {
    if ( *((unsigned __int16 *)this + 0x82) + (unsigned int)*((unsigned __int16 *)this + 0x83) + 1 < 0x4000 )
    {
      sub_734E10((int)this, a2);
      goto LABEL_12;
    }
LABEL_2:
    v5 = (*((_DWORD *)this + 0x3F))-- == 1;
    if ( v5 )
      *((_DWORD *)this + 0x3E) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 4);
    return 0;
  }
  if ( *(this + 0x116) )
    goto LABEL_2;
LABEL_12:
  v10 = a3;
  if ( !a3
    || **((_DWORD **)a3 + 0x15) != *((unsigned __int16 *)this + 0x87)
    || **((_DWORD **)a3 + 0x16) != *((unsigned __int16 *)this + 0x88)
    || !sub_71AD40((_DWORD *)a3 + 2, (int)(this + 0x11C)) )
  {
    v11 = (NiPixelData *)FormHeapAlloc(0x70u);
    v31 = 0;
    if ( v11 )
      v12 = (char *)NiPixelData::NiPixelData(
                      v11,
                      *((unsigned __int16 *)this + 0x87),
                      *((unsigned __int16 *)this + 0x88),
                      (int)(this + 0x11C),
                      1u,
                      1);
    else
      v12 = 0;
    v31 = 0xFFFFFFFF;
    a3 = v12;
    v10 = v12;
  }
  if ( *(this + 0x116) )
  {
    v13 = (NiObject *)FormHeapAlloc(0x24u);
    v25 = (int)v13;
    v31 = 1;
    if ( v13 )
      v14 = sub_732750(v13, *(this + 0x115), *((unsigned __int16 *)this + 0x83), *((void **)this + 0x5B));
    else
      v14 = 0;
    v31 = 0xFFFFFFFF;
    sub_71B140(v10, (int)v14);
  }
  if ( *((_DWORD *)this + 0x58) < v9 )
  {
    v22 = *((_DWORD *)this + 0x59);
    *((_DWORD *)this + 0x58) = v9;
    FormHeapFree(v22);
    *((_DWORD *)this + 0x59) = FormHeapAlloc(*((_DWORD *)this + 0x58));
  }
  v15 = *((_DWORD *)v10 + 0x14) + **((_DWORD **)v10 + 0x17);
  v16 = **((_DWORD **)v10 + 0x15);
  v17 = v16 * *((_DWORD *)v10 + 0x19);
  if ( !v17 )
    v17 = v16 >> 1;
  if ( *(this + 0x117) )
  {
    v15 += v17 * (*((unsigned __int16 *)this + 0x88) - 1);
    v17 = -v17;
  }
  v18 = 0;
  if ( *(this + 0x118) )
  {
    if ( *((_WORD *)this + 0x88) )
    {
      do
      {
        sub_734CB0(this, v15, a2, *((char **)this + 0x59), *((_DWORD *)this + 0x58));
        (*((void (__thiscall **)(char *, _DWORD, int))this + 0x5C))(this, *((_DWORD *)this + 0x59), v15);
        ++v18;
        v15 += v17;
      }
      while ( v18 < *((unsigned __int16 *)this + 0x88) );
    }
  }
  else if ( *((_WORD *)this + 0x88) )
  {
    do
    {
      v19 = *(void (__cdecl **)(int, int, unsigned int, int *, int))(a2 + 4);
      v21 = *((_DWORD *)this + 0x59);
      v25 = 1;
      v19(a2, v21, v24, &v25, 1);
      (*((void (__thiscall **)(char *, _DWORD, int))this + 0x5C))(this, *((_DWORD *)this + 0x59), v15);
      ++v18;
      v15 += v17;
    }
    while ( v18 < *((unsigned __int16 *)this + 0x88) );
  }
  v20 = lpCriticalSection;
  v5 = HIDWORD(lpCriticalSection[3].SpinCount)-- == 1;
  if ( v5 )
    LODWORD(v20[3].SpinCount) = 0;
  LeaveCriticalSection(v20);
  return a3;
}
