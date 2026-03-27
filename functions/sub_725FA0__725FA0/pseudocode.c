int __stdcall sub_725FA0(size_t Size)
{
  if ( (_DWORD)Size )
    return FormHeapAlloc(Size);
  else
    return 0;
}
