//
// GPU-world pass-state capture contract: ordered list head at group+8 is applied first with savePrevious=0, then head at group+10 with savePrevious=1. Nodes are {DWORD state,DWORD value,DWORD next} at+0/+4/+8. Duplicates and shared suffixes across the two lists must retain their application order. Project capture now copies/seals these authored writes; this is not final draw state or native traversal omission permission.
void __thiscall NiD3DRenderStateGroup::SetRenderStates(NiD3DRenderStateGroup *this)
{
  _DWORD *i; // esi
  _DWORD *j; // esi

  for ( i = *((_DWORD **)this + 2); i; i = (_DWORD *)i[2] ) /*0x7726c9*/
    ((void (__thiscall *)(NiDX9RenderState *, _DWORD, _DWORD, _DWORD))unk_B427A4->vtbl->SetRenderState)( /*0x7726e4*/
      unk_B427A4,
      *i,
      i[1],
      0);
  for ( j = *((_DWORD **)this + 4); j; j = (_DWORD *)j[2] ) /*0x7726f2*/
    ((void (__thiscall *)(NiDX9RenderState *, _DWORD, _DWORD, int))unk_B427A4->vtbl->SetRenderState)( /*0x772708*/
      unk_B427A4,
      *j,
      j[1],
      1);
}
