void __thiscall sub_68B440(NiDX92DBufferData **this, TESObjectREFR *a2, NiPoint3 *end, int a4)
{
  NiDX92DBufferData **v4; // edi
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  const NiPoint3 *v6; // eax
  float segmentQuery[6]; // [esp+Ch] [ebp-38h] BYREF
  char v8; // [esp+24h] [ebp-20h]
  unsigned int v9; // [esp+40h] [ebp-4h]

  v4 = this + 5; /*0x68b465*/
  sub_68C6E0(this + 5); /*0x68b46a*/
  if ( Shared_GetDwordAtOffset40(a2) ) /*0x68b475*/
  {
    sub_67D760(segmentQuery); /*0x68b482*/
    GetPos = a2->vtbl->GetPos; /*0x68b491*/
    v9 = 0; /*0x68b499*/
    v8 = 1; /*0x68b4a1*/
    v6 = (const NiPoint3 *)GetPos(a2); /*0x68b4a6*/
    ConnectedPointGraph_CanTraverseSegment(segmentQuery, v6, end, a2, 0.0); /*0x68b4ad*/
    sub_67E3D0((char *)segmentQuery, v4, a2); /*0x68b4b8*/
    v9 = 0xFFFFFFFF; /*0x68b4c1*/
    Shared_NoOpVirtual_60D0A0(segmentQuery); /*0x68b4c9*/
  }
}
