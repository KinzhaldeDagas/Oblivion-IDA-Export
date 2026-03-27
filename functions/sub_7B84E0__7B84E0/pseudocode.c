int sub_7B84E0()
{
  int *v0; // esi
  int result; // eax
  int v2; // ecx
  int v3; // ecx

  v0 = dword_B42EC0;
  do
  {
    result = *v0;
    if ( *v0 )
    {
      v2 = *(_DWORD *)(result + 4);
      if ( v2 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x1C))(v2);
        if ( result == 0xFFFFFFFF )
        {
          v3 = 0;
        }
        else
        {
          result = *v0;
          v3 = *(_DWORD *)(*v0 + 4);
        }
        if ( v3 )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x90))(v3);
      }
    }
    ++v0;
  }
  while ( (int)v0 < (int)&byte_B42F30 );
  return result;
}
