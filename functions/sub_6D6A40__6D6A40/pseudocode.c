int __thiscall sub_6D6A40(float *this, float *a2)
{
  int result; // eax

  if ( !*((_BYTE *)this + 0x1C) && *a2 == *this && a2[1] == *(this + 1) ) /*0x6d6a64*/
  {
    *((_BYTE *)this + 0x1C) = 0; /*0x6d6a68*/
    result = *(_DWORD *)a2; /*0x6d6a6b*/
    *this = *a2; /*0x6d6a6d*/
    *(this + 1) = a2[1]; /*0x6d6a72*/
  }
  else
  {
    *((_BYTE *)this + 0x1C) = 1; /*0x6d6a7d*/
    result = *(_DWORD *)a2; /*0x6d6a80*/
    *this = *a2; /*0x6d6a82*/
    *(this + 1) = a2[1]; /*0x6d6a87*/
  }
  return result; /*0x6d6a75*/
}
