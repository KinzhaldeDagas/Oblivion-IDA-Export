int __thiscall sub_8B9B60(NiRenderTargetGroup *this, int a2)
{
  Ni2DBuffer *v3; // ecx
  int v4; // eax
  int v5; // ecx

  if ( this && (v3 = this->members.RenderTargets[0]) != 0 && (v4 = sub_8AC0C0(v3)) != 0 )
    v5 = *(_DWORD *)(v4 + 0xC);
  else
    v5 = 0;
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2);
  return sub_6E7270(this, a2);
}
