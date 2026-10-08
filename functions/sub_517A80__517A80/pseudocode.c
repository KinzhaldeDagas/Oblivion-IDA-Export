// Construct 0x20-byte Script VariableInfo: initializes selected runtime fields and empty BSString at +0x18, but does not guarantee every SLSD data byte is initialized before a short/zero chunk read.
double *__thiscall sub_517A80(double *this)
{
  *(this + 1) = 0.0; /*0x517a86*/
  *(_DWORD *)this = 0; /*0x517a89*/
  *((_BYTE *)this + 0x10) = 0; /*0x517a8b*/
  *(this + 3) = 0.0; /*0x517a8e*/
  return this; /*0x517a99*/
}
