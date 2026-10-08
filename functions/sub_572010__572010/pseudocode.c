void __usercall sub_572010(char *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  char *v4; // edi
  _DWORD *v5; // ebp
  _DWORD *v6; // esi
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // edi
  int v9; // edi
  _DWORD *v10; // eax
  bool v11; // zf
  void *v12; // edx
  int v14; // [esp+14h] [ebp-14h] BYREF
  void *node; // [esp+18h] [ebp-10h] BYREF
  int v16; // [esp+24h] [ebp-4h]

  v4 = a1; /*0x572036*/
  v16 = 1; /*0x57203c*/
  sub_571820(a1, a2, a3, a4); /*0x572044*/
  v5 = *((_DWORD **)v4 + 0x579); /*0x572049*/
  while ( v5 ) /*0x572051*/
  {
    v6 = (_DWORD *)v5[2]; /*0x572057*/
    v7 = v6[3]; /*0x57205d*/
    v5 = (_DWORD *)*v5; /*0x572064*/
    if ( *(_DWORD *)(v7 + 4) > 2u ) /*0x572067*/
    {
      (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v7 + 0x1C) + 0x88))( /*0x57207a*/
        *(_DWORD *)(v7 + 0x1C),
        &v14,
        v6[3]);
      if ( v14 ) /*0x572082*/
      {
        v8 = (void (__thiscall ***)(_DWORD, int))v14; /*0x572084*/
        if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x57208a*/
          (**v8)(v8, 1); /*0x5720a0*/
      }
      v9 = v6[3]; /*0x5720a2*/
      if ( v9 ) /*0x5720a7*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x5720ad*/
          (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x5720c3*/
        v6[3] = 0; /*0x5720c5*/
      }
      v4 = a1; /*0x5720cc*/
    }
    v10 = *((_DWORD **)v4 + 0x579); /*0x5720d0*/
    if ( v10 ) /*0x5720d8*/
    {
      while ( 1 ) /*0x5720e0*/
      {
        v11 = v6 == (_DWORD *)v10[2]; /*0x5720e0*/
        v12 = v10; /*0x5720e6*/
        v10 = (_DWORD *)*v10; /*0x5720e8*/
        if ( v11 ) /*0x5720ea*/
          break; /*0x5720ea*/
        if ( !v10 ) /*0x5720ee*/
          goto LABEL_14; /*0x5720ee*/
      }
    }
    else
    {
LABEL_14:
      v12 = 0; /*0x5720f0*/
    }
    node = v12; /*0x5720f4*/
    if ( v12 ) /*0x5720f8*/
      v6 = NiTPointerList_RemoveNode(v4 + 0x15E0, &node); /*0x57210a*/
    if ( v6 ) /*0x57210e*/
    {
      sub_571DF0(v6); /*0x572112*/
      FormHeapFree((unsigned int)v6); /*0x572118*/
    }
  }
  LOBYTE(v16) = 0; /*0x57212e*/
  NiTList<DebugText::DebugTextData *>::~NiTList<DebugText::DebugTextData *>((NiTPointerList__BSImageSpaceShader *)v4 + 0xC8); /*0x572133*/
  v16 = 0xFFFFFFFF; /*0x572145*/
  _LN21(v4, 0x1Cu, 0xC8, (void (__thiscall *)(void *))sub_571DF0); /*0x57214d*/
}
