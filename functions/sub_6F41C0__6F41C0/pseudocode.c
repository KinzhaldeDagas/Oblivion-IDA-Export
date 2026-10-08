void __thiscall __noreturn sub_6F41C0(
        OB_stString28_010201A0 *this,
        int a2,
        OB_stString28_010201A0 *a3,
        unsigned int a4,
        OB_stString28_010201A0 *a5)
{
  char *heapData; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  char *v10; // edi
  int v11; // eax
  unsigned int *v12; // eax
  OB_stString28_010201A0 *v13; // ecx
  OB_stString28_010201A0 *v14; // ecx
  _DWORD v15[6]; // [esp+0h] [ebp-60h] BYREF
  OB_stString28_010201A0 *v16; // [esp+18h] [ebp-48h]
  unsigned int v17; // [esp+1Ch] [ebp-44h]
  char v18[4]; // [esp+20h] [ebp-40h] BYREF
  unsigned int v19; // [esp+24h] [ebp-3Ch]
  unsigned int v20; // [esp+38h] [ebp-28h]
  unsigned int v21; // [esp+40h] [ebp-20h]
  int v22; // [esp+44h] [ebp-1Ch]
  int v23; // [esp+48h] [ebp-18h]
  _DWORD *v24; // [esp+50h] [ebp-10h]
  int v25; // [esp+5Ch] [ebp-4h]

  v24 = v15; /*0x6f41eb*/
  v16 = this; /*0x6f41f7*/
  sub_6F2D30((int)v18, a5); /*0x6f41fa*/
  heapData = this->storage.heapData; /*0x6f41ff*/
  v7 = 0; /*0x6f4202*/
  v25 = 0; /*0x6f4206*/
  if ( heapData ) /*0x6f4209*/
    v7 = (*((_DWORD *)&this->storage.heapData + 2) - (int)heapData) / 0x2C; /*0x6f421f*/
  if ( a4 ) /*0x6f4226*/
  {
    if ( heapData ) /*0x6f422e*/
      v8 = (*((_DWORD *)&this->storage.heapData + 1) - (int)heapData) / 0x2C; /*0x6f4248*/
    else
      v8 = 0; /*0x6f4230*/
    if ( 0x5D1745D - v8 < a4 ) /*0x6f4253*/
      OB_stVector_ThrowLengthError_010201A0(v7); /*0x6f4255*/
    if ( heapData ) /*0x6f425c*/
      v9 = (*((_DWORD *)&this->storage.heapData + 1) - (int)heapData) / 0x2C; /*0x6f4276*/
    else
      v9 = 0; /*0x6f425e*/
    if ( v7 < a4 + v9 ) /*0x6f427c*/
    {
      if ( 0x5D1745D - (v7 >> 1) >= v7 ) /*0x6f428f*/
        v10 = (char *)((v7 >> 1) + v7); /*0x6f4295*/
      else
        v10 = 0; /*0x6f4291*/
      if ( heapData ) /*0x6f4299*/
        v11 = (*((_DWORD *)&this->storage.heapData + 1) - (int)heapData) / 0x2C; /*0x6f42b3*/
      else
        v11 = 0; /*0x6f429b*/
      if ( (unsigned int)v10 < a4 + v11 ) /*0x6f42b9*/
        v10 = (char *)(a4 + sub_6F1140(this)); /*0x6f42c4*/
      v12 = sub_556440(v10); /*0x6f42c9*/
      v13 = (OB_stString28_010201A0 *)this->storage.heapData; /*0x6f42ce*/
      LOBYTE(v17) = 0; /*0x6f42d1*/
      v15[4] = v12; /*0x6f42df*/
      v15[5] = v12; /*0x6f42e2*/
      LOBYTE(v25) = 1; /*0x6f42ea*/
      sub_6F3310(v13, a3, v12); /*0x6f42ee*/
    }
    v14 = *((OB_stString28_010201A0 **)&this->storage.heapData + 1); /*0x6f43a6*/
    v17 = (unsigned int)v14; /*0x6f43c3*/
    if ( ((char *)v14 - (char *)a3) / 0x2C < a4 ) /*0x6f43c6*/
    {
      v17 = 0x2C * a4; /*0x6f43d1*/
      sub_6F4160(a3, v14, &a3->allocatorState + 0xB * a4); /*0x6f43db*/
    }
    v16 = (OB_stString28_010201A0 *)((char *)v14 + 0xFFFFFFD4 * a4); /*0x6f445c*/
    sub_6F4160(v16, v14, &v14->allocatorState); /*0x6f445f*/
  }
  if ( v21 ) /*0x6f448a*/
    FormHeapFree(v21); /*0x6f448d*/
  v21 = 0; /*0x6f449b*/
  v22 = 0; /*0x6f449e*/
  v23 = 0; /*0x6f44a1*/
  if ( v20 >= 0x10 ) /*0x6f44a4*/
    FormHeapFree(v19); /*0x6f44aa*/
}
