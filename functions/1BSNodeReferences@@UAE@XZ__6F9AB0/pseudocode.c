void __thiscall BSNodeReferences::~BSNodeReferences(BSNodeReferences *this)
{
  int i; // eax
  int v3; // edx
  unsigned int v4; // [esp-4h] [ebp-8h]

  *(_DWORD *)this = &BSNodeReferences::`vftable';
  for ( i = 0; (unsigned __int16)i < *((_WORD *)this + 9); *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v3) = 0 )
    v3 = (unsigned __int16)i++;
  *((_WORD *)this + 9) = 0;
  *((_WORD *)this + 0xA) = 0;
  v4 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 2) = &NiTArray<NiAVObject *>::`vftable';
  FormHeapFree(v4);
  NiRefObject_destr(this);
}
