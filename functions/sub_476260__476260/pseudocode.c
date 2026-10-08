// CustomAnimSupport hook target: ActorAnimData_PlayEncodedGroup. Resolves encoded key in animsMap, selects single/multiple sequence, then forwards to ActorAnimData_PlaySequence.
BSAnimGroupSequence *__thiscall ActorAnimData_PlayEncodedGroup(
        ActorAnimData *this,
        _DWORD *encodedKey,
        int slotSelector)
{
  _DWORD *v3; // edi
  BSAnimGroupSequence *v5; // eax

  v3 = encodedKey; /*0x476262*/
  if ( (_WORD)encodedKey == 0xFF /*0x47627b*/
    || !ActorAnimData_FindAnimMapEntry((_DWORD *)this->animsMap, (int)encodedKey, &encodedKey) )
  {
    return 0; /*0x4762a5*/
  }
  v5 = (BSAnimGroupSequence *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*encodedKey + 0x10))( /*0x47628f*/
                                encodedKey,
                                0xFFFFFFFF);
  return ActorAnimData_PlaySequence(this, v5, (unsigned int)v3, slotSelector); /*0x47629f*/
}
