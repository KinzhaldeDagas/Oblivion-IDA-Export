void __thiscall NiD3DRenderStateGroup::RestoreRenderState(NiD3DRenderStateGroup *this)
{
  _DWORD *i; // esi

  for ( i = *((_DWORD **)this + 4); i; i = (_DWORD *)i[2] )
    ((void (__thiscall *)(NiDX9RenderState *, _DWORD))dword_B427A4->vtbl->RestoreRenderState)(dword_B427A4, *i);
}
