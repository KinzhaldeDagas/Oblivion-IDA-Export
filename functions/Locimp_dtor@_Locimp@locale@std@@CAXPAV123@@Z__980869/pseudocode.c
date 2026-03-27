void __cdecl std::locale::_Locimp::_Locimp_dtor(struct std::locale::_Locimp *a1)
{
  int v1; // esi
  int *v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // eax
  _BYTE v4[12]; // [esp+10h] [ebp-10h] BYREF
  unsigned int v5; // [esp+1Ch] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v4, 0);
  v5 = 0;
  v1 = *((_DWORD *)a1 + 3);
  while ( v1 )
  {
    --v1;
    v2 = (int *)(*((_DWORD *)a1 + 2) + 4 * v1);
    if ( *v2 )
    {
      v3 = (void (__thiscall ***)(_DWORD, int))sub_6F6DC0(*v2);
      if ( v3 )
        (**v3)(v3, 1);
    }
  }
  free(*((void **)a1 + 2));
  v5 = 0xFFFFFFFF;
  std::_Lockit::~_Lockit((std::_Lockit *)v4);
}
