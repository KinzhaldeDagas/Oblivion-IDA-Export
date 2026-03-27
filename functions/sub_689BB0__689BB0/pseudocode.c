void __fastcall sub_689BB0(char *this, int edx0, _DWORD *a3)
{
  char *i; // esi
  _BYTE *v5; // edi
  int v6; // eax

  if ( a3 )
  {
    BSSimpleList_Clear(a3);
    for ( i = this + 4; i; i = *((char **)i + 1) )
    {
      if ( !*((_DWORD *)i + 1) && !*(_DWORD *)i )
        break;
      v5 = *(_BYTE **)i;
      if ( !DName::status(*(_DWORD *)i) )
      {
        v6 = sub_68B0F0(v5);
        BSSimpleList_PushBack(a3, v6);
      }
    }
  }
}
