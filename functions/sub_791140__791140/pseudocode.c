unsigned int __thiscall sub_791140(unsigned int *this, int a2, char *a3, unsigned int a4, int *a5)
{
  unsigned int result; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // edi
  _DWORD *v21; // ecx
  unsigned int v22; // edi
  _DWORD *v23; // [esp-20h] [ebp-58h]
  _DWORD *v24; // [esp-Ch] [ebp-44h]
  int v25; // [esp-8h] [ebp-40h]
  int v26; // [esp+0h] [ebp-38h] BYREF
  _DWORD v27[7]; // [esp+10h] [ebp-28h] BYREF
  int v28; // [esp+34h] [ebp-4h]
  char *v29; // [esp+48h] [ebp+10h]
  _DWORD *v30; // [esp+4Ch] [ebp+14h]
  _DWORD *v31; // [esp+4Ch] [ebp+14h]

  v27[6] = &v26;
  result = (unsigned int)a5;
  v7 = a5[1];
  v27[0] = *a5;
  v27[2] = a5[2];
  v8 = a5[4];
  v27[1] = v7;
  v9 = a5[3];
  v27[4] = v8;
  v10 = *(this + 1);
  v27[3] = v9;
  v27[5] = a5[5];
  if ( v10 )
  {
    result = 0x2AAAAAAB * (*(this + 3) - v10);
    v11 = (int)(*(this + 3) - v10) / 0x18;
  }
  else
  {
    v11 = 0;
  }
  if ( a4 )
  {
    if ( v10 )
      v12 = (int)(*(this + 2) - v10) / 0x18;
    else
      v12 = 0;
    if ( 0xAAAAAAA - v12 < a4 )
      sub_790B90(a4);
    if ( v10 )
      v13 = (int)(*(this + 2) - v10) / 0x18;
    else
      v13 = 0;
    if ( v11 >= a4 + v13 )
    {
      v21 = (_DWORD *)*(this + 2);
      v31 = v21;
      if ( ((char *)v21 - a3) / 0x18 >= a4 )
      {
        v22 = 0x18 * a4;
        v29 = (char *)&v21[0xFFFFFFFA * a4];
        *(this + 2) = (unsigned int)sub_7849C0(v29, v21, v21);
        sub_7905A0(a3, v29, v31);
        return (unsigned int)sub_784140(a3, &a3[v22], v27);
      }
      else
      {
        sub_7849C0(a3, v21, &a3[0x18 * a4]);
        v25 = a4 - (int)(*(this + 2) - (_DWORD)a3) / 0x18;
        v24 = (_DWORD *)*(this + 2);
        v28 = 2;
        sub_790A70(v24, v25, v27);
        *(this + 2) += 0x18 * a4;
        return (unsigned int)sub_784140(a3, (_DWORD *)(*(this + 2) - 0x18 * a4), v27);
      }
    }
    else
    {
      if ( 0xAAAAAAA - (v11 >> 1) >= v11 )
        v14 = (v11 >> 1) + v11;
      else
        v14 = 0;
      if ( v10 )
        v15 = (int)(*(this + 2) - v10) / 0x18;
      else
        v15 = 0;
      if ( v14 < a4 + v15 )
        v14 = a4 + sub_783FE0(this);
      v30 = (_DWORD *)sub_78FB00((char *)v14);
      v23 = (_DWORD *)*(this + 1);
      v28 = 0;
      v16 = sub_7847F0(v23, a3, v30);
      v17 = sub_790A70(v16, a4, v27);
      sub_7847F0(a3, (_DWORD *)*(this + 2), v17);
      v18 = *(this + 1);
      if ( v18 )
        v19 = (int)(*(this + 2) - v18) / 0x18;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
        FormHeapFree(*(this + 1));
      *(this + 3) = (unsigned int)&v30[6 * v14];
      *(this + 2) = (unsigned int)&v30[6 * v20];
      *(this + 1) = (unsigned int)v30;
      return (unsigned int)v30;
    }
  }
  return result;
}
