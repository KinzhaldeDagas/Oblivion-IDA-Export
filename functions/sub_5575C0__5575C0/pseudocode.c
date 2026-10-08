_DWORD *__userpurge sub_5575C0@<eax>(_DWORD *this@<ecx>, unsigned int a2@<ebp>, unsigned int a3@<edi>, _DWORD *a4)
{
  unsigned int v5; // edi
  void *v7; // eax
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edx
  void *v13; // edi
  int v14; // ecx
  int v15; // eax
  _BYTE v16[12]; // [esp-Ch] [ebp-14h]

  if ( this == a4 ) /*0x5575ca*/
    return this; /*0x5575ca*/
  *(_QWORD *)&v16[4] = __PAIR64__(a2, a3); /*0x5575d1*/
  v5 = a4[1]; /*0x5575d2*/
  if ( !v5 || (a2 = a4[2] - v5) == 0 ) /*0x5575e0*/
  {
    sub_556E70(this, a2); /*0x5575e4*/
    return this; /*0x5575ef*/
  }
  v7 = (void *)*(this + 1); /*0x5575f2*/
  if ( v7 ) /*0x5575f7*/
    v8 = *(this + 2) - (_DWORD)v7; /*0x557600*/
  else
    v8 = 0; /*0x5575f9*/
  if ( a2 <= v8 ) /*0x557604*/
  {
    v9 = a4[2] - v5; /*0x557606*/
    if ( v9 > 0 ) /*0x55760a*/
      memmove_s(v7, __PAIR64__(v5, v9), (const void *)(a4[2] - v5), *(rsize_t *)&v16[4]); /*0x557610*/
    v10 = a4[1]; /*0x557618*/
    if ( v10 ) /*0x55761d*/
      *(this + 2) = a4[2] - v10 + *(this + 1); /*0x55763d*/
    else
      *(this + 2) = *(this + 1); /*0x557627*/
    return this; /*0x55762f*/
  }
  if ( v7 ) /*0x55764a*/
    v11 = *(this + 3) - (_DWORD)v7; /*0x557653*/
  else
    v11 = 0; /*0x55764c*/
  if ( a2 > v11 ) /*0x557657*/
  {
    if ( v7 ) /*0x557694*/
      FormHeapFree(*(this + 1)); /*0x557697*/
    v14 = a4[1]; /*0x55769f*/
    if ( v14 ) /*0x5576a4*/
      v15 = a4[2] - v14; /*0x5576ad*/
    else
      v15 = 0; /*0x5576a6*/
    *(_DWORD *)v16 = v15; /*0x5576af*/
    if ( sub_557200(this, *(size_t *)v16) ) /*0x5576b2*/
      *(this + 2) = sub_556CD0((void *)a4[1], a4[2], (void *)*(this + 1)); /*0x5576ce*/
    return this; /*0x5576d3*/
  }
  if ( v7 ) /*0x55765b*/
    v12 = *(this + 2) - (_DWORD)v7; /*0x557664*/
  else
    v12 = 0; /*0x55765d*/
  v13 = (void *)(v5 + v12); /*0x557669*/
  sub_556CA0((void *)a4[1], (int)v13, (void *)*(this + 1)); /*0x55766e*/
  *(this + 2) = sub_556CD0(v13, a4[2], (void *)*(this + 2)); /*0x557687*/
  return this; /*0x5575ed*/
}
