void __thiscall sub_6F1E00(unsigned int *this, int a2, char *a3, unsigned int a4, int *a5)
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

  v28[5] = &v27; /*0x6f1e28*/
  v6 = a5[1]; /*0x6f1e32*/
  v28[0] = *a5; /*0x6f1e35*/
  v28[2] = a5[2]; /*0x6f1e3b*/
  v7 = *(this + 1); /*0x6f1e3e*/
  v28[1] = v6; /*0x6f1e43*/
  v28[3] = a5[3]; /*0x6f1e49*/
  if ( v7 ) /*0x6f1e4c*/
    v8 = (int)(*(this + 3) - v7) >> 4; /*0x6f1e57*/
  else
    v8 = 0; /*0x6f1e4e*/
  if ( a4 ) /*0x6f1e5f*/
  {
    if ( v7 ) /*0x6f1e67*/
      v10 = (int)(*(this + 2) - v7) >> 4; /*0x6f1e72*/
    else
      v10 = 0; /*0x6f1e69*/
    if ( 0xFFFFFFFF - v10 < a4 ) /*0x6f1e7c*/
      OB_stVector_ThrowLengthError_010201A0(a4); /*0x6f1e7e*/
    if ( v7 ) /*0x6f1e85*/
      v11 = (int)(*(this + 2) - v7) >> 4; /*0x6f1e90*/
    else
      v11 = 0; /*0x6f1e87*/
    if ( v8 >= a4 + v11 ) /*0x6f1e97*/
    {
      v21 = (char *)*(this + 2); /*0x6f1f97*/
      v31 = (int)v21; /*0x6f1fa6*/
      if ( (v21 - a3) >> 4 >= a4 ) /*0x6f1fa9*/
      {
        v22 = 0x10 * a4; /*0x6f200f*/
        v23 = &v21[0xFFFFFFF0 * a4]; /*0x6f2014*/
        v32 = v22; /*0x6f2017*/
        *(this + 2) = (unsigned int)sub_6F15D0(v23, v21, v21); /*0x6f2022*/
        sub_6F1440(a3, v23, v31); /*0x6f202b*/
        sub_54D9A0(a3, &a3[v32], v28); /*0x6f203b*/
      }
      else
      {
        sub_6F15D0(a3, v21, &a3[0x10 * a4]); /*0x6f1fba*/
        v26 = a4 - ((int)(*(this + 2) - (_DWORD)a3) >> 4); /*0x6f1fcf*/
        v25 = (_DWORD *)*(this + 2); /*0x6f1fd0*/
        v29 = 2; /*0x6f1fd3*/
        sub_6F13C0(v25, v26, v28); /*0x6f1fda*/
        *(this + 2) += 0x10 * a4; /*0x6f1fe2*/
        sub_54D9A0(a3, (_DWORD *)(*(this + 2) - 0x10 * a4), v28); /*0x6f1ff0*/
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v8 >> 1) >= v8 ) /*0x6f1ea8*/
        v12 = (v8 >> 1) + v8; /*0x6f1eae*/
      else
        v12 = 0; /*0x6f1eaa*/
      if ( v7 ) /*0x6f1eb2*/
        v13 = (int)(*(this + 2) - v7) >> 4; /*0x6f1ebd*/
      else
        v13 = 0; /*0x6f1eb4*/
      if ( v12 < a4 + v13 ) /*0x6f1ec4*/
      {
        if ( v7 ) /*0x6f1ec8*/
          v14 = (int)(*(this + 2) - v7) >> 4; /*0x6f1ed3*/
        else
          v14 = 0; /*0x6f1eca*/
        v12 = a4 + v14; /*0x6f1ed6*/
      }
      v30 = 4 * v12; /*0x6f1edc*/
      v15 = (_DWORD *)FormHeapAlloc(0x10 * v12); /*0x6f1ef3*/
      v24 = (_DWORD *)*(this + 1); /*0x6f1efb*/
      v28[4] = v15; /*0x6f1efc*/
      v29 = 0; /*0x6f1eff*/
      v16 = sub_54D910(v24, a3, v15); /*0x6f1f06*/
      v17 = sub_6F13C0(v16, a4, v28); /*0x6f1f16*/
      sub_54D910(a3, (_DWORD *)*(this + 2), v17); /*0x6f1f31*/
      v18 = *(this + 1); /*0x6f1f36*/
      if ( v18 ) /*0x6f1f3e*/
        v19 = (int)(*(this + 2) - v18) >> 4; /*0x6f1f49*/
      else
        v19 = 0; /*0x6f1f40*/
      v20 = v19 + a4; /*0x6f1f4c*/
      if ( v18 ) /*0x6f1f50*/
        FormHeapFree(*(this + 1)); /*0x6f1f53*/
      *(this + 3) = (unsigned int)&v15[v30]; /*0x6f1f65*/
      *(this + 2) = (unsigned int)&v15[4 * v20]; /*0x6f1f68*/
      *(this + 1) = (unsigned int)v15; /*0x6f1f6b*/
    }
  }
}
