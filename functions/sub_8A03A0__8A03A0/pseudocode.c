int __thiscall sub_8A03A0(NiRenderTargetGroup *this, int a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = (*(int (__thiscall **)(NiRenderTargetGroup *))&this->vtbl[1].gap0[4])(this); /*0x8a03ac*/
  if ( v3 ) /*0x8a03b0*/
    v4 = *(_DWORD *)(v3 + 0xC); /*0x8a03b2*/
  else
    v4 = 0; /*0x8a03b7*/
  if ( v4 ) /*0x8a03bf*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x8a03c7*/
  return sub_6E7270(this, a2); /*0x8a03d1*/
}
