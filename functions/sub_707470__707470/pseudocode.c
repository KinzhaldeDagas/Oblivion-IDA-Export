void __thiscall sub_707470(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  int v3; // eax

  if ( a2 )
  {
    if ( (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x13))(a2) <= 0xA )
    {
      v3 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x13))(a2);
      NiSmartPointer_Set__(this + v3 + 2, a2);
    }
  }
}
