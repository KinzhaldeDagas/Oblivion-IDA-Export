void __cdecl sub_A165B0()
{
  NiNode *v0; // esi

  v0 = dword_B333D8;
  if ( dword_B333D8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B333D8->members) )
    {
      if ( v0 )
        v0->vtbl->super.super.super.Destructor((NiRefObject *)v0, 1);
    }
  }
}
