// Verified (Oblivion): removes the exact ParticleShaderProperty instance from the attached actor scenegraph before releasing the retained reference.
void __stdcall NiProperty_DetachFromActorScenegraphs(void *rootNode, ParticleShaderProperty *property)
{
  sub_7E39A0((volatile LONG *)rootNode, (NiProperty *)property); /*0x4ac74a*/
}
