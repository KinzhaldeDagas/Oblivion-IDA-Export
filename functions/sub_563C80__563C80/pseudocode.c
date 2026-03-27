int __thiscall sub_563C80(_DWORD *this, unsigned __int16 a2)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)*(this + 0x37);
  if ( v3 && *(this + 0x38) && a2 < (unsigned __int16)sub_5601E0(v3) )
    return *(_DWORD *)(*(this + 0x38) + 4 * a2);
  else
    return 0;
}
