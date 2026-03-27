void __thiscall sub_593710(char **this)
{
  char *v2; // eax
  const char *RenderTargetsNum; // eax
  int v4; // edx
  unsigned int v5; // eax
  char *v6; // eax
  char *v7; // eax

  v2 = sub_580120(*(this + 0x28));
  Tile_SetString(*(this + 0xB), (_DWORD *)0xFDE, v2);
  if ( !sub_57D2F0(*(this + 0x28)) )
  {
    if ( *((_BYTE *)this + 0xA4) )
    {
      if ( NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x28)) )
      {
        RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum((NiRenderTargetGroup *)*(this + 0x28));
        BSStringT_Set((BSStringT *)*(this + 0x25) + 5, RenderTargetsNum, 0);
      }
      else
      {
        v4 = (int)*(this + 0x25);
        LOWORD(v5) = *(_WORD *)(v4 + 0x2C);
        if ( (_WORD)v5 == 0xFFFF )
          v5 = strlen(*(const char **)(v4 + 0x28));
        else
          v5 = (unsigned __int16)v5;
        if ( v5 )
        {
          v6 = *(char **)(v4 + 0x28);
          if ( !v6 )
            v6 = EmptyString;
          sub_57FF20((BSStringT *)*(this + 0x28), v6);
          v7 = *((char **)*(this + 0x25) + 0xA);
          if ( !v7 )
            v7 = EmptyString;
          Tile_SetString(*(this + 0xB), (_DWORD *)0xFDE, v7);
        }
        else
        {
          sub_57FF20((BSStringT *)*(this + 0x28), (char *)dword_B38900);
          Tile_SetString(*(this + 0xB), (_DWORD *)0xFDE, (char *)dword_B38900);
          *((_BYTE *)this + 0xA4) = 0;
        }
      }
    }
  }
}
