void __thiscall sub_7322F0(_DWORD *this)
{
  DWORD CurrentThreadId; // eax
  bool v3; // zf

  EnterCriticalSection(&unk_B40080); /*0x7322f8*/
  CurrentThreadId = GetCurrentThreadId(); /*0x7322fe*/
  ++unk_B400FC; /*0x732309*/
  v3 = unk_B40000 == 0; /*0x732311*/
  unk_B400F8 = CurrentThreadId; /*0x732317*/
  if ( v3 ) /*0x73231c*/
    unk_B40000 = (int)this; /*0x73231e*/
  if ( unk_B40004 ) /*0x732324*/
  {
    *(_DWORD *)(unk_B40004 + 0x20) = this; /*0x73232d*/
    *(this + 7) = unk_B40004; /*0x732335*/
  }
  else
  {
    *(this + 7) = 0; /*0x73233a*/
  }
  unk_B40004 = (int)this; /*0x73233d*/
  *(this + 8) = 0; /*0x732343*/
  v3 = unk_B400FC-- == 1; /*0x732346*/
  if ( v3 ) /*0x73234d*/
    unk_B400F8 = 0; /*0x73234f*/
  LeaveCriticalSection(&unk_B40080); /*0x73235a*/
}
