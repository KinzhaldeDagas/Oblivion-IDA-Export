HRESULT __thiscall RemoveTexture(NiDX9RenderState *this, int a2)
{
  DWORD v3; // esi
  UInt32 *unk0FA0; // edi
  HRESULT result; // eax

  if ( a2 ) /*0x77b2ca*/
  {
    v3 = 0; /*0x77b2ce*/
    unk0FA0 = this->member.TextureCache; /*0x77b2d0*/
    do /*0x77b2fd*/
    {
      if ( *unk0FA0 == a2 ) /*0x77b2d8*/
      {
        *unk0FA0 = 0; /*0x77b2da*/
        result = this->member.Device->lpVtbl->SetTexture(this->member.Device, v3, 0); /*0x77b2f2*/
      }
      ++v3; /*0x77b2f4*/
      ++unk0FA0; /*0x77b2f7*/
    }
    while ( v3 < 16 ); /*0x77b2fd*/
  }
  return result; /*0x77b301*/
}
