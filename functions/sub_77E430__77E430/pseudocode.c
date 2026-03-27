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

  v3 = a2;
  v4 = a2[7];
  v6 = a2[2];
  v20 = 0;
  v23 = v6;
  if ( a3 >= v4 )
  {
    v22 = 0;
    v7 = 0;
  }
  else
  {
    v7 = *(_DWORD *)(a2[8] + 4 * a3);
    v22 = v7;
  }
  v8 = v7 * a2[6];
  a3 = 0;
  v21 = 0;
  if ( v4 <= 1 )
  {
    v19 = 0;
    if ( v6 )
      v15 = v6;
    else
      v15 = v7 | 0x80000000;
    if ( !NiTMap_GetAt((_DWORD *)this + 3, v15, &v19) || !v19 )
    {
      v19 = sub_77E0A0(0x800u, *((_DWORD *)this + 2), v23, 0);
      NiTMap_SetAt((_DWORD *)this + 3, v15, (int)v19);
    }
    LOBYTE(v23) = *((_BYTE *)v3 + 0x10);
    v23 = sub_7829A0(v19, v8, &a3, &v21, 0, v23);
    v16 = this + 0x1C;
    NiTMap_GetAt((_DWORD *)this + 7, v15, &v20);
    v17 = v20;
    if ( v20 )
    {
      v20[2] = v23;
      v17[3] = a3;
      v17[5] = v8;
    }
    else
    {
      v17 = sub_4BFD40(0, v23, a3, v8, 0);
      NiTMap_SetAt(v16, v15, (int)v17);
    }
    v17[1] = v19;
    v17[4] = v21;
    a2[0xD] = a3 / v22;
    return v17;
  }
  else
  {
    if ( *((unsigned __int16 *)this + 0x1A) < v4 )
    {
      NiTArray_SetSize((unsigned __int16 *)this + 0x16, v4);
      NiTArray_SetSize((unsigned __int16 *)this + 0x1E, v4);
    }
    if ( *((_DWORD *)this + 0x13) >= (unsigned int)*((unsigned __int16 *)this + 0x1A) )
      *((_DWORD *)this + 0x13) = 0;
    a2 = *(_DWORD **)(*((_DWORD *)this + 0xC) + 4 * *((_DWORD *)this + 0x13));
    v9 = a2;
    if ( !a2 )
    {
      v10 = sub_77E0A0(0x800u, *((_DWORD *)this + 2), 0, 0);
      v11 = *((_DWORD *)this + 0x13);
      a2 = v10;
      NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x2C), v11, &a2);
      v9 = a2;
    }
    LOBYTE(v23) = *((_BYTE *)v3 + 0x10);
    v12 = sub_7829A0(v9, v8, &a3, &v21, 1, v23);
    v13 = *(_DWORD **)(*((_DWORD *)this + 0x10) + 4 * *((_DWORD *)this + 0x13));
    if ( v13 )
    {
      v13[2] = v12;
      v13[3] = a3;
      v13[5] = v8;
    }
    else
    {
      v13 = sub_4BFD40(0, v12, a3, v8, 0);
      v18 = *((_DWORD *)this + 0x13);
      v20 = v13;
      NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)(this + 0x3C), v18, &v20);
    }
    v13[1] = a2;
    v13[4] = v21;
    v3[0xD] = 0;
    ++*((_DWORD *)this + 0x13);
    return v13;
  }
}
