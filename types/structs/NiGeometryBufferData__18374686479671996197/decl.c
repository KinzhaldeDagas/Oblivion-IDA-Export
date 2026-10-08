struct NiGeometryBufferData
{
UInt32 Flags;
NiGeometryGroup *GeometryGroup;
UInt32 FVF;
IDirect3DVertexDeclaration9 *VertexDeclaration;
UInt8 SoftwareVP;
UInt8 pad10[3];
UInt32 VertCount;
UInt32 MaxVertCount;
UInt32 StreamCount;
UInt32 *VertexStride;
NiVBChip **VBChip;
UInt32 IndexCount;
UInt32 IBSize;
IDirect3DIndexBuffer9 *IB;
UInt32 BaseVertexIndex;
D3DPRIMITIVETYPE PrimitiveType;
UInt32 TriCount;
UInt32 MaxTriCount;
UInt32 NumArrays;
UInt16 *ArrayLengths;
UInt16 *IndexArray;
};
