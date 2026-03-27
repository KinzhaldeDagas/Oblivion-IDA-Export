void __thiscall GameSetting_destr(int *this)
{
  _BYTE *v2; // esi

  if ( this )
  {
    if ( *(this + 1) )
      NiTMap_RemoveAt(&dword_B35574, *(this + 1));
  }
  v2 = (_BYTE *)*(this + 1);
  if ( v2 )
  {
    if ( *v2 == 0x53 )
      FormHeapFree((unsigned int)v2);
  }
}
