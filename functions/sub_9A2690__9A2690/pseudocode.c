int __cdecl sub_9A2690(char *Src)
{
  int v2; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( sub_9A2570(Src, (unsigned __int8 **)&v2, (int)&v3) && v2 && (unsigned int)(v2 - 1) <= 0xB )
    return 7;
  else
    return 0;
}
