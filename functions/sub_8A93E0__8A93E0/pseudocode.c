void __thiscall sub_8A93E0(int *this, int a2)
{
  int v3; // eax
  int v4; // [esp-4h] [ebp-8h]

  v3 = (*(int (__thiscall **)(int *, int))(*this + 0x18))(this, a2); /*0x8a93ef*/
  if ( v3 ) /*0x8a93f3*/
  {
    v4 = v3; /*0x8a93f8*/
    InterlockedIncrement((volatile LONG *)(v3 + 4)); /*0x8a9402*/
    sub_8A4070(this + 3, v4); /*0x8a940b*/
  }
}
