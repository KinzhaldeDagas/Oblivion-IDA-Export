void __thiscall SaveLoad_AddCreatedObj(char *this, int a2)
{
  int v3; // esi
  char *v4; // eax

  if ( a2 ) /*0x45980a*/
  {
    if ( TESDataHandler_IsFormIDCreated_(*(_DWORD *)(a2 + 0xC)) ) /*0x459828*/
    {
      v3 = *(_DWORD *)(a2 + 0xC); /*0x459847*/
      v4 = this + 0x28; /*0x45984d*/
      if ( this == (char *)0xFFFFFFD8 ) /*0x459851*/
      {
LABEL_8:
        BSSimpleList_PushFront((_DWORD *)this + 0xA, v3); /*0x45985e*/
      }
      else
      {
        while ( *(_DWORD *)v4 != v3 ) /*0x459855*/
        {
          v4 = *((char **)v4 + 1); /*0x459857*/
          if ( !v4 ) /*0x45985c*/
            goto LABEL_8; /*0x45985c*/
        }
      }
    }
    else
    {
      PrintError("Attempting to add non-created form %08X to created base objects list.", *(_DWORD *)(a2 + 0xC)); /*0x45983a*/
    }
  }
  else
  {
    PrintError("Attempting to add null object to created base objects list."); /*0x459811*/
  }
}
