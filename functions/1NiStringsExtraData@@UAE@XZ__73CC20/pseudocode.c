void __thiscall NiStringsExtraData::~NiStringsExtraData(NiStringsExtraData *this)
{
  unsigned int v2; // edi
  bool v3; // zf

  v2 = 0;
  v3 = *((_DWORD *)this + 3) == 0;
  *(_DWORD *)this = &NiStringsExtraData::`vftable';
  if ( !v3 )
  {
    do
      FormHeapFree(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * v2++));
    while ( v2 < *((_DWORD *)this + 3) );
  }
  FormHeapFree(*((_DWORD *)this + 4));
  *((_DWORD *)this + 4) = 0;
  NiExtraData_dtor((unsigned int *)this);
}
