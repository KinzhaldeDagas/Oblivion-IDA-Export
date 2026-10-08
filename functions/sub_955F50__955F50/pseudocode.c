int __thiscall sub_955F50(unsigned int **this, int a2, int a3, int a4)
{
  int result; // eax
  _BYTE *v6; // esi
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  bool v11; // zf
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // esi
  int v16; // edx
  _DWORD *v17; // [esp-4h] [ebp-94h]
  int v18; // [esp-4h] [ebp-94h]
  char v19; // [esp+13h] [ebp-7Dh] BYREF
  int v20; // [esp+14h] [ebp-7Ch]
  _DWORD *v21; // [esp+18h] [ebp-78h]
  unsigned int v22; // [esp+1Ch] [ebp-74h]
  signed int v23; // [esp+20h] [ebp-70h]
  int v24; // [esp+24h] [ebp-6Ch] BYREF
  int v25; // [esp+28h] [ebp-68h] BYREF
  int v26; // [esp+2Ch] [ebp-64h]
  int v27; // [esp+30h] [ebp-60h]
  int v28[5]; // [esp+34h] [ebp-5Ch] BYREF
  int v29[18]; // [esp+48h] [ebp-48h] BYREF

  if ( *(_BYTE *)(a2 + 0x38) ) /*0x955f62*/
    return 3; /*0x955f76*/
  v6 = (_BYTE *)a4; /*0x955f79*/
  if ( *(_DWORD *)a4 > (int)*(this + 5) || *(_BYTE *)(a4 + 4) || *(_DWORD *)a4 % (int)*(this + 0x18) ) /*0x955f93*/
  {
    if ( *(_BYTE *)(a2 + 4) ) /*0x956028*/
    {
      sub_954800((int *)a2); /*0x956032*/
      if ( *(int *)(a2 + 8) < 0x16 || *(_DWORD *)a4 > (int)*(this + 5) ) /*0x956042*/
      {
        *(this + 9) = (unsigned int *)((char *)*(this + 9) + 1); /*0x95604f*/
        v22 = (*(this + 4))[3]; /*0x95605d*/
        sub_954AF0(this, a2, a3, a4); /*0x956061*/
        sub_9549C0(this, a2, a4); /*0x95606a*/
        v9 = v22; /*0x956075*/
        *(_DWORD *)(a2 + 0x5C) = (*(this + 4))[3]; /*0x956079*/
        v10 = (*(this + 4))[3]; /*0x95607f*/
        *(_BYTE *)(a2 + 0x38) = 1; /*0x956082*/
        return v10 - v9; /*0x95608e*/
      }
    }
    else
    {
      v11 = *(_BYTE *)(a2 + 0x3C) == 1; /*0x956091*/
      LOBYTE(v28[0]) = 0; /*0x956095*/
      if ( v11 ) /*0x95609a*/
        sub_954DB0((char *)a3, (char *)a4, (int)v28); /*0x9560a8*/
      sub_954860(a2, a3, a4); /*0x9560b5*/
      v23 = sub_9553B0(*(float **)(a2 + 0xB8)); /*0x9560cd*/
      sub_9558D0((float *)this, a2, (_DWORD *)a4, &v24, &v25); /*0x9560da*/
      v22 = 0xFFFFFFFF; /*0x9560e2*/
      v20 = 0xFFFFFFFF; /*0x9560e6*/
      v21 = *(_DWORD **)(a2 + 0xF0); /*0x9560f2*/
      if ( v21 ) /*0x9560f6*/
      {
        sub_954D20(v29, (_DWORD *)a4, v21, (int)(this + 0xC)); /*0x956102*/
        v20 = sub_955F50(this, (int)v21, a4, (int)v29); /*0x95611b*/
        if ( v20 >= 0 ) /*0x95611f*/
        {
          v22 = v21[0x17]; /*0x956128*/
          sub_9547B0(this, (int)v21); /*0x95612f*/
        }
      }
      v21 = *(_DWORD **)(a2 + 0xEC); /*0x95613c*/
      if ( v21 ) /*0x956140*/
      {
        sub_954D20(v29, (_DWORD *)a4, v21, (int)(this + 0xC)); /*0x956150*/
        v27 = sub_955F50(this, (int)v21, a4, (int)v29); /*0x956169*/
        if ( v27 >= 0 ) /*0x95616d*/
        {
          v17 = v21; /*0x95617a*/
          v21 = (_DWORD *)v21[0x17]; /*0x95617d*/
          sub_9547B0(this, (int)v17); /*0x956181*/
          if ( v20 >= 0 ) /*0x95618c*/
          {
            if ( *sub_954830(this, &v19, a2, (_DWORD *)a4) ) /*0x9561a0*/
            {
              sub_954800((int *)a2); /*0x9561ac*/
              v12 = (int)*(this + 4); /*0x9561b4*/
              v18 = v22; /*0x9561bc*/
              v13 = v24; /*0x9561bd*/
              *(this + 9) = (unsigned int *)((char *)*(this + 9) + 1); /*0x9561c1*/
              v26 = *(_DWORD *)(v12 + 0xC); /*0x9561d0*/
              sub_955240(this, v25, v13, v23, (int)v21, v18); /*0x9561dd*/
              v14 = *(_DWORD *)(a4 + 0x34) - *(_DWORD *)(a3 + 0x34); /*0x9561e8*/
              if ( v14 ) /*0x9561eb*/
                sub_954980(this, v14); /*0x9561f0*/
              sub_954AA0(this, (_DWORD *)a2, a3, a4); /*0x9561fd*/
              sub_9549C0(this, a2, a4); /*0x956206*/
              if ( LOBYTE(v28[0]) ) /*0x956211*/
                sub_954940(this, v28); /*0x95621a*/
              v15 = v26; /*0x956225*/
              v16 = v27; /*0x956229*/
              *(_DWORD *)(a2 + 0x5C) = (*(this + 4))[3]; /*0x95622d*/
              *(_BYTE *)(a2 + 0x38) = 1; /*0x956230*/
              return v20 + v16 + (*(this + 4))[3] - v15; /*0x95624a*/
            }
          }
        }
      }
    }
    return 0xFFFFFFFF; /*0x95624f*/
  }
  *(_BYTE *)(a4 + 4) = 1; /*0x955f9e*/
  v21 = *(this + 5); /*0x955fa5*/
  result = 0xFFFFFFFF; /*0x955fac*/
  if ( !*(_BYTE *)(a2 + 0x38) ) /*0x955fa9*/
  {
    while ( 1 ) /*0x955fc3*/
    {
      v7 = (*(this + 4))[3]; /*0x955fc3*/
      qmemcpy(v29, v6, sizeof(v29)); /*0x955fd2*/
      v22 = v7; /*0x955fe0*/
      result = sub_955F50(this, a2, a3, (int)v29); /*0x955fe4*/
      if ( (int)*(this + 9) > (int)*(this + 8) ) /*0x955fef*/
        break; /*0x955fef*/
      if ( v22 == (*(this + 4))[3] ) /*0x955ffb*/
      {
        v8 = (int)*(this + 5); /*0x955ffd*/
        if ( v8 < 0 ) /*0x956002*/
          break; /*0x956002*/
        *(this + 5) = (unsigned int *)(v8 - (_DWORD)*(this + 0x18)); /*0x956007*/
      }
      if ( *(_BYTE *)(a2 + 0x38) ) /*0x95600a*/
        break; /*0x95600a*/
      v6 = (_BYTE *)a4; /*0x955fb5*/
    }
    v6 = (_BYTE *)a4; /*0x956011*/
  }
  *(this + 5) = v21; /*0x956018*/
  v6[4] = 0; /*0x95601b*/
  return result; /*0x955f70*/
}
