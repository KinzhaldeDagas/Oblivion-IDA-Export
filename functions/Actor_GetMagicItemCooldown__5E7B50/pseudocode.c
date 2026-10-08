_DWORD *__thiscall Actor_GetMagicItemCooldown(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // edx

  result = 0; /*0x5e7b55*/
  if ( a2 ) /*0x5e7b59*/
  {
    v3 = this + 0x27; /*0x5e7b61*/
    if ( *(this + 0x27) ) /*0x5e7b5b*/
    {
      if ( this != (_DWORD *)0xFFFFFF64 ) /*0x5e7b6b*/
      {
        do /*0x5e7b85*/
        {
          if ( result ) /*0x5e7b72*/
            break; /*0x5e7b72*/
          if ( *v3 ) /*0x5e7b74*/
          {
            if ( *(_DWORD *)*v3 == a2 ) /*0x5e7b7c*/
              result = (_DWORD *)*v3; /*0x5e7b7e*/
          }
          v3 = (_DWORD *)v3[1]; /*0x5e7b80*/
        }
        while ( v3 ); /*0x5e7b85*/
      }
    }
  }
  return result; /*0x5e7b87*/
}
