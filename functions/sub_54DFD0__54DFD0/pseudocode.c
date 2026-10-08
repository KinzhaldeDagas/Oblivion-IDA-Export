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

  v28[5] = &v27; /*0x54dff8*/
  v6 = a5[1]; /*0x54e002*/
  v28[0] = *a5; /*0x54e005*/
  v28[2] = a5[2]; /*0x54e00b*/
  v7 = *(this + 1); /*0x54e00e*/
  v28[1] = v6; /*0x54e013*/
  v28[3] = a5[3]; /*0x54e019*/
  if ( v7 ) /*0x54e01c*/
    v8 = (int)(*(this + 3) - v7) >> 4; /*0x54e027*/
  else
    v8 = 0; /*0x54e01e*/
  if ( a4 ) /*0x54e02f*/
  {
    if ( v7 ) /*0x54e037*/
      v10 = (int)(*(this + 2) - v7) >> 4; /*0x54e042*/
    else
      v10 = 0; /*0x54e039*/
    if ( 0xFFFFFFFF - v10 < a4 ) /*0x54e04c*/
      OB_stVector_ThrowLengthError_010201A0(a4); /*0x54e04e*/
    if ( v7 ) /*0x54e055*/
      v11 = (int)(*(this + 2) - v7) >> 4; /*0x54e060*/
    else
      v11 = 0; /*0x54e057*/
    if ( v8 >= a4 + v11 ) /*0x54e067*/
    {
      v21 = (char *)*(this + 2); /*0x54e167*/
      v31 = (int)v21; /*0x54e176*/
      if ( (v21 - a3) >> 4 >= a4 ) /*0x54e179*/
      {
        v22 = 0x10 * a4; /*0x54e1df*/
        v23 = &v21[0xFFFFFFF0 * a4]; /*0x54e1e4*/
        v32 = v22; /*0x54e1e7*/
        *(this + 2) = (unsigned int)sub_6F15D0(v23, v21, v21); /*0x54e1f2*/
        sub_6F1440(a3, v23, v31); /*0x54e1fb*/
        sub_54D9A0(a3, &a3[v32], v28); /*0x54e20b*/
      }
      else
      {
        sub_6F15D0(a3, v21, &a3[0x10 * a4]); /*0x54e18a*/
        v26 = a4 - ((int)(*(this + 2) - (_DWORD)a3) >> 4); /*0x54e19f*/
        v25 = (_DWORD *)*(this + 2); /*0x54e1a0*/
        v29 = 2; /*0x54e1a3*/
        sub_6F13C0(v25, v26, v28); /*0x54e1aa*/
        *(this + 2) += 0x10 * a4; /*0x54e1b2*/
        sub_54D9A0(a3, (_DWORD *)(*(this + 2) - 0x10 * a4), v28); /*0x54e1c0*/
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v8 >> 1) >= v8 ) /*0x54e078*/
        v12 = (v8 >> 1) + v8; /*0x54e07e*/
      else
        v12 = 0; /*0x54e07a*/
      if ( v7 ) /*0x54e082*/
        v13 = (int)(*(this + 2) - v7) >> 4; /*0x54e08d*/
      else
        v13 = 0; /*0x54e084*/
      if ( v12 < a4 + v13 ) /*0x54e094*/
      {
        if ( v7 ) /*0x54e098*/
          v14 = (int)(*(this + 2) - v7) >> 4; /*0x54e0a3*/
        else
          v14 = 0; /*0x54e09a*/
        v12 = a4 + v14; /*0x54e0a6*/
      }
      v30 = 4 * v12; /*0x54e0ac*/
      v15 = (_DWORD *)FormHeapAlloc(0x10 * v12); /*0x54e0c3*/
      v24 = (_DWORD *)*(this + 1); /*0x54e0cb*/
      v28[4] = v15; /*0x54e0cc*/
      v29 = 0; /*0x54e0cf*/
      v16 = sub_54D910(v24, a3, v15); /*0x54e0d6*/
      v17 = sub_6F13C0(v16, a4, v28); /*0x54e0e6*/
      sub_54D910(a3, (_DWORD *)*(this + 2), v17); /*0x54e101*/
      v18 = *(this + 1); /*0x54e106*/
      if ( v18 ) /*0x54e10e*/
        v19 = (int)(*(this + 2) - v18) >> 4; /*0x54e119*/
      else
        v19 = 0; /*0x54e110*/
      v20 = v19 + a4; /*0x54e11c*/
      if ( v18 ) /*0x54e120*/
        FormHeapFree(*(this + 1)); /*0x54e123*/
      *(this + 3) = (unsigned int)&v15[v30]; /*0x54e135*/
      *(this + 2) = (unsigned int)&v15[4 * v20]; /*0x54e138*/
      *(this + 1) = (unsigned int)v15; /*0x54e13b*/
    }
  }
}
