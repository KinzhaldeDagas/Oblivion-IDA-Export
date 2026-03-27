int __thiscall sub_701670(NiDX9Renderer *this)
{
  NiRenderTargetGroup *v1; // eax
  int v3; // eax

  v1 = this->__vftable->super.GetDefaultRTGroup(this);
  if ( v1 && (v3 = (int)v1->vtbl->GetBuffer(v1, 0)) != 0 )
    return *(_DWORD *)(v3 + 0xC);
  else
    return 0;
}
