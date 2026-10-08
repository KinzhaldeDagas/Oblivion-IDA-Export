// Verified NiPick query runner: invokes NiPick_ProcessSceneObject over the configured pick root, gathers hit records, sorts by the record distance field, and leaves the nearest record first in the result list.
char __thiscall NiPick_ExecuteAndSort(_WORD *this, float *a2, float *a3, int *a4)
{
  unsigned __int16 v6; // ax
  unsigned int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // edx
  float *v10; // ebx
  unsigned int i; // edi
  float *v12; // ecx
  int *v13; // ebx
  int v14; // eax
  int *v15; // ecx
  int *v16; // eax
  bool v17; // zf
  unsigned int v18; // [esp+4h] [ebp-4h]

  if ( !(_BYTE)a4 ) /*0x959d69*/
    sub_959CA0(this); /*0x959d6b*/
  if ( !NiPick_ProcessSceneObject(a2, a3, (int)this, *((float **)this + 5)) ) /*0x959d7f*/
    return 0; /*0x959d7f*/
  v6 = *(this + 0x12); /*0x959d92*/
  if ( !v6 ) /*0x959d99*/
    return 0; /*0x959d8f*/
  v7 = 1; /*0x959d9c*/
  if ( *((_DWORD *)this + 1) == 1 || !*((_DWORD *)this + 2) || v6 <= 1u ) /*0x959db7*/
    return 1; /*0x959db7*/
  v8 = (unsigned __int16)*(this + 0x11); /*0x959dc3*/
  v18 = v8; /*0x959dc7*/
  if ( !*(_DWORD *)this ) /*0x959dbd*/
  {
    v9 = 0; /*0x959dd1*/
    a3 = 0; /*0x959dd5*/
    if ( !v8 ) /*0x959dd9*/
      return 1; /*0x959dd9*/
    do /*0x959e4b*/
    {
      v10 = *(float **)(*((_DWORD *)this + 7) + 4 * v9); /*0x959de3*/
      if ( v10 ) /*0x959de8*/
      {
        for ( i = v9 + 1; i < v8; ++i ) /*0x959def*/
        {
          v12 = *(float **)(*((_DWORD *)this + 7) + 4 * i); /*0x959df4*/
          if ( v12 ) /*0x959df9*/
          {
            if ( v10[5] > (double)v12[5] ) /*0x959e08*/
            {
              a2 = v10; /*0x959e0c*/
              v10 = v12; /*0x959e14*/
              a4 = (int *)v12; /*0x959e1d*/
              NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0xC), v9, &a4); /*0x959e21*/
              NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0xC), i, &a2); /*0x959e2e*/
              v9 = (unsigned int)a3; /*0x959e33*/
              v8 = v18; /*0x959e37*/
            }
          }
        }
      }
      a3 = (float *)++v9; /*0x959e47*/
    }
    while ( v9 < v8 ); /*0x959e4b*/
    return 1; /*0x959e54*/
  }
  v13 = **((int ***)this + 7); /*0x959e5c*/
  a4 = v13; /*0x959e5e*/
  if ( v8 <= 1 ) /*0x959e62*/
    goto LABEL_27; /*0x959e62*/
  do /*0x959e98*/
  {
    v14 = sub_405020((int)(this + 0xC), v7); /*0x959e68*/
    v15 = (int *)v14; /*0x959e6d*/
    if ( !v14 ) /*0x959e71*/
      goto LABEL_25; /*0x959e71*/
    if ( *((float *)v13 + 5) > (double)*(float *)(v14 + 0x14) ) /*0x959e80*/
    {
      v16 = v13; /*0x959e82*/
      v17 = v13 == 0; /*0x959e84*/
      v13 = v15; /*0x959e86*/
      if ( v17 ) /*0x959e88*/
        goto LABEL_25; /*0x959e88*/
      v15 = v16; /*0x959e8a*/
    }
    sub_959C40(v15, 1); /*0x959e8e*/
LABEL_25:
    ++v7; /*0x959e93*/
  }
  while ( v7 < v8 ); /*0x959e98*/
  a4 = v13; /*0x959e9a*/
LABEL_27:
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0xC), 0, &a4); /*0x959e9e*/
  return 1; /*0x959d8d*/
}
