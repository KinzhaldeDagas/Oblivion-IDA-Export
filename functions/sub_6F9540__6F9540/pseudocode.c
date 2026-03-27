int __cdecl sub_6F9540(int a1)
{
  int v1; // eax
  char v2; // al
  int v3; // eax

  if ( !a1 )
    return 0;
  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  if ( v1 )
  {
    while ( (char *)v1 != dword_B3F95C )
    {
      v1 = *(_DWORD *)(v1 + 4);
      if ( !v1 )
        goto LABEL_5;
    }
    v2 = 1;
  }
  else
  {
LABEL_5:
    v2 = 0;
  }
  v3 = v2 != 0 ? a1 : 0;
  if ( v3 )
    return *(_DWORD *)(v3 + 0x38);
  else
    return 0;
}
