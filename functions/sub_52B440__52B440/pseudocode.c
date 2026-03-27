void __thiscall sub_52B440(_DWORD *this, char a2)
{
  int v2; // esi

  v2 = *(this + 3);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 8) & 0x20) != 0 )
    {
      if ( a2 )
        ExtraDataList_GetReferencePointer((ExtraDataList *)(v2 + 0x44));
    }
  }
}
