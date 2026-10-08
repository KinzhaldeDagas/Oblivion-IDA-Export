void __thiscall sub_68C170(NiSurfaceData **this, NiSurfaceData *a2)
{
  NiSurfaceData *v3; // [esp+8h] [ebp-4h] BYREF

  v3 = 0; /*0x68c17f*/
  if ( sub_68BF60((NiDX92DBufferData **)this, (NiDX92DBufferData *)a2, (NiDX92DBufferData **)&v3) ) /*0x68c187*/
    sub_68BE80(this, a2, v3); /*0x68c198*/
}
