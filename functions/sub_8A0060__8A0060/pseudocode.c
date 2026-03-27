int __thiscall sub_8A0060(NiRenderTargetGroup *this, int a2)
{
  Ni2DBuffer *v3; // eax
  UInt32 width; // eax
  int v5; // ecx

  if ( this && (v3 = this->members.RenderTargets[0]) != 0 )
    width = v3[1].members.width;
  else
    width = 0;
  if ( width )
    v5 = *(_DWORD *)(width + 0xC);
  else
    v5 = 0;
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2);
  return sub_6E7270(this, a2);
}
