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

  v5 = arg4;
  v6 = a5;
  v7 = 0;
  v15 = this;
  v12 = 0;
  v14 = 0;
  a3 = 0;
  v13 = 0;
  if ( !a5
    || !(*(unsigned __int8 (__thiscall **)(int, IDirect3DVertexDeclaration9 **, UInt32 *))(*(_DWORD *)a5 + 0x70))(
          a5,
          &v14,
          &a3) )
  {
    if ( a4 && *(_WORD *)(a4 + 0x20) > 4u )
      return 0;
    a3 = 1;
    sub_776DD0((int)v5, a4, &v12, &v13, &v18, &v17, &v16, &arg4, &a5);
  }
  sub_777F70(a2, a3);
  if ( v12 )
  {
    sub_7780A0(a2, v12);
    if ( a2->StreamCount )
      *a2->VertexStride = v13;
  }
  else
  {
    sub_7780D0(a2, v14);
    if ( a3 )
    {
      do
      {
        v8 = (*(int (__thiscall **)(int, UInt32))(*(_DWORD *)v6 + 0x60))(v6, v7);
        if ( v7 < a2->StreamCount )
          a2->VertexStride[v7] = v8;
        ++v7;
      }
      while ( v7 < a3 );
    }
    v7 = 0;
  }
  v9 = 0;
  if ( v5->member.m_pkColor )
    v9 = 0x400000;
  if ( v5->member.m_pkNormal )
    v9 |= (unsigned int)&loc_800000;
  a2->Flags = v9 | ((v5->member.format & 0x3F) << 0x18);
  if ( v6 )
  {
    if ( v15->member.softwareVertexProcessing )
      a2->SoftwareVP = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x68))(v6);
  }
  if ( !a3 )
    return 1;
  while ( NiGeometryBufferData::RefreshVBChips(a2, v7) )
  {
    if ( ++v7 >= a3 )
      return 1;
  }
  for ( ; v7; --v7 )
    a2->GeometryGroup->vtbl->ReleaseChip(a2->GeometryGroup, a2, v7);
  return 0;
}
