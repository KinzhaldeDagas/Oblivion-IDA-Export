_DWORD *__thiscall Actor_GetMagicItemCooldown(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // edx

  result = 0;
  if ( a2 )
  {
    v3 = this + 0x27;
    if ( *(this + 0x27) )
    {
      if ( this != (_DWORD *)0xFFFFFF64 )
      {
        do
        {
          if ( result )
            break;
          if ( *v3 )
          {
            if ( *(_DWORD *)*v3 == a2 )
              result = (_DWORD *)*v3;
          }
          v3 = (_DWORD *)v3[1];
        }
        while ( v3 );
      }
    }
  }
  return result;
}
