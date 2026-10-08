void __cdecl std::locale::_Locimp::_Locimp_dtor(struct std::locale::_Locimp *a1)
{
  int v1; // esi
  int *v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // eax
  _BYTE v4[12]; // [esp+10h] [ebp-10h] BYREF
  unsigned int v5; // [esp+1Ch] [ebp-4h]

  std::_Lockit::_Lockit((std::_Lockit *)v4, 0); /*0x98087a*/
  v5 = 0; /*0x980882*/
  v1 = *((_DWORD *)a1 + 3); /*0x980886*/
  while ( v1 ) /*0x9808ac*/
  {
    --v1; /*0x98088e*/
    v2 = (int *)(*((_DWORD *)a1 + 2) + 4 * v1); /*0x98088f*/
    if ( *v2 ) /*0x980892*/
    {
      v3 = (void (__thiscall ***)(_DWORD, int))sub_6F6DC0(*v2); /*0x980899*/
      if ( v3 ) /*0x9808a0*/
        (**v3)(v3, 1); /*0x9808a8*/
    }
  }
  free(*((void **)a1 + 2)); /*0x9808b1*/
  v5 = 0xFFFFFFFF; /*0x9808b6*/
  std::_Lockit::~_Lockit((std::_Lockit *)v4); /*0x9808be*/
}
