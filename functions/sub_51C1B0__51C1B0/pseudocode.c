void __thiscall sub_51C1B0(TESForm *this)
{
  TESForm *v2; // ebp
  int v3; // esi
  int *v4; // edi
  int AVFromGroupOffset; // eax

  v2 = (TESForm *)((char *)this + 0x38);
  _memset((char *)this + 0x38, 0, 0x34);
  v3 = 0;
  v4 = (int *)((char *)this + 0x44);
  do
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, v3);
    if ( (unsigned int)(AVFromGroupOffset - 0xC) <= 0x14 )
      *v4 = AVFromGroupOffset;
    ++v3;
    ++v4;
  }
  while ( v3 < 7 );
  v2->vtbl = 0;
  *((_DWORD *)this + 0xF) = 1;
  j_TESForm_InitializeComponents(this);
}
