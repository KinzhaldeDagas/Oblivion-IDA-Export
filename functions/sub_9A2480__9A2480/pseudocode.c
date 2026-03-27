char __cdecl sub_9A2480(char *Src, char *a2, rsize_t SizeInBytes)
{
  char *v4; // esi
  char *v5; // esi
  char *v6; // eax
  char *Context; // [esp+10h] [ebp-10Ch] BYREF
  char Dst[260]; // [esp+14h] [ebp-108h] BYREF

  if ( (unsigned int)(SizeInBytes + 1) < 0x104 )
    return 0;
  strcpy_s(Dst, 0x104u, Src);
  strcpy_s(a2, 0x104u, Src);
  v4 = strchr(Dst, 0x5F);
  if ( v4 )
  {
    if ( isdigit(v4[1]) )
    {
      if ( !v4[2] )
      {
        v5 = strtok_s(Dst, "_", &Context);
        v6 = strtok_s(0, "_", &Context);
        if ( v6 )
        {
          *(_DWORD *)HIDWORD(SizeInBytes) = j__atol(v6);
          sub_434900(a2, __PAIR64__((unsigned int)v5, SizeInBytes));
        }
      }
    }
  }
  return 1;
}
