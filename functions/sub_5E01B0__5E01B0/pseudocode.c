bool __thiscall sub_5E01B0(_DWORD **this)
{
  signed int v2; // eax
  float v4; // [esp+8h] [ebp-4h]

  v2 = ((int (__thiscall *)(_DWORD **, int))(*this)[0xA1])(this, 5);
  v4 = Actor_CalcMaxBreath(v2);
  return !*(this + 0x16) || v4 <= ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(this + 0x16) + 0x1F4))(*(this + 0x16));
}
