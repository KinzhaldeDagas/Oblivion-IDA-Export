_DWORD *__thiscall std::codecvt<char,char,int>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  *this = &std::locale::facet::`vftable'; /*0x6f8ee8*/
  if ( (a2 & 1) != 0 ) /*0x6f8eee*/
    FormHeapFree((unsigned int)this); /*0x6f8ef1*/
  return this; /*0x6f8efb*/
}
