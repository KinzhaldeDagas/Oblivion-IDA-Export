unsigned int __thiscall sub_790E90(unsigned int *this, int a2, char *a3, unsigned int a4, int *a5)
{
  int v6; // edx
  unsigned int result; // eax
  int v8; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edi
  char *v19; // ecx
  unsigned int v20; // edi
  _DWORD *v21; // [esp-20h] [ebp-4Ch]
  _DWORD *v22; // [esp-Ch] [ebp-38h]
  int v23; // [esp-8h] [ebp-34h]
  int v24; // [esp+0h] [ebp-2Ch] BYREF
  _DWORD v25[4]; // [esp+10h] [ebp-1Ch] BYREF
  int v26; // [esp+28h] [ebp-4h]
  char *v27; // [esp+3Ch] [ebp+10h]
  _DWORD *v28; // [esp+40h] [ebp+14h]
  int v29; // [esp+40h] [ebp+14h]

  v25[3] = &v24;
  v6 = a5[1];
  result = a5[2];
  v25[0] = *a5;
  v8 = *(this + 1);
  v25[1] = v6;
  v25[2] = result;
  if ( v8 )
  {
    result = 0x2AAAAAAB * (*(this + 3) - v8);
    v9 = (int)(*(this + 3) - v8) / 0xC;
  }
  else
  {
    v9 = 0;
  }
  if ( a4 )
  {
    if ( v8 )
      v10 = (int)(*(this + 2) - v8) / 0xC;
    else
      v10 = 0;
    if ( 0x15555555 - v10 < a4 )
      sub_790B90(a4);
    if ( v8 )
      v11 = (int)(*(this + 2) - v8) / 0xC;
    else
      v11 = 0;
    if ( v9 >= a4 + v11 )
    {
      v19 = (char *)*(this + 2);
      v29 = (int)v19;
      if ( (v19 - a3) / 0xC >= a4 )
      {
        v20 = 0xC * a4;
        v27 = &v19[0xFFFFFFF4 * a4];
        *(this + 2) = (unsigned int)sub_6F15A0(v27, v19, v19);
        sub_79AAA0((int)a3, (int)v27, v29);
        return (unsigned int)sub_790460(a3, &a3[v20], v25);
      }
      else
      {
        sub_6F15A0(a3, v19, &a3[0xC * a4]);
        v23 = a4 - (int)(*(this + 2) - (_DWORD)a3) / 0xC;
        v22 = (_DWORD *)*(this + 2);
        v26 = 2;
        sub_6F1380(v22, v23, v25);
        *(this + 2) += 0xC * a4;
        return (unsigned int)sub_790460(a3, (_DWORD *)(*(this + 2) - 0xC * a4), v25);
      }
    }
    else
    {
      if ( 0x15555555 - (v9 >> 1) >= v9 )
        v12 = (v9 >> 1) + v9;
      else
        v12 = 0;
      if ( v8 )
        v13 = (int)(*(this + 2) - v8) / 0xC;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
        v12 = a4 + sub_6F1080(this);
      v28 = (_DWORD *)sub_78FAA0((char *)v12);
      v21 = (_DWORD *)*(this + 1);
      v26 = 0;
      v14 = sub_6F11A0(v21, a3, v28);
      v15 = sub_6F1380(v14, a4, v25);
      sub_6F11A0(a3, (_DWORD *)*(this + 2), v15);
      v16 = *(this + 1);
      if ( v16 )
        v17 = (int)(*(this + 2) - v16) / 0xC;
      else
        v17 = 0;
      v18 = v17 + a4;
      if ( v16 )
        FormHeapFree(*(this + 1));
      *(this + 3) = (unsigned int)&v28[3 * v12];
      *(this + 2) = (unsigned int)&v28[3 * v18];
      *(this + 1) = (unsigned int)v28;
      return (unsigned int)v28;
    }
  }
  return result;
}
