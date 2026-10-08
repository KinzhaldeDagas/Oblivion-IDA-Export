// Static CSpeedTreeRT::NotifyAllTreesOfEvent. Iterates registered unique trees: wind/time invalidation clears wind-dependent branch/frond/leaf caches; camera invalidation clears leaf LOD and simple-billboard caches.
void __cdecl CSpeedTreeRT__NotifyAllTreesOfEvent(int message)
{
  int v1; // ebx
  int v2; // edi
  char *v3; // esi
  bool v4; // cc
  int v5; // ebx
  _DWORD v6[23]; // [esp+0h] [ebp-5Ch] BYREF

  v6[0x13] = v6; /*0x78c4f8*/
  v3 = (char *)MEMORY[0xB42988]; /*0x78c4fb*/
  v4 = (unsigned int)MEMORY[0xB42988] <= MEMORY[0xB4298C]; /*0x78c501*/
  v6[0x16] = 0; /*0x78c507*/
  if ( !v4 ) /*0x78c50e*/
    _invalid_parameter_noinfo(v1, v2, (int)v3); /*0x78c510*/
  while ( 1 ) /*0x78c520*/
  {
    v5 = MEMORY[0xB4298C]; /*0x78c520*/
    if ( (unsigned int)MEMORY[0xB42988] > MEMORY[0xB4298C] ) /*0x78c52c*/
      _invalid_parameter_noinfo(v5, (int)&stru_B42984, (int)v3); /*0x78c52e*/
    if ( !&stru_B42984 ) /*0x78c535*/
      _invalid_parameter_noinfo(v5, (int)&stru_B42984, (int)v3); /*0x78c53f*/
    if ( v3 == (char *)v5 ) /*0x78c546*/
      break; /*0x78c546*/
    if ( message ) /*0x78c551*/
    {
      if ( message == 1 ) /*0x78c60e*/
      {
        if ( !&stru_B42984 ) /*0x78c612*/
          _invalid_parameter_noinfo(v5, 0, (int)v3); /*0x78c614*/
        if ( (unsigned int)v3 >= MEMORY[0xB4298C] ) /*0x78c61c*/
          _invalid_parameter_noinfo(v5, (int)&stru_B42984, (int)v3); /*0x78c61e*/
        OB_CLeafGeometry_Invalidate_010201A0(*(void **)(*(_DWORD *)v3 + 8)); /*0x78c628*/
        if ( (unsigned int)v3 >= MEMORY[0xB4298C] ) /*0x78c630*/
          _invalid_parameter_noinfo(v5, (int)&stru_B42984, (int)v3); /*0x78c632*/
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v3 + 0x14) + 0x30) = 0; /*0x78c63c*/
      }
    }
    else
    {
      if ( !&stru_B42984 ) /*0x78c559*/
        _invalid_parameter_noinfo(v5, 0, (int)v3); /*0x78c55b*/
      if ( (unsigned int)v3 >= MEMORY[0xB4298C] ) /*0x78c563*/
        _invalid_parameter_noinfo(v5, (int)&stru_B42984, (int)v3); /*0x78c565*/
      v5 = 1; /*0x78c56f*/
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 0x10) + 8) == 1 ) /*0x78c577*/
      {
        if ( (unsigned int)v3 >= MEMORY[0xB4298C] ) /*0x78c57c*/
          _invalid_parameter_noinfo(1, (int)&stru_B42984, (int)v3); /*0x78c57e*/
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v3 + 4) + 0x12) = 0; /*0x78c588*/
      }
      if ( (unsigned int)v3 >= MEMORY[0xB4298C] ) /*0x78c58f*/
        _invalid_parameter_noinfo(1, (int)&stru_B42984, (int)v3); /*0x78c591*/
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 0x10) + 0xC) == 1 ) /*0x78c59e*/
      {
        if ( (unsigned int)v3 >= MEMORY[0xB4298C] ) /*0x78c5a3*/
          _invalid_parameter_noinfo(1, (int)&stru_B42984, (int)v3); /*0x78c5a5*/
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v3 + 0x60) + 0x12) = 0; /*0x78c5af*/
      }
      if ( (unsigned int)v3 >= MEMORY[0xB4298C] ) /*0x78c5b6*/
        _invalid_parameter_noinfo(1, (int)&stru_B42984, (int)v3); /*0x78c5b8*/
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 0x10) + 0x10) == 1 ) /*0x78c5c5*/
        goto LABEL_29; /*0x78c5c5*/
      if ( (unsigned int)v3 >= MEMORY[0xB4298C] ) /*0x78c5ca*/
        _invalid_parameter_noinfo(1, (int)&stru_B42984, (int)v3); /*0x78c5cc*/
      if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v3 + 0x10) + 0x14) ) /*0x78c5d6*/
      {
LABEL_29:
        if ( (unsigned int)v3 >= MEMORY[0xB4298C] ) /*0x78c5df*/
          _invalid_parameter_noinfo(1, (int)&stru_B42984, (int)v3); /*0x78c5e1*/
        OB_CLeafGeometry_Invalidate_010201A0(*(void **)(*(_DWORD *)v3 + 8)); /*0x78c5eb*/
      }
    }
    if ( !&stru_B42984 ) /*0x78c5f2*/
      _invalid_parameter_noinfo(v5, 0, (int)v3); /*0x78c5f4*/
    if ( (unsigned int)v3 >= MEMORY[0xB4298C] ) /*0x78c5fc*/
      _invalid_parameter_noinfo(v5, (int)&stru_B42984, (int)v3); /*0x78c5fe*/
    v3 += 4; /*0x78c603*/
  }
}
