// Raycast data -> low-level hit info helper from root collidable + internal offset; used to inspect collision layer in TES::CastRay.
int __thiscall bhkWorldRayCastData_GetHitInfoIfTyped(_DWORD *this)
{
  int v1; // ecx

  v1 = *(this + 0x14); /*0x889cd0*/
  if ( v1 && *(_BYTE *)(v1 + 0x18) == 1 ) /*0x889cdb*/
    return v1 + *(_DWORD *)(v1 + 0x10); /*0x889ce0*/
  else
    return 0; /*0x889ce3*/
}
