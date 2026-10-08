int __thiscall sub_8DB5C0(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // edx
  int i; // eax
  int v12; // edx
  int v13; // edi
  int j; // eax
  int v15; // esi
  double v16; // st7
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD v22[7]; // [esp+10h] [ebp-28h] BYREF
  int v23; // [esp+2Ch] [ebp-Ch]
  _DWORD *v24; // [esp+30h] [ebp-8h]
  int v25; // [esp+34h] [ebp-4h]
  float v26; // [esp+3Ch] [ebp+4h]
  float v27; // [esp+3Ch] [ebp+4h]

  v10 = *(_DWORD *)(a2 + 0xC); /*0x8db5cb*/
  for ( i = a2; v10; v10 = *(_DWORD *)(v10 + 0xC) ) /*0x8db5d4*/
    i = v10; /*0x8db5d6*/
  v12 = *(_DWORD *)(a3 + 0xC); /*0x8db5e6*/
  v13 = i + *(_DWORD *)(i + 0x10); /*0x8db5e9*/
  for ( j = a3; v12; v12 = *(_DWORD *)(v12 + 0xC) ) /*0x8db5ef*/
    j = v12; /*0x8db5f1*/
  v15 = *(_DWORD *)(j + 0x10); /*0x8db5fa*/
  v16 = *(float *)(v15 + j + 0x5C); /*0x8db5fd*/
  v17 = j + v15; /*0x8db601*/
  v26 = sqrt(v16 * *(float *)(v13 + 0x5C)) * flt_A3F458; /*0x8db60e*/
  *(_WORD *)(a8 + 4) = (int)v26; /*0x8db623*/
  v27 = sqrt(*(float *)(v17 + 0x60) * *(float *)(v13 + 0x60)) * flt_A2FFE8; /*0x8db635*/
  *(_BYTE *)(a8 + 6) = (int)v27; /*0x8db645*/
  v22[5] = a8; /*0x8db64c*/
  v22[0] = a2; /*0x8db654*/
  v22[4] = a5; /*0x8db65a*/
  v22[6] = a7; /*0x8db662*/
  v18 = *(this + 2); /*0x8db666*/
  v22[2] = 0; /*0x8db669*/
  v23 = 0; /*0x8db66d*/
  v22[1] = a3; /*0x8db677*/
  v24 = this; /*0x8db67b*/
  v25 = a6; /*0x8db67f*/
  sub_8DC800(v18, v18, (int)v22); /*0x8db683*/
  v19 = *(_DWORD *)(v13 + 0x98); /*0x8db688*/
  if ( v19 ) /*0x8db693*/
    sub_8DBF80(v19, v13, (int)v22); /*0x8db69b*/
  v20 = *(_DWORD *)(v17 + 0x98); /*0x8db6a3*/
  if ( v20 ) /*0x8db6ab*/
    sub_8DBF80(v20, v17, (int)v22); /*0x8db6b3*/
  return v23; /*0x8db6bf*/
}
