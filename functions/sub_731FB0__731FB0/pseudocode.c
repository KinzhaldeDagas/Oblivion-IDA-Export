bool __thiscall sub_731FB0(_DWORD *this, _DWORD *a2, RECT *a3, SInt32 a4, SInt32 a5)
{
  NiDX9Renderer *v5; // eax

  v5 = g_Renderer;
  return *(this + 4) && v5 && a2[4] && v5->__vftable->super.FastCopy((NiRenderer *)v5, this, a2, a3, a4, a5);
}
