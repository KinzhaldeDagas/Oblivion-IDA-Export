char __thiscall sub_89FF10(int *this)
{
  char v2; // bl
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int *v9; // ecx

  v2 = 0; /*0x89ff1a*/
  v3 = (*(int (__thiscall **)(int *))(*this + 0x58))(this); /*0x89ff1c*/
  if ( v3 ) /*0x89ff20*/
    v4 = *(_DWORD *)(v3 + 0x2B0); /*0x89ff22*/
  else
    v4 = 0; /*0x89ff2a*/
  if ( v4 ) /*0x89ff2e*/
  {
    v2 = sub_89D9C0(this); /*0x89ff38*/
    v5 = *(this + 2); /*0x89ff3a*/
    if ( v5 ) /*0x89ff3f*/
      v6 = *(_DWORD *)(v5 + 0x1C); /*0x89ff41*/
    else
      v6 = 0; /*0x89ff46*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x58))(v4); /*0x89ff4f*/
    if ( v7 ) /*0x89ff53*/
      v8 = *(_DWORD *)(v7 + 0x34); /*0x89ff55*/
    else
      v8 = 0; /*0x89ff5a*/
    if ( v6 == v8 ) /*0x89ff5f*/
    {
      v9 = (int *)*(this + 2); /*0x89ff61*/
      if ( v9 ) /*0x89ff66*/
        sub_8E7C20(v9, 0); /*0x89ff6a*/
    }
  }
  return v2; /*0x89ff6f*/
}
