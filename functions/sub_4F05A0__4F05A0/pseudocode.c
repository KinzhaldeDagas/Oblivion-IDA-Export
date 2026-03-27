int __thiscall sub_4F05A0(_DWORD *this, float *a2)
{
  int result; // eax
  bool v3; // zf
  int v5; // [esp+4h] [ebp-8h] BYREF
  float v6; // [esp+8h] [ebp-4h]
  int v7; // [esp+10h] [ebp+4h]

  result = 0;
  v3 = *(this + 0x18) == 0;
  v5 = 0;
  if ( !v3 )
  {
    v7 = (int)*a2;
    v6 = a2[1];
    NiTMap_GetAt((_DWORD *)*(this + 0x18), (unsigned __int16)((int)v6 >> 0xC) | ((__int16)(v7 >> 0xC) << 0x10), &v5);
    return v5;
  }
  return result;
}
