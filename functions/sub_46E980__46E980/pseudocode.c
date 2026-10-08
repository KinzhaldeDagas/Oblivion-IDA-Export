void __thiscall sub_46E980(char *this, int a2, int a3)
{
  char *v3; // edi
  char *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  bool v7; // zf

  if ( a2 && a3 ) /*0x46e990*/
  {
    v3 = this + 4; /*0x46e994*/
    v4 = this + 4; /*0x46e997*/
    if ( this != (char *)0xFFFFFFFC ) /*0x46e99b*/
    {
      do /*0x46e9a0*/
      {
        v5 = *(_DWORD **)v4; /*0x46e9a0*/
        if ( !*(_DWORD *)v4 ) /*0x46e9a0*/
          break; /*0x46e9a0*/
        if ( *v5 == a2 ) /*0x46e9a8*/
        {
          v7 = a3 + v5[1] == 0; /*0x46e9cf*/
          v5[1] += a3; /*0x46e9cf*/
          if ( v7 ) /*0x46e9d2*/
          {
            BSSimpleList_Remove((int *)this + 1, (int)v5); /*0x46e9d7*/
            FormHeapFree((unsigned int)v5); /*0x46e9dd*/
          }
          return; /*0x46e9dd*/
        }
        v4 = *((char **)v4 + 1); /*0x46e9aa*/
      }
      while ( v4 ); /*0x46e9a0*/
    }
    v6 = (_DWORD *)FormHeapAlloc(8u); /*0x46e9b1*/
    *v6 = a2; /*0x46e9be*/
    v6[1] = a3; /*0x46e9c0*/
    BSSimpleList_PushBack(v3, (int)v6); /*0x46e9c3*/
  }
}
