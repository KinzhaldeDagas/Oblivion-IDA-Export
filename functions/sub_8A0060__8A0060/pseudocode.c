int __thiscall sub_8A0060(NiRenderTargetGroup *this, int a2)
{
  Ni2DBuffer *v3; // eax
  UInt32 width; // eax
  int v5; // ecx

  if ( this && (v3 = this->members.RenderTargets[0]) != 0 ) /*0x8a006d*/
    width = v3[1].members.width; /*0x8a006f*/
  else
    width = 0; /*0x8a0074*/
  if ( width ) /*0x8a0078*/
    v5 = *(_DWORD *)(width + 0xC); /*0x8a007a*/
  else
    v5 = 0; /*0x8a007f*/
  if ( v5 ) /*0x8a0087*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2); /*0x8a008f*/
  return sub_6E7270(this, a2); /*0x8a0099*/
}
