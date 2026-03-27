int __thiscall sub_757F30(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 0x11);
  *(float *)(result + 0x48) = a2;
  return result;
}
