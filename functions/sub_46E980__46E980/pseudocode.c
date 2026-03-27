void __thiscall sub_46E980(char *this, int a2, int a3)
{
  char *v3; // edi
  char *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  bool v7; // zf

  if ( a2 && a3 )
  {
    v3 = this + 4;
    v4 = this + 4;
    if ( this != (char *)0xFFFFFFFC )
    {
      do
      {
        v5 = *(_DWORD **)v4;
        if ( !*(_DWORD *)v4 )
          break;
        if ( *v5 == a2 )
        {
          v7 = a3 + v5[1] == 0;
          v5[1] += a3;
          if ( v7 )
          {
            BSSimpleList_Remove((_DWORD *)this + 1, (int)v5);
            FormHeapFree((unsigned int)v5);
          }
          return;
        }
        v4 = *((char **)v4 + 1);
      }
      while ( v4 );
    }
    v6 = (_DWORD *)FormHeapAlloc(8u);
    *v6 = a2;
    v6[1] = a3;
    BSSimpleList_PushBack(v3, (int)v6);
  }
}
