LONG __thiscall sub_434C00(volatile LONG *this, __int16 a2)
{
  __int16 v2; // si
  volatile LONG *v3; // edi
  LONG result; // eax
  __int16 v5; // si
  volatile LONG *v6; // edi

  v2 = a2;
  if ( a2 <= 0 )
  {
    if ( a2 < 0 )
    {
      v5 = -a2;
      v6 = this + 1;
      do
      {
        --v5;
        result = InterlockedDecrement(v6);
      }
      while ( v5 );
    }
  }
  else
  {
    v3 = this + 1;
    do
    {
      --v2;
      result = InterlockedIncrement(v3);
    }
    while ( v2 );
  }
  return result;
}
