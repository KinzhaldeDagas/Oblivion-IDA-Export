int __thiscall sub_4C5AF0(TESObjectCELL **this, float *a2)
{
  int *v3; // eax
  int v4; // edx
  int *v5; // eax
  int v6; // eax
  _BYTE v8[24]; // [esp+4h] [ebp-50h] BYREF
  int v9; // [esp+1Ch] [ebp-38h]

  if ( sub_4C3030(this, (int)v8, a2, 0)
    && (v3 = (int *)*(this + 9)) != 0
    && *v3
    && (v4 = *v3, v5 = (int *)(*v3 + 4 * v9), *(_DWORD *)(v4 + 4 * v9))
    && (v6 = *v5, *(_WORD *)(v6 + 0xB6)) )
  {
    return **(_DWORD **)(v6 + 0xB0);
  }
  else
  {
    return 0;
  }
}
