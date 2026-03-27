BSExtraData *__thiscall sub_4DD130(PlayerCharacter *this, int a2)
{
  float *v3; // eax
  float *v4; // edi
  float v5; // esi

  v3 = (float *)FormHeapAlloc(8u);
  if ( v3 )
  {
    *v3 = 0.0;
    v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  v5 = *v4;
  if ( *(_DWORD *)v4 != a2 )
  {
    if ( v5 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v5) + 4)) )
      (**(void (__thiscall ***)(float, int))LODWORD(v5))(COERCE_FLOAT(LODWORD(v5)), 1);
    *(_DWORD *)v4 = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v4[1] = 1.0;
  return sub_428CC0(&this->super.super.super.super.baseExtraList, (BSExtraDataVtbl *)v4);
}
