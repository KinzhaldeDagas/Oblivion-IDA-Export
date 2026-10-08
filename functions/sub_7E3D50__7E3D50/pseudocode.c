char __thiscall sub_7E3D50(ParticleShader *this)
{
  NiD3DPass **v2; // esi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  NiD3DPass *v8; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v9; // [esp+18h] [ebp-4h]

  if ( !this->Unk7C[2] ) /*0x7e3d75*/
  {
    v2 = NiD3DPassPool_Acquire(&v8); /*0x7e3d8c*/
    v3 = (NiD3DPass *)this->Unk7C[2]; /*0x7e3d8e*/
    v4 = v3 == *v2; /*0x7e3d94*/
    v9 = 0; /*0x7e3d96*/
    if ( !v4 ) /*0x7e3d9e*/
    {
      if ( v3 ) /*0x7e3da2*/
      {
        v4 = v3->RefCount-- == 1; /*0x7e3da4*/
        if ( v4 ) /*0x7e3da8*/
          NiD3DPass_ReleaseToPool(v3); /*0x7e3daa*/
      }
      v5 = *v2; /*0x7e3daf*/
      v4 = *v2 == 0; /*0x7e3db1*/
      this->Unk7C[2] = (UInt32)*v2; /*0x7e3db3*/
      if ( !v4 ) /*0x7e3db9*/
        ++v5->RefCount; /*0x7e3dbb*/
    }
    v6 = v8; /*0x7e3dbf*/
    v9 = 0xFFFFFFFF; /*0x7e3dc5*/
    if ( v8 ) /*0x7e3dcd*/
    {
      --v8->RefCount; /*0x7e3dcf*/
      if ( !v6->RefCount ) /*0x7e3dd8*/
        NiD3DPass_ReleaseToPool(v6); /*0x7e3ddd*/
    }
  }
  sub_7E3730(this); /*0x7e3de4*/
  return 1; /*0x7e3deb*/
}
