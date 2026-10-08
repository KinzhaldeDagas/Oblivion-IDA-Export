char __thiscall sub_590740(int *this, BSAnimGroupSequence *sequence)
{
  int v3; // eax
  BSAnimGroupSequence *v4; // edi
  int v5; // eax

  if ( !*(this + 9) ) /*0x590743*/
    return 0; /*0x590743*/
  v3 = *(this + 0x10); /*0x59074d*/
  if ( !v3 || !sequence ) /*0x59075e*/
    return 0; /*0x5907fc*/
  if ( !NiTMap_GetAt((_DWORD *)(v3 + 0x58), (int)sequence, &sequence) ) /*0x59076e*/
    return 0; /*0x59076e*/
  v4 = sequence; /*0x590777*/
  if ( !sequence ) /*0x59077d*/
    return 0; /*0x59077d*/
  v5 = *(this + 0x11); /*0x59077f*/
  if ( v5 ) /*0x590784*/
  {
    if ( *(_DWORD *)(v5 + 0x44) == 1 ) /*0x59078a*/
      sub_590D20(this, flt_A6B040); /*0x590798*/
    NiControllerSequence_Deactivate((NiControllerSequence *)*(this + 0x11), 0.0, 0); /*0x5907a8*/
  }
  if ( *((_DWORD *)v4 + 0x11) ) /*0x5907ad*/
    NiControllerSequence_Deactivate(v4, 0.0, 0); /*0x5907bd*/
  if ( !BSAnimGroupSequence_Activate(v4, 0, 1, 1.0, 0.0, 0) ) /*0x5907da*/
    return 0; /*0x5907f6*/
  *(_WORD *)(*(this + 0x10) + 8) |= 8u; /*0x5907e6*/
  *(this + 0x11) = (int)v4; /*0x5907eb*/
  return 1; /*0x5907f1*/
}
