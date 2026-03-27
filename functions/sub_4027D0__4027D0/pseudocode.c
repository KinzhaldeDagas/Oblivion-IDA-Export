void __thiscall sub_4027D0(NiD3DPass **this)
{
  NiD3DPass *v1; // ecx

  v1 = *this;
  if ( v1 )
  {
    if ( v1->RefCount-- == 1 )
      sub_7604D0(v1);
  }
}
