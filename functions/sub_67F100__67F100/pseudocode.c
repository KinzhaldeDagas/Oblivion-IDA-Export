void __thiscall sub_67F100(_DWORD *this)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)*(this + 1);
  if ( v1 )
  {
    *(this + 1) = v1[1];
    *this = *v1;
    FormHeapFree((unsigned int)v1);
  }
  else
  {
    *this = 0;
  }
}
