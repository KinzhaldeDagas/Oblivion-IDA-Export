// [Verified] Initializes a NiTStringPointerMap<ShaderBufferEntry*> with 0x25 buckets and, for a positive package index, formats shaderpackage%03i.sdp. Oblivion then loads that SDP record map for shader creation. [Verified cross-build divergence] Fallout Renderer::Init exposes bCreateShaderPackage and forwards it to BSShaderManager::bCreateNewShaderPackage, while its HLSL creator resolves source files and compiles them; the current Fallout IDB does not establish a same-name Oblivion-style SDP map.
int *__thiscall ShaderProgramPackageMap_Ctor(int *this, int packageIndex)
{
  int v3; // eax
  int v4; // eax
  char *v5; // ecx
  _BYTE *v6; // edx
  char v7; // al
  unsigned int v9; // [esp-8h] [ebp-88h]
  char v10[100]; // [esp+Ch] [ebp-74h] BYREF
  int v11; // [esp+7Ch] [ebp-4h]

  *(this + 3) = 0x25; /*0x7db088*/
  *(this + 2) = (int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,ShaderBufferEntry *>::`vftable'; /*0x7db099*/
  *(this + 5) = 0; /*0x7db0a0*/
  v3 = FormHeapAlloc(0x94u); /*0x7db0ac*/
  v9 = 4 * *(this + 3); /*0x7db0b8*/
  *(this + 4) = v3; /*0x7db0bc*/
  _memset(v3, 0, v9); /*0x7db0bf*/
  *((_BYTE *)this + 0x18) = 1; /*0x7db0c7*/
  *(this + 2) = (int)&NiTStringPointerMap<ShaderBufferEntry *>::`vftable'; /*0x7db0cb*/
  v11 = 0; /*0x7db0db*/
  *(this + 1) = 0; /*0x7db0e3*/
  *this = 0; /*0x7db0ea*/
  if ( packageIndex > 0 ) /*0x7db0f0*/
  {
    _sprintf(v10, "shaderpackage%03i.sdp", packageIndex); /*0x7db0fd*/
    v4 = FormHeapAlloc(strlen(v10) + 1); /*0x7db11f*/
    *this = v4; /*0x7db127*/
    v5 = v10; /*0x7db129*/
    v6 = (_BYTE *)v4; /*0x7db12d*/
    do /*0x7db13c*/
    {
      v7 = *v5; /*0x7db130*/
      *v6++ = *v5++; /*0x7db132*/
    }
    while ( v7 ); /*0x7db13c*/
  }
  return this; /*0x7db140*/
}
