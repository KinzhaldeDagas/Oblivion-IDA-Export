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

  v12 = a10;
  v13 = a9;
  v14 = a8;
  v15 = this;
  sub_979EF0(this, a2, a3, a4, a6, a7, a8, a9, a10);
  if ( v13 - v14 < a12 )
  {
LABEL_17:
    v15[0x20] = 0.0;
    v15[0x21] = 0.0;
    return 0;
  }
  else
  {
    v16 = a11;
    while ( 1 )
    {
      sub_9797B0(v15, a7, v14, a9, v12, &a10, &a8, v16);
      if ( v14 >= a10 )
      {
        if ( v14 == a10 )
        {
          v19 = (float *)FormHeapAlloc(0x98u);
          if ( v19 )
            v20 = sub_977530(v19, a2, a3, a4, a5, *(_WORD *)(v16 + 4 * v14));
          else
            v20 = 0;
          *((_DWORD *)v15 + 0x20) = v20;
        }
      }
      else
      {
        v17 = (float *)FormHeapAlloc(0x8Cu);
        v18 = 0;
        if ( v17 )
        {
          *(_DWORD *)v17 = &NiOBBNode::`vftable';
          v17[0x1F] = 0.0;
          v17[0x20] = 0.0;
          v17[0x21] = 0.0;
          v17[0x22] = 0.0;
          v18 = v17;
        }
        v27 = a12;
        v25 = a10;
        *((_DWORD *)v15 + 0x20) = v18;
        sub_97A9D0(v18, a2, a3, a4, a5, a6, a7, v14, v25, v16, v12, v27);
      }
      v14 = a8;
      result = (float *)a9;
      if ( a8 >= a9 )
        break;
      v22 = FormHeapAlloc(0x8Cu);
      if ( v22 )
      {
        *(_DWORD *)v22 = &NiOBBNode::`vftable';
        *(_DWORD *)(v22 + 0x7C) = 0;
        *(_DWORD *)(v22 + 0x80) = 0;
        *(_DWORD *)(v22 + 0x84) = 0;
        *(_DWORD *)(v22 + 0x88) = 0;
      }
      else
      {
        v22 = 0;
      }
      v23 = v12;
      v12 = v16;
      v28 = v16;
      v26 = a9;
      *((_DWORD *)v15 + 0x21) = v22;
      v15 = (float *)v22;
      v16 = v23;
      sub_979EF0((float *)v22, a2, a3, a4, a6, a7, v14, v26, v28);
      if ( a9 - a8 < a12 )
        goto LABEL_17;
    }
    if ( a8 == a9 )
    {
      v24 = (float *)FormHeapAlloc(0x98u);
      if ( v24 )
      {
        result = sub_977530(v24, a2, a3, a4, a5, *(_WORD *)(v16 + 4 * a9));
        *((_DWORD *)v15 + 0x21) = result;
      }
      else
      {
        v15[0x21] = 0.0;
        return 0;
      }
    }
  }
  return result;
}
