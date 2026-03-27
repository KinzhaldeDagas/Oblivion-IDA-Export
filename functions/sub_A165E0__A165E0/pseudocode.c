void __cdecl sub_A165E0()
{
  NiNode *v0; // esi

  v0 = dword_B333DC;
  if ( dword_B333DC )
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B333DC->members) )
    {
      if ( v0 )
        v0->vtbl->super.super.super.Destructor((NiRefObject *)v0, 1);
    }
  }
}
