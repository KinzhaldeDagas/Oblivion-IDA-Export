void __thiscall sub_77C8B0(int *this, int a2)
{
  NiAVObject *v3; // eax
  int v4; // [esp+0h] [ebp-8h]

  if ( a2 )
  {
    InterlockedIncrement((volatile LONG *)(a2 + 4));
    v3 = sub_452A60((Atmosphere *)a2);
    sub_77C5E0(*(this + 8), (int)v3, a2, v4);
  }
}
