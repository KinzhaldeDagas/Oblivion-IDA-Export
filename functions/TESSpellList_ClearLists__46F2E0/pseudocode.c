void __thiscall TESSpellList_ClearLists(_DWORD *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // eax

  v2 = this + 1;
  if ( this != (_DWORD *)0xFFFFFFFC )
  {
    while ( *v2 )
    {
      v3 = (_DWORD *)v2[1];
      if ( v3 )
      {
        v2[1] = v3[1];
        *v2 = *v3;
        FormHeapFree((unsigned int)v3);
      }
      else
      {
        *v2 = 0;
      }
    }
  }
  v4 = this + 3;
  if ( this != (_DWORD *)0xFFFFFFF4 )
  {
    while ( *v4 )
    {
      v5 = (_DWORD *)*(this + 4);
      if ( v5 )
      {
        *(this + 4) = v5[1];
        *v4 = *v5;
        FormHeapFree((unsigned int)v5);
      }
      else
      {
        *v4 = 0;
      }
    }
  }
}
