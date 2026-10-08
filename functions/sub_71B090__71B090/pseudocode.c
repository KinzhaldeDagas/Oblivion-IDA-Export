char *__cdecl sub_71B090(char *Src)
{
  char *v1; // esi
  rsize_t v3; // [esp-Ch] [ebp-41Ch]
  rsize_t v4; // [esp+0h] [ebp-410h]
  char Dir[771]; // [esp+8h] [ebp-408h] BYREF
  char Dst[257]; // [esp+30Bh] [ebp-105h] BYREF

  v1 = (char *)FormHeapAlloc(0x104u); /*0x71b0c1*/
  if ( LODWORD(MEMORY[0xB3F9B0][0xDD]) ) /*0x71b0ba*/
  {
    sub_748760(Dir, Src); /*0x71b0ca*/
    strcpy_s(Dst, 0x100u, (const char *)LODWORD(MEMORY[0xB3F9B0][0xDD])); /*0x71b0e2*/
    sub_7487B0(Dir, (int)v1, 0x104); /*0x71b0f4*/
  }
  else
  {
    HIDWORD(v3) = Src; /*0x71b10f*/
    LODWORD(v3) = 0x104; /*0x71b110*/
    strncpy_s(v1, v3, (const char *)(strlen(Src) + 1), v4); /*0x71b116*/
  }
  return v1; /*0x71b11e*/
}
