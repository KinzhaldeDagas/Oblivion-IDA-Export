int __thiscall sub_701670(NiDX9Renderer *this)
{
  NiRenderTargetGroup *v1; // eax
  int v3; // eax

  v1 = this->__vftable->super.GetDefaultRTGroup(this); /*0x701675*/
  if ( v1 && (v3 = (int)v1->vtbl->GetBuffer(v1, 0)) != 0 ) /*0x70168b*/
    return *(_DWORD *)(v3 + 0xC); /*0x70168d*/
  else
    return 0; /*0x70167b*/
}
