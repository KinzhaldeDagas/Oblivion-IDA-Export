void __thiscall sub_4E4E00(int *this, _DWORD *a2, int a3)
{
  int v4; // ecx
  int v5; // ebx
  int v6; // edx

  if ( a2 )
  {
    *a2 = 0;
    if ( a3 )
    {
      v4 = *(this + 8);
      v5 = *(_DWORD *)(v4 + 0xC);
      if ( *(_DWORD *)(a3 + 0xC) == 3 || *(_DWORD *)(a3 + 0xC) == 5 )
      {
        if ( *(_DWORD *)(a3 + 8) == sub_4CA640(v4) )
        {
          *a2 = dword_B05E20;
          a2[3] = 6;
          a2[2] = v5;
          a2[4] = 0;
          a2[1] = 0;
        }
      }
      else if ( *(_DWORD *)(a3 + 0xC) == 6 && *(_DWORD *)(a3 + 8) == v5 )
      {
        *a2 = dword_B05E20;
        a2[3] = 9;
        v6 = *(_DWORD *)(*(this + 8) + 0xC);
        a2[4] = 0;
        a2[1] = 0;
        a2[2] = v6;
      }
    }
  }
}
