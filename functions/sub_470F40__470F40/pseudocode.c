// For a lower-body movement key (group 3..14) in slot 0, gets the Bip01 node name from ActorAnimData +0x24, queries each active sequence's controlled-block priority for that name, and returns true only when slot 0 has the highest priority. Returns false without slot 0, Bip01, or a movement group.
bool __thiscall ActorAnimData_IsLowerBodySequenceDominantAtBip01(int this)
{
  _DWORD **v1; // esi
  int v2; // eax
  int v3; // edi
  unsigned __int8 v4; // bl
  int v5; // ebp
  unsigned __int8 ControlledBlockPriority; // al
  char *v8; // [esp+4h] [ebp-8h]
  _DWORD *v9; // [esp+8h] [ebp-4h]

  v1 = (_DWORD **)(this + 0xA0); /*0x470f4b*/
  v9 = (_DWORD *)(this + 0xA0); /*0x470f51*/
  if ( !*(_DWORD *)(this + 0xA0) ) /*0x470f43*/
    return 0; /*0x470f43*/
  v2 = *(_DWORD *)(this + 0x24); /*0x470f57*/
  if ( !v2 ) /*0x470f5c*/
    return 0; /*0x470f5c*/
  v8 = *(char **)(v2 + 8); /*0x470f66*/
  if ( (unsigned int)(AnimKey_GetGroupID(*(_WORD *)(this + 0x3C)) - 3) > 0xB ) /*0x470f78*/
    return 0; /*0x470f78*/
  v3 = 0; /*0x470f7d*/
  v4 = 0; /*0x470f7f*/
  v5 = 5; /*0x470f81*/
  do /*0x470fa4*/
  {
    if ( *v1 ) /*0x470f86*/
    {
      ControlledBlockPriority = BSAnimGroupSequence_GetControlledBlockPriority(*v1, v8); /*0x470f91*/
      if ( ControlledBlockPriority > v4 ) /*0x470f98*/
      {
        v3 = (int)*v1; /*0x470f9a*/
        v4 = ControlledBlockPriority; /*0x470f9c*/
      }
    }
    ++v1; /*0x470f9e*/
    --v5; /*0x470fa1*/
  }
  while ( v5 ); /*0x470fa4*/
  return v3 == *v9; /*0x470fb1*/
}
