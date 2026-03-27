char __thiscall sub_46D450(_DWORD *this)
{
  unsigned int v2; // ecx
  char result; // al

  v2 = *(this + 1);
  result = 0;
  if ( v2 )
  {
    FormHeapFree(v2);
    *(this + 1) = 0;
    result = 1;
  }
  *(_BYTE *)this = 0;
  return result;
}
