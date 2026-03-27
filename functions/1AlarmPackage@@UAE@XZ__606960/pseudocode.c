void __thiscall AlarmPackage::~AlarmPackage(AlarmPackage *this)
{
  _DWORD *v2; // esi
  int v3; // ebp

  *(_DWORD *)this = &AlarmPackage::`vftable';
  if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
    sub_675090((char *)this);
  v2 = *((_DWORD **)this + 0xF);
  if ( v2[1] )
  {
    do
    {
      v3 = *(_DWORD *)(v2[1] + 4);
      FormHeapFree(v2[1]);
      v2[1] = v3;
    }
    while ( v3 );
  }
  *v2 = 0;
  FormHeapFree(*((_DWORD *)this + 0xF));
  *((_DWORD *)this + 0xF) = 0;
  TESPackage::~TESPackage((TESPackage *)this);
}
