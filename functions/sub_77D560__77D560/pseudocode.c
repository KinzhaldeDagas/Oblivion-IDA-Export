void __thiscall sub_77D560(_DWORD *this, unsigned int a2, unsigned int a3)
{
  _DWORD *v4; // esi
  int v5; // ebx
  _DWORD *v6; // ecx

  v4 = *(_DWORD **)(*(this + 8) + 4 * a2); /*0x77d56c*/
  if ( v4 ) /*0x77d571*/
  {
    v5 = v4[9]; /*0x77d578*/
    sub_782700(v4, a3); /*0x77d57e*/
    if ( v5 != v4[9] ) /*0x77d587*/
    {
      sub_77D2E0(this, (int)v4); /*0x77d58c*/
      if ( v4[0xA] == v4[3] ) /*0x77d597*/
      {
        sub_405020((int)(this + 7), a2); /*0x77d59d*/
        sub_77D3F0(v4); /*0x77d5a5*/
      }
      else
      {
        sub_77D270(v6, v4); /*0x77d5b1*/
      }
    }
  }
}
