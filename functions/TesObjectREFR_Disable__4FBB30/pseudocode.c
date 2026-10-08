void __cdecl TesObjectREFR_Disable(int a1)
{
  int *v1; // eax

  if ( a1 ) /*0x4fbb36*/
  {
    v1 = dword_B361CC; /*0x4fbb38*/
    while ( *v1 != a1 ) /*0x4fbb42*/
    {
      v1 = (int *)v1[1]; /*0x4fbb44*/
      if ( !v1 ) /*0x4fbb49*/
      {
        BSSimpleList_PushFront(dword_B361CC, a1); /*0x4fbb51*/
        return; /*0x4fbb51*/
      }
    }
  }
}
