int __thiscall sub_4D6AB0(int **this, char a2)
{
  int *v3; // edi
  int result; // eax

  if ( this ) /*0x4d6ab5*/
  {
    v3 = *(this + 2); /*0x4d6ab8*/
    if ( v3 ) /*0x4d6abd*/
    {
      bhkRefObject_UpdateHavokObject(this); /*0x4d6abf*/
      if ( a2 ) /*0x4d6acb*/
        sub_8A6410((int)v3); /*0x4d6acd*/
      else
        sub_8A6440(v3); /*0x4d6ade*/
      return bhkRefObject_UpdateHavokObject(this); /*0x4d6ad4*/
    }
  }
  return result; /*0x4d6ada*/
}
