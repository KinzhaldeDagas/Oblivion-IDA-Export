int __cdecl sub_712290(char *Src)
{
  int v1; // esi
  int v2; // edi
  char *i; // eax
  int v4; // eax
  char *Context; // [esp+8h] [ebp-18h] BYREF
  char Dst[16]; // [esp+Ch] [ebp-14h] BYREF

  strcpy_s(Dst, 0x10u, Src);
  v1 = 0x18;
  v2 = 0;
  for ( i = strtok_s(Dst, ".", &Context); i; i = strtok_s(0, ".", &Context) )
  {
    v4 = j__atol(i) << v1;
    v1 -= 8;
    v2 |= v4;
  }
  return v2;
}
