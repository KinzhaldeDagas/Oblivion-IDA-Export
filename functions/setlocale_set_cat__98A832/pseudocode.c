UINT __usercall _setlocale_set_cat@<eax>(char *Str@<ecx>, UINT *a2@<esi>, int a3)
{
  DWORD *v4; // edi
  UINT *v6; // ebx
  int v7; // edx
  int v8; // ecx
  UINT *v9; // ecx
  DWORD v10; // ecx
  DWORD *v11; // eax
  DWORD v12; // edx
  void *v13; // edx
  DWORD *v14; // eax
  unsigned int i; // eax
  void **v16; // edi
  void *v17; // eax
  rsize_t v18; // [esp-10h] [ebp-168h]
  size_t v19; // [esp-4h] [ebp-15Ch]
  void *v20; // [esp-4h] [ebp-15Ch]
  char Dst[8]; // [esp+8h] [ebp-150h] BYREF
  DWORD v22; // [esp+10h] [ebp-148h]
  UINT v23; // [esp+18h] [ebp-140h]
  _WORD Src[4]; // [esp+1Ch] [ebp-13Ch] BYREF
  UINT v25; // [esp+24h] [ebp-134h]
  char *v26; // [esp+28h] [ebp-130h]
  void *destination; // [esp+30h] [ebp-128h]
  int v28; // [esp+34h] [ebp-124h] BYREF
  UINT *v29; // [esp+38h] [ebp-120h]
  void *Memory; // [esp+3Ch] [ebp-11Ch]
  int v31; // [esp+40h] [ebp-118h]
  unsigned __int16 Buf1[128]; // [esp+44h] [ebp-114h] BYREF
  char Str1[132]; // [esp+144h] [ebp-14h] BYREF

  HIDWORD(v18) = Src; /*0x98a862*/
  LODWORD(v18) = 0x83; /*0x98a863*/
  v4 = _getptd() + 0x74; /*0x98a86d*/
  if ( !_expandlocale(Str, Str1, v18, &v28) ) /*0x98a873*/
    return 0; /*0x98a87d*/
  v6 = &a2[4 * a3]; /*0x98a88c*/
  if ( strcmp(Str1, (const char *)v6[0x12]) ) /*0x98a896*/
  {
    v31 = strlen(Str1) + 5; /*0x98a8b2*/
    Memory = unknown_libname_72(v31); /*0x98a8c1*/
    if ( !Memory ) /*0x98a8c7*/
      return 0; /*0x98a881*/
    v26 = (char *)v6[0x12]; /*0x98a8cf*/
    v29 = &a2[a3 + 3]; /*0x98a8df*/
    v25 = *v29; /*0x98a8e7*/
    destination = (char *)a2 + 6 * a3 + 0x24; /*0x98a8f3*/
    memcpy(Dst, destination, 6u); /*0x98a900*/
    v23 = a2[1]; /*0x98a912*/
    if ( strcpy_s((char *)Memory + 4, v31 - 4, Str1) ) /*0x98a926*/
      _invoke_watson(0, v7, v8, (int)v6, (int)v4, (int)a2); /*0x98a939*/
    v9 = v29; /*0x98a947*/
    v6[0x12] = (UINT)Memory + 4; /*0x98a950*/
    *v9 = Src[0]; /*0x98a95a*/
    memcpy(destination, Src, 6u); /*0x98a96b*/
    if ( a3 == 2 ) /*0x98a977*/
    {
      v31 = 0; /*0x98a983*/
      a2[1] = v28; /*0x98a98a*/
      v10 = v4[8]; /*0x98a990*/
      destination = (void *)v4[9]; /*0x98a993*/
      v11 = v4; /*0x98a999*/
      while ( a2[1] != *v11 ) /*0x98a9a0*/
      {
        v12 = *v11; /*0x98a9a2*/
        ++v31; /*0x98a9a4*/
        *v11 = v10; /*0x98a9aa*/
        v22 = v12; /*0x98a9b2*/
        v13 = (void *)v11[1]; /*0x98a9b8*/
        v11[1] = (DWORD)destination; /*0x98a9bb*/
        v10 = v22; /*0x98a9be*/
        v11 += 2; /*0x98a9c4*/
        destination = v13; /*0x98a9ce*/
        if ( v31 >= 5 ) /*0x98a9d4*/
          goto LABEL_14; /*0x98a9d4*/
      }
      if ( v31 ) /*0x98a9e0*/
      {
        v14 = &v4[2 * v31]; /*0x98a9e2*/
        *v4 = *v14; /*0x98a9e7*/
        v4[1] = v14[1]; /*0x98a9ec*/
        *v14 = v10; /*0x98a9ef*/
        v14[1] = (DWORD)destination; /*0x98a9f7*/
      }
LABEL_14:
      if ( v31 == 5 ) /*0x98aa01*/
      {
        if ( __crtGetStringTypeA(0, 1u, (CHAR *)&MultiByteStr, (char *)0x7F, Buf1, a2[1], a2[5], 1) ) /*0x98aa1d*/
        {
          for ( i = 0; i < 0x7F; ++i ) /*0x98aa29*/
            Buf1[i] &= 0x1FFu; /*0x98aa2b*/
          LODWORD(v19) = 0xFE; /*0x98aa3b*/
          v4[1] = memcmp(Buf1, Buf2, v19) == 0; /*0x98aa5a*/
        }
        else
        {
          v4[1] = 0; /*0x98aa5f*/
        }
        *v4 = a2[1]; /*0x98aa66*/
      }
      a2[0x2A] = v4[1]; /*0x98aa6b*/
    }
    if ( a3 == 1 ) /*0x98aa75*/
      a2[2] = v28; /*0x98aa7d*/
    if ( (*(&off_AA4868 + 3 * a3))() ) /*0x98aa87*/
    {
      v20 = Memory; /*0x98aa98*/
      v6[0x12] = (UINT)v26; /*0x98aa9e*/
      free(v20); /*0x98aaa1*/
      *v29 = v25; /*0x98aab3*/
      a2[1] = v23; /*0x98aabb*/
      return 0; /*0x98aabe*/
    }
    if ( v26 != "C" ) /*0x98aacd*/
    {
      v16 = (void **)&a2[4 * a3 + 0x14]; /*0x98aad8*/
      if ( !InterlockedDecrement((volatile LONG *)*v16) ) /*0x98aadd*/
      {
        free(*v16); /*0x98aae9*/
        free((void *)v6[0x15]); /*0x98aaf1*/
        v6[0x13] = 0; /*0x98aaf6*/
      }
    }
    v17 = Memory; /*0x98aaff*/
    *(_DWORD *)Memory = 1; /*0x98ab0b*/
    a2[4 * a3 + 0x14] = (UINT)v17; /*0x98ab11*/
  }
  return v6[0x12]; /*0x98ab17*/
}
