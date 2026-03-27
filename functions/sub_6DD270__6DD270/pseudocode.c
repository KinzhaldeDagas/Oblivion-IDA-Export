char __thiscall sub_6DD270(float *this, int a2)
{
  int v2; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // edx
  int v9; // esi
  unsigned int v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // edx
  unsigned int v13; // eax
  unsigned __int8 *v14; // ecx
  unsigned __int8 *v15; // edx
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  int v18; // eax
  __int16 v19; // cx
  __int16 v20; // dx
  int v21; // [esp+8h] [ebp-Ch] BYREF
  int v22; // [esp+Ch] [ebp-8h] BYREF
  int v23; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  if ( !sub_715820(this, a2)
    || !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x12) + 0x2C))(
          *((_DWORD *)this + 0x12),
          *(_DWORD *)(v2 + 0x48))
    || !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x13) + 0x2C))(
          *((_DWORD *)this + 0x13),
          *(_DWORD *)(v2 + 0x4C)) )
  {
    return 0;
  }
  v5 = *((_DWORD **)this + 0x14);
  if ( !v5 )
  {
    if ( !*(_DWORD *)(v2 + 0x50) )
      goto LABEL_10;
    return 0;
  }
  if ( !*(_DWORD *)(v2 + 0x50) )
    return 0;
LABEL_10:
  if ( v5 )
  {
    sub_6DC770(this, &v23, &v21, &v22, &a2);
    v6 = *(_DWORD **)(v2 + 0x50);
    v7 = 4 * v21;
    v8 = v5;
    if ( (unsigned int)(4 * v21) < 4 )
    {
LABEL_14:
      if ( !v7 )
        goto LABEL_24;
    }
    else
    {
      while ( *v8 == *v6 )
      {
        v7 -= 4;
        ++v6;
        ++v8;
        if ( v7 < 4 )
          goto LABEL_14;
      }
    }
    v9 = *(unsigned __int8 *)v8 - *(unsigned __int8 *)v6;
    if ( v9 )
      goto LABEL_22;
    v10 = v7 - 1;
    v11 = (unsigned __int8 *)v6 + 1;
    v12 = (unsigned __int8 *)v8 + 1;
    if ( v10 )
    {
      v9 = *v12 - *v11;
      if ( v9
        || (v13 = v10 - 1, v14 = v11 + 1, v15 = v12 + 1, v13)
        && ((v9 = *v15 - *v14) != 0 || (v16 = v14 + 1, v17 = v15 + 1, v13 != 1) && (v9 = *v17 - *v16) != 0) )
      {
LABEL_22:
        v18 = 1;
        if ( v9 <= 0 )
          v18 = 0xFFFFFFFF;
LABEL_25:
        if ( v18 )
          return 0;
        goto LABEL_26;
      }
    }
LABEL_24:
    v18 = 0;
    goto LABEL_25;
  }
LABEL_26:
  if ( *(float *)(v2 + 0x54) == *(this + 0x15) && ((*((_BYTE *)this + 0x3C) ^ *(_BYTE *)(v2 + 0x3C)) & 1) == 0 )
  {
    v19 = *(_WORD *)(v2 + 0x3C);
    v20 = *((_WORD *)this + 0x1E);
    if ( ((((unsigned __int8)v20 >> 1) ^ ((unsigned __int8)v19 >> 1)) & 1) == 0
      && *((_DWORD *)this + 0x1A) == *(_DWORD *)(v2 + 0x68)
      && ((((unsigned __int8)v20 >> 2) ^ ((unsigned __int8)v19 >> 2)) & 1) == 0
      && ((((unsigned __int8)v20 >> 3) ^ ((unsigned __int8)v19 >> 3)) & 1) == 0
      && ((((unsigned __int8)v20 >> 4) ^ ((unsigned __int8)v19 >> 4)) & 1) == 0
      && ((((unsigned __int8)v20 >> 5) ^ ((unsigned __int8)v19 >> 5)) & 1) == 0
      && *(float *)(v2 + 0x58) == *(this + 0x16)
      && *(float *)(v2 + 0x5C) == *(this + 0x17)
      && *((_WORD *)this + 0x30) == *(_WORD *)(v2 + 0x60)
      && ((((unsigned __int8)v20 >> 6) ^ ((unsigned __int8)v19 >> 6)) & 1) == 0 )
    {
      return 1;
    }
  }
  return 0;
}
