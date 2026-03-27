double __thiscall sub_615520(int this)
{
  double result; // st7
  unsigned int v3; // eax
  int v4; // edi
  double v5; // st7
  int v6; // ecx
  float v7; // [esp+Ch] [ebp-Ch] BYREF
  double v8; // [esp+10h] [ebp-8h] BYREF

  if ( *(float *)(this + 0x188) >= 0.0 )
    return *(float *)(this + 0x188);
  v3 = *(_DWORD *)(this + 0x70);
  v7 = 0.0;
  if ( v3 < 2 || v3 == 3 || v3 == 2 || v3 == 4 || v3 == 0xD )
  {
    switch ( v3 )
    {
      case 0u:
      case 3u:
      case 0xDu:
        v4 = *(_DWORD *)(this + 0x3C);
        v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 0x26C))(v4);
        v7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 0xEC))(v4) * v8;
        result = v7;
        *(float *)(this + 0x188) = v7;
        break;
      case 1u:
        if ( sub_612D60((_DWORD *)this) )
          v5 = *(float *)(sub_612D60((_DWORD *)this) + 0x98);
        else
          v5 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 0x3C) + 0x26C))(*(_DWORD *)(this + 0x3C));
        v6 = *(_DWORD *)(this + 0x3C);
        v7 = v5;
        v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 0xEC))(v6);
        v7 = Calc_GetCombatDistance(v7) * v8;
        result = v7;
        *(float *)(this + 0x188) = v7;
        break;
      case 2u:
      case 4u:
        v7 = 0.0;
        *(float *)&v8 = 0.0;
        sub_6142D0((_DWORD *)this, COERCE_FLOAT(&v7), COERCE_FLOAT(&v8));
        result = v7;
        *(float *)(this + 0x188) = v7;
        break;
    }
  }
  else
  {
    result = v7;
    *(float *)(this + 0x188) = v7;
  }
  return result;
}
