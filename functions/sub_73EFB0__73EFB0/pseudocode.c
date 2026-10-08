_DWORD *__thiscall sub_73EFB0(int this, unsigned __int16 a2)
{
  _DWORD *result; // eax
  int v3; // ebp
  int v4; // esi
  int v5; // edi
  unsigned int v6; // ebx
  _DWORD *v7; // edx
  int v8; // ebp
  _DWORD *v9; // eax
  _DWORD *v10; // edx
  int v11; // edx
  _DWORD *v12; // eax
  _DWORD *v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // ebp
  _DWORD *v17; // eax
  _DWORD *v18; // edx
  int v19; // eax
  _DWORD *v20; // ebx
  int v21; // [esp+4h] [ebp+4h]

  result = (_DWORD *)(unsigned __int16)(*(_WORD *)(this + 0x48) - 1); /*0x73efbd*/
  if ( a2 == (_WORD)result ) /*0x73efc3*/
  {
    --*(_WORD *)(this + 0x48); /*0x73f0c6*/
  }
  else
  {
    v3 = *(_DWORD *)(this + 0x1C); /*0x73efcb*/
    v4 = (unsigned __int16)result; /*0x73efcf*/
    v5 = a2; /*0x73efd3*/
    v6 = 0xC * (unsigned __int16)result; /*0x73efe2*/
    v21 = 0xC * a2; /*0x73efe7*/
    v7 = (_DWORD *)(v3 + v21); /*0x73efeb*/
    *v7 = *(_DWORD *)(v6 + v3); /*0x73efef*/
    v7[1] = *(_DWORD *)(v6 + v3 + 4); /*0x73eff4*/
    v7[2] = *(_DWORD *)(v6 + v3 + 8); /*0x73effa*/
    v8 = *(_DWORD *)(this + 0x24); /*0x73effd*/
    if ( v8 ) /*0x73f002*/
    {
      v9 = (_DWORD *)(v8 + 0x10 * (unsigned __int16)result); /*0x73f009*/
      v10 = (_DWORD *)(v8 + 0x10 * v5); /*0x73f010*/
      *v10 = *v9; /*0x73f014*/
      v10[1] = v9[1]; /*0x73f019*/
      v10[2] = v9[2]; /*0x73f01f*/
      v10[3] = v9[3]; /*0x73f025*/
    }
    v11 = *(_DWORD *)(this + 0x20); /*0x73f028*/
    if ( v11 ) /*0x73f02d*/
    {
      v12 = (_DWORD *)(v11 + v6); /*0x73f033*/
      v13 = (_DWORD *)(v21 + v11); /*0x73f036*/
      *v13 = *v12; /*0x73f03a*/
      v13[1] = v12[1]; /*0x73f03f*/
      v13[2] = v12[2]; /*0x73f045*/
    }
    v14 = *(_DWORD *)(this + 0x44); /*0x73f048*/
    if ( v14 ) /*0x73f04d*/
      *(float *)(v14 + 4 * v5) = *(float *)(v14 + 4 * v4); /*0x73f052*/
    v15 = *(_DWORD *)(this + 0x4C); /*0x73f055*/
    if ( v15 ) /*0x73f05a*/
      *(float *)(v15 + 4 * v5) = *(float *)(v15 + 4 * v4); /*0x73f05f*/
    v16 = *(_DWORD *)(this + 0x50); /*0x73f062*/
    if ( v16 ) /*0x73f067*/
    {
      v17 = (_DWORD *)(v16 + 0x10 * v4); /*0x73f06e*/
      v18 = (_DWORD *)(v16 + 0x10 * v5); /*0x73f075*/
      *v18 = *v17; /*0x73f079*/
      v18[1] = v17[1]; /*0x73f07e*/
      v18[2] = v17[2]; /*0x73f084*/
      v18[3] = v17[3]; /*0x73f08a*/
    }
    v19 = *(_DWORD *)(this + 0x54); /*0x73f08d*/
    if ( v19 ) /*0x73f092*/
      *(float *)(v19 + 4 * v5) = *(float *)(v19 + 4 * v4); /*0x73f097*/
    result = *(_DWORD **)(this + 0x58); /*0x73f09a*/
    if ( result ) /*0x73f09f*/
    {
      v20 = &result[v6 / 4]; /*0x73f0a5*/
      result = (_DWORD *)((char *)result + v21); /*0x73f0a7*/
      *result = *v20; /*0x73f0ab*/
      result[1] = v20[1]; /*0x73f0b0*/
      result[2] = v20[2]; /*0x73f0b6*/
    }
    --*(_WORD *)(this + 0x48); /*0x73f0b9*/
  }
  return result; /*0x73f0c3*/
}
