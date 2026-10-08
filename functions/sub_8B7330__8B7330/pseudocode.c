void __thiscall sub_8B7330(Atmosphere *this)
{
  int *unk10; // ebx
  NiAVObject *PointerAtOffset08; // eax
  float v4[13]; // [esp+4h] [ebp-34h] BYREF

  unk10 = (int *)this->unk10; /*0x8b7334*/
  if ( unk10 ) /*0x8b7339*/
  {
    if ( unk10[2] ) /*0x8b733b*/
    {
      PointerAtOffset08 = Shared_GetPointerAtOffset08(this); /*0x8b7341*/
      if ( PointerAtOffset08 ) /*0x8b7348*/
      {
        qmemcpy(v4, &PointerAtOffset08->members.m_worldTransform, sizeof(v4)); /*0x8b735d*/
        EnterCriticalSection(&unk_BA7B00); /*0x8b735f*/
        unk_BA7B78 = GetCurrentThreadId(); /*0x8b736b*/
        ++unk_BA7B7C; /*0x8b7379*/
        sub_8B7210(unk10, v4); /*0x8b7382*/
        if ( unk_BA7B7C-- == 1 ) /*0x8b7387*/
          unk_BA7B78 = 0; /*0x8b7391*/
        LeaveCriticalSection(&unk_BA7B00); /*0x8b73a0*/
      }
    }
  }
}
