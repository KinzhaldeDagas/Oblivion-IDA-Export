bool __thiscall sub_6AB9D0(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  bool result; // al
  _DWORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x6ab9d0*/
  result = bSoundEnabled_Audio /*0x6aba04*/
        && (v2 = (_DWORD *)*(this + 0xC0), v4 = 0, NiTMap_GetAt(v2, a2, &v4), v4)
        && sub_6B6AF0((int)v4) != 0;
  return result; /*0x6aba08*/
}
