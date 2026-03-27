char __thiscall sub_6DB8D0(_DWORD *this, int a2)
{
  int v2; // edi
  int v5; // ecx
  int v6; // ecx
  _DWORD *v7; // esi
  _DWORD *v8; // ecx
  unsigned int v9; // eax
  _DWORD *v10; // edx
  int v11; // esi
  unsigned int v12; // eax
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  unsigned int v15; // eax
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  unsigned __int8 *v18; // ecx
  unsigned __int8 *v19; // edx
  int v20; // eax
  __int16 v21; // cx
  __int16 v22; // dx
  int v23; // [esp+8h] [ebp-8h] BYREF
  int v24; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  if ( !(unsigned __int8)sub_6EC2E0(a2) )
    return 0;
  v5 = *(this + 6);
  if ( v5 )
  {
    if ( !*(_DWORD *)(v2 + 0x18)
      || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 0x2C))(v5, *(_DWORD *)(v2 + 0x18)) )
    {
      return 0;
    }
  }
  else if ( *(_DWORD *)(v2 + 0x18) )
  {
    return 0;
  }
  v6 = *(this + 7);
  if ( !v6 )
  {
    if ( !*(_DWORD *)(v2 + 0x1C) )
      goto LABEL_15;
    return 0;
  }
  if ( !*(_DWORD *)(v2 + 0x1C)
    || !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x2C))(v6, *(_DWORD *)(v2 + 0x1C)) )
  {
    return 0;
  }
LABEL_15:
  v7 = (_DWORD *)*(this + 8);
  if ( !v7 )
  {
    if ( !*(_DWORD *)(v2 + 0x20) )
      goto LABEL_20;
    return 0;
  }
  if ( !*(_DWORD *)(v2 + 0x20) )
    return 0;
LABEL_20:
  if ( v7 )
  {
    sub_6DAC40(this, &v23, &v24, &a2);
    v8 = *(_DWORD **)(v2 + 0x20);
    v9 = 4 * v23;
    v10 = v7;
    if ( (unsigned int)(4 * v23) < 4 )
    {
LABEL_24:
      if ( !v9 )
        goto LABEL_34;
    }
    else
    {
      while ( *v10 == *v8 )
      {
        v9 -= 4;
        ++v8;
        ++v10;
        if ( v9 < 4 )
          goto LABEL_24;
      }
    }
    v11 = *(unsigned __int8 *)v10 - *(unsigned __int8 *)v8;
    if ( v11 )
      goto LABEL_32;
    v12 = v9 - 1;
    v13 = (unsigned __int8 *)v8 + 1;
    v14 = (unsigned __int8 *)v10 + 1;
    if ( v12 )
    {
      v11 = *v14 - *v13;
      if ( v11
        || (v15 = v12 - 1, v16 = v13 + 1, v17 = v14 + 1, v15)
        && ((v11 = *v17 - *v16) != 0 || (v18 = v16 + 1, v19 = v17 + 1, v15 != 1) && (v11 = *v19 - *v18) != 0) )
      {
LABEL_32:
        v20 = 1;
        if ( v11 <= 0 )
          v20 = 0xFFFFFFFF;
LABEL_35:
        if ( v20 )
          return 0;
        goto LABEL_36;
      }
    }
LABEL_34:
    v20 = 0;
    goto LABEL_35;
  }
LABEL_36:
  if ( *(float *)(v2 + 0x24) == *((float *)this + 9) && ((*(_BYTE *)(v2 + 0xC) ^ *((_BYTE *)this + 0xC)) & 1) == 0 )
  {
    v21 = *(_WORD *)(v2 + 0xC);
    v22 = *((_WORD *)this + 6);
    if ( ((((unsigned __int8)v22 >> 1) ^ ((unsigned __int8)v21 >> 1)) & 1) == 0
      && *(this + 0xE) == *(_DWORD *)(v2 + 0x38)
      && ((((unsigned __int8)v22 >> 2) ^ ((unsigned __int8)v21 >> 2)) & 1) == 0
      && ((((unsigned __int8)v22 >> 3) ^ ((unsigned __int8)v21 >> 3)) & 1) == 0
      && ((((unsigned __int8)v22 >> 4) ^ ((unsigned __int8)v21 >> 4)) & 1) == 0
      && ((((unsigned __int8)v22 >> 5) ^ ((unsigned __int8)v21 >> 5)) & 1) == 0
      && *(float *)(v2 + 0x28) == *((float *)this + 0xA)
      && *(float *)(v2 + 0x2C) == *((float *)this + 0xB)
      && *((_WORD *)this + 0x18) == *(_WORD *)(v2 + 0x30)
      && ((((unsigned __int8)v22 >> 6) ^ ((unsigned __int8)v21 >> 6)) & 1) == 0 )
    {
      return 1;
    }
  }
  return 0;
}
