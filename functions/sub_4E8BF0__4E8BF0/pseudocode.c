UInt32 __thiscall sub_4E8BF0(TESForm *this, TESForm *a2)
{
  int v3; // ecx

  if ( (_BYTE)a2 )
  {
    v3 = *((_DWORD *)this + 0xB);
    if ( v3 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x90))(v3, 1);
  }
  return TESForm_SetFromActiveFile(this, a2);
}
