int __thiscall sub_8DEED0(int (__stdcall ****this)(signed int))
{
  int (__stdcall ****v2)(signed int); // esi
  int v3; // ebx
  int result; // eax

  *this = (int (__stdcall ***)(signed int))&off_A9A574; /*0x8deed5*/
  *(this + 2) = (int (__stdcall ***)(signed int))&off_A9A56C; /*0x8deedb*/
  *(this + 3) = (int (__stdcall ***)(signed int))off_A9A560; /*0x8deee2*/
  v2 = this + 5; /*0x8deee9*/
  v3 = 6; /*0x8deeec*/
  do /*0x8def06*/
  {
    if ( *v2 ) /*0x8deef1*/
    {
      result = sub_8BC730(*v2); /*0x8deef7*/
      *v2 = 0; /*0x8deefc*/
    }
    ++v2; /*0x8def02*/
    --v3; /*0x8def05*/
  }
  while ( v3 ); /*0x8def06*/
  *(this + 3) = (int (__stdcall ***)(signed int))&hkPhantomOverlapListener::`vftable'; /*0x8def08*/
  *(this + 2) = (int (__stdcall ***)(signed int))&off_A99B50; /*0x8def0f*/
  *this = (int (__stdcall ***)(signed int))&hkBaseObject::`vftable'; /*0x8def16*/
  return result; /*0x8def1c*/
}
