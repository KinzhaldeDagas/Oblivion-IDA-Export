unsigned int __thiscall sub_43A4E0(_DWORD *this, LONG Comperand, int *a3, _DWORD *a4)
{
  unsigned int result; // eax

  while ( 1 ) /*0x43a4ff*/
  {
    while ( sub_43A260(this, Comperand, *a3) ) /*0x43a4ff*/
    {
      if ( (*(this + 6) & 0xFFFFFFFE) == 0 ) /*0x43a50a*/
        goto LABEL_10; /*0x43a50a*/
      if ( (*(_DWORD *)((*(this + 6) & 0xFFFFFFFE) + 8) & 1) == 0 ) /*0x43a51c*/
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x20))(*this, *a3); /*0x43a528*/
        *a3 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x24))( /*0x43a53c*/
                *this,
                *(_DWORD *)(*(this + 6) & 0xFFFFFFFE));
        result = *(this + 6) & 0xFFFFFFFE; /*0x43a541*/
        *a4 = *(_DWORD *)(result + 4); /*0x43a547*/
        LOBYTE(result) = 1; /*0x43a552*/
        if ( (*(_DWORD *)((*(this + 6) & 0xFFFFFFFE) + 8) & 1) == 0 ) /*0x43a556*/
          goto LABEL_11; /*0x43a556*/
        *a4 = 0; /*0x43a558*/
      }
    }
    result = *(this + 5); /*0x43a560*/
    if ( (result & 0xFFFFFFFE) == 0 ) /*0x43a568*/
      break; /*0x43a568*/
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) & 1) == 0 ) /*0x43a576*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x20))(*this, *a3); /*0x43a586*/
      *a3 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 0x24))( /*0x43a59a*/
              *this,
              *(_DWORD *)(*(this + 5) & 0xFFFFFFFE));
      result = *(this + 5) & 0xFFFFFFFE; /*0x43a59f*/
      *a4 = *(_DWORD *)(result + 4); /*0x43a5a5*/
      LOBYTE(result) = 1; /*0x43a5b0*/
      if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) & 1) == 0 ) /*0x43a5b4*/
        goto LABEL_11; /*0x43a5b4*/
      *a4 = 0; /*0x43a5b6*/
    }
  }
LABEL_10:
  LOBYTE(result) = 0; /*0x43a5c1*/
LABEL_11:
  *(_DWORD *)*(this + 1) = 0; /*0x43a5c3*/
  *(_DWORD *)*(this + 2) = 0; /*0x43a5d0*/
  *(_DWORD *)*(this + 3) = 0; /*0x43a5db*/
  return result; /*0x43a5cf*/
}
