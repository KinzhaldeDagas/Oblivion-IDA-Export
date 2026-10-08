char __cdecl sub_4FCB90(int a1, int a2)
{
  int v2; // ecx
  char result; // al
  int v4; // edx
  int v5; // eax

  v2 = a2 + a1; /*0x4fcb98*/
  result = *(_BYTE *)(a2 + a1); /*0x4fcb9a*/
  v4 = 0; /*0x4fcb9c*/
  if ( !result ) /*0x4fcba0*/
    return 1; /*0x4fcba0*/
  do /*0x4fcbbf*/
  {
    v5 = result - 0x28; /*0x4fcba5*/
    if ( v5 ) /*0x4fcba8*/
    {
      if ( v5 == 1 ) /*0x4fcbad*/
        --v4; /*0x4fcbaf*/
    }
    else
    {
      ++v4; /*0x4fcbb4*/
    }
    result = *(_BYTE *)++v2; /*0x4fcbb7*/
  }
  while ( result ); /*0x4fcbbf*/
  if ( !v4 ) /*0x4fcbc3*/
    return 1; /*0x4fcbc6*/
  return result; /*0x4fcbc5*/
}
