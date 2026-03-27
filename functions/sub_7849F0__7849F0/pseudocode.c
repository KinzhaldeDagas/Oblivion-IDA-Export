void __stdcall sub_7849F0(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 0x18 )
    TESTexture::ClearComponentReferences(i);
}
