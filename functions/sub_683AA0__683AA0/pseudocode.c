bool __thiscall sub_683AA0(int this)
{
  BSExtraData *v1; // esi
  NiDX92DBufferData *v2; // eax

  v1 = (BSExtraData *)(this + 0x14);
  if ( !sub_42B410((BSExtraData *)(this + 0x14)) )
    return 0;
  v2 = (NiDX92DBufferData *)sub_42B410(v1);
  return NiDX92DBufferData::GetSurfaceData(v2) == 0;
}
