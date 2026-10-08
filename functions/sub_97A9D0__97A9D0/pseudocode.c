float *__thiscall sub_97A9D0(
        float *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        signed int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // ebx
  signed int v13; // ebp
  int v14; // edi
  float *v15; // esi
  int v16; // ebp
  float *v17; // eax
  float *v18; // ecx
  float *v19; // eax
  float *v20; // eax
  float *result; // eax
  int v22; // eax
  int v23; // ecx
  float *v24; // eax
  signed int v25; // [esp-10h] [ebp-20h]
  signed int v26; // [esp-8h] [ebp-18h]
  int v27; // [esp-4h] [ebp-14h]
  int v28; // [esp-4h] [ebp-14h]

  v12 = a10; /*0x97a9d9*/
  v13 = a9; /*0x97a9de*/
  v14 = a8; /*0x97a9e4*/
  v15 = this; /*0x97a9f0*/
  sub_979EF0(this, a2, a3, a4, a6, a7, a8, a9, a10); /*0x97aa00*/
  if ( v13 - v14 < a12 ) /*0x97aa0b*/
  {
LABEL_17:
    v15[0x20] = 0.0; /*0x97ab6a*/
    v15[0x21] = 0.0; /*0x97ab73*/
    return 0; /*0x97ab6a*/
  }
  else
  {
    v16 = a11; /*0x97aa11*/
    while ( 1 ) /*0x97aa2e*/
    {
      sub_9797B0(v15, a7, v14, a9, v12, &a10, &a8, v16); /*0x97aa2e*/
      if ( v14 >= a10 ) /*0x97aa39*/
      {
        if ( v14 == a10 ) /*0x97aaa3*/
        {
          v19 = (float *)FormHeapAlloc(0x98u); /*0x97aaaa*/
          if ( v19 ) /*0x97aab4*/
            v20 = sub_977530(v19, a2, a3, a4, a5, *(_WORD *)(v16 + 4 * v14)); /*0x97aad2*/
          else
            v20 = 0; /*0x97aad9*/
          *((_DWORD *)v15 + 0x20) = v20; /*0x97aadb*/
        }
      }
      else
      {
        v17 = (float *)FormHeapAlloc(0x8Cu); /*0x97aa40*/
        v18 = 0; /*0x97aa45*/
        if ( v17 ) /*0x97aa4c*/
        {
          *(_DWORD *)v17 = &NiOBBNode::`vftable'; /*0x97aa4e*/
          v17[0x1F] = 0.0; /*0x97aa54*/
          v17[0x20] = 0.0; /*0x97aa57*/
          v17[0x21] = 0.0; /*0x97aa5d*/
          v17[0x22] = 0.0; /*0x97aa63*/
          v18 = v17; /*0x97aa69*/
        }
        v27 = a12; /*0x97aa73*/
        v25 = a10; /*0x97aa7a*/
        *((_DWORD *)v15 + 0x20) = v18; /*0x97aa96*/
        sub_97A9D0(v18, a2, a3, a4, a5, a6, a7, v14, v25, v16, v12, v27); /*0x97aa9c*/
      }
      v14 = a8; /*0x97aae1*/
      result = (float *)a9; /*0x97aae5*/
      if ( a8 >= a9 ) /*0x97aaeb*/
        break; /*0x97aaeb*/
      v22 = FormHeapAlloc(0x8Cu); /*0x97aaf6*/
      if ( v22 ) /*0x97ab02*/
      {
        *(_DWORD *)v22 = &NiOBBNode::`vftable'; /*0x97ab04*/
        *(_DWORD *)(v22 + 0x7C) = 0; /*0x97ab0a*/
        *(_DWORD *)(v22 + 0x80) = 0; /*0x97ab0d*/
        *(_DWORD *)(v22 + 0x84) = 0; /*0x97ab13*/
        *(_DWORD *)(v22 + 0x88) = 0; /*0x97ab19*/
      }
      else
      {
        v22 = 0; /*0x97ab21*/
      }
      v23 = v12; /*0x97ab27*/
      v12 = v16; /*0x97ab29*/
      v28 = v16; /*0x97ab2b*/
      v26 = a9; /*0x97ab2c*/
      *((_DWORD *)v15 + 0x21) = v22; /*0x97ab31*/
      v15 = (float *)v22; /*0x97ab38*/
      v16 = v23; /*0x97ab43*/
      sub_979EF0((float *)v22, a2, a3, a4, a6, a7, v14, v26, v28); /*0x97ab53*/
      if ( a9 - a8 < a12 ) /*0x97ab64*/
        goto LABEL_17; /*0x97ab64*/
    }
    if ( a8 == a9 ) /*0x97ab7f*/
    {
      v24 = (float *)FormHeapAlloc(0x98u); /*0x97ab86*/
      if ( v24 ) /*0x97ab90*/
      {
        result = sub_977530(v24, a2, a3, a4, a5, *(_WORD *)(v16 + 4 * a9)); /*0x97abb2*/
        *((_DWORD *)v15 + 0x21) = result; /*0x97abb8*/
      }
      else
      {
        v15[0x21] = 0.0; /*0x97abc6*/
        return 0; /*0x97abc4*/
      }
    }
  }
  return result; /*0x97ab6c*/
}
