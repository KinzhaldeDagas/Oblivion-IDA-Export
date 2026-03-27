int __cdecl sub_9A4960(char *Src)
{
  int v2; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( sub_9A47E0(Src, (unsigned __int8 **)&v2, (int)&v3) && v2 )
    return sub_9A48B0(v2, v3);
  else
    return 0;
}
