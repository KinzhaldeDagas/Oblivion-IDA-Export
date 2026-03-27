void __thiscall NiD3DRenderStateGroup::SetRenderStates(NiD3DRenderStateGroup *this)
{
  _DWORD *i; // esi
  _DWORD *j; // esi

  for ( i = *((_DWORD **)this + 2); i; i = (_DWORD *)i[2] )
    ((void (__thiscall *)(NiDX9RenderState *, _DWORD, _DWORD, _DWORD))dword_B427A4->vtbl->SetRenderState)(
      dword_B427A4,
      *i,
      i[1],
      0);
  for ( j = *((_DWORD **)this + 4); j; j = (_DWORD *)j[2] )
    ((void (__thiscall *)(NiDX9RenderState *, _DWORD, _DWORD, int))dword_B427A4->vtbl->SetRenderState)(
      dword_B427A4,
      *j,
      j[1],
      1);
}
