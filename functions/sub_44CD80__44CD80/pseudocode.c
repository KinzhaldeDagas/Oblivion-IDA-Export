NiObject *__stdcall sub_44CD80(int a1, int a2, int a3, int a4, char a5)
{
  NiObject *result; // eax

  result = (NiObject *)a1;
  if ( a1 )
  {
    result = NiRTTI_Cast((BSStringT *)dword_B3F95C, *(NiObject **)(a1 + 8));
    if ( result )
      return (NiObject *)nullsub_return0_0arg();
  }
  return result;
}
