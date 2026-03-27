int __thiscall sub_6D6A40(float *this, float *a2)
{
  int result; // eax

  if ( !*((_BYTE *)this + 0x1C) && *a2 == *this && a2[1] == *(this + 1) )
  {
    *((_BYTE *)this + 0x1C) = 0;
    result = *(_DWORD *)a2;
    *this = *a2;
    *(this + 1) = a2[1];
  }
  else
  {
    *((_BYTE *)this + 0x1C) = 1;
    result = *(_DWORD *)a2;
    *this = *a2;
    *(this + 1) = a2[1];
  }
  return result;
}
