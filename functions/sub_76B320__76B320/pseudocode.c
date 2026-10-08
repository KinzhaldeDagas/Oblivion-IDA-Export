void *__thiscall sub_76B320(_DWORD *this, NiD3DShaderInterface *a2)
{
  NiD3DShaderInterface::SetDX9Renderer(a2, 0); /*0x76b329*/
  return NiTPointerList_RemoveByData(this + 0x241, (void **)&a2); /*0x76b33e*/
}
