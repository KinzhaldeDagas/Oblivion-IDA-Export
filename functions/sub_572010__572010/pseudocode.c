void __usercall sub_572010(char *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  char *v4; // edi
  _DWORD *v5; // ebp
  _DWORD *v6; // esi
  int v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // edi
  int v9; // edi
  NiTPointerList_Node_void *v10; // eax
  bool v11; // zf
  NiTPointerList_Node_void *v12; // edx
  int v14; // [esp+14h] [ebp-14h] BYREF
  NiTPointerList_Node_void *v15; // [esp+18h] [ebp-10h] BYREF
  int v16; // [esp+24h] [ebp-4h]

  v4 = a1;
  v16 = 1;
  sub_571820(a1, a2, a3, a4);
  v5 = *((_DWORD **)v4 + 0x579);
  while ( v5 )
  {
    v6 = (_DWORD *)v5[2];
    v7 = v6[3];
    v5 = (_DWORD *)*v5;
    if ( *(_DWORD *)(v7 + 4) > 2u )
    {
      (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v7 + 0x1C) + 0x88))(
        *(_DWORD *)(v7 + 0x1C),
        &v14,
        v6[3]);
      if ( v14 )
      {
        v8 = (void (__thiscall ***)(_DWORD, int))v14;
        if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
          (**v8)(v8, 1);
      }
      v9 = v6[3];
      if ( v9 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
          (**(void (__thiscall ***)(int, int))v9)(v9, 1);
        v6[3] = 0;
      }
      v4 = a1;
    }
    v10 = *((NiTPointerList_Node_void **)v4 + 0x579);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = v6 == v10->data;
        v12 = v10;
        v10 = v10->next;
        if ( v11 )
          break;
        if ( !v10 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      v12 = 0;
    }
    v15 = v12;
    if ( v12 )
      v6 = sub_7AA860((BSTextureManager *)(v4 + 0x15E0), &v15);
    if ( v6 )
    {
      sub_571DF0(v6);
      FormHeapFree((unsigned int)v6);
    }
  }
  LOBYTE(v16) = 0;
  NiTList<DebugText::DebugTextData *>::~NiTList<DebugText::DebugTextData *>((NiTPointerList__BSImageSpaceShader *)v4 + 0xC8);
  v16 = 0xFFFFFFFF;
  _LN21(v4, 0x1Cu, 0xC8, (void (__thiscall *)(void *))sub_571DF0);
}
