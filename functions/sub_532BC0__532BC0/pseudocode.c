int __thiscall PlayerCameraCollisionPhantomPair_Init(int this, float a2, int a3)
{
  *(_DWORD *)this = 0; /*0x532bea*/
  *(_DWORD *)(this + 4) = 0; /*0x532bf0*/
  PlayerCameraCollisionPhantomPair_Rebuild((volatile LONG **)this, a2, a3); /*0x532c05*/
  return this; /*0x532c0c*/
}
