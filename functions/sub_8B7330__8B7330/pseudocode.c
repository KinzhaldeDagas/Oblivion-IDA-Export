void __thiscall sub_8B7330(Atmosphere *this)
{
  int *unk10; // ebx
  NiAVObject *v2; // eax
  float v4[13]; // [esp+4h] [ebp-34h] BYREF

  unk10 = (int *)this->unk10;
  if ( unk10 )
  {
    if ( unk10[2] )
    {
      v2 = sub_452A60(this);
      if ( v2 )
      {
        qmemcpy(v4, &v2->members.m_worldTransform, sizeof(v4));
        EnterCriticalSection(&stru_BA7B00);
        dword_BA7B78 = GetCurrentThreadId();
        ++dword_BA7B7C;
        sub_8B7210(unk10, v4);
        if ( dword_BA7B7C-- == 1 )
          dword_BA7B78 = 0;
        LeaveCriticalSection(&stru_BA7B00);
      }
    }
  }
}
