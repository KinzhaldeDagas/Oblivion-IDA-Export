void __thiscall sub_559E90(unsigned int *this)
{
  _DWORD *v2; // edi

  v2 = (_DWORD *)*(this + 2);
  if ( v2 )
  {
    sub_559A70(v2);
    FormHeapFree((unsigned int)v2);
  }
  FormHeapFree(*this);
  *this = 0;
  *((_WORD *)this + 3) = 0;
  *((_WORD *)this + 2) = 0;
}
