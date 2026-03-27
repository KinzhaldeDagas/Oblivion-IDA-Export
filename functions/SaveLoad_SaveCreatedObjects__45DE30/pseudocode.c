int __thiscall SaveLoad_SaveCreatedObjects(int *this, int a2, int a3, int a4, int a5, int a6)
{
  if ( this == (int *)0xFFFFFFD8 )
    JUMPOUT(0x45DEE3);
  return SaveLoad_SaveCreatedObjects_::CountLoop_Body(this + 0xA, a2, a3, a4, a5, a6);
}
