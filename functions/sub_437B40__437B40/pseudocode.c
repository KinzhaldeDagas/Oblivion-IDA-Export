void __thiscall sub_437B40(int this)
{
  Ni2DBuffer *v2; // eax

  if ( *(_DWORD *)(this + 0xC) != 6 )
  {
    v2 = (Ni2DBuffer *)sub_478A40(*(_DWORD **)(this + 0x20));
    NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x28), v2);
  }
}
