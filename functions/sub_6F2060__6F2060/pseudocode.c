unsigned int __thiscall sub_6F2060(unsigned int *this, int a2, float *a3, unsigned int a4, float *a5)
{
  int v6; // ecx
  unsigned int result; // eax
  int v8; // edi
  int v9; // edi
  unsigned int v10; // eax
  int v11; // edi
  int v12; // eax
  float *v13; // edi
  float *v14; // eax
  float *v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  float *v19; // ebx
  float *v20; // [esp-1Ch] [ebp-4Ch]
  float *v21; // [esp-Ch] [ebp-3Ch]
  int v22; // [esp-8h] [ebp-38h]
  int v23; // [esp+0h] [ebp-30h] BYREF
  float v24[3]; // [esp+10h] [ebp-20h] BYREF
  int v25; // [esp+1Ch] [ebp-14h]
  int *v26; // [esp+20h] [ebp-10h]
  int v27; // [esp+2Ch] [ebp-4h]
  float *v28; // [esp+40h] [ebp+10h]
  unsigned int v29; // [esp+44h] [ebp+14h]

  v26 = &v23;
  v6 = *(this + 1);
  v24[0] = *a5;
  v24[1] = a5[1];
  if ( v6 )
    result = (int)(*(this + 3) - v6) >> 3;
  else
    result = 0;
  if ( a4 )
  {
    if ( v6 )
      v8 = (int)(*(this + 2) - v6) >> 3;
    else
      v8 = 0;
    if ( 0xFFFFFFFF - v8 < a4 )
      sub_790B90();
    if ( v6 )
      v9 = (int)(*(this + 2) - v6) >> 3;
    else
      v9 = 0;
    if ( result >= a4 + v9 )
    {
      v19 = (float *)*(this + 2);
      if ( ((char *)v19 - (char *)a3) >> 3 >= a4 )
      {
        v29 = 2 * a4;
        v28 = &v19[0xFFFFFFFE * a4];
        *(this + 2) = (unsigned int)sub_6F1600(v28, v19, (float *)*(this + 2));
        sub_7A8750((int)a3, (int)v28, (int)v19);
        return (unsigned int)sub_7A86F0(a3, &a3[v29], v24);
      }
      else
      {
        sub_6F1600(a3, v19, &a3[2 * a4]);
        v22 = a4 - ((int)(*(this + 2) - (_DWORD)a3) >> 3);
        v21 = (float *)*(this + 2);
        v27 = 2;
        sub_6F1400(v21, v22, v24);
        *(this + 2) += 8 * a4;
        return (unsigned int)sub_7A86F0(a3, (_DWORD *)(*(this + 2) - 8 * a4), v24);
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (result >> 1) >= result )
        v10 = (result >> 1) + result;
      else
        v10 = 0;
      if ( v6 )
        v11 = (int)(*(this + 2) - v6) >> 3;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
      {
        if ( v6 )
          v12 = (int)(*(this + 2) - v6) >> 3;
        else
          v12 = 0;
        v10 = a4 + v12;
      }
      v25 = 8 * v10;
      v13 = (float *)FormHeapAlloc(8 * v10);
      v20 = (float *)*(this + 1);
      LODWORD(v24[2]) = v13;
      v27 = 0;
      v14 = sub_6F11E0(v20, a3, v13);
      v15 = sub_6F1400(v14, a4, v24);
      sub_6F11E0(a3, (float *)*(this + 2), v15);
      v16 = *(this + 1);
      if ( v16 )
        v17 = (int)(*(this + 2) - v16) >> 3;
      else
        v17 = 0;
      v18 = v17 + a4;
      if ( v16 )
        FormHeapFree(*(this + 1));
      result = (unsigned int)&v13[v25 / 4u];
      *(this + 3) = (unsigned int)&v13[v25 / 4u];
      *(this + 2) = (unsigned int)&v13[2 * v18];
      *(this + 1) = (unsigned int)v13;
    }
  }
  return result;
}
