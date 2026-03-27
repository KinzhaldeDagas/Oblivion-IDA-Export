unsigned int __thiscall sub_43A4E0(_DWORD *this, LONG Comperand, int *a3, _DWORD *a4)
{
  unsigned int result; // eax

  while ( 1 )
  {
    while ( sub_43A260(this, Comperand, *a3) )
    {
      if ( (*(this + 6) & 0xFFFFFFFE) == 0 )
        goto LABEL_10;
      if ( (*(_DWORD *)((*(this + 6) & 0xFFFFFFFE) + 8) & 1) == 0 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 0x20))(*this, *a3);
        *a3 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x24))(
                *this,
                *(_DWORD *)(*(this + 6) & 0xFFFFFFFE));
        result = *(this + 6) & 0xFFFFFFFE;
        *a4 = *(_DWORD *)(result + 4);
        LOBYTE(result) = 1;
        if ( (*(_DWORD *)((*(this + 6) & 0xFFFFFFFE) + 8) & 1) == 0 )
          goto LABEL_11;
        *a4 = 0;
      }
    }
    result = *(this + 5);
    if ( (result & 0xFFFFFFFE) == 0 )
      break;
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) & 1) == 0 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*this + 0x20))(*this, *a3);
      *a3 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x24))(
              *this,
              *(_DWORD *)(*(this + 5) & 0xFFFFFFFE));
      result = *(this + 5) & 0xFFFFFFFE;
      *a4 = *(_DWORD *)(result + 4);
      LOBYTE(result) = 1;
      if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) & 1) == 0 )
        goto LABEL_11;
      *a4 = 0;
    }
  }
LABEL_10:
  LOBYTE(result) = 0;
LABEL_11:
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return result;
}
