// Saves NiTimeController state, then writes the interpolator object reference at +0x3C through the stream virtual at +0x2C.
int __thiscall NiSingleInterpController_SaveBinary(_DWORD *this, int a2)
{
  j_NiTimeController_SaveBinary(this, a2); /*0x6ce389*/
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x2C))(a2, *(this + 0xF)); /*0x6ce39b*/
}
