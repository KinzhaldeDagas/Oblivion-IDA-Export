// Deep-copies all four FaceGen matrices, preserving dimensions and engine ownership of destination coefficient buffers.
void __cdecl FaceGenHeadParameters_Copy(const FaceGenHeadParameters *source, FaceGenHeadParameters *destination)
{
  FaceGenHeadParameters *v2; // edi
  int v3; // ebx
  unsigned int *p_columns; // esi
  int v5; // ebp
  unsigned int rows; // eax
  unsigned int v7; // ecx
  int v8; // [esp+14h] [ebp-4h]
  int sourcea; // [esp+1Ch] [ebp+4h]

  v2 = (FaceGenHeadParameters *)source; /*0x5528f2*/
  if ( source ) /*0x5528f8*/
  {
    if ( destination ) /*0x552904*/
    {
      v3 = (char *)source - (char *)destination; /*0x55290e*/
      v8 = (char *)source - (char *)destination; /*0x552911*/
      p_columns = &destination->matrices[0].columns; /*0x552915*/
      sourcea = 2; /*0x552918*/
      do /*0x552984*/
      {
        v5 = 2; /*0x552920*/
        do /*0x55297d*/
        {
          rows = v2->matrices[0].rows; /*0x552925*/
          if ( v2->matrices[0].rows && (v7 = *(unsigned int *)((char *)p_columns + v3)) != 0 ) /*0x552932*/
          {
            p_columns[0xFFFFFFFF] = rows; /*0x552937*/
            *p_columns = v7; /*0x55293d*/
            FaceGenFloatVector_ResizeFill(p_columns + 1, (int)v2, v7 * rows, COERCE_INT(0.0)); /*0x552946*/
            FaceGenMatrix_Assign(p_columns + 0xFFFFFFFF, (int)(p_columns + 0xFFFFFFFF), v2); /*0x55294e*/
            v3 = v8; /*0x552953*/
          }
          else
          {
            p_columns[0xFFFFFFFF] = 0; /*0x552962*/
            *p_columns = 0; /*0x552969*/
            FaceGenFloatVector_ResizeFill(p_columns + 1, (int)v2, 0, COERCE_INT(0.0)); /*0x55296f*/
          }
          v2 = (FaceGenHeadParameters *)((char *)v2 + 0x18); /*0x552974*/
          p_columns += 6; /*0x552977*/
          --v5; /*0x55297a*/
        }
        while ( v5 ); /*0x55297d*/
        --sourcea; /*0x55297f*/
      }
      while ( sourcea ); /*0x552984*/
    }
  }
}
