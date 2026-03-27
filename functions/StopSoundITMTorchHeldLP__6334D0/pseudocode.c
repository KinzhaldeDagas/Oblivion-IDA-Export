void __thiscall StopSoundITMTorchHeldLP(HighProcess *this, int a2)
{
  int *v3; // ecx
  unsigned int v4; // ebx

  v3 = (int *)this->unk220[a2];
  if ( v3 )
  {
    if ( sub_6B7260(v3) )
      sub_6B7240((int *)this->unk220[a2]);
    sub_6B73C0((int *)this->unk220[a2]);
    v4 = this->unk220[a2];
    if ( v4 )
    {
      sub_6B73E0((_DWORD *)this->unk220[a2]);
      FormHeapFree(v4);
    }
    this->unk220[a2] = 0;
  }
}
