char __thiscall sub_69C620(int *this, int a2, int a3)
{
  int v5; // eax
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // eax
  int *v9; // eax
  int v10; // ecx

  if ( !a2 || !a3 ) /*0x69c636*/
    return 0; /*0x69c6b3*/
  if ( *(_DWORD *)(a3 + 8) != *(this + 0x1B) ) /*0x69c63e*/
    return 1; /*0x69c641*/
  v5 = (*(int (**)(void))(*(_DWORD *)a2 + 4))(); /*0x69c64d*/
  v6 = *(_DWORD *)(a3 + 0xC); /*0x69c64f*/
  v7 = v5; /*0x69c652*/
  v8 = (_DWORD *)*(this + 0x25); /*0x69c654*/
  if ( v8 ) /*0x69c65c*/
  {
    while ( *v8 != v7 || v8[1] != v6 ) /*0x69c667*/
    {
      v8 = (_DWORD *)v8[2]; /*0x69c669*/
      if ( !v8 ) /*0x69c66e*/
        goto LABEL_9; /*0x69c66e*/
    }
    return 0; /*0x69c69c*/
  }
  else
  {
LABEL_9:
    v9 = (int *)FormHeapAlloc(0xCu); /*0x69c670*/
    if ( v9 ) /*0x69c67c*/
    {
      v10 = *(this + 0x25); /*0x69c67e*/
      *v9 = v7; /*0x69c684*/
      v9[1] = v6; /*0x69c686*/
      v9[2] = v10; /*0x69c68a*/
      *(this + 0x25) = (int)v9; /*0x69c68d*/
      return 1; /*0x69c694*/
    }
    else
    {
      *(this + 0x25) = 0; /*0x69c6a5*/
      return 1; /*0x69c6a3*/
    }
  }
}
