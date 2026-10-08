void __thiscall sub_437B40(int this)
{
  Ni2DBuffer *v2; // eax

  if ( *(_DWORD *)(this + 0xC) != 6 ) /*0x437b47*/
  {
    v2 = (Ni2DBuffer *)sub_478A40(*(int ***)(this + 0x20)); /*0x437b4c*/
    NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x28), v2); /*0x437b55*/
  }
}
