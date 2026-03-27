void __thiscall sub_8D9A50(_DWORD *this)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // esi
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  _WORD *v7; // ecx

  v2 = this + 4;
  v3 = this + 4;
  v4 = 2;
  do
  {
    if ( !*v3 )
    {
      v5 = *v2 ^ *(this + 5);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 8);
        if ( v6 )
        {
          v7 = *(_WORD **)(v6 + 0x34);
          *v3 = v7;
          sub_8BC720(v7);
        }
      }
    }
    ++v3;
    --v4;
  }
  while ( v4 );
}
