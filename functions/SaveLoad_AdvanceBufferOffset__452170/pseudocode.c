int __thiscall SaveLoad_AdvanceBufferOffset(_DWORD *this, int a2)
{
  *(this + 5) += a2;
  return a2;
}
