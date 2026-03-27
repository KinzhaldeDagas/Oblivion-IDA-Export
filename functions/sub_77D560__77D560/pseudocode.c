void __thiscall sub_77D560(_DWORD *this, unsigned int a2, unsigned int a3)
{
  _DWORD *v4; // esi
  int v5; // ebx
  _DWORD *v6; // ecx

  v4 = *(_DWORD **)(*(this + 8) + 4 * a2);
  if ( v4 )
  {
    v5 = v4[9];
    sub_782700(v4, a3);
    if ( v5 != v4[9] )
    {
      sub_77D2E0(this, (int)v4);
      if ( v4[0xA] == v4[3] )
      {
        sub_405020((int)(this + 7), a2);
        sub_77D3F0(v4);
      }
      else
      {
        sub_77D270(v6, v4);
      }
    }
  }
}
