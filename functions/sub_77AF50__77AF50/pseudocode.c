// MoonSugarEffect decode: NiDX9RenderState SetVertexBlending helper. Maps requested blend count through cached table at this+0x0C and writes D3DRS_VERTEXBLEND (0x97).
int __thiscall sub_77AF50(_DWORD *this, unsigned __int16 a2)
{
  return (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))(this, 0x97, *(this + a2 + 3), 0); /*0x77af68*/
}
