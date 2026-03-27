void __userpurge sub_478780(
        char *this@<ecx>,
        char bp0@<bpl>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a5@<st0>,
        int a6,
        char a7,
        int a8)
{
  int v8; // esi
  _DWORD *ShadowSceneNode; // eax
  void (__thiscall ***v11)(_DWORD, int); // edi
  int v12; // edi
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // [esp-8h] [ebp-10h]

  v8 = a6;
  if ( *(_DWORD *)(a6 + 8) )
  {
    if ( (_UNKNOWN *)a6 == &unk_B33D60 || (char *)a6 == this + 0x12C )
      sub_4DE1C0(*(_DWORD *)(a6 + 8));
    v16 = *(_DWORD *)(v8 + 8);
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
    sub_7C5E70(ShadowSceneNode, v16);
    sub_481350(*(_DWORD **)(v8 + 8));
    if ( *(_DWORD *)(*(_DWORD *)(v8 + 8) + 0x1C) )
    {
      nullsub_returnTrue_0arg();
      (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(*(_DWORD *)(v8 + 8) + 0x1C) + 0x88))(
        *(_DWORD *)(*(_DWORD *)(v8 + 8) + 0x1C),
        &a6,
        *(_DWORD *)(v8 + 8));
      if ( a6 )
      {
        v11 = (void (__thiscall ***)(_DWORD, int))a6;
        if ( !InterlockedDecrement((volatile LONG *)(a6 + 4)) )
          (**v11)(v11, 1);
      }
      a5 = nullsub_returnTrue_0arg();
    }
    if ( (_UNKNOWN *)v8 == &unk_B33D10 || (char *)v8 == this + 0xDC )
    {
      v12 = *((_DWORD *)this + 0xA);
      if ( v12 )
      {
        sub_897A90(v12, 0);
        sub_477EF0((_WORD *)(v12 + 0xAC));
      }
      v13 = *((_DWORD *)this + 0xC);
      if ( v13 )
      {
        sub_897A90(v13, 0);
        sub_477EF0((_WORD *)(v13 + 0xAC));
      }
      if ( *((PlayerCharacter **)this + 0x54) == TESDataHandler_g_PlayerRef
        && this == (char *)sub_6600D0(TESDataHandler_g_PlayerRef, 0) )
      {
        sub_57B190(bp0, st5_0, st6_0, a5, dword_B33D84);
      }
    }
    v14 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 4) + 0x14))(*(_DWORD *)(v8 + 4));
    QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v14, 1, 1);
    *(_DWORD *)(v8 + 8) = 0;
  }
  if ( a7 )
  {
    v15 = a8;
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = v15;
  }
}
