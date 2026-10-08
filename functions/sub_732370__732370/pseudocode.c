void __thiscall sub_732370(_DWORD *this)
{
  DWORD CurrentThreadId; // eax
  bool v3; // zf
  int v4; // eax
  int v5; // eax

  EnterCriticalSection(&unk_B40080); /*0x732378*/
  CurrentThreadId = GetCurrentThreadId(); /*0x73237e*/
  ++unk_B400FC; /*0x732389*/
  v3 = unk_B40000 == (_DWORD)this; /*0x73238f*/
  unk_B400F8 = CurrentThreadId; /*0x732395*/
  if ( v3 ) /*0x73239a*/
    unk_B40000 = *(this + 8); /*0x73239f*/
  if ( (_DWORD *)unk_B40004 == this ) /*0x7323aa*/
    unk_B40004 = *(this + 7); /*0x7323af*/
  v4 = *(this + 7); /*0x7323b5*/
  if ( v4 ) /*0x7323ba*/
    *(_DWORD *)(v4 + 0x20) = *(this + 8); /*0x7323bf*/
  v5 = *(this + 8); /*0x7323c2*/
  if ( v5 ) /*0x7323c7*/
    *(_DWORD *)(v5 + 0x1C) = *(this + 7); /*0x7323cc*/
  v3 = unk_B400FC-- == 1; /*0x7323cf*/
  if ( v3 ) /*0x7323d6*/
    unk_B400F8 = 0; /*0x7323d8*/
  LeaveCriticalSection(&unk_B40080); /*0x7323e7*/
}
