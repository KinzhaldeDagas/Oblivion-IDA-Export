int __thiscall sub_404D30(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *(this + 0x44) = *a2;
  *(this + 0x45) = a2[1];
  *(this + 0x46) = a2[2];
  result = a2[3];
  *(this + 0x47) = result;
  return result;
}
