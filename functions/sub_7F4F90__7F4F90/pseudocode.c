// Oblivion constant-return helper with exactly two data references. At Lighting30ShaderProperty_vftable+0x54 (A957C0) it returns the exact shader-property subtype 10. At NighteyeShader_vftable+0x1C (A92ED0) it returns shader ID 10. The object categories and slot offsets are distinct; the reuse does not make NighteyeShader a shader property.
int __thiscall Shared_ReturnInt10(void *this)
{
  return 0xA; /*0x7f4f95*/
}
