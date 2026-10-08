void __thiscall sub_46EED0(char *this, char a2, int a3)
{
  char *v3; // esi
  UInt32 *v4; // edi
  TESForm *v5; // eax
  _DWORD *v6; // eax

  if ( (a2 & 8) != 0 ) /*0x46eed5*/
  {
    v3 = this + 4; /*0x46eed8*/
    if ( this != (char *)0xFFFFFFFC ) /*0x46eedd*/
    {
      do /*0x46ef32*/
      {
        v4 = *(UInt32 **)v3; /*0x46eee0*/
        if ( !*(_DWORD *)v3 || (v5 = TESForm_LookupByFormID(*v4), (*v4 = (UInt32)v5) != 0) ) /*0x46eef5*/
        {
          v3 = *((char **)v3 + 1); /*0x46ef2d*/
        }
        else
        {
          v6 = *((_DWORD **)v3 + 1); /*0x46eef7*/
          if ( v6 ) /*0x46eefc*/
          {
            *((_DWORD *)v3 + 1) = v6[1]; /*0x46ef01*/
            *(_DWORD *)v3 = *v6; /*0x46ef07*/
            FormHeapFree((unsigned int)v6); /*0x46ef09*/
          }
          else
          {
            *(_DWORD *)v3 = 0; /*0x46ef1d*/
          }
          FormHeapFree((unsigned int)v4); /*0x46ef12*/
        }
      }
      while ( v3 ); /*0x46ef32*/
    }
  }
}
