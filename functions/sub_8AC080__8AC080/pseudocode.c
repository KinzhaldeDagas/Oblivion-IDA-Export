// Writes low-level Havok object position via 0x8ABAC0 with wrapper vertical/shape adjustment from +0x58/+0x5C.
void __thiscall bhkCollisionWrapper_SetPositionAdjusted(float *this, _OWORD *a2)
{
  int v3; // ecx
  float v4; // [esp+0h] [ebp-4h]

  v3 = *((_DWORD *)this + 0xC); /*0x8ac082*/
  if ( v3 ) /*0x8ac087*/
  {
    v4 = *(this + 0x17) + *(this + 0x16); /*0x8ac094*/
    sub_8ABAC0(v3, a2, v4); /*0x8ac098*/
  }
}
