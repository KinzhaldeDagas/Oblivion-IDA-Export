void __userpurge SaveLoad_SaveCreatedObjects_::SaveLoop_Check(
        _DWORD *a1@<ebx>,
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
  if ( a6 ) /*0x45e0bf*/
    SaveLoad_SaveCreatedObjects_::SaveLoop_Body(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15); /*0x45e0bf*/
  else
    SaveLoad_SaveCreatedObjects_::Done(a2); /*0x45e0c0*/
}
