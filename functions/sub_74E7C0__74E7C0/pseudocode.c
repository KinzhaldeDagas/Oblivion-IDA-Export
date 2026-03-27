unsigned int __thiscall sub_74E7C0(int *this, int a2)
{
  char *v2; // esi
  const char *v4; // eax
  CHAR Text[260]; // [esp+Ch] [ebp-108h] BYREF

  v2 = (char *)(a2 + 0xE0);
  if ( a2 == 0xFFFFFF20
    || _strcmp((char *)(a2 + 0xE0), "Meshes\\Sky\\RainHeavy.NIF") && _strcmp(v2, "Meshes\\Sky\\RainLight.NIF") )
  {
    v4 = (const char *)(a2 + 8);
    if ( !*(_BYTE *)(a2 + 8) )
      v4 = "Please";
    _sprintf(Text, "File %s contains a mesh particle system! %s remove it.", v2, v4);
    if ( off_B27E60 )
      ((void (__cdecl *)(LPCSTR, LPCSTR))off_B27E60)(Text, "Unsupported Object");
  }
  return sub_749B70(this, (unsigned int *)a2);
}
