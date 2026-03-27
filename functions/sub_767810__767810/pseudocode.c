void __thiscall sub_767810(_DWORD ***this, int a2)
{
  int v3; // eax
  char v4; // al
  int v5; // eax

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
    if ( v3 )
    {
      while ( (char *)v3 != dword_B3FD14 )
      {
        v3 = *(_DWORD *)(v3 + 4);
        if ( !v3 )
          goto LABEL_5;
      }
      v4 = 1;
    }
    else
    {
LABEL_5:
      v4 = 0;
    }
    v5 = v4 != 0 ? a2 : 0;
    if ( v5 )
      sub_776A30(*(this + 0x22F), v5);
  }
}
