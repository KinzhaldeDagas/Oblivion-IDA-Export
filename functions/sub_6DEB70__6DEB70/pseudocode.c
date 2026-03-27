int __thiscall sub_6DEB70(int this, float a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  double v6; // st7
  double v7; // st5
  double v8; // st6
  float v10; // [esp+8h] [ebp-24h]
  float v11; // [esp+Ch] [ebp-20h]
  float v12; // [esp+10h] [ebp-1Ch]
  float v13; // [esp+14h] [ebp-18h]
  float v14; // [esp+18h] [ebp-14h]
  float v15; // [esp+1Ch] [ebp-10h]
  _BYTE v16[12]; // [esp+20h] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 )
  {
    *(float *)(this + 0x28) = flt_A7A164;
  }
  else if ( sub_6C36B0((float *)this, a2) )
  {
    v3 = *(_DWORD *)(this + 0x3C);
    if ( !v3 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 0x94))(v3) )
LABEL_26:
      JUMPOUT(0x6DED05);
  }
  v4 = *(_DWORD *)(this + 0x3C);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__cdecl **)(_DWORD, _DWORD, _BYTE *))(*(_DWORD *)v4 + 0x54))(
           *(float *)(this + 0x28),
           *(_DWORD *)(this + 0x30),
           v16) )
    {
      v5 = *(_DWORD *)(this + 0x30);
      v10 = v13;
      v11 = v14;
      v12 = v15;
      if ( v13 >= 0.0 )
      {
        v6 = 1.0;
        if ( v13 > 1.0 )
          v10 = 1.0;
      }
      else
      {
        v6 = 1.0;
        v10 = 0.0;
      }
      if ( v14 >= 0.0 )
      {
        if ( v14 > v6 )
          v11 = v6;
        v7 = 0.0;
        v8 = v15;
      }
      else
      {
        v7 = 0.0;
        v8 = v15;
        v11 = 0.0;
      }
      if ( v7 <= v8 )
      {
        if ( v8 > v6 )
          v12 = v6;
      }
      else
      {
        v12 = v7;
      }
      switch ( *(_BYTE *)(this + 0x40) & 7 )
      {
        case 0:
          ++*(_DWORD *)(v5 + 0x54);
          *(float *)(v5 + 0x1C) = v10;
          *(float *)(v5 + 0x20) = v11;
          *(float *)(v5 + 0x24) = v12;
          return LODWORD(v12);
        case 1:
          ++*(_DWORD *)(v5 + 0x54);
          *(float *)(v5 + 0x28) = v10;
          *(float *)(v5 + 0x2C) = v11;
          *(float *)(v5 + 0x30) = v12;
          return LODWORD(v11);
        case 2:
          ++*(_DWORD *)(v5 + 0x54);
          *(float *)(v5 + 0x34) = v10;
          *(float *)(v5 + 0x38) = v11;
          *(float *)(v5 + 0x3C) = v12;
          return LODWORD(v12);
        case 3:
          ++*(_DWORD *)(v5 + 0x54);
          *(float *)(v5 + 0x40) = v10;
          *(float *)(v5 + 0x44) = v11;
          *(float *)(v5 + 0x48) = v12;
          return def_6DEC86(LODWORD(a2));
        default:
          goto LABEL_26;
      }
    }
  }
  goto LABEL_26;
}
