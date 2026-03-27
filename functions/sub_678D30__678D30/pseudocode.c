void __thiscall sub_678D30(int *this, volatile LONG *a2)
{
  bool v3; // cc

  if ( a2 )
  {
    v3 = (unsigned int)((*(int (__thiscall **)(volatile LONG *))(*a2 + 0x54))(a2) - 4) <= 2;
    InterlockedIncrement(a2 + 1);
    if ( v3 )
      sub_677CF0(this + 0x12, (int)a2);
    else
      sub_677CF0(this + 0x10, (int)a2);
  }
}
