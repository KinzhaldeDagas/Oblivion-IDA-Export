char __userpurge sub_557200@<al>(_DWORD *this@<ecx>, size_t Size)
{
  int v4; // eax

  *(this + 1) = 0; /*0x55720c*/
  *(this + 2) = 0; /*0x55720f*/
  *(this + 3) = 0; /*0x557212*/
  if ( !(_DWORD)Size ) /*0x557215*/
    return 0; /*0x557218*/
  v4 = FormHeapAlloc(Size); /*0x557229*/
  *(this + 1) = v4; /*0x55722e*/
  *(this + 2) = v4; /*0x557231*/
  *(this + 3) = Size + v4; /*0x557239*/
  return 1; /*0x557217*/
}
