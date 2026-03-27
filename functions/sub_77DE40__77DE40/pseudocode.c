NiVBChip *__thiscall sub_77DE40(NiGeometryGroup *this, NiGeometryBufferData *a2, UInt32 a3)
{
  UInt32 v3; // edx
  UINT v4; // esi
  DWORD v5; // edx
  IDirect3DVertexBuffer9 *v6; // edi
  NiVBChip *result; // eax

  if ( a3 >= a2->StreamCount )
    v3 = 0;
  else
    v3 = a2->VertexStride[a3];
  v4 = a2->MaxVertCount * v3;
  v5 = 8;
  if ( a2->SoftwareVP )
    v5 = 0x18;
  this->device->lpVtbl->CreateVertexBuffer(
    this->device,
    v4,
    v5,
    a2->FVF,
    D3DPOOL_MANAGED,
    (IDirect3DVertexBuffer9 **)&a2,
    0);
  v6 = (IDirect3DVertexBuffer9 *)a2;
  result = (NiVBChip *)FormHeapAlloc(0x20u);
  if ( !result )
    return 0;
  result->Index = 0;
  result->Unk04 = 0;
  result->VB = 0;
  result->Offset = 0;
  result->Size = 0;
  result->LockFlags = 0;
  result->Next = 0;
  result->Prev = 0;
  result->VB = v6;
  result->Size = v4;
  result->Index = 0;
  result->Unk04 = 0;
  result->Offset = 0;
  result->LockFlags = 0;
  return result;
}
