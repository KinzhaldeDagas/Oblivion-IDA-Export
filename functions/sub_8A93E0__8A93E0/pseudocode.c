void __thiscall sub_8A93E0(int *this, int a2)
{
  int v3; // eax
  int v4; // [esp-4h] [ebp-8h]

  v3 = (*(int (__thiscall **)(int *, int))(*this + 0x18))(this, a2);
  if ( v3 )
  {
    v4 = v3;
    InterlockedIncrement((volatile LONG *)(v3 + 4));
    sub_8A4070(this + 3, v4);
  }
}
