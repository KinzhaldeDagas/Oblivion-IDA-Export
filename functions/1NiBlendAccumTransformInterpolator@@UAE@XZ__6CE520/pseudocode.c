void __thiscall NiBlendAccumTransformInterpolator::~NiBlendAccumTransformInterpolator(
        NiBlendAccumTransformInterpolator *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = *((_DWORD *)this + 0x14); /*0x6ce526*/
  *(_DWORD *)this = &NiBlendAccumTransformInterpolator::`vftable'; /*0x6ce527*/
  FormHeapFree(v2); /*0x6ce52d*/
  NiBlendBoolInterpolator::~NiBlendBoolInterpolator(this); /*0x6ce538*/
}
