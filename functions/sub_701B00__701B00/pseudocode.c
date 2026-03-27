void __thiscall sub_701B00(NiSourceTexture *this)
{
  DWORD CurrentThreadId; // eax
  bool v3; // zf

  EnterCriticalSection(&stru_B3F780);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3F7FC;
  v3 = dword_B3F700 == 0;
  dword_B3F7F8 = CurrentThreadId;
  if ( v3 )
    dword_B3F700 = (int)this;
  if ( dword_B3F704 )
  {
    *(_DWORD *)(dword_B3F704 + 0x2C) = this;
    this->members.super.nextTex = (NiTexture *)dword_B3F704;
  }
  else
  {
    this->members.super.nextTex = 0;
  }
  dword_B3F704 = (int)this;
  this->members.super.prevTex = 0;
  v3 = dword_B3F7FC-- == 1;
  if ( v3 )
    dword_B3F7F8 = 0;
  LeaveCriticalSection(&stru_B3F780);
}
