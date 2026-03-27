int __thiscall sub_76DC50(unsigned int *this)
{
  int v2; // eax
  int result; // eax

  v2 = *(this + 3);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *(this + 3) = 0;
  }
  FormHeapFree(*(this + 4));
  result = *(this + 0x13);
  *(this + 4) = 0;
  if ( result )
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)result + 8))(result);
    *(this + 0x13) = 0;
  }
  return result;
}
