int __thiscall sub_4A6070(int *this, int a2, int a3)
{
  int *v3; // edi
  int result; // eax
  int v5; // esi
  int v6; // eax
  bool v7; // zf

  if ( this )
    v3 = this + 1;
  else
    v3 = 0;
  result = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = *v3;
      if ( !*v3 )
        return 0;
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(*v3) + 0xC) == a2 )
      {
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0xC))(v5);
        if ( a3 < 0 )
        {
          v7 = v6 == 0;
        }
        else
        {
          if ( !v6 )
            goto LABEL_12;
          v7 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0xC))(v5) + 0xC) == a3;
        }
        if ( v7 )
          return v5;
      }
LABEL_12:
      v3 = (int *)v3[1];
      if ( !v3 )
        return 0;
    }
  }
  return result;
}
