void __cdecl sub_A27160()
{
  NiDX9Renderer *v0; // esi

  v0 = unk_B43104; /*0xa27161*/
  if ( unk_B43104 ) /*0xa27169*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk_B43104->member) ) /*0xa2716f*/
    {
      if ( v0 ) /*0xa2717b*/
        ((void (__thiscall *)(NiDX9Renderer *, int))v0->__vftable->super.gap0[0])(v0, 1); /*0xa27185*/
    }
  }
}
