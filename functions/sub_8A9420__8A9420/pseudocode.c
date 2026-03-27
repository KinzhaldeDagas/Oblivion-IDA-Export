void __thiscall sub_8A9420(Ni2DBuffer **this, int a2)
{
  int v3; // eax
  int v4; // [esp-4h] [ebp-8h]

  v3 = ((int (__thiscall *)(Ni2DBuffer **, int))(*this)[1].members.super.m_uiRefCount)(this, a2);
  if ( v3 )
  {
    v4 = v3;
    InterlockedIncrement((volatile LONG *)(v3 + 4));
    sub_67A760(this + 3, v4);
  }
}
