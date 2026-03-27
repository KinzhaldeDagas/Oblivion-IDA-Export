void __cdecl sub_A1A1B0()
{
  NiNode *v0; // esi

  v0 = LodWaterRoot;
  if ( LodWaterRoot )
  {
    if ( !InterlockedDecrement((volatile LONG *)&LodWaterRoot->members) )
    {
      if ( v0 )
        v0->vtbl->super.super.super.Destructor((NiRefObject *)v0, 1);
    }
  }
}
