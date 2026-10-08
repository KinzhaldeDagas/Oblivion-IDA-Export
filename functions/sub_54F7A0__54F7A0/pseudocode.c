// Bounds-checked float-vector element access. Returns begin + index*4; begin is vector+4 (FaceGenMatrix+0x0C).
unsigned int __userpurge sub_54F7A0@<eax>(_DWORD *this@<ecx>, int a2@<ebx>, unsigned int a3)
{
  int v4; // ecx

  v4 = *(this + 1); /*0x54f7a3*/
  if ( !v4 || a3 >= (*(this + 2) - v4) >> 2 ) /*0x54f7b9*/
    _invalid_parameter_noinfo(a2, a3, (int)this); /*0x54f7bb*/
  return *(this + 1) + 4 * a3; /*0x54f7c6*/
}
