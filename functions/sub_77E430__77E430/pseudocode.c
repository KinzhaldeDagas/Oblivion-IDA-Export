_DWORD *__thiscall sub_77E430(char *this, _DWORD *a2, unsigned int a3)
{
  _DWORD *v3; // ebp
  unsigned int v4; // edi
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ebx
  _DWORD *v9; // ecx
  _DWORD *v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  _DWORD *v13; // edi
  unsigned int v15; // edi
  char *v16; // ebp
  _DWORD *v17; // esi
  unsigned int v18; // [esp-8h] [ebp-2Ch]
  _DWORD *v19; // [esp+10h] [ebp-14h] BYREF
  _DWORD *v20; // [esp+14h] [ebp-10h] BYREF
  int v21; // [esp+18h] [ebp-Ch] BYREF
  unsigned int v22; // [esp+1Ch] [ebp-8h]
  int v23; // [esp+20h] [ebp-4h]

  v3 = a2; /*0x77e439*/
  v4 = a2[7]; /*0x77e43f*/
  v6 = a2[2]; /*0x77e444*/
  v20 = 0; /*0x77e44b*/
  v23 = v6; /*0x77e44f*/
  if ( a3 >= v4 ) /*0x77e453*/
  {
    v22 = 0; /*0x77e461*/
    v7 = 0; /*0x77e465*/
  }
  else
  {
    v7 = *(_DWORD *)(a2[8] + 4 * a3); /*0x77e458*/
    v22 = v7; /*0x77e45b*/
  }
  v8 = v7 * a2[6]; /*0x77e46a*/
  a3 = 0; /*0x77e470*/
  v21 = 0; /*0x77e474*/
  if ( v4 <= 1 ) /*0x77e478*/
  {
    v19 = 0; /*0x77e56c*/
    if ( v6 ) /*0x77e570*/
      v15 = v6; /*0x77e572*/
    else
      v15 = v7 | 0x80000000; /*0x77e578*/
    if ( !NiTMap_GetAt((_DWORD *)this + 3, v15, &v19) || !v19 ) /*0x77e595*/
    {
      v19 = sub_77E0A0(0x800u, *((_DWORD *)this + 2), v23, 0); /*0x77e5b4*/
      NiTMap_SetAt((_DWORD *)this + 3, v15, (int)v19); /*0x77e5b8*/
    }
    LOBYTE(v23) = *((_BYTE *)v3 + 0x10); /*0x77e5c0*/
    v23 = sub_7829A0(v19, v8, &a3, &v21, 0, v23); /*0x77e5df*/
    v16 = this + 0x1C; /*0x77e5e8*/
    NiTMap_GetAt((_DWORD *)this + 7, v15, &v20); /*0x77e5ee*/
    v17 = v20; /*0x77e5f3*/
    if ( v20 ) /*0x77e5f9*/
    {
      v20[2] = v23; /*0x77e621*/
      v17[3] = a3; /*0x77e628*/
      v17[5] = v8; /*0x77e62b*/
    }
    else
    {
      v17 = sub_4BFD40(0, v23, a3, v8, 0); /*0x77e610*/
      NiTMap_SetAt(v16, v15, (int)v17); /*0x77e616*/
    }
    v17[1] = v19; /*0x77e632*/
    v17[4] = v21; /*0x77e639*/
    a2[0xD] = a3 / v22; /*0x77e64b*/
    return v17; /*0x77e64e*/
  }
  else
  {
    if ( *((unsigned __int16 *)this + 0x1A) < v4 ) /*0x77e484*/
    {
      NiTArray_SetSize((unsigned __int16 *)this + 0x16, v4); /*0x77e48a*/
      NiTArray_SetSize((unsigned __int16 *)this + 0x1E, v4); /*0x77e493*/
    }
    if ( *((_DWORD *)this + 0x13) >= (unsigned int)*((unsigned __int16 *)this + 0x1A) ) /*0x77e4a1*/
      *((_DWORD *)this + 0x13) = 0; /*0x77e4a3*/
    a2 = *(_DWORD **)(*((_DWORD *)this + 0xC) + 4 * *((_DWORD *)this + 0x13)); /*0x77e4b1*/
    v9 = a2; /*0x77e4ac*/
    if ( !a2 ) /*0x77e4b5*/
    {
      v10 = sub_77E0A0(0x800u, *((_DWORD *)this + 2), 0, 0); /*0x77e4c2*/
      v11 = *((_DWORD *)this + 0x13); /*0x77e4c7*/
      a2 = v10; /*0x77e4cd*/
      NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x2C), v11, &a2); /*0x77e4da*/
      v9 = a2; /*0x77e4df*/
    }
    LOBYTE(v23) = *((_BYTE *)v3 + 0x10); /*0x77e4e6*/
    v12 = sub_7829A0(v9, v8, &a3, &v21, 1, v23); /*0x77e4fc*/
    v13 = *(_DWORD **)(*((_DWORD *)this + 0x10) + 4 * *((_DWORD *)this + 0x13)); /*0x77e507*/
    if ( v13 ) /*0x77e50c*/
    {
      v13[2] = v12; /*0x77e538*/
      v13[3] = a3; /*0x77e53f*/
      v13[5] = v8; /*0x77e542*/
    }
    else
    {
      v13 = sub_4BFD40(0, v12, a3, v8, 0); /*0x77e51f*/
      v18 = *((_DWORD *)this + 0x13); /*0x77e529*/
      v20 = v13; /*0x77e52d*/
      NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x3C), v18, &v20); /*0x77e531*/
    }
    v13[1] = a2; /*0x77e549*/
    v13[4] = v21; /*0x77e550*/
    v3[0xD] = 0; /*0x77e553*/
    ++*((_DWORD *)this + 0x13); /*0x77e55a*/
    return v13; /*0x77e55e*/
  }
}
