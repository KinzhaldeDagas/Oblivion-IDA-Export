LONG __usercall sub_581A50@<eax>(unsigned int *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  void (__thiscall ***v5)(_DWORD, int); // ecx
  unsigned int v6; // esi
  unsigned int v7; // esi
  LONG (__stdcall *v8)(volatile LONG *); // edi
  unsigned int v9; // esi
  void (__thiscall ***v10)(_DWORD, int); // ecx
  void (__thiscall ***v11)(_DWORD, int); // ecx
  void (__thiscall ***v12)(_DWORD, int); // ecx
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned __int16 endIndex; // cx
  unsigned int i; // edi
  OblivionTileTraitEntry *v17; // esi
  LONG result; // eax
  int v19; // ecx
  LONG (__stdcall *v20)(volatile LONG *); // edi
  unsigned int v21; // esi
  unsigned int v22; // esi
  unsigned int v23; // ebp

  v5 = (void (__thiscall ***)(_DWORD, int))a1[0x20]; /*0x581a7b*/
  if ( v5 ) /*0x581a8d*/
  {
    (**v5)(v5, 1); /*0x581a95*/
    a1[0x20] = 0; /*0x581a97*/
  }
  if ( MEMORY[0xB3A6FC] ) /*0x581a9d*/
  {
    v6 = MEMORY[0xB3A6FC]; /*0x581aa7*/
    sub_585940((void **)MEMORY[0xB3A6FC]); /*0x581aa9*/
    FormHeapFree(v6); /*0x581aaf*/
  }
  MEMORY[0xB3A6FC] = 0; /*0x581ab7*/
  sub_572D90(a2, a3, a4); /*0x581abd*/
  sub_577270(); /*0x581ac2*/
  v7 = *a1; /*0x581ac7*/
  v8 = InterlockedDecrement; /*0x581acc*/
  if ( *a1 ) /*0x581ac7*/
  {
    if ( !v8((volatile LONG *)(v7 + 4)) ) /*0x581ad8*/
    {
      if ( v7 ) /*0x581ae0*/
        (**(void (__thiscall ***)(unsigned int, int))v7)(v7, 1); /*0x581aea*/
    }
    *a1 = 0; /*0x581aec*/
  }
  if ( a1[1] ) /*0x581aef*/
  {
    v9 = a1[1]; /*0x581af4*/
    if ( v9 ) /*0x581af9*/
    {
      if ( !v8((volatile LONG *)(v9 + 4)) ) /*0x581aff*/
        (**(void (__thiscall ***)(unsigned int, int))v9)(v9, 1); /*0x581b11*/
      a1[1] = 0; /*0x581b13*/
    }
  }
  unk_B3A6D4 = 1; /*0x581b16*/
  v10 = (void (__thiscall ***)(_DWORD, int))a1[0x1B]; /*0x581b1d*/
  if ( v10 ) /*0x581b22*/
    (**v10)(v10, 1); /*0x581b2a*/
  v11 = (void (__thiscall ***)(_DWORD, int))a1[0x1A]; /*0x581b2c*/
  if ( v11 ) /*0x581b31*/
    (**v11)(v11, 1); /*0x581b39*/
  unk_B3A6D4 = 0; /*0x581b3b*/
  Menu_ClearB3A708(); /*0x581b41*/
  v12 = (void (__thiscall ***)(_DWORD, int))a1[7]; /*0x581b46*/
  if ( v12 ) /*0x581b4b*/
    (**v12)(v12, 1); /*0x581b53*/
  v13 = a1[0x1E]; /*0x581b55*/
  if ( v13 ) /*0x581b5a*/
  {
    if ( !v8((volatile LONG *)(v13 + 4)) ) /*0x581b60*/
      (**(void (__thiscall ***)(unsigned int, int))v13)(v13, 1); /*0x581b72*/
    a1[0x1E] = 0; /*0x581b74*/
  }
  MEMORY[0xB3A6E0] = 0; /*0x581b77*/
  sub_58BD50(); /*0x581b7d*/
  v14 = a1[0x42]; /*0x581b82*/
  if ( v14 ) /*0x581b8a*/
  {
    sub_538B60((int *)a1[0x42]); /*0x581b8e*/
    FormHeapFree(v14); /*0x581b94*/
  }
  sub_57D200(a1); /*0x581b9e*/
  sub_584DB0(); /*0x581ba3*/
  endIndex = g_TileUserTraitTable.endIndex; /*0x581ba8*/
  for ( i = 0; i < endIndex; ++i ) /*0x581ba8*/
  {
    v17 = g_TileUserTraitTable.data[i]; /*0x581bc6*/
    if ( v17 ) /*0x581bcb*/
    {
      FormHeapFree((unsigned int)v17->name.m_data); /*0x581bd1*/
      v17->name.m_data = 0; /*0x581bd7*/
      v17->name.m_bufLen = 0; /*0x581bda*/
      v17->name.m_dataLen = 0; /*0x581bde*/
      FormHeapFree((unsigned int)v17); /*0x581be2*/
      endIndex = g_TileUserTraitTable.endIndex; /*0x581be7*/
    }
  }
  result = 0; /*0x581bfb*/
  if ( endIndex ) /*0x581c00*/
  {
    do /*0x581c18*/
    {
      v19 = (unsigned __int16)result++; /*0x581c08*/
      g_TileUserTraitTable.data[v19] = 0; /*0x581c0e*/
    }
    while ( (unsigned __int16)result < g_TileUserTraitTable.endIndex ); /*0x581c18*/
  }
  v20 = InterlockedDecrement; /*0x581c1a*/
  g_TileUserTraitTable.endIndex = 0; /*0x581c20*/
  g_TileUserTraitTable.count = 0; /*0x581c27*/
  v21 = a1[0x1E]; /*0x581c2e*/
  if ( v21 ) /*0x581c38*/
  {
    result = v20((volatile LONG *)(v21 + 4)); /*0x581c3e*/
    if ( !result ) /*0x581c42*/
      result = (**(int (__thiscall ***)(unsigned int, int))v21)(v21, 1); /*0x581c50*/
  }
  v22 = a1[1]; /*0x581c52*/
  if ( v22 ) /*0x581c5b*/
  {
    result = v20((volatile LONG *)(v22 + 4)); /*0x581c61*/
    if ( !result ) /*0x581c65*/
      result = (**(int (__thiscall ***)(unsigned int, int))v22)(v22, 1); /*0x581c73*/
  }
  v23 = *a1; /*0x581c75*/
  if ( v23 ) /*0x581c82*/
  {
    result = v20((volatile LONG *)(v23 + 4)); /*0x581c88*/
    if ( !result ) /*0x581c8c*/
      return (**(LONG (__thiscall ***)(unsigned int, int))v23)(v23, 1); /*0x581c9b*/
  }
  return result; /*0x581c9d*/
}
