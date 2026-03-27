int __usercall _setlocale_set_cat@<eax>(char *Str@<ecx>, UINT *a2@<esi>, int a3)
{
  int v4; // edi
  int v6; // ebx
  int v7; // edx
  int v8; // ecx
  UINT *v9; // ecx
  int v10; // ecx
  int *v11; // eax
  int v12; // edx
  void *v13; // edx
  _DWORD *v14; // eax
  unsigned int i; // eax
  void **v16; // edi
  void *v17; // eax
  rsize_t v18; // [esp-10h] [ebp-168h]
  size_t v19; // [esp-4h] [ebp-15Ch]
  size_t v20; // [esp-4h] [ebp-15Ch]
  size_t v21; // [esp-4h] [ebp-15Ch]
  void *v22; // [esp-4h] [ebp-15Ch]
  char Dst[8]; // [esp+8h] [ebp-150h] BYREF
  int v24; // [esp+10h] [ebp-148h]
  UINT v25; // [esp+18h] [ebp-140h]
  _WORD Src[4]; // [esp+1Ch] [ebp-13Ch] BYREF
  UINT v27; // [esp+24h] [ebp-134h]
  char *v28; // [esp+28h] [ebp-130h]
  void *v29; // [esp+30h] [ebp-128h]
  int v30; // [esp+34h] [ebp-124h] BYREF
  UINT *v31; // [esp+38h] [ebp-120h]
  void *Memory; // [esp+3Ch] [ebp-11Ch]
  int v33; // [esp+40h] [ebp-118h]
  unsigned __int16 Buf1[128]; // [esp+44h] [ebp-114h] BYREF
  char Str1[132]; // [esp+144h] [ebp-14h] BYREF

  HIDWORD(v18) = Src;
  LODWORD(v18) = 0x83;
  v4 = _getptd() + 0x1D0;
  if ( !_expandlocale(Str, Str1, v18, &v30) )
    return 0;
  v6 = (int)&a2[4 * a3];
  if ( strcmp(Str1, *(const char **)(v6 + 0x48)) )
  {
    v33 = strlen(Str1) + 5;
    Memory = (void *)unknown_libname_72();
    if ( !Memory )
      return 0;
    v28 = *(char **)(v6 + 0x48);
    v31 = &a2[a3 + 3];
    v27 = *v31;
    LODWORD(v19) = 6;
    v29 = (char *)a2 + 6 * a3 + 0x24;
    memcpy(Dst, v29, v19);
    v25 = a2[1];
    if ( strcpy_s((char *)Memory + 4, v33 - 4, Str1) )
      _invoke_watson(0, v7, v8, v6, v4, (int)a2);
    v9 = v31;
    *(_DWORD *)(v6 + 0x48) = (char *)Memory + 4;
    *v9 = Src[0];
    LODWORD(v20) = 6;
    memcpy(v29, Src, v20);
    if ( a3 == 2 )
    {
      v33 = 0;
      a2[1] = v30;
      v10 = *(_DWORD *)(v4 + 0x20);
      v29 = *(void **)(v4 + 0x24);
      v11 = (int *)v4;
      while ( a2[1] != *v11 )
      {
        v12 = *v11;
        ++v33;
        *v11 = v10;
        v24 = v12;
        v13 = (void *)v11[1];
        v11[1] = (int)v29;
        v10 = v24;
        v11 += 2;
        v29 = v13;
        if ( v33 >= 5 )
          goto LABEL_14;
      }
      if ( v33 )
      {
        v14 = (_DWORD *)(v4 + 8 * v33);
        *(_DWORD *)v4 = *v14;
        *(_DWORD *)(v4 + 4) = v14[1];
        *v14 = v10;
        v14[1] = v29;
      }
LABEL_14:
      if ( v33 == 5 )
      {
        if ( __crtGetStringTypeA(0, 1u, &MultiByteStr, (char *)0x7F, Buf1, a2[1], a2[5], 1) )
        {
          for ( i = 0; i < 0x7F; ++i )
            Buf1[i] &= 0x1FFu;
          LODWORD(v21) = 0xFE;
          *(_DWORD *)(v4 + 4) = memcmp(Buf1, Buf2, v21) == 0;
        }
        else
        {
          *(_DWORD *)(v4 + 4) = 0;
        }
        *(_DWORD *)v4 = a2[1];
      }
      a2[0x2A] = *(_DWORD *)(v4 + 4);
    }
    if ( a3 == 1 )
      a2[2] = v30;
    if ( (*(&off_AA4868 + 3 * a3))() )
    {
      v22 = Memory;
      *(_DWORD *)(v6 + 0x48) = v28;
      free(v22);
      *v31 = v27;
      a2[1] = v25;
      return 0;
    }
    if ( v28 != "C" )
    {
      v16 = (void **)&a2[4 * a3 + 0x14];
      if ( !InterlockedDecrement((volatile LONG *)*v16) )
      {
        free(*v16);
        free(*(void **)(v6 + 0x54));
        *(_DWORD *)(v6 + 0x4C) = 0;
      }
    }
    v17 = Memory;
    *(_DWORD *)Memory = 1;
    a2[4 * a3 + 0x14] = (UINT)v17;
  }
  return *(_DWORD *)(v6 + 0x48);
}
