char __thiscall sub_472C00(Ni2DBuffer **this, Ni2DBuffer *a2)
{
  int *v4; // edi
  bool v5; // zf

  if ( *this != (Ni2DBuffer *)1 )
    return 0;
  v4 = (int *)(this + 4);
  NiSmartPointer_Set__(this + 4, a2);
  v5 = *(this + 1) == (Ni2DBuffer *)3;
  *this = (Ni2DBuffer *)2;
  if ( v5 )
    HighPRocess_DoAction_____((PlayerCharacter *)*(this + 0xA), 0xB, *v4);
  return 1;
}
