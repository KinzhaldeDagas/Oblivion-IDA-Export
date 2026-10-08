NiObject *__thiscall sub_6CC400(float *this, _DWORD **a2)
{
  NiObject *v3; // eax
  NiObject *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x30u); /*0x6cc427*/
  v4 = v3; /*0x6cc42c*/
  if ( v3 ) /*0x6cc43f*/
  {
    sub_6CC4E0(v3); /*0x6cc443*/
    v4->__vftable = (NiObjectVtbl *)&NiBlendTransformInterpolator::`vftable'; /*0x6cc448*/
  }
  else
  {
    v4 = 0; /*0x6cc450*/
  }
  sub_6CD3D0(this, (int)v4, a2); /*0x6cc462*/
  return v4; /*0x6cc469*/
}
