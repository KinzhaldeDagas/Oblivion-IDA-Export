TESObjectREFR *__thiscall sub_628140(int *this, TESObjectREFR *a2)
{
  int *v3; // edi
  int v4; // esi
  float v6; // [esp+4h] [ebp-Ch]
  int v7; // [esp+8h] [ebp-8h]
  float Distance; // [esp+Ch] [ebp-4h]

  if ( !*((_BYTE *)this + 0x3C) || !TESObjectREFR_IsPersistent(a2) ) /*0x628154*/
    return 0; /*0x6281f5*/
  v6 = flt_A32048; /*0x62816b*/
  v3 = this + 0x15; /*0x628170*/
  v7 = 0; /*0x628174*/
  if ( this != (int *)0xFFFFFFAC ) /*0x62817c*/
  {
    do /*0x6281e5*/
    {
      v4 = *v3; /*0x628180*/
      if ( !*v3 ) /*0x628180*/
        break; /*0x628184*/
      v3 = (int *)v3[1]; /*0x62818a*/
      Distance = TesObjectREF_GetDistance((TESObjectREFR *)v4, a2, 0); /*0x628197*/
      if ( (*(_DWORD *)(v4 + 8) & 0x800) != 0 /*0x6281b2*/
        || (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x198))(v4, 0) )
      {
        sub_627D60(this, v4); /*0x6281d8*/
        v3 = this + 0x15; /*0x6281dd*/
      }
      else if ( Distance < (double)v6 ) /*0x6281c9*/
      {
        v6 = Distance; /*0x6281cb*/
        v7 = v4; /*0x6281cf*/
      }
    }
    while ( v3 ); /*0x6281e5*/
  }
  return (TESObjectREFR *)v7; /*0x6281ee*/
}
