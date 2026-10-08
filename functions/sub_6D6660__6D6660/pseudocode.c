// Oblivion NiTransformInterpolator clone/member copy. Copies base state and cached transform, replaces destination data +0x2C with the source refcounted pointer using balanced decrement/increment, and copies all three 16-bit key cursors.
__int16 __thiscall NiTransformInterpolator_CopyMembers(_DWORD *this, int a2, _DWORD **a3)
{
  int v4; // esi
  int v5; // eax
  __int16 result; // ax

  sub_6EC2A0(this, a2, a3); /*0x6d6670*/
  qmemcpy((void *)(a2 + 0xC), this + 3, 0x20u); /*0x6d6680*/
  v4 = *(_DWORD *)(a2 + 0x2C); /*0x6d6682*/
  if ( v4 != *(this + 0xB) ) /*0x6d6688*/
  {
    if ( v4 ) /*0x6d668c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6d6692*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6d66a8*/
    }
    v5 = *(this + 0xB); /*0x6d66aa*/
    *(_DWORD *)(a2 + 0x2C) = v5; /*0x6d66af*/
    if ( v5 ) /*0x6d66b2*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6d66b8*/
  }
  *(_WORD *)(a2 + 0x30) = *((_WORD *)this + 0x18); /*0x6d66c2*/
  *(_WORD *)(a2 + 0x32) = *((_WORD *)this + 0x19); /*0x6d66cb*/
  result = *((_WORD *)this + 0x1A); /*0x6d66cf*/
  *(_WORD *)(a2 + 0x34) = result; /*0x6d66d4*/
  return result; /*0x6d66ca*/
}
