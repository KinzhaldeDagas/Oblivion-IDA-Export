int __thiscall sub_675D00(_DWORD *this, int a2, __int16 a3)
{
  _DWORD *v3; // eax
  __int16 v4; // dx
  int v5; // ecx

  v3 = (_DWORD *)*(this + a2 + 0xA);
  v4 = 0;
  if ( v3 )
  {
    do
    {
      v5 = v3[1];
      if ( !v5 && !*v3 )
        break;
      if ( v4 == a3 )
        return *v3;
      v3 = (_DWORD *)v3[1];
      ++v4;
    }
    while ( v5 );
  }
  PrintError("When trying to get a crime by its index, the index was larger than the size of the crime list.");
  return 0;
}
