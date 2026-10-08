// LockFreeMap insert/update core: insert new 12-byte node or update existing value when replace flag is set.
char __thiscall sub_55F120(_DWORD *this, LONG a2, LONG Comperand, _DWORD *a4, char a5)
{
  unsigned int v6; // ebp
  int *v7; // esi
  int v8; // eax
  LONG v9; // esi
  char v11; // [esp+17h] [ebp-15h]

  v11 = 1; /*0x55f153*/
  v6 = 0; /*0x55f158*/
  if ( sub_43A260(this, a2, Comperand) ) /*0x55f15a*/
  {
LABEL_9:
    FormHeapFree(v6); /*0x55f201*/
    if ( a5 ) /*0x55f20f*/
      *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 4) = *a4; /*0x55f21d*/
    else
      v11 = 0; /*0x55f222*/
  }
  else
  {
    while ( 1 ) /*0x55f167*/
    {
      if ( !v6 ) /*0x55f169*/
      {
        v7 = (int *)FormHeapAlloc(0xCu); /*0x55f172*/
        if ( v7 ) /*0x55f181*/
        {
          v8 = (*(int (__thiscall **)(_DWORD, LONG))(*(_DWORD *)*this + 0x24))(*this, Comperand); /*0x55f18b*/
          v7[2] = 0; /*0x55f191*/
          *v7 = v8; /*0x55f194*/
          v7[1] = *a4; /*0x55f198*/
        }
        else
        {
          v7 = 0; /*0x55f19d*/
        }
        v6 = (unsigned int)v7; /*0x55f1a7*/
      }
      v9 = *(this + 5) & 0xFFFFFFFE; /*0x55f1c6*/
      *(_DWORD *)(v6 + 8) = v9; /*0x55f1da*/
      if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), v6 & 0xFFFFFFFE, v9) == v9 ) /*0x55f1ea*/
        break; /*0x55f1ea*/
      if ( sub_43A260(this, a2, Comperand) ) /*0x55f1f4*/
        goto LABEL_9; /*0x55f1fb*/
    }
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x30))(*this); /*0x55f230*/
  }
  *(_DWORD *)*(this + 1) = 0; /*0x55f235*/
  *(_DWORD *)*(this + 2) = 0; /*0x55f23e*/
  *(_DWORD *)*(this + 3) = 0; /*0x55f247*/
  return v11; /*0x55f251*/
}
