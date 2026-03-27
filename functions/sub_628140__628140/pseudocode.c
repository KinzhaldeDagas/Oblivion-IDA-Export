TESObjectREFR *__thiscall sub_628140(int *this, TESObjectREFR *a2)
{
  int *v3; // edi
  int v4; // esi
  float v6; // [esp+4h] [ebp-Ch]
  int v7; // [esp+8h] [ebp-8h]
  float Distance; // [esp+Ch] [ebp-4h]

  if ( !*((_BYTE *)this + 0x3C) || !TESObjectREFR_IsPersistent_(a2) )
    return 0;
  v6 = flt_A32048;
  v3 = this + 0x15;
  v7 = 0;
  if ( this != (int *)0xFFFFFFAC )
  {
    do
    {
      v4 = *v3;
      if ( !*v3 )
        break;
      v3 = (int *)v3[1];
      Distance = TesObjectREF_GetDistance((TESObjectREFR *)v4, a2, 0);
      if ( (*(_DWORD *)(v4 + 8) & 0x800) != 0
        || (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x198))(v4, 0) )
      {
        sub_627D60(this, v4);
        v3 = this + 0x15;
      }
      else if ( Distance < (double)v6 )
      {
        v6 = Distance;
        v7 = v4;
      }
    }
    while ( v3 );
  }
  return (TESObjectREFR *)v7;
}
