int __thiscall sub_89F390(NiRenderTargetGroup *this, int a2)
{
  Ni2DBuffer *v3; // eax
  Ni2DBuffer *v4; // eax
  #9279 *vftable; // eax
  int v6; // ecx

  if ( this && (v3 = this->members.RenderTargets[0]) != 0 && (v4 = v3 + 1) != 0 && (vftable = v4->__vftable) != 0 ) /*0x89f3a8*/
    v6 = *((_DWORD *)vftable + 2); /*0x89f3aa*/
  else
    v6 = 0; /*0x89f3af*/
  if ( v6 ) /*0x89f3b7*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x24))(v6, a2); /*0x89f3bf*/
  return sub_6E7270(this, a2); /*0x89f3c9*/
}
