void __thiscall sub_54DFD0(unsigned int *this, int a2, char *a3, unsigned int a4, int *a5)
{
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // eax
  int v10; // edx
  int v11; // edx
  unsigned int v12; // eax
  int v13; // edx
  int v14; // eax
  _DWORD *v15; // ebx
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // edi
  char *v21; // eax
  unsigned int v22; // ecx
  char *v23; // edi
  _DWORD *v24; // [esp-1Ch] [ebp-50h]
  _DWORD *v25; // [esp-Ch] [ebp-40h]
  int v26; // [esp-8h] [ebp-3Ch]
  int v27; // [esp+0h] [ebp-34h] BYREF
  _DWORD v28[6]; // [esp+10h] [ebp-24h] BYREF
  int v29; // [esp+30h] [ebp-4h]
  int v30; // [esp+44h] [ebp+10h]
  int v31; // [esp+44h] [ebp+10h]
  unsigned int v32; // [esp+48h] [ebp+14h]

  v28[5] = &v27;
  v6 = a5[1];
  v28[0] = *a5;
  v28[2] = a5[2];
  v7 = *(this + 1);
  v28[1] = v6;
  v28[3] = a5[3];
  if ( v7 )
    v8 = (int)(*(this + 3) - v7) >> 4;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v7 )
      v10 = (int)(*(this + 2) - v7) >> 4;
    else
      v10 = 0;
    if ( 0xFFFFFFFF - v10 < a4 )
      sub_790B90();
    if ( v7 )
      v11 = (int)(*(this + 2) - v7) >> 4;
    else
      v11 = 0;
    if ( v8 >= a4 + v11 )
    {
      v21 = (char *)*(this + 2);
      v31 = (int)v21;
      if ( (v21 - a3) >> 4 >= a4 )
      {
        v22 = 0x10 * a4;
        v23 = &v21[0xFFFFFFF0 * a4];
        v32 = v22;
        *(this + 2) = (unsigned int)sub_6F15D0(v23, v21, v21);
        sub_6F1440(a3, v23, v31);
        sub_54D9A0(a3, &a3[v32], v28);
      }
      else
      {
        sub_6F15D0(a3, v21, &a3[0x10 * a4]);
        v26 = a4 - ((int)(*(this + 2) - (_DWORD)a3) >> 4);
        v25 = (_DWORD *)*(this + 2);
        v29 = 2;
        sub_6F13C0(v25, v26, v28);
        *(this + 2) += 0x10 * a4;
        sub_54D9A0(a3, (_DWORD *)(*(this + 2) - 0x10 * a4), v28);
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v8 >> 1) >= v8 )
        v12 = (v8 >> 1) + v8;
      else
        v12 = 0;
      if ( v7 )
        v13 = (int)(*(this + 2) - v7) >> 4;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
      {
        if ( v7 )
          v14 = (int)(*(this + 2) - v7) >> 4;
        else
          v14 = 0;
        v12 = a4 + v14;
      }
      v30 = 4 * v12;
      v15 = (_DWORD *)FormHeapAlloc(0x10 * v12);
      v24 = (_DWORD *)*(this + 1);
      v28[4] = v15;
      v29 = 0;
      v16 = sub_54D910(v24, a3, v15);
      v17 = (_DWORD *)sub_6F13C0(v16, a4, v28);
      sub_54D910(a3, (_DWORD *)*(this + 2), v17);
      v18 = *(this + 1);
      if ( v18 )
        v19 = (int)(*(this + 2) - v18) >> 4;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
        FormHeapFree(*(this + 1));
      *(this + 3) = (unsigned int)&v15[v30];
      *(this + 2) = (unsigned int)&v15[4 * v20];
      *(this + 1) = (unsigned int)v15;
    }
  }
}
