char __thiscall sub_7633D0(NiDX9Renderer *this, NiGeometryBufferData *a2, NiGeometryData *arg4, int a4, int a5)
{
  NiGeometryData *v5; // ebx
  int v6; // ebp
  UInt32 v7; // edi
  int v8; // eax
  int v9; // ecx
  UInt32 a3; // [esp+10h] [ebp-20h] BYREF
  UInt32 v12; // [esp+14h] [ebp-1Ch] BYREF
  UInt32 v13; // [esp+18h] [ebp-18h] BYREF
  IDirect3DVertexDeclaration9 *v14; // [esp+1Ch] [ebp-14h] BYREF
  NiDX9Renderer *v15; // [esp+20h] [ebp-10h]
  int v16; // [esp+24h] [ebp-Ch] BYREF
  int v17; // [esp+28h] [ebp-8h] BYREF
  int v18; // [esp+2Ch] [ebp-4h] BYREF

  v5 = arg4; /*0x7633d4*/
  v6 = a5; /*0x7633d9*/
  v7 = 0; /*0x7633df*/
  v15 = this; /*0x7633e5*/
  v12 = 0; /*0x7633e9*/
  v14 = 0; /*0x7633ed*/
  a3 = 0; /*0x7633f1*/
  v13 = 0; /*0x7633f5*/
  if ( !a5 /*0x76340d*/
    || !(*(unsigned __int8 (__thiscall **)(int, IDirect3DVertexDeclaration9 **, UInt32 *))(*(_DWORD *)a5 + 0x70))(
          a5,
          &v14,
          &a3) )
  {
    if ( a4 && *(_WORD *)(a4 + 0x20) > 4u ) /*0x763420*/
      return 0; /*0x763420*/
    a3 = 1; /*0x763451*/
    sub_776DD0((int)v5, a4, &v12, &v13, &v18, &v17, &v16, &arg4, &a5); /*0x763459*/
  }
  sub_777F70(a2, a3); /*0x763469*/
  if ( v12 ) /*0x763476*/
  {
    sub_7780A0(a2, v12); /*0x763479*/
    if ( a2->StreamCount ) /*0x76347e*/
      *a2->VertexStride = v13; /*0x76348a*/
  }
  else
  {
    sub_7780D0(a2, v14); /*0x763493*/
    if ( a3 ) /*0x76349c*/
    {
      do /*0x7634bd*/
      {
        v8 = (*(int (__thiscall **)(int, UInt32))(*(_DWORD *)v6 + 0x60))(v6, v7); /*0x7634a9*/
        if ( v7 < a2->StreamCount ) /*0x7634ae*/
          a2->VertexStride[v7] = v8; /*0x7634b3*/
        ++v7; /*0x7634b6*/
      }
      while ( v7 < a3 ); /*0x7634bd*/
    }
    v7 = 0; /*0x7634bf*/
  }
  v9 = 0; /*0x7634ce*/
  if ( v5->member.m_pkColor ) /*0x7634d0*/
    v9 = 0x400000; /*0x7634d5*/
  if ( v5->member.m_pkNormal ) /*0x7634c1*/
    v9 |= (unsigned int)&loc_800000; /*0x7634de*/
  a2->Flags = v9 | ((v5->member.format & 0x3F) << 0x18); /*0x7634eb*/
  if ( v6 ) /*0x7634ed*/
  {
    if ( v15->member.softwareVertexProcessing ) /*0x7634f3*/
      a2->SoftwareVP = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x68))(v6); /*0x763506*/
  }
  if ( !a3 ) /*0x76350e*/
    return 1; /*0x763537*/
  while ( NiGeometryBufferData::RefreshVBChips(a2, v7) ) /*0x763523*/
  {
    if ( ++v7 >= a3 ) /*0x76352c*/
      return 1; /*0x76352c*/
  }
  for ( ; v7; --v7 ) /*0x76353c*/
    a2->GeometryGroup->vtbl->ReleaseChip(a2->GeometryGroup, a2, v7); /*0x76354a*/
  return 0; /*0x76352e*/
}
