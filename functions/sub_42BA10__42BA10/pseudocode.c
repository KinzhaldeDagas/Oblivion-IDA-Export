bool __thiscall sub_42BA10(float *this, int a2)
{
  return *(_DWORD *)this != *(_DWORD *)a2 /*0x42ba1e*/
      || NiPoint3__NotEqual((const NiPoint3 *)(this + 1), (const NiPoint3 *)(a2 + 4))
      || NiPoint3__NotEqual((const NiPoint3 *)(this + 4), (const NiPoint3 *)(a2 + 0x10));
}
