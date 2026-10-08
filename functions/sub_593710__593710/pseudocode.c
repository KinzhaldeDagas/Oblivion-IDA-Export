void __thiscall sub_593710(char **this)
{
  char *v2; // eax
  const char *RenderTargetsNum; // eax
  int v4; // edx
  unsigned int v5; // eax
  char *v6; // eax
  char *v7; // eax

  v2 = sub_580120(*(this + 0x28)); /*0x593719*/
  Tile_SetString(*(this + 0xB), (_DWORD *)0xFDE, v2); /*0x593727*/
  if ( !sub_57D2F0(*(this + 0x28)) ) /*0x593732*/
  {
    if ( *((_BYTE *)this + 0xA4) ) /*0x59373f*/
    {
      if ( NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x28)) ) /*0x593751*/
      {
        RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x28)); /*0x593760*/
        BSStringT_Set((BSStringT *)*(this + 0x25) + 5, RenderTargetsNum, 0); /*0x593771*/
      }
      else
      {
        v4 = (int)*(this + 0x25); /*0x593778*/
        LOWORD(v5) = *(_WORD *)(v4 + 0x2C); /*0x59377e*/
        if ( (_WORD)v5 == 0xFFFF ) /*0x593786*/
          v5 = strlen(*(const char **)(v4 + 0x28)); /*0x59378c*/
        else
          v5 = (unsigned __int16)v5; /*0x59379e*/
        if ( v5 ) /*0x5937a3*/
        {
          v6 = *(char **)(v4 + 0x28); /*0x5937a5*/
          if ( !v6 ) /*0x5937aa*/
            v6 = EmptyString; /*0x5937ac*/
          sub_57FF20((BSStringT *)*(this + 0x28), v6); /*0x5937b8*/
          v7 = *((char **)*(this + 0x25) + 0xA); /*0x5937c6*/
          if ( !v7 ) /*0x5937cb*/
            v7 = EmptyString; /*0x5937cd*/
          Tile_SetString(*(this + 0xB), (_DWORD *)0xFDE, v7); /*0x5937db*/
        }
        else
        {
          sub_57FF20((BSStringT *)*(this + 0x28), (char *)stru_B38900.value); /*0x5937ee*/
          Tile_SetString(*(this + 0xB), (_DWORD *)0xFDE, (char *)stru_B38900.value); /*0x593802*/
          *((_BYTE *)this + 0xA4) = 0; /*0x593807*/
        }
      }
    }
  }
}
