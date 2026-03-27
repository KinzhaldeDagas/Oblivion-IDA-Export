char __thiscall sub_4E4F70(unsigned __int16 **this, int a2, float *a3)
{
  char result; // al
  unsigned __int16 **v5; // esi

  result = 0;
  if ( *(this + 9) )
  {
    if ( a2 )
    {
      v5 = this + 0xA;
      if ( this != (unsigned __int16 **)0xFFFFFFD8 )
      {
        while ( 1 )
        {
          if ( !v5[1] && !*v5 )
            return 0;
          if ( *(_DWORD *)(*((_DWORD *)*(this + 9) + 1) + 4 * **v5) == a2
            && sub_47D810((float *)*v5 + 1, a3, fConstant_2) )
          {
            break;
          }
          v5 = (unsigned __int16 **)v5[1];
          if ( !v5 )
            return 0;
        }
        return 1;
      }
    }
  }
  return result;
}
