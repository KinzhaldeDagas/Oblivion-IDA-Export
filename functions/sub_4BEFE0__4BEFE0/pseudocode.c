void __thiscall sub_4BEFE0(char *this, char *a2)
{
  char *v2; // esi
  char *v4; // eax
  char *v5; // eax

  v2 = a2;
  if ( a2 )
  {
    while ( v2 != this )
    {
      v4 = this + 0x20;
      if ( this != (char *)0xFFFFFFE0 )
      {
        while ( *(char **)v4 != v2 )
        {
          v4 = *((char **)v4 + 1);
          if ( !v4 )
            goto LABEL_6;
        }
        return;
      }
LABEL_6:
      BSSimpleList_PushFront((_DWORD *)this + 8, (int)v2);
      v5 = this;
      this = v2;
      v2 = v5;
      if ( !v5 )
        return;
    }
  }
}
