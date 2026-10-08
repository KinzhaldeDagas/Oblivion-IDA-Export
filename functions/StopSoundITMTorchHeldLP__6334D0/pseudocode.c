void __thiscall StopSoundITMTorchHeldLP(HighProcess *this, int a2)
{
  UInt32 *v3; // ecx
  unsigned int v4; // ebx

  v3 = (UInt32 *)this->unk220[a2]; /*0x6334d8*/
  if ( v3 ) /*0x6334e1*/
  {
    if ( SoundHandle::IsPlaying(v3) ) /*0x6334e3*/
      sub_6B7240((int *)this->unk220[a2]); /*0x6334f3*/
    sub_6B73C0((int *)this->unk220[a2]); /*0x633500*/
    v4 = this->unk220[a2]; /*0x633505*/
    if ( v4 ) /*0x63350e*/
    {
      sub_6B73E0((_DWORD *)this->unk220[a2]); /*0x633512*/
      FormHeapFree(v4); /*0x633518*/
    }
    this->unk220[a2] = 0; /*0x633520*/
  }
}
