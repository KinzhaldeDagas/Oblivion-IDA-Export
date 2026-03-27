_DWORD *__thiscall sub_7A8A40(unsigned int *this, int a2, char *a3, unsigned int a4, int *a5)
{
  int v6; // edx
  _DWORD *result; // eax
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // ebx
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  char *v19; // ebx
  _DWORD *v20; // [esp-20h] [ebp-4Ch]
  _DWORD *v21; // [esp-Ch] [ebp-38h]
  int v22; // [esp-8h] [ebp-34h]
  int v23; // [esp+0h] [ebp-2Ch] BYREF
  _DWORD v24[4]; // [esp+10h] [ebp-1Ch] BYREF
  int v25; // [esp+28h] [ebp-4h]
  int v26; // [esp+3Ch] [ebp+10h]
  char *v27; // [esp+3Ch] [ebp+10h]
  unsigned int v28; // [esp+40h] [ebp+14h]

  v24[3] = &v23;
  v6 = a5[1];
  result = (_DWORD *)*(this + 1);
  v24[0] = *a5;
  v24[1] = v6;
  if ( result )
    v8 = (int)(*(this + 3) - (_DWORD)result) >> 3;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( result )
      v9 = (int)(*(this + 2) - (_DWORD)result) >> 3;
    else
      v9 = 0;
    if ( 0x1FFFFFFF - v9 < a4 )
      sub_790B90(v8);
    if ( result )
      v10 = (int)(*(this + 2) - (_DWORD)result) >> 3;
    else
      v10 = 0;
    if ( v8 >= a4 + v10 )
    {
      v19 = (char *)*(this + 2);
      if ( (v19 - a3) >> 3 >= a4 )
      {
        v28 = 8 * a4;
        v27 = &v19[0xFFFFFFF8 * a4];
        *(this + 2) = (unsigned int)sub_7A88D0(v27, v19, (_DWORD *)*(this + 2));
        sub_7A8750((int)a3, (int)v27, (int)v19);
        return sub_7A86F0(a3, &a3[v28], v24);
      }
      else
      {
        sub_7A88D0(a3, v19, &a3[8 * a4]);
        v22 = a4 - ((int)(*(this + 2) - (_DWORD)a3) >> 3);
        v21 = (_DWORD *)*(this + 2);
        v25 = 2;
        sub_7A8790(v21, v22, v24);
        *(this + 2) += 8 * a4;
        return sub_7A86F0(a3, (_DWORD *)(*(this + 2) - 8 * a4), v24);
      }
    }
    else
    {
      if ( 0x1FFFFFFF - (v8 >> 1) >= v8 )
        v11 = (v8 >> 1) + v8;
      else
        v11 = 0;
      if ( result )
        v12 = (int)(*(this + 2) - (_DWORD)result) >> 3;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
      {
        if ( result )
          v13 = (int)(*(this + 2) - (_DWORD)result) >> 3;
        else
          v13 = 0;
        v11 = v13 + a4;
      }
      v14 = (_DWORD *)sub_7A8660((char *)v11);
      v20 = (_DWORD *)*(this + 1);
      v24[2] = v14;
      v25 = 0;
      v15 = sub_7A86C0(v20, a3, v14);
      v16 = sub_7A8790(v15, a4, v24);
      sub_7A86C0(a3, (_DWORD *)*(this + 2), v16);
      v17 = *(this + 1);
      if ( v17 )
        v18 = (int)(*(this + 2) - v17) >> 3;
      else
        v18 = 0;
      v26 = v18 + a4;
      if ( v17 )
        FormHeapFree(v17);
      result = &v14[2 * v26];
      *(this + 3) = (unsigned int)&v14[2 * v11];
      *(this + 2) = (unsigned int)result;
      *(this + 1) = (unsigned int)v14;
    }
  }
  return result;
}
