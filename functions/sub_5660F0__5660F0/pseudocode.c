void __thiscall sub_5660F0(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // ecx

  v2 = (_DWORD *)*(this + 9);
  if ( v2 )
    sub_569AB0(v2);
  v3 = *(this + 0xA);
  if ( v3 )
  {
    if ( *(_BYTE *)v3 <= 1u )
      *(_DWORD *)(v3 + 4) = TESForm_LookupByFormID(*(_DWORD *)(v3 + 4));
  }
}
