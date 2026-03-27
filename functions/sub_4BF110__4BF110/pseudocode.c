UInt32 __thiscall sub_4BF110(TESForm *this, TESForm *a2)
{
  UInt32 result; // eax

  result = TESForm_SetFromActiveFile(this, a2);
  if ( (_BYTE)a2 )
  {
    if ( *((_DWORD *)this + 8) )
      return (*(UInt32 (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 8) + 0x90))(*((_DWORD *)this + 8), 1);
  }
  return result;
}
