void *__thiscall sub_76B350(_DWORD *this, NiD3DShaderInterface *a2)
{
  NiD3DShaderInterface *v2; // esi

  v2 = a2; /*0x76b351*/
  a2->__vftable->Unk60(a2); /*0x76b35f*/
  NiD3DShaderInterface::SetDX9Renderer(v2, 0); /*0x76b365*/
  return NiTPointerList_RemoveByData(this + 0x241, (void **)&a2); /*0x76b37a*/
}
