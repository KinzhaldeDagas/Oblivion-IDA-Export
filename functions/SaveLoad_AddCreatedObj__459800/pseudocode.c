void __thiscall SaveLoad_AddCreatedObj(char *this, int a2)
{
  int v3; // esi
  char *v4; // eax

  if ( a2 )
  {
    if ( TESDataHandler_IsFormIDCreated_(*(_DWORD *)(a2 + 0xC)) )
    {
      v3 = *(_DWORD *)(a2 + 0xC);
      v4 = this + 0x28;
      if ( this == (char *)0xFFFFFFD8 )
      {
LABEL_8:
        BSSimpleList_PushFront((_DWORD *)this + 0xA, v3);
      }
      else
      {
        while ( *(_DWORD *)v4 != v3 )
        {
          v4 = *((char **)v4 + 1);
          if ( !v4 )
            goto LABEL_8;
        }
      }
    }
    else
    {
      PrintError("Attempting to add non-created form %08X to created base objects list.", *(_DWORD *)(a2 + 0xC));
    }
  }
  else
  {
    PrintError("Attempting to add null object to created base objects list.");
  }
}
