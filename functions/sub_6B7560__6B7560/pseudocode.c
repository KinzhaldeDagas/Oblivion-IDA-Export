int __thiscall sub_6B7560(_DWORD *this, __int16 a2)
{
  _DWORD *v2; // eax
  __int16 v3; // dx
  int v4; // ecx

  v2 = this;
  v3 = 0;
  if ( this )
  {
    do
    {
      v4 = v2[1];
      if ( !v4 && !*v2 )
        break;
      if ( v3 == a2 )
        return *v2;
      v2 = (_DWORD *)v2[1];
      ++v3;
    }
    while ( v4 );
  }
  PrintError("When trying to get a dialogue item by its index, the index was larger than the size of the dialogue items list.");
  return 0;
}
