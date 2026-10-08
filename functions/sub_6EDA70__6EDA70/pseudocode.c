unsigned int __thiscall sub_6EDA70(_DWORD *this, unsigned int a2)
{
  if ( a2 > *(this + 5) ) /*0x6eda7b*/
    _invalid_parameter_noinfo(); /*0x6eda7d*/
  if ( *(this + 6) < 0x10u ) /*0x6eda86*/
    return (unsigned int)this + a2 + 4; /*0x6eda93*/
  else
    return *(this + 1) + a2; /*0x6eda8b*/
}
