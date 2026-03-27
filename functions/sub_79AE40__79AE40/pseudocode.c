void __thiscall sub_79AE40(unsigned int *this, int a2, char *a3, unsigned int a4, const void *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  char *v13; // eax
  char *v14; // eax
  int v15; // eax
  int v16; // esi
  char *v17; // ecx
  unsigned int v18; // eax
  char *v19; // esi
  char *v20; // [esp-20h] [ebp-78h]
  char *v21; // [esp-Ch] [ebp-64h]
  int v22; // [esp-8h] [ebp-60h]
  int v23; // [esp+0h] [ebp-58h] BYREF
  char v24[56]; // [esp+10h] [ebp-48h] BYREF
  int *v25; // [esp+48h] [ebp-10h]
  int v26; // [esp+54h] [ebp-4h]
  int v27; // [esp+68h] [ebp+10h]
  char *v28; // [esp+6Ch] [ebp+14h]
  unsigned int v29; // [esp+6Ch] [ebp+14h]

  v25 = &v23;
  qmemcpy(v24, a5, sizeof(v24));
  v6 = *(this + 1);
  if ( v6 )
    v7 = (int)(*(this + 3) - v6) / 0x38;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (int)(*(this + 2) - *(this + 1)) / 0x38;
    else
      v9 = 0;
    if ( 0x4924924 - v9 < a4 )
      sub_790B90(v7);
    if ( *(this + 1) )
      v10 = (int)(*(this + 2) - *(this + 1)) / 0x38;
    else
      v10 = 0;
    if ( v7 >= a4 + v10 )
    {
      v17 = (char *)*(this + 2);
      v27 = (int)v17;
      if ( (v17 - a3) / 0x38 >= a4 )
      {
        v18 = 0x38 * a4;
        v19 = &v17[0xFFFFFFC8 * a4];
        v29 = v18;
        *(this + 2) = (unsigned int)sub_79AAD0(&v17[-v18], v17, v17);
        sub_79AA70(a3, v19, v27);
        sub_79A9E0(a3, &a3[v29], v24);
      }
      else
      {
        sub_79AAD0(a3, v17, &a3[0x38 * a4]);
        v22 = a4 - (int)(*(this + 2) - (_DWORD)a3) / 0x38;
        v21 = (char *)*(this + 2);
        v26 = 2;
        sub_79AB30(v21, v22, v24);
        *(this + 2) += 0x38 * a4;
        sub_79A9E0(a3, (char *)(*(this + 2) - 0x38 * a4), v24);
      }
    }
    else
    {
      if ( 0x4924924 - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( *(this + 1) )
        v12 = (int)(*(this + 2) - *(this + 1)) / 0x38;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
        v11 = a4 + sub_799EE0(this);
      v28 = (char *)sub_799F30((char *)v11);
      v20 = (char *)*(this + 1);
      v26 = 0;
      v13 = sub_79A9B0(v20, a3, v28);
      v14 = sub_79AB30(v13, a4, v24);
      sub_79A9B0(a3, (char *)*(this + 2), v14);
      v15 = *(this + 1);
      if ( v15 )
        v15 = (int)(*(this + 2) - v15) / 0x38;
      v16 = v15 + a4;
      if ( *(this + 1) )
        FormHeapFree(*(this + 1));
      *(this + 3) = (unsigned int)&v28[0x38 * v11];
      *(this + 2) = (unsigned int)&v28[0x38 * v16];
      *(this + 1) = (unsigned int)v28;
    }
  }
}
