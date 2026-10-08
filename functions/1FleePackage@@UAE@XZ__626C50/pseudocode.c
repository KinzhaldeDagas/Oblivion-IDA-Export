// 3DTheft: FleePackage destructor frees list at +0x58/+0x16 and then runs TESPackage destructor; confirms allocation must cover fields through at least +0x65.
void __thiscall FleePackage::~FleePackage(TESPackage *this)
{
  int v2; // edi

  this->__vftable = (TESPackageVtbl *)&FleePackage::`vftable'; /*0x626c53*/
  if ( *((_DWORD *)this + 0x16) ) /*0x626c59*/
  {
    do /*0x626c74*/
    {
      v2 = *(_DWORD *)(*((_DWORD *)this + 0x16) + 4); /*0x626c63*/
      FormHeapFree(*((_DWORD *)this + 0x16)); /*0x626c67*/
      *((_DWORD *)this + 0x16) = v2; /*0x626c71*/
    }
    while ( v2 ); /*0x626c74*/
  }
  *((_DWORD *)this + 0x15) = 0; /*0x626c77*/
  TESPackage::~TESPackage(this); /*0x626c81*/
}
