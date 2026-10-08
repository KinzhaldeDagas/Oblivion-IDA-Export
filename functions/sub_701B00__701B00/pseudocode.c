void __thiscall sub_701B00(NiSourceTexture *this)
{
  DWORD CurrentThreadId; // eax
  bool v3; // zf

  EnterCriticalSection(&unk_B3F780); /*0x701b08*/
  CurrentThreadId = GetCurrentThreadId(); /*0x701b0e*/
  ++unk_B3F7FC; /*0x701b19*/
  v3 = unk_B3F700 == 0; /*0x701b21*/
  unk_B3F7F8 = CurrentThreadId; /*0x701b27*/
  if ( v3 ) /*0x701b2c*/
    unk_B3F700 = (int)this; /*0x701b2e*/
  if ( unk_B3F704 ) /*0x701b34*/
  {
    *(_DWORD *)(unk_B3F704 + 0x2C) = this; /*0x701b3d*/
    this->members.super.nextTex = (NiTexture *)unk_B3F704; /*0x701b45*/
  }
  else
  {
    this->members.super.nextTex = 0; /*0x701b4a*/
  }
  unk_B3F704 = (int)this; /*0x701b4d*/
  this->members.super.prevTex = 0; /*0x701b53*/
  v3 = unk_B3F7FC-- == 1; /*0x701b56*/
  if ( v3 ) /*0x701b5d*/
    unk_B3F7F8 = 0; /*0x701b5f*/
  LeaveCriticalSection(&unk_B3F780); /*0x701b6a*/
}
