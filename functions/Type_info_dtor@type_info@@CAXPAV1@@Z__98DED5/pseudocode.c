void __cdecl type_info::_Type_info_dtor(struct type_info *a1)
{
  int v1; // ecx
  void *v2; // eax
  _DWORD *v3; // edx

  _lock(0xE);
  v1 = *((_DWORD *)a1 + 1);
  if ( v1 )
  {
    v2 = Memory;
    v3 = &unk_BAA5F4;
    while ( Memory )
    {
      if ( *(_DWORD *)Memory == v1 )
      {
        v3[1] = *((_DWORD *)Memory + 1);
        free(v2);
        break;
      }
      v3 = Memory;
    }
    free(*((void **)a1 + 1));
    *((_DWORD *)a1 + 1) = 0;
  }
  _unlock(0xE);
}
