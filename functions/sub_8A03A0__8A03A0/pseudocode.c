int __thiscall sub_8A03A0(NiRenderTargetGroup *this, int a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = (*(int (__thiscall **)(NiRenderTargetGroup *))&this->vtbl[1].gap0[4])(this);
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 0xC);
  else
    v4 = 0;
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2);
  return sub_6E7270(this, a2);
}
