int __thiscall sub_955F50(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  _BYTE *v6; // esi
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // ecx
  int v10; // eax
  bool v11; // zf
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // esi
  int v16; // edx
  _DWORD *v17; // [esp-4h] [ebp-94h]
  int v18; // [esp-4h] [ebp-94h]
  char v19; // [esp+13h] [ebp-7Dh] BYREF
  int v20; // [esp+14h] [ebp-7Ch]
  _DWORD *v21; // [esp+18h] [ebp-78h]
  unsigned int v22; // [esp+1Ch] [ebp-74h]
  signed int v23; // [esp+20h] [ebp-70h]
  int v24; // [esp+24h] [ebp-6Ch] BYREF
  int v25; // [esp+28h] [ebp-68h] BYREF
  int v26; // [esp+2Ch] [ebp-64h]
  int v27; // [esp+30h] [ebp-60h]
  _DWORD v28[5]; // [esp+34h] [ebp-5Ch] BYREF
  int v29[18]; // [esp+48h] [ebp-48h] BYREF

  if ( *(_BYTE *)(a2 + 0x38) )
    return 3;
  v6 = (_BYTE *)a4;
  if ( *(_DWORD *)a4 > *(this + 5) || *(_BYTE *)(a4 + 4) || *(_DWORD *)a4 % *(this + 0x18) )
  {
    if ( *(_BYTE *)(a2 + 4) )
    {
      sub_954800((int *)a2);
      if ( *(int *)(a2 + 8) < 0x16 || *(_DWORD *)a4 > *(this + 5) )
      {
        ++*(this + 9);
        v22 = *(_DWORD *)(*(this + 4) + 0xC);
        sub_954AF0(this, a2, a3, a4);
        sub_9549C0((_DWORD **)this, a2, a4);
        v9 = v22;
        *(_DWORD *)(a2 + 0x5C) = *(_DWORD *)(*(this + 4) + 0xC);
        v10 = *(_DWORD *)(*(this + 4) + 0xC);
        *(_BYTE *)(a2 + 0x38) = 1;
        return v10 - v9;
      }
    }
    else
    {
      v11 = *(_BYTE *)(a2 + 0x3C) == 1;
      LOBYTE(v28[0]) = 0;
      if ( v11 )
        sub_954DB0((char *)a3, (char *)a4, (int)v28);
      sub_954860(a2, a3, a4);
      v23 = sub_9553B0(*(float **)(a2 + 0xB8));
      sub_9558D0((float *)this, a2, (_DWORD *)a4, &v24, &v25);
      v22 = 0xFFFFFFFF;
      v20 = 0xFFFFFFFF;
      v21 = *(_DWORD **)(a2 + 0xF0);
      if ( v21 )
      {
        sub_954D20(v29, (_DWORD *)a4, v21, (int)(this + 0xC));
        v20 = sub_955F50(this, (int)v21, a4, (int)v29);
        if ( v20 >= 0 )
        {
          v22 = v21[0x17];
          sub_9547B0((_DWORD **)this, (int)v21);
        }
      }
      v21 = *(_DWORD **)(a2 + 0xEC);
      if ( v21 )
      {
        sub_954D20(v29, (_DWORD *)a4, v21, (int)(this + 0xC));
        v27 = sub_955F50(this, (int)v21, a4, (int)v29);
        if ( v27 >= 0 )
        {
          v17 = v21;
          v21 = (_DWORD *)v21[0x17];
          sub_9547B0((_DWORD **)this, (int)v17);
          if ( v20 >= 0 )
          {
            if ( *sub_954830(this, &v19, a2, (_DWORD *)a4) )
            {
              sub_954800((int *)a2);
              v12 = *(this + 4);
              v18 = v22;
              v13 = v24;
              ++*(this + 9);
              v26 = *(_DWORD *)(v12 + 0xC);
              sub_955240(this, v25, v13, v23, (int)v21, v18);
              v14 = *(_DWORD *)(a4 + 0x34) - *(_DWORD *)(a3 + 0x34);
              if ( v14 )
                sub_954980(this, v14);
              sub_954AA0((_DWORD **)this, (_DWORD *)a2, a3, a4);
              sub_9549C0((_DWORD **)this, a2, a4);
              if ( LOBYTE(v28[0]) )
                sub_954940((_DWORD **)this, v28);
              v15 = v26;
              v16 = v27;
              *(_DWORD *)(a2 + 0x5C) = *(_DWORD *)(*(this + 4) + 0xC);
              *(_BYTE *)(a2 + 0x38) = 1;
              return v20 + v16 + *(_DWORD *)(*(this + 4) + 0xC) - v15;
            }
          }
        }
      }
    }
    return 0xFFFFFFFF;
  }
  *(_BYTE *)(a4 + 4) = 1;
  v21 = (_DWORD *)*(this + 5);
  result = 0xFFFFFFFF;
  if ( !*(_BYTE *)(a2 + 0x38) )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(*(this + 4) + 0xC);
      qmemcpy(v29, v6, sizeof(v29));
      v22 = v7;
      result = sub_955F50(this, a2, a3, (int)v29);
      if ( *(this + 9) > *(this + 8) )
        break;
      if ( v22 == *(_DWORD *)(*(this + 4) + 0xC) )
      {
        v8 = *(this + 5);
        if ( v8 < 0 )
          break;
        *(this + 5) = v8 - *(this + 0x18);
      }
      if ( *(_BYTE *)(a2 + 0x38) )
        break;
      v6 = (_BYTE *)a4;
    }
    v6 = (_BYTE *)a4;
  }
  *(this + 5) = v21;
  v6[4] = 0;
  return result;
}
