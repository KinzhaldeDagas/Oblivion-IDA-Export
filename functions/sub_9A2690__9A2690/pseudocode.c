int __cdecl sub_9A2690(char *Src)
{
  int v2; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( sub_9A2570(Src, (const char **)&v2, (int)&v3) && v2 && (unsigned int)(v2 - 1) <= 0xB ) /*0x9a26bb*/
    return 7; /*0x9a26cb*/
  else
    return 0; /*0x9a26d4*/
}
