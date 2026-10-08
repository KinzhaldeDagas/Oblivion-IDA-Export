int __thiscall sub_8B9B60(NiRenderTargetGroup *this, int a2)
{
  Ni2DBuffer *v3; // ecx
  int HavokObject; // eax
  int v5; // ecx

  if ( this && (v3 = this->members.RenderTargets[0]) != 0 && (HavokObject = bhkCollisionWrapper_GetHavokObject(v3)) != 0 ) /*0x8b9b76*/
    v5 = *(_DWORD *)(HavokObject + 0xC); /*0x8b9b78*/
  else
    v5 = 0; /*0x8b9b7d*/
  if ( v5 ) /*0x8b9b85*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2); /*0x8b9b8d*/
  return sub_6E7270(this, a2); /*0x8b9b97*/
}
