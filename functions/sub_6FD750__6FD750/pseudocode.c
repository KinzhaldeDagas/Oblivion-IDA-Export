unsigned int __thiscall sub_6FD750(_DWORD *this, _DWORD *a2)
{
  unsigned int result; // eax
  unsigned int v4; // ebp
  _DWORD *v5; // esi
  unsigned int i; // edi
  int v7; // eax

  result = sub_715E70(this, a2);
  v4 = 0;
  if ( *((_WORD *)this + 0x27) )
  {
    do
    {
      v5 = *(_DWORD **)(*(this + 0x12) + 4 * v4);
      if ( v5 )
      {
        for ( i = 0; i < v5[2]; ++i )
        {
          v7 = sub_7124A0(a2);
          if ( i < v5[2] )
            *(_DWORD *)(*v5 + 4 * i) = v7;
        }
      }
      result = *((unsigned __int16 *)this + 0x27);
      ++v4;
    }
    while ( v4 < result );
  }
  return result;
}
