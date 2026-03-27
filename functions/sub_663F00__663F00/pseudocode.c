int sub_663F00()
{
  int result; // eax
  int v1; // ebx
  int *v2; // esi
  int v3; // ecx
  int *v4; // edi

  result = GetExtraDataFollower();
  v1 = result;
  if ( result )
  {
    v2 = *(int **)(result + 0xC);
    while ( v2 )
    {
      result = *v2;
      if ( !*v2 )
        break;
      v3 = *(_DWORD *)(result + 0x58);
      v4 = (int *)v2[1];
      if ( !v3
        || (result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 0x18))(v3, result, 1), v4 == (int *)v2[1]) )
      {
        v2 = v4;
      }
      else
      {
        v2 = *(int **)(v1 + 0xC);
      }
    }
  }
  return result;
}
