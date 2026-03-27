unsigned int __thiscall sub_435F10(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v5; // ecx
  unsigned int result; // eax

  while ( 1 )
  {
    do
    {
      v5 = (_DWORD *)(4 * a2 + *(_DWORD *)(*this + 0xC));
      *(this + 4) = v5;
      *(this + 5) = *v5;
      *(_DWORD *)*(this + 2) = *(this + 5) & 0xFFFFFFFE;
      result = *(_DWORD *)*(this + 4);
    }
    while ( result != (*(this + 5) & 0xFFFFFFFE) );
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 )
      break;
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x20))(*this, *a3);
    *a3 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x24))(
            *this,
            *(_DWORD *)(*(this + 5) & 0xFFFFFFFE));
    result = *(this + 5) & 0xFFFFFFFE;
    *a4 = *(_DWORD *)(result + 4);
    LOBYTE(result) = 1;
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) & 1) == 0 )
      goto LABEL_6;
  }
  LOBYTE(result) = 0;
LABEL_6:
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return result;
}
