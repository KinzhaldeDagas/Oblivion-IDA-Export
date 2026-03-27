HRESULT __thiscall RemoveTexture(NiDX9RenderState *this, int a2)
{
  DWORD v3; // esi
  UInt32 *unk0FA0; // edi
  HRESULT result; // eax

  if ( a2 )
  {
    v3 = 0;
    unk0FA0 = this->member.unk0FA0;
    do
    {
      if ( *unk0FA0 == a2 )
      {
        *unk0FA0 = 0;
        result = this->member.Device->lpVtbl->SetTexture(this->member.Device, v3, 0);
      }
      ++v3;
      ++unk0FA0;
    }
    while ( v3 < 16 );
  }
  return result;
}
