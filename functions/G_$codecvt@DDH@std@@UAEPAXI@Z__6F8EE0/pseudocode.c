_DWORD *__thiscall std::codecvt<char,char,int>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  *this = &std::locale::facet::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
