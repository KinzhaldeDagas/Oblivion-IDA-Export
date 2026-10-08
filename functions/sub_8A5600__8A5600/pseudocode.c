void __thiscall sub_8A5600(int *this)
{
  int *i; // ebp
  bool v2; // bl
  void (__thiscall ***v3)(void *, int); // esi
  void *v4; // esi
  void (__thiscall ***v5)(void *, int); // edi
  NiRTTI *v6; // eax
  NiRTTI *v7; // eax
  int v8; // [esp+10h] [ebp-Ch]
  void *outData; // [esp+14h] [ebp-8h] BYREF
  void *v10; // [esp+18h] [ebp-4h] BYREF

  v8 = 0; /*0x8a5607*/
  for ( i = this + 4; ; sub_67A850(i) ) /*0x8a560f*/
  {
    v2 = 0; /*0x8a562c*/
    if ( i ) /*0x8a5614*/
    {
      v8 |= 1u; /*0x8a5622*/
      if ( *NodeVoid_GetDataAddRef((NodeVoid *)i, &outData) ) /*0x8a5627*/
        v2 = 1; /*0x8a5614*/
    }
    if ( (v8 & 1) != 0 ) /*0x8a5637*/
    {
      v3 = (void (__thiscall ***)(void *, int))outData; /*0x8a5639*/
      v8 &= ~1u; /*0x8a563d*/
      if ( outData ) /*0x8a5644*/
      {
        if ( !InterlockedDecrement((volatile LONG *)outData + 1) ) /*0x8a564a*/
        {
          if ( v3 ) /*0x8a5656*/
            (**v3)(v3, 1); /*0x8a5660*/
        }
      }
    }
    if ( !v2 ) /*0x8a5664*/
      break; /*0x8a5664*/
    v4 = *NodeVoid_GetDataAddRef((NodeVoid *)i, &v10); /*0x8a5676*/
    if ( v10 ) /*0x8a567e*/
    {
      v5 = (void (__thiscall ***)(void *, int))v10; /*0x8a5680*/
      if ( !InterlockedDecrement((volatile LONG *)v10 + 1) ) /*0x8a5686*/
        (**v5)(v5, 1); /*0x8a569c*/
    }
    if ( v4 ) /*0x8a56a0*/
    {
      v6 = (NiRTTI *)(*(int (__thiscall **)(void *))(*(_DWORD *)v4 + 4))(v4); /*0x8a56a9*/
      if ( v6 ) /*0x8a56ad*/
      {
        while ( v6 != &MEMORY[0xBA7D50] ) /*0x8a56b5*/
        {
          v6 = v6->parent; /*0x8a56b7*/
          if ( !v6 ) /*0x8a56bc*/
            goto LABEL_19; /*0x8a56bc*/
        }
      }
      else
      {
LABEL_19:
        v7 = (NiRTTI *)(*(int (__thiscall **)(void *))(*(_DWORD *)v4 + 4))(v4); /*0x8a56be*/
        if ( !v7 ) /*0x8a56c9*/
          continue; /*0x8a56c9*/
        while ( v7 != &stru_BA7D04 ) /*0x8a56d5*/
        {
          v7 = v7->parent; /*0x8a56d7*/
          if ( !v7 ) /*0x8a56dc*/
            goto LABEL_22; /*0x8a56dc*/
        }
      }
      if ( (*(int (__thiscall **)(void *))(*(_DWORD *)v4 + 0x58))(v4) ) /*0x8a56f1*/
        (*(void (__thiscall **)(void *))(*(_DWORD *)v4 + 0x60))(v4); /*0x8a56fe*/
    }
LABEL_22:
    ; /*0x8a56de*/
  }
}
