// Read the current NiTMap<unsigned int, VertexDist> node and advance the bucket-chain iterator.
unsigned int *__thiscall NiTMap_UInt_VertexDist_GetNext(unsigned int **this, unsigned int *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int *result; // eax
  int v6; // eax
  unsigned int v7; // edx
  unsigned int *v8; // ecx

  result = (unsigned int *)*a2; /*0x47dbfa*/
  *a3 = *(_DWORD *)(*a2 + 4); /*0x47dc01*/
  *a4 = result[2]; /*0x47dc0a*/
  a4[1] = result[3]; /*0x47dc0f*/
  a4[2] = result[4]; /*0x47dc15*/
  if ( *result ) /*0x47dc18*/
  {
    *a2 = *result; /*0x47dc1e*/
  }
  else
  {
    v6 = ((int (__thiscall *)(unsigned int **, unsigned int))(*this)[1])(this, result[1]); /*0x47dc30*/
    v7 = (unsigned int)*(this + 1); /*0x47dc32*/
    result = (unsigned int *)(v6 + 1); /*0x47dc35*/
    if ( (unsigned int)result >= v7 ) /*0x47dc3a*/
    {
LABEL_7:
      *a2 = 0; /*0x47dc52*/
    }
    else
    {
      v8 = &(*(this + 2))[(_DWORD)result]; /*0x47dc3f*/
      while ( !*v8 ) /*0x47dc46*/
      {
        result = (unsigned int *)((char *)result + 1); /*0x47dc48*/
        ++v8; /*0x47dc4b*/
        if ( (unsigned int)result >= v7 ) /*0x47dc50*/
          goto LABEL_7; /*0x47dc50*/
      }
      *a2 = *v8; /*0x47dc5d*/
    }
  }
  return result; /*0x47dc20*/
}
