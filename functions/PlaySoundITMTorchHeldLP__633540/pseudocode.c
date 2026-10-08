void __thiscall PlaySoundITMTorchHeldLP(HighProcess *this, Actor *a2)
{
  int *v3; // ecx
  int v4; // eax

  v3 = (int *)this->unk220[1]; /*0x633543*/
  if ( !v3 || !sub_6B73A0(v3) ) /*0x63354d*/
  {
    v4 = SoundMap_ResolveAnimSoundNote("ITMTorchHeldLP"); /*0x633561*/
    if ( a2 ) /*0x63356c*/
    {
      if ( v4 ) /*0x633570*/
        this->unk220[1] = sub_65AC50(a2, *(_DWORD *)(v4 + 0xC), 1, 2, 1); /*0x633581*/
    }
  }
}
