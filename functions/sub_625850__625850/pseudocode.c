char __stdcall sub_625850(int a1)
{
  char v1; // bl
  int v3; // eax
  int v4; // eax
  int v5; // eax

  v1 = 0;
  if ( !a1 )
    return 0;
  v3 = sub_4A05E0(a1);
  ++dword_B3B918;
  if ( v3 )
  {
    --dword_B3B918;
    return 1;
  }
  else
  {
    if ( dword_B3B918 < 4 )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
      if ( v4 )
      {
        v5 = sub_405790(v4, 0);
        v1 = sub_625850(v5);
      }
    }
    --dword_B3B918;
    return v1;
  }
}
