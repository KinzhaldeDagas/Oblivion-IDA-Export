bool __thiscall sub_732000(_DWORD *this, _DWORD *a2, RECT *a3, RECT *a4, UInt32 a5)
{
  NiDX9Renderer *v5; // eax

  v5 = g_Renderer;
  return *(this + 4) && v5 && a2[4] && v5->__vftable->super.Copy((NiRenderer *)v5, this, a2, a3, a4, a5);
}
