NiVBChip *__thiscall sub_77DE40(NiGeometryGroup *this, NiGeometryBufferData *a2, UInt32 a3)
{
  UInt32 v3; // edx
  UINT v4; // esi
  DWORD v5; // edx
  IDirect3DVertexBuffer9 *v6; // edi
  NiVBChip *result; // eax

  if ( a3 >= a2->StreamCount ) /*0x77de53*/
    v3 = 0; /*0x77de5d*/
  else
    v3 = a2->VertexStride[a3]; /*0x77de58*/
  v4 = a2->MaxVertCount * v3; /*0x77de65*/
  v5 = 8; /*0x77de67*/
  if ( a2->SoftwareVP ) /*0x77de62*/
    v5 = 0x18; /*0x77de6e*/
  this->device->lpVtbl->CreateVertexBuffer( /*0x77de8b*/
    this->device,
    v4,
    v5,
    a2->FVF,
    D3DPOOL_MANAGED,
    (IDirect3DVertexBuffer9 **)&a2,
    0);
  v6 = (IDirect3DVertexBuffer9 *)a2; /*0x77de8d*/
  result = (NiVBChip *)FormHeapAlloc(0x20u); /*0x77de93*/
  if ( !result ) /*0x77de9e*/
    return 0; /*0x77ded0*/
  result->Index = 0; /*0x77dea0*/
  result->Unk04 = 0; /*0x77dea2*/
  result->VB = 0; /*0x77dea5*/
  result->Offset = 0; /*0x77dea8*/
  result->Size = 0; /*0x77deab*/
  result->LockFlags = 0; /*0x77deae*/
  result->Next = 0; /*0x77deb1*/
  result->Prev = 0; /*0x77deb4*/
  result->VB = v6; /*0x77deb7*/
  result->Size = v4; /*0x77debb*/
  result->Index = 0; /*0x77debf*/
  result->Unk04 = 0; /*0x77dec1*/
  result->Offset = 0; /*0x77dec4*/
  result->LockFlags = 0; /*0x77dec7*/
  return result; /*0x77deba*/
}
