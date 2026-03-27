void __thiscall NiBlendAccumTransformInterpolator::~NiBlendAccumTransformInterpolator(
        NiBlendAccumTransformInterpolator *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = *((_DWORD *)this + 0x14);
  *(_DWORD *)this = &NiBlendAccumTransformInterpolator::`vftable';
  FormHeapFree(v2);
  NiBlendBoolInterpolator::~NiBlendBoolInterpolator(this);
}
