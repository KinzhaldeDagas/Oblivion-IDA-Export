const char **__thiscall sub_70AC00(const char **this, const char *a2)
{
  const char **result; // eax
  int v4; // esi
  int v5; // ecx

  result = sub_7073F0(this, a2);
  if ( !result )
  {
    v4 = 0;
    if ( *((_WORD *)this + 0x5B) )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)&(*(this + 0x2C))[4 * v4];
        if ( v5 )
        {
          result = (const char **)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 0x58))(v5, a2);
          if ( result )
            break;
        }
        if ( *((unsigned __int16 *)this + 0x5B) <= (unsigned int)++v4 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
