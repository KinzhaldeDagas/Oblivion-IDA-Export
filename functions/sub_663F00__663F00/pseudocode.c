int sub_663F00()
{
  int result; // eax
  int v1; // ebx
  int *v2; // esi
  int v3; // ecx
  int *v4; // edi

  result = ExtraDataList_GetFollowerExtra(); /*0x663f0a*/
  v1 = result; /*0x663f0f*/
  if ( result ) /*0x663f13*/
  {
    v2 = *(int **)(result + 0xC); /*0x663f16*/
    while ( v2 ) /*0x663f1b*/
    {
      result = *v2; /*0x663f20*/
      if ( !*v2 ) /*0x663f20*/
        break; /*0x663f24*/
      v3 = *(_DWORD *)(result + 0x58); /*0x663f26*/
      v4 = (int *)v2[1]; /*0x663f2b*/
      if ( !v3 /*0x663f3d*/
        || (result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 0x18))(v3, result, 1), v4 == (int *)v2[1]) )
      {
        v2 = v4; /*0x663f44*/
      }
      else
      {
        v2 = *(int **)(v1 + 0xC); /*0x663f3f*/
      }
    }
  }
  return result; /*0x663f4c*/
}
