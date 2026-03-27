void __thiscall PlaySoundITMTorchHeldLP(HighProcess *this, Actor *a2)
{
  int *v3; // ecx
  int v4; // eax

  v3 = (int *)this->unk220[1];
  if ( !v3 || !sub_6B73A0(v3) )
  {
    v4 = sub_447490("ITMTorchHeldLP");
    if ( a2 )
    {
      if ( v4 )
        this->unk220[1] = sub_65AC50(a2, *(_DWORD *)(v4 + 0xC), 1, 2, 1);
    }
  }
}
