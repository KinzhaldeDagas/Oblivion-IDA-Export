char *__thiscall sub_73BD30(char **this, int a2, _DWORD **a3)
{
  int v4; // esi
  int v5; // eax
  char *result; // eax

  sub_708B00(this, a2, a3); /*0x73bd40*/
  v4 = *(_DWORD *)(a2 + 0x13C); /*0x73bd45*/
  if ( (char *)v4 != *(this + 0x4F) ) /*0x73bd51*/
  {
    if ( v4 ) /*0x73bd55*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x73bd5b*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x73bd71*/
    }
    v5 = (int)*(this + 0x4F); /*0x73bd73*/
    *(_DWORD *)(a2 + 0x13C) = v5; /*0x73bd7b*/
    if ( v5 ) /*0x73bd81*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x73bd87*/
  }
  qmemcpy((void *)(a2 + 0xDC), this + 0x37, 0x30u); /*0x73bd9e*/
  *(_DWORD *)(a2 + 0x140) = *(this + 0x50); /*0x73bdca*/
  *(_DWORD *)(a2 + 0x144) = *(this + 0x51); /*0x73bdd6*/
  *(_DWORD *)(a2 + 0x148) = *(this + 0x52); /*0x73bde2*/
  *(_DWORD *)(a2 + 0x14C) = *(this + 0x53); /*0x73bdee*/
  *(_BYTE *)(a2 + 0x150) = *((_BYTE *)this + 0x150); /*0x73bdfa*/
  *(_DWORD *)(a2 + 0x154) = *(this + 0x55); /*0x73be06*/
  *(_DWORD *)(a2 + 0x158) = *(this + 0x56); /*0x73be12*/
  *(_DWORD *)(a2 + 0x15C) = *(this + 0x57); /*0x73be1e*/
  *(_DWORD *)(a2 + 0x160) = *(this + 0x58); /*0x73be2a*/
  *(_DWORD *)(a2 + 0x164) = *(this + 0x59); /*0x73be42*/
  *(_DWORD *)(a2 + 0x168) = *(this + 0x5A); /*0x73be47*/
  *(_DWORD *)(a2 + 0x16C) = *(this + 0x5B); /*0x73be4f*/
  result = *(this + 0x5C); /*0x73be52*/
  *(_DWORD *)(a2 + 0x170) = result; /*0x73be56*/
  return result; /*0x73be4d*/
}
