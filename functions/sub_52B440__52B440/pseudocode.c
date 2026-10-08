void __thiscall sub_52B440(_DWORD *this, char a2)
{
  int v2; // esi

  v2 = *(this + 3); /*0x52b441*/
  if ( v2 ) /*0x52b446*/
  {
    if ( (*(_DWORD *)(v2 + 8) & 0x20) != 0 ) /*0x52b450*/
    {
      if ( a2 ) /*0x52b457*/
        ExtraDataList_GetReferencePointer((ExtraDataList *)(v2 + 0x44)); /*0x52b45c*/
    }
  }
}
