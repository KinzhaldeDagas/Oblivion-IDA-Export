unsigned int __thiscall sub_74E7C0(int *this, int a2)
{
  const char *v2; // esi
  const char *v4; // eax
  CHAR Text[260]; // [esp+Ch] [ebp-108h] BYREF

  v2 = (const char *)(a2 + 0xE0); /*0x74e7de*/
  if ( a2 == 0xFFFFFF20 /*0x74e802*/
    || CRT_StricmpLocaleDispatch((const char *)(a2 + 0xE0), "Meshes\\Sky\\RainHeavy.NIF")
    && CRT_StricmpLocaleDispatch(v2, "Meshes\\Sky\\RainLight.NIF") )
  {
    v4 = (const char *)(a2 + 8); /*0x74e812*/
    if ( !*(_BYTE *)(a2 + 8) ) /*0x74e80e*/
      v4 = "Please"; /*0x74e817*/
    _sprintf(Text, "File %s contains a mesh particle system! %s remove it.", v2, v4); /*0x74e828*/
    if ( off_B27E60 ) /*0x74e82d*/
      ((void (__cdecl *)(LPCSTR, LPCSTR))off_B27E60)(Text, "Unsupported Object"); /*0x74e845*/
  }
  return sub_749B70(this, (unsigned int *)a2); /*0x74e852*/
}
