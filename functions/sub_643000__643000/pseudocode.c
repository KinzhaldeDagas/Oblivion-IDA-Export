char __thiscall sub_643000(_DWORD *this, LONG a2, LONG Comperand, int *a4, char a5)
{
  unsigned int v6; // edi
  _DWORD *v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  LONG v10; // ebp
  int v11; // ebp
  char v13; // [esp+17h] [ebp-15h]

  v13 = 1; /*0x643033*/
  v6 = 0; /*0x643038*/
  if ( !sub_43C070(this, a2, Comperand) ) /*0x64303a*/
  {
    do /*0x6430de*/
    {
      if ( !v6 ) /*0x643049*/
      {
        v7 = (_DWORD *)FormHeapAlloc(0xCu); /*0x643052*/
        if ( v7 ) /*0x643065*/
        {
          v8 = (*(int (__thiscall **)(_DWORD, LONG))(*(_DWORD *)*this + 0x24))(*this, Comperand); /*0x643074*/
          v9 = sub_4BD150(v7, v8, a4); /*0x643079*/
        }
        else
        {
          v9 = 0; /*0x643080*/
        }
        v6 = (unsigned int)v9; /*0x64308a*/
      }
      v10 = *(this + 5) & 0xFFFFFFFE; /*0x6430a9*/
      *(_DWORD *)(v6 + 8) = v10; /*0x6430bd*/
      if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), v6 & 0xFFFFFFFE, v10) == v10 ) /*0x6430cd*/
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 0x30))(*this); /*0x64313f*/
        goto LABEL_18; /*0x64313f*/
      }
    }
    while ( !sub_43C070(this, a2, Comperand) ); /*0x6430de*/
    if ( v6 ) /*0x6430e6*/
    {
      v11 = *(_DWORD *)(v6 + 4); /*0x6430e8*/
      if ( v11 ) /*0x6430ed*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 8)) ) /*0x6430f3*/
          (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x64310a*/
      }
      FormHeapFree(v6); /*0x64310d*/
    }
  }
  if ( a5 ) /*0x64311a*/
    sub_4348B0((int *)((*(this + 5) & 0xFFFFFFFE) + 4), a4); /*0x64312a*/
  else
    v13 = 0; /*0x643131*/
LABEL_18:
  *(_DWORD *)*(this + 1) = 0; /*0x643141*/
  *(_DWORD *)*(this + 2) = 0; /*0x64314d*/
  *(_DWORD *)*(this + 3) = 0; /*0x643156*/
  return v13; /*0x643160*/
}
