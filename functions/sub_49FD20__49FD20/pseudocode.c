// Finds the controlled-block record whose palette-resolved target name exactly matches the supplied node name and returns that record's priority byte at +0x0D; returns zero when absent.
char __thiscall BSAnimGroupSequence_GetControlledBlockPriority(_DWORD *this, char *Str2)
{
  int v3; // edi
  int i; // ebx
  int v5; // eax
  unsigned __int16 v6; // cx
  int v7; // eax
  unsigned __int8 *v8; // eax

  v3 = 0; /*0x49fd26*/
  if ( !*(this + 3) ) /*0x49fd28*/
    return 0; /*0x49fd6b*/
  for ( i = 0; ; i += 0x10 )
  {
    v5 = *(this + 6); /*0x49fd33*/
    v6 = *(_WORD *)(v5 + i + 4); /*0x49fd36*/
    v7 = i + v5; /*0x49fd3b*/
    v8 = v6 == word_A79928 ? 0 : (unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)v7 + 8) + v6);
    if ( !CRT_StricmpLocaleDispatch(v8, (unsigned __int8 *)Str2) ) /*0x49fd54*/
      break; /*0x49fd54*/
    if ( (unsigned int)++v3 >= *(this + 3) ) /*0x49fd69*/
      return 0; /*0x49fd69*/
  }
  return *(_BYTE *)(0x10 * v3 + *(this + 5) + 0xD); /*0x49fd6b*/
}
