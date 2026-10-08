char __thiscall sub_74FF60(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = NiTransformController_RegisterStreamables(this, a2); /*0x74ff69*/
  if ( result ) /*0x74ff70*/
  {
    v4 = *(this + 0x12); /*0x74ff77*/
    if ( v4 ) /*0x74ff7c*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x74ff84*/
    return 1; /*0x74ff87*/
  }
  return result; /*0x74ff72*/
}
