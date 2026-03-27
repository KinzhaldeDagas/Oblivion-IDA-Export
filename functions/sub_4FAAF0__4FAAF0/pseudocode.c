int *sub_4FAAF0()
{
  int *result; // eax
  int v1; // ecx

  result = (int *)TESDataHandler;
  if ( TESDataHandler )
  {
    result += 0x19;
    if ( result )
    {
      if ( result[1] || *result )
      {
        do
        {
          v1 = *result;
          result = (int *)result[1];
          *(float *)(v1 + 0x34) = 0.0;
        }
        while ( result );
      }
    }
  }
  return result;
}
