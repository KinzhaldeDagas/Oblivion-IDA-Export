// Restore every D3D render-state ID recorded in a NiD3DRenderStateGroup. Walks the group's linked saved-state list and asks the global NiDX9RenderState to restore each ID.
void __thiscall NiD3DRenderStateGroup::RestoreRenderState(NiD3DRenderStateGroup *this)
{                                               // Walk the group's linked saved-state records head-to-tail.
  _DWORD *i; // esi

  for ( i = *((_DWORD **)this + 4); i; i = (_DWORD *)i[2] ) /*0x772726*/
    ((void (__thiscall *)(NiDX9RenderState *, _DWORD))unk_B427A4->vtbl->RestoreRenderState)(unk_B427A4, *i);// Restore the recorded D3D render-state ID through the global NiDX9RenderState. /*0x77273e*/
}
