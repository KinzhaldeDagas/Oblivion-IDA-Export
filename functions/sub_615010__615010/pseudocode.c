_DWORD *__thiscall sub_615010(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  int v5; // ecx

  result = a2;
  if ( a2 != (_DWORD *)*(this + 0xF) )
  {
    v4 = this + 0x57;
    BSSimpleList_Remove(this + 0x57, (int)a2);
    result = this + 0x57;
    v5 = 0;
    if ( v4 )
    {
      do
      {
        if ( *result )
          ++v5;
        result = (_DWORD *)result[1];
      }
      while ( result );
    }
    *(this + 0x5E) = v5;
  }
  return result;
}
