int __thiscall sub_9A8DD0(unsigned __int16 *this, char *Str1)
{
  unsigned int v3; // ebp
  int v4; // edi
  int v5; // esi

  v3 = *(this + 0xB);
  v4 = 0;
  if ( !*(this + 0xB) )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(*((_DWORD *)this + 4) + 4 * v4);
    if ( v5 )
    {
      if ( !_strcmp((unsigned __int8 *)Str1, *(unsigned __int8 **)(v5 + 0xC)) )
        break;
    }
    if ( ++v4 >= v3 )
      return 0;
  }
  return v5;
}
