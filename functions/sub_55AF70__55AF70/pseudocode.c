// Validate the locked vertex stream, vertex count, and nonnegative length, then delegate position deformation to the owned hair-morph array.
void __thiscall BSFaceGenMorphDataHair_ApplyLengthToVertices(
        BSFaceGenMorphDataHair *self,
        NiStridedVertexStream *vertices,
        unsigned int vertexCount,
        float hairLength)
{
  if ( *((_DWORD *)self + 2) ) /*0x55af70*/
  {
    if ( vertices->data ) /*0x55af7b*/
    {
      if ( vertexCount ) /*0x55af86*/
      {
        if ( hairLength >= 0.0 ) /*0x55af97*/
          (*(void (__thiscall **)(_DWORD, NiStridedVertexStream *, unsigned int, _DWORD, _DWORD))(**((_DWORD **)self + 2) /*0x55afa9*/
                                                                                                + 4))(
            *((_DWORD *)self + 2),
            vertices,
            vertexCount,
            0,
            LODWORD(hairLength));
      }
    }
  }
}
