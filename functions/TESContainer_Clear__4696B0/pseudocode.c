unsigned int __thiscall TESContainer_Clear(_DWORD *this)
{
  unsigned int result; // eax
  _DWORD *v3; // eax

  for ( result = *(this + 2); result; result = *(this + 2) )
  {
    FormHeapFree(result);
    v3 = (_DWORD *)*(this + 3);
    if ( v3 )
    {
      *(this + 3) = v3[1];
      *(this + 2) = *v3;
      FormHeapFree((unsigned int)v3);
    }
    else
    {
      *(this + 2) = 0;
    }
  }
  return result;
}
