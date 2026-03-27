int __thiscall AVCollection_GetSaveSize(_DWORD *this)
{
  int v1; // edx
  __int16 v2; // ax
  _DWORD *i; // esi
  int result; // eax
  _DWORD *v5; // ecx

  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x34u )
    v1 = 8;
  else
    v1 = 5;
  v2 = 0;
  for ( i = this; i; i = (_DWORD *)i[1] )
  {
    if ( *i )
      ++v2;
  }
  result = (unsigned __int16)(v1 * v2 + 2);
  if ( *(this + 3) )
    result += v1;
  if ( *(this + 2) )
    result += v1;
  v5 = (_DWORD *)*(this + 4);
  if ( v5 )
  {
    if ( *v5 )
      result += v1;
    if ( v5[1] )
      result += v1;
    if ( v5[2] )
      result += v1;
    if ( v5[3] )
      result += v1;
    if ( v5[4] )
      result += v1;
    if ( v5[5] )
      result += v1;
    if ( v5[6] )
      result += v1;
    if ( v5[7] )
      result += v1;
    if ( v5[8] )
      result += v1;
    if ( v5[9] )
      result += v1;
    if ( v5[0xA] )
      result += v1;
    if ( v5[0xB] )
      result += v1;
    if ( v5[0xC] )
      result += v1;
    if ( v5[0xD] )
      result += v1;
    if ( v5[0xE] )
      result += v1;
    if ( v5[0xF] )
      result += v1;
    if ( v5[0x10] )
      result += v1;
    if ( v5[0x11] )
      result += v1;
  }
  return result;
}
