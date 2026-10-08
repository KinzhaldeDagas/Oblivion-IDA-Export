char __cdecl sub_9A2480(char *Src, char *a2, rsize_t SizeInBytes)
{
  char *v4; // esi
  char *v5; // esi
  char *v6; // eax
  char *Context; // [esp+10h] [ebp-10Ch] BYREF
  char Dst[260]; // [esp+14h] [ebp-108h] BYREF

  if ( (unsigned int)(SizeInBytes + 1) < 0x104 ) /*0x9a24bc*/
    return 0; /*0x9a24be*/
  strcpy_s(Dst, 0x104u, Src); /*0x9a24d0*/
  strcpy_s(a2, 0x104u, Src); /*0x9a24dc*/
  v4 = strchr(Dst, 0x5F); /*0x9a24ed*/
  if ( v4 ) /*0x9a24f4*/
  {
    if ( isdigit(v4[1]) ) /*0x9a24fb*/
    {
      if ( !v4[2] ) /*0x9a2507*/
      {
        v5 = strtok_s(Dst, "_", &Context); /*0x9a2521*/
        v6 = strtok_s(0, "_", &Context); /*0x9a252f*/
        if ( v6 ) /*0x9a2539*/
        {
          *(_DWORD *)HIDWORD(SizeInBytes) = j__atol(v6); /*0x9a2544*/
          sub_434900(a2, __PAIR64__((unsigned int)v5, SizeInBytes)); /*0x9a2546*/
        }
      }
    }
  }
  return 1; /*0x9a2550*/
}
