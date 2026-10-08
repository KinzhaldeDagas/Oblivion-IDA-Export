const char **__thiscall sub_70AC00(const char **this, const char *a2)
{
  const char **result; // eax
  int v4; // esi
  int v5; // ecx

  result = sub_7073F0(this, a2); /*0x70ac09*/
  if ( !result ) /*0x70ac10*/
  {
    v4 = 0; /*0x70ac1a*/
    if ( *((_WORD *)this + 0x5B) ) /*0x70ac12*/
    {
      while ( 1 ) /*0x70ac2a*/
      {
        v5 = *(_DWORD *)&(*(this + 0x2C))[4 * v4]; /*0x70ac2a*/
        if ( v5 ) /*0x70ac2f*/
        {
          result = (const char **)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 0x58))(v5, a2); /*0x70ac37*/
          if ( result ) /*0x70ac3b*/
            break; /*0x70ac3b*/
        }
        if ( *((unsigned __int16 *)this + 0x5B) <= (unsigned int)++v4 ) /*0x70ac49*/
          return 0; /*0x70ac49*/
      }
    }
    else
    {
      return 0; /*0x70ac4b*/
    }
  }
  return result; /*0x70ac4e*/
}
