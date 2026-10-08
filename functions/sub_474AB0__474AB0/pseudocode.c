// Restores one saved active slot by resolving the encoded key in +0x9C, selecting its sequence entry, replaying it, and restoring the saved slot clock/state.
char __thiscall ActorAnimData_RestorePlaySavedSlot(
        int this,
        int slotSelector,
        unsigned int encodedKey,
        int a4,
        float a5,
        int a6)
{
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebp
  unsigned int v13; // edi
  NiControllerSequence *v14; // eax
  BSAnimGroupSequence *v15; // eax
  double v16; // st4

  v10 = slotSelector; /*0x474abf*/
  if ( slotSelector == 5 ) /*0x474ac1*/
  {
    v10 = 0; /*0x474acf*/
  }
  else if ( slotSelector == 6 ) /*0x474ac6*/
  {
    v10 = 3; /*0x474ac8*/
  }
  if ( a4 == 0xFFFFFFFF ) /*0x474ad6*/
  {
    LOBYTE(v11) = ActorAnimData_ClearSlot((ActorAnimData *)this, v10, 0.0); /*0x474ae3*/
    LOWORD(v12) = encodedKey; /*0x474ae8*/
    if ( (_WORD)encodedKey != 0xFF ) /*0x474af1*/
    {
      LOBYTE(v11) = ActorAnimData_FindAnimMapEntry(*(_DWORD **)(this + 0x9C), encodedKey, &encodedKey); /*0x474b03*/
      if ( (_BYTE)v11 ) /*0x474b0a*/
      {
        v13 = encodedKey; /*0x474b10*/
        v11 = (*(int (__thiscall **)(unsigned int, int))(*(_DWORD *)encodedKey + 0x10))(encodedKey, a6);// Restore resolves the encoded key to an AnimSequenceBase and calls vtable +0x10 with the saved selector. Multiple selector 0xFF/out-of-range (including sign-extended 0x80..0xFE) chooses randomly; single ignores it. /*0x474b20*/
        if ( v11 ) /*0x474b24*/
        {
          v14 = (NiControllerSequence *)(*(int (__thiscall **)(unsigned int, int))(*(_DWORD *)v13 + 0x10))(v13, a6); /*0x474b36*/
          *(_DWORD *)(this + 4 * v10 + 0xA0) = v14; /*0x474b49*/
          LOBYTE(v11) = NiControllerSequence_Activate(v14, 0, 0, 1.0, 0.0, 0, 0); /*0x474b57*/
        }
      }
    }
  }
  else
  {
    v12 = encodedKey; /*0x474b5e*/
    LOBYTE(v11) = ActorAnimData_FindAnimMapEntry(*(_DWORD **)(this + 0x9C), encodedKey, &encodedKey); /*0x474b6e*/
    if ( (_BYTE)v11 ) /*0x474b75*/
    {
      if ( ActorAnimData_FindAnimMapEntry(*(_DWORD **)(this + 0x9C), v12, &encodedKey) ) /*0x474b83*/
      {
        v15 = (BSAnimGroupSequence *)(*(int (__thiscall **)(unsigned int, int))(*(_DWORD *)encodedKey + 0x10))( /*0x474b9a*/
                                       encodedKey,
                                       a6);
        ActorAnimData_PlaySequence((ActorAnimData *)this, v15, v12, slotSelector); /*0x474ba1*/
      }
      LOBYTE(v11) = a4; /*0x474ba6*/
      *(_DWORD *)(this + 4 * v10 + 0x48) = a4; /*0x474baa*/
    }
  }
  v16 = a5; /*0x474bae*/
  *(_WORD *)(this + 2 * v10 + 0x3C) = v12;      // ModernWindowsCompatible/TragicEngineFix merge decode: RestorePlaySavedSlot writes the saved ActorAnimData+0x94 clock; pre-sample rebase handles large restored clocks before sampling. /*0x474bb2*/
  *(float *)(this + 0x94) = v16;                // TragicEngineFix decode: ActorAnimData_RestorePlaySavedSlot restores saved actor animation clock into [ESI+0x94]. Pre-sample hook at 0x476E86 handles already-large restored clocks before first active-slot sample. /*0x474bb8*/
  return v11; /*0x474bbe*/
}
