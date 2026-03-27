// positive sp value has been detected, the output may be wrong!
int __userpurge Actor_MagicCaster_IsMagicItemUseable_::SetFailureCode@<eax>(
        char a1@<bl>,
        _DWORD *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10)
{
  if ( a2 )
  {
    if ( BYTE2(a5) )
    {
      *a2 = 2;
      return ((int (__stdcall *)(int, int, int, int))Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType)(
               a3,
               a4,
               a5,
               a6);
    }
    if ( BYTE1(a5) )
    {
      *a2 = 6;
      return ((int (__stdcall *)(int, int, int, int))Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType)(
               a3,
               a4,
               a5,
               a6);
    }
    if ( !a9 )
    {
      *a2 = 1;
      return ((int (__stdcall *)(int, int, int, int))Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType)(
               a3,
               a4,
               a5,
               a6);
    }
    if ( !HIBYTE(a5) )
    {
      *a2 = 3;
      return ((int (__stdcall *)(int, int, int, int))Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType)(
               a3,
               a4,
               a5,
               a6);
    }
    if ( a1 )
      *a2 = 5;
  }
  return ((int (__stdcall *)(int, int, int, int))Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType)(
           a3,
           a4,
           a5,
           a6);
}
