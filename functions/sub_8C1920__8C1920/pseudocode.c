void __thiscall sub_8C1920(int **this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int *v5; // eax
  int v6; // esi

  sub_8A0610(this, a2);
  if ( this && (v3 = (int)*(this + 2)) != 0 )
  {
    v4 = *(_DWORD *)(v3 + 0xC);
  }
  else
  {
    v5 = *(this + 3);
    if ( !v5 )
      return;
    v4 = *v5;
  }
  if ( v4 )
  {
    if ( 0.0 != *(float *)(v4 + 0x98) )
    {
      v6 = (int)*(this + 2);
      if ( v6 )
        *(_BYTE *)(v6 + 0x19) = 1;
    }
  }
}
