int __thiscall sub_75A250(_DWORD *this, int a2, int a3)
{
  int result; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // edx
  int v6; // edi
  unsigned __int16 v7; // cx
  int v8; // eax
  int v9; // ebp
  char v10; // bl
  float *v11; // edi
  int v12; // ebx
  int v13; // ecx
  int v14; // edx
  int v15; // [esp+28h] [ebp-24h] BYREF
  _DWORD *v16; // [esp+2Ch] [ebp-20h]
  char v17[4]; // [esp+30h] [ebp-1Ch]
  int v18; // [esp+34h] [ebp-18h]
  int v19; // [esp+38h] [ebp-14h]
  int v20[4]; // [esp+3Ch] [ebp-10h] BYREF
  int v21; // [esp+54h] [ebp+8h]

  result = a3; /*0x75a253*/
  v4 = *(_DWORD **)(a3 + 0x24); /*0x75a258*/
  v5 = this; /*0x75a25d*/
  v6 = *(_DWORD *)(a3 + 0x5C); /*0x75a260*/
  v16 = this; /*0x75a263*/
  if ( v4 ) /*0x75a267*/
  {
    v7 = *(_WORD *)(a3 + 0x48); /*0x75a26d*/
    v8 = v5[6]; /*0x75a274*/
    *(float *)&v15 = 0.0; /*0x75a277*/
    v9 = *(_DWORD *)(v8 + 8); /*0x75a284*/
    v18 = *(_DWORD *)(v8 + 0x10); /*0x75a287*/
    v10 = *(_BYTE *)(v8 + 0x14); /*0x75a28b*/
    result = *(_DWORD *)(v8 + 0xC); /*0x75a28e*/
    v17[0] = v10; /*0x75a291*/
    v19 = result; /*0x75a295*/
    if ( v7 ) /*0x75a299*/
    {
      v11 = (float *)(v6 + 0x10); /*0x75a29f*/
      v12 = v7; /*0x75a2a2*/
      while ( 1 ) /*0x75a2b0*/
      {
        *(float *)&v21 = v11[0xFFFFFFFF] / *v11; /*0x75a2b0*/
        v15 = v5[7]; /*0x75a2b7*/
        if ( *(float *)&v15 >= (double)*(float *)&v21 ) /*0x75a2cc*/
          v21 = v15; /*0x75a2ce*/
        v15 = v5[8]; /*0x75a2d9*/
        if ( *(float *)&v15 <= (double)*(float *)&v21 ) /*0x75a2ee*/
          v21 = v15; /*0x75a2f0*/
        *(float *)&v15 = 0.0; /*0x75a31a*/
        sub_6BE040((float *)v20, *(float *)&v21, v19, v18, v9, &v15, v17[0]); /*0x75a322*/
        v13 = v20[1]; /*0x75a32b*/
        v14 = v20[2]; /*0x75a32f*/
        *v4 = v20[0]; /*0x75a333*/
        result = v20[3]; /*0x75a335*/
        v4[1] = v13; /*0x75a339*/
        v4[2] = v14; /*0x75a33c*/
        v4[3] = result; /*0x75a33f*/
        v4 += 4; /*0x75a345*/
        v11 += 7; /*0x75a348*/
        if ( !--v12 ) /*0x75a34e*/
          break; /*0x75a34e*/
        v5 = v16; /*0x75a2a7*/
      }
    }
  }
  return result; /*0x75a356*/
}
