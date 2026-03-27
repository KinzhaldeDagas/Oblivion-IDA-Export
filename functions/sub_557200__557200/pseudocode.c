char __userpurge sub_557200@<al>(_DWORD *this@<ecx>, size_t Size)
{
  int v4; // eax

  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !(_DWORD)Size )
    return 0;
  v4 = FormHeapAlloc(Size);
  *(this + 1) = v4;
  *(this + 2) = v4;
  *(this + 3) = Size + v4;
  return 1;
}
