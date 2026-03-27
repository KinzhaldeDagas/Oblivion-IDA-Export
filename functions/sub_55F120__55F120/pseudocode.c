char __thiscall sub_55F120(_DWORD *this, LONG a2, LONG Comperand, _DWORD *a4, char a5)
{
  unsigned int v6; // ebp
  int *v7; // esi
  int v8; // eax
  LONG v9; // esi
  char v11; // [esp+17h] [ebp-15h]

  v11 = 1;
  v6 = 0;
  if ( sub_43A260(this, a2, Comperand) )
  {
LABEL_9:
    FormHeapFree(v6);
    if ( a5 )
      *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 4) = *a4;
    else
      v11 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( !v6 )
      {
        v7 = (int *)FormHeapAlloc(0xCu);
        if ( v7 )
        {
          v8 = (*(int (__thiscall **)(_DWORD, LONG))(*(_DWORD *)*this + 0x24))(*this, Comperand);
          v7[2] = 0;
          *v7 = v8;
          v7[1] = *a4;
        }
        else
        {
          v7 = 0;
        }
        v6 = (unsigned int)v7;
      }
      v9 = *(this + 5) & 0xFFFFFFFE;
      *(_DWORD *)(v6 + 8) = v9;
      if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), v6 & 0xFFFFFFFE, v9) == v9 )
        break;
      if ( sub_43A260(this, a2, Comperand) )
        goto LABEL_9;
    }
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x30))(*this);
  }
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return v11;
}
