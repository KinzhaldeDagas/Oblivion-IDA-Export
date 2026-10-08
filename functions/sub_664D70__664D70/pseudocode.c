void __stdcall sub_664D70(int a1)
{
  Ni2DBuffer *v1; // esi
  Ni2DBuffer *height; // ebx
  int v3; // eax
  int v4; // esi
  Atmosphere *v5; // ecx
  unsigned int i; // esi
  _WORD *v7; // ecx
  int (*v8)(void); // eax
  int v9; // eax

  if ( a1 ) /*0x664d7a*/
  {
    v1 = *(Ni2DBuffer **)(a1 + 0xC); /*0x664d82*/
    if ( v1 ) /*0x664d87*/
    {
      do /*0x664dba*/
      {
        height = (Ni2DBuffer *)v1[2].members.height; /*0x664d95*/
        v3 = (*((int (__thiscall **)(Ni2DBuffer *))v1->__vftable + 1))(v1); /*0x664d9a*/
        if ( v3 ) /*0x664d9e*/
        {
          while ( (char *)v3 != unk_B3CA58 ) /*0x664da5*/
          {
            v3 = *(_DWORD *)(v3 + 4); /*0x664da7*/
            if ( !v3 ) /*0x664dac*/
              goto LABEL_6; /*0x664dac*/
          }
        }
        else
        {
LABEL_6:
          NiObjectNET_RemoveController((Ni2DBuffer **)a1, v1); /*0x664dae*/
        }
        v1 = height; /*0x664db8*/
      }
      while ( height ); /*0x664dba*/
    }
    v4 = *(_DWORD *)(a1 + 0xA8); /*0x664dbc*/
    if ( v4 ) /*0x664dc4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x664dca*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x664de0*/
      *(_DWORD *)(a1 + 0xA8) = 0; /*0x664de2*/
    }
    v5 = *(Atmosphere **)(a1 + 0xA8); /*0x664dec*/
    if ( v5 ) /*0x664df4*/
    {
      if ( Shared_GetPointerAtOffset08(v5) != (NiAVObject *)a1 ) /*0x664dfd*/
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0xA8) + 0x4C))(*(_DWORD *)(a1 + 0xA8), a1); /*0x664e0b*/
    }
    for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; ++i ) /*0x664e0d*/
    {
      v7 = *(_WORD **)(*(_DWORD *)(a1 + 0xB0) + 4 * i); /*0x664e29*/
      if ( v7 ) /*0x664e2e*/
      {
        v8 = *(int (**)(void))(*(_DWORD *)v7 + 8); /*0x664e32*/
        v7[0xC] &= ~1u; /*0x664e35*/
        v9 = v8(); /*0x664e39*/
        if ( v9 ) /*0x664e3d*/
          sub_664D70(v9); /*0x664e42*/
      }
    }
  }
}
