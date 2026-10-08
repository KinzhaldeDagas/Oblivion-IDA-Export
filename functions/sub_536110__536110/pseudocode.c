void __cdecl sub_536110(int collidable)
{
  NiAVObject *v1; // eax

  if ( collidable ) /*0x536119*/
  {
    v1 = bhkCollidable_ResolveNiAVObject(collidable); /*0x53611c*/
    if ( v1 ) /*0x536126*/
      sub_4DC270((int)v1); /*0x53612d*/
  }
}
