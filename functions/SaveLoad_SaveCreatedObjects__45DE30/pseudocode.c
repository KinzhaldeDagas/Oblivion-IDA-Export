int __thiscall SaveLoad_SaveCreatedObjects(
        UInt32 *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  if ( this == (UInt32 *)0xFFFFFFD8 ) /*0x45de4a*/
    JUMPOUT(0x45DEE3); /*0x45dee3*/
  return SaveLoad_SaveCreatedObjects_::CountLoop_Body(
           this + 0xA,
           (int)this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15);
}
