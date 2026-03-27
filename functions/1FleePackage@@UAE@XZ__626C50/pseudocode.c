void __thiscall FleePackage::~FleePackage(TESPackage *this)
{
  int v2; // edi

  this->__vftable = (TESPackageVtbl *)&FleePackage::`vftable';
  if ( *((_DWORD *)this + 0x16) )
  {
    do
    {
      v2 = *(_DWORD *)(*((_DWORD *)this + 0x16) + 4);
      FormHeapFree(*((_DWORD *)this + 0x16));
      *((_DWORD *)this + 0x16) = v2;
    }
    while ( v2 );
  }
  *((_DWORD *)this + 0x15) = 0;
  TESPackage::~TESPackage(this);
}
