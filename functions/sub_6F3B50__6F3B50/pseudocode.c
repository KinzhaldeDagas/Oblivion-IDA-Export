void __thiscall __noreturn sub_6F3B50(_DWORD *this, int a2, char *a3, unsigned int a4, int *a5)
{
  int v5; // edx
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  char *v13; // edi
  int v14; // eax
  unsigned int *v15; // eax
  _DWORD *v16; // ecx
  char *v17; // ecx
  _DWORD v18[6]; // [esp+0h] [ebp-60h] BYREF
  char *v19; // [esp+18h] [ebp-48h]
  unsigned int v20; // [esp+1Ch] [ebp-44h]
  int v21; // [esp+20h] [ebp-40h]
  int v22; // [esp+24h] [ebp-3Ch]
  int v23; // [esp+28h] [ebp-38h]
  int v24; // [esp+2Ch] [ebp-34h]
  OB_stString28_010201A0 v25; // [esp+30h] [ebp-30h] BYREF
  _DWORD *v26; // [esp+50h] [ebp-10h]
  int v27; // [esp+5Ch] [ebp-4h]

  v26 = v18; /*0x6f3b7b*/
  v5 = a5[1]; /*0x6f3b81*/
  v21 = *a5; /*0x6f3b88*/
  v7 = a5[2]; /*0x6f3b8b*/
  v22 = v5; /*0x6f3b90*/
  v8 = a5[3]; /*0x6f3b93*/
  v9 = 0; /*0x6f3b96*/
  v23 = v7; /*0x6f3b9c*/
  v19 = (char *)this; /*0x6f3ba3*/
  v24 = v8; /*0x6f3ba6*/
  v25.capacity = 0xF; /*0x6f3ba9*/
  v25.size = 0; /*0x6f3bb0*/
  v25.storage.inlineData[0] = 0; /*0x6f3bb3*/
  OB_stString28_AssignSubstring_010201A0(&v25, (const OB_stString28_010201A0 *)(a5 + 4), 0, 0xFFFFFFFF); /*0x6f3bb7*/
  v10 = *(this + 1); /*0x6f3bbc*/
  v27 = 0; /*0x6f3bc1*/
  if ( v10 ) /*0x6f3bc4*/
    v9 = (*(this + 3) - v10) / 0x2C; /*0x6f3bda*/
  if ( a4 ) /*0x6f3be1*/
  {
    if ( v10 ) /*0x6f3be9*/
      v11 = (*(this + 2) - v10) / 0x2C; /*0x6f3c03*/
    else
      v11 = 0; /*0x6f3beb*/
    if ( 0x5D1745D - v11 < a4 ) /*0x6f3c0e*/
      OB_stVector_ThrowLengthError_010201A0(v9); /*0x6f3c10*/
    if ( v10 ) /*0x6f3c17*/
      v12 = (*(this + 2) - v10) / 0x2C; /*0x6f3c31*/
    else
      v12 = 0; /*0x6f3c19*/
    if ( v9 < a4 + v12 ) /*0x6f3c37*/
    {
      if ( 0x5D1745D - (v9 >> 1) >= v9 ) /*0x6f3c4a*/
        v13 = (char *)((v9 >> 1) + v9); /*0x6f3c50*/
      else
        v13 = 0; /*0x6f3c4c*/
      if ( v10 ) /*0x6f3c54*/
        v14 = (*(this + 2) - v10) / 0x2C; /*0x6f3c6e*/
      else
        v14 = 0; /*0x6f3c56*/
      if ( (unsigned int)v13 < a4 + v14 ) /*0x6f3c74*/
        v13 = (char *)(a4 + sub_6F1140(this)); /*0x6f3c7f*/
      v15 = sub_556440(v13); /*0x6f3c84*/
      v16 = (_DWORD *)*(this + 1); /*0x6f3c89*/
      LOBYTE(v20) = 0; /*0x6f3c8c*/
      v18[4] = v15; /*0x6f3c9a*/
      v18[5] = v15; /*0x6f3c9d*/
      LOBYTE(v27) = 1; /*0x6f3ca5*/
      sub_6F18A0(v16, a3, v15); /*0x6f3ca9*/
    }
    v17 = (char *)*(this + 2); /*0x6f3d61*/
    v20 = (unsigned int)v17; /*0x6f3d7e*/
    if ( (v17 - a3) / 0x2C < a4 ) /*0x6f3d81*/
    {
      v20 = 0x2C * a4; /*0x6f3d8c*/
      sub_6F3610(this, a3, v17, (unsigned int *)&a3[0x2C * a4]); /*0x6f3d96*/
    }
    v19 = &v17[0xFFFFFFD4 * a4]; /*0x6f3e17*/
    sub_6F3610(this, v19, v17, (unsigned int *)v17); /*0x6f3e1a*/
  }
  if ( v25.capacity >= 0x10 ) /*0x6f3e44*/
    FormHeapFree((unsigned int)v25.storage.heapData); /*0x6f3e4a*/
}
