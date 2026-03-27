int __thiscall sub_64B1F0(_DWORD *this, int a2)
{
  bool v3; // zf
  int result; // eax

  v3 = a2 == sub_6600D0(TESDataHandler_g_PlayerRef, 1);
  result = dword_B3BA98;
  if ( !v3 )
    return *(this + 0x44);
  return result;
}
