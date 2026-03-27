_DWORD *__thiscall sub_439000(_DWORD *this, char a2)
{
  *this = &BSTask<__int64>::`vftable';
  InterlockedDecrement(&Addend);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
