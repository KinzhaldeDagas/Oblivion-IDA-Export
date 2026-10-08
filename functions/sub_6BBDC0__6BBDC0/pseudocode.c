// Evaluates a position track at a requested time with endpoint clamping: returns the first/last value outside the authored range, dispatches NiPosKey_EvaluateTrack inside it, and returns the native invalid/default vector for an empty track.
_DWORD *__cdecl NiPosKey_EvaluateClamped(_DWORD *a1, float a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  _DWORD *v7; // ecx
  int v8; // [esp+Ch] [ebp-14h]

  if ( a5 ) /*0x6bbdc6*/
  {
    if ( *(float *)a3 <= (double)a2 ) /*0x6bbddd*/
    {
      if ( *(float *)(a6 * (a5 - 1) + a3) >= (double)a2 ) /*0x6bbe10*/
      {
        v8 = a5; /*0x6bbe3f*/
        a5 = 0; /*0x6bbe4b*/
        NiPosKey_EvaluateTrack(a1, a2, a3, a4, v8, &a5, a6); /*0x6bbe53*/
      }
      else
      {
        v7 = (_DWORD *)(a6 * (a5 - 1) + a3 + 4); /*0x6bbe1e*/
        *a1 = *v7; /*0x6bbe24*/
        a1[1] = v7[1]; /*0x6bbe29*/
        a1[2] = v7[2]; /*0x6bbe30*/
      }
      return a1; /*0x6bbe12*/
    }
    else
    {
      *a1 = *(_DWORD *)(a3 + 4); /*0x6bbde8*/
      a1[1] = *(_DWORD *)(a3 + 8); /*0x6bbded*/
      a1[2] = *(_DWORD *)(a3 + 0xC); /*0x6bbdf3*/
      return a1; /*0x6bbde4*/
    }
  }
  else
  {
    *a1 = LODWORD(qword_B3BB2C[0x1FC]); /*0x6bbe6a*/
    a1[1] = LODWORD(qword_B3BB2C[0x1FD]); /*0x6bbe72*/
    a1[2] = LODWORD(qword_B3BB2C[0x1FE]); /*0x6bbe7b*/
    return a1; /*0x6bbe66*/
  }
}
