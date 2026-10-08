void __thiscall sub_46E900(char *this, int a2, int a3)
{
  char *v3; // edi
  char *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax

  if ( a2 ) /*0x46e907*/
  {
    v3 = this + 4; /*0x46e90b*/
    v4 = this + 4; /*0x46e90e*/
    if ( this != (char *)0xFFFFFFFC ) /*0x46e912*/
    {
      do /*0x46e914*/
      {
        v5 = *(_DWORD **)v4; /*0x46e914*/
        if ( !*(_DWORD *)v4 ) /*0x46e914*/
          break; /*0x46e914*/
        if ( *v5 == a2 ) /*0x46e91c*/
        {
          if ( a3 ) /*0x46e950*/
          {
            v5[1] = a3; /*0x46e96a*/
          }
          else
          {
            BSSimpleList_Remove((int *)this + 1, (int)v5); /*0x46e955*/
            FormHeapFree((unsigned int)v5); /*0x46e95b*/
          }
          return; /*0x46e966*/
        }
        v4 = *((char **)v4 + 1); /*0x46e91e*/
      }
      while ( v4 ); /*0x46e914*/
    }
    if ( a3 ) /*0x46e92b*/
    {
      v6 = (_DWORD *)FormHeapAlloc(8u); /*0x46e92f*/
      *v6 = a2; /*0x46e93a*/
      v6[1] = a3; /*0x46e93c*/
      BSSimpleList_PushBack(v3, (int)v6); /*0x46e93f*/
    }
  }
}
