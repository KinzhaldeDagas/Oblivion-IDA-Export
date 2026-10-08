char __thiscall sub_6C5A10(float *this, NiControllerManager *a2, int *a3)
{
  LONG v4; // eax
  unsigned int v5; // edi
  int v6; // ecx
  NiControllerSequence *v7; // eax
  int v8; // ecx
  int v9; // esi
  LONG v10; // edi

  NiTimeController_CopyMembers(this, (int)a2, a3); /*0x6c5a20*/
  LOBYTE(v4) = *((_BYTE *)this + 0x6C); /*0x6c5a25*/
  v5 = 0; /*0x6c5a28*/
  for ( *((_BYTE *)a2 + 0x6C) = v4; v5 < *((unsigned __int16 *)this + 0x23); ++v5 ) /*0x6c5a2d*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)this + 0x10) + 4 * v5); /*0x6c5a36*/
    if ( v6 ) /*0x6c5a3b*/
    {
      v7 = (NiControllerSequence *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 0x18))(v6, a3); /*0x6c5a43*/
      LOBYTE(v4) = NiControllerManager_AddSequence(a2, v7, 0, 0); /*0x6c5a4c*/
    }
  }
  v8 = *((_DWORD *)this + 0x1F); /*0x6c5a5c*/
  if ( v8 ) /*0x6c5a61*/
  {
    v4 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v8 + 0x18))(v8, a3); /*0x6c5a69*/
    v9 = *((_DWORD *)a2 + 0x1F); /*0x6c5a6b*/
    v10 = v4; /*0x6c5a6e*/
    if ( v9 != v4 ) /*0x6c5a72*/
    {
      if ( v9 ) /*0x6c5a76*/
      {
        v4 = InterlockedDecrement((volatile LONG *)(v9 + 4)); /*0x6c5a7c*/
        if ( !v4 ) /*0x6c5a84*/
          LOBYTE(v4) = (**(int (__thiscall ***)(int, int))v9)(v9, 1); /*0x6c5a92*/
      }
      *((_DWORD *)a2 + 0x1F) = v10; /*0x6c5a96*/
      if ( v10 ) /*0x6c5a99*/
        LOBYTE(v4) = InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x6c5a9f*/
    }
  }
  return v4; /*0x6c5aa5*/
}
