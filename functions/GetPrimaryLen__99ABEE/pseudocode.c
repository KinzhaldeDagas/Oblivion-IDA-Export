int __fastcall GetPrimaryLen(int a1, char *a2)
{
  int result; // eax
  char v3; // cl

  for ( result = 0; ; ++result )
  {
    v3 = *a2++;
    if ( (v3 < 0x41 || v3 > 0x5A) && (unsigned __int8)(v3 - 0x61) > 0x19u )
      break;
  }
  return result;
}
