// Shared virtual helper returning integer 11. SkyShaderProperty uses it at vtable +0x54 as subtype 0x0B; RefractionShader and NiDitherProperty reuse the same code address for distinct virtual slots.
int __thiscall Shared_ReturnInt11(void *this)
{
  return 0xB; /*0x741365*/
}
