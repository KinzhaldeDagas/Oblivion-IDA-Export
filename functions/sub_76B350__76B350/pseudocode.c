int __thiscall sub_76B350(_DWORD *this, NiD3DShaderInterface *a2)
{
  NiD3DShaderInterface *v2; // esi

  v2 = a2;
  a2->__vftable->Unk60(a2);
  NiD3DShaderInterface::SetDX9Renderer(v2, 0);
  return sub_776690(this + 0x241, (int *)&a2);
}
