// Copies NiTimeController members, clones the source interpolator at +0x3C through the stream clone map, and assigns the clone through the destination smart pointer.
void __thiscall NiSingleInterpController_CopyMembers(float *this, int a2, int *a3)
{
  void *v4; // ecx
  Ni2DBuffer *v5; // eax

  NiInterpController_CopyMembers(this, a2, a3); /*0x6ce2cf*/
  v4 = *((void **)this + 0xF); /*0x6ce2d4*/
  if ( v4 ) /*0x6ce2d9*/
  {
    v5 = (Ni2DBuffer *)sub_700710(v4, (_DWORD **)a3); /*0x6ce2dc*/
    NiSmartPointer_Set__((Ni2DBuffer **)(a2 + 0x3C), v5); /*0x6ce2e5*/
  }
}
