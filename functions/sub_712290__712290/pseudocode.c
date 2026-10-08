int __cdecl sub_712290(char *Src)
{
  int v1; // esi
  int v2; // edi
  char *i; // eax
  int v4; // eax
  char *Context; // [esp+8h] [ebp-18h] BYREF
  char Dst[16]; // [esp+Ch] [ebp-14h] BYREF

  strcpy_s(Dst, 0x10u, Src); /*0x7122ac*/
  v1 = 0x18; /*0x7122c0*/
  v2 = 0; /*0x7122c5*/
  for ( i = strtok_s(Dst, ".", &Context); i; i = strtok_s(0, ".", &Context) ) /*0x7122d1*/
  {
    v4 = j__atol(i) << v1; /*0x7122db*/
    v1 -= 8; /*0x7122dd*/
    v2 |= v4; /*0x7122e0*/
  }
  return v2; /*0x7122fa*/
}
