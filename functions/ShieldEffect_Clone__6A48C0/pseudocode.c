ActiveEffect *__thiscall ShieldEffect_Clone(int *this)
{
  int v2; // esi
  _DWORD *v3; // edi

  v2 = FormHeapAlloc(0x40u);
  if ( v2 )
  {
    v3 = (_DWORD *)*(this + 3);
    ValueModifierEffect_constr((ActiveEffect *)v2, *(this + 9), *(this + 2), (int)v3);
    *(_DWORD *)v2 = &ShieldEffect::`vftable';
    if ( *v3 == 0x444C4853 )
    {
      *(_DWORD *)(v2 + 0x3C) = 0x48;
    }
    else
    {
      *(_DWORD *)(v2 + 0x38) = v3[5];
      *(_DWORD *)(v2 + 0x3C) = 0x2B;
    }
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(int *, int))(*this + 0x2C))(this, v2);
  return (ActiveEffect *)v2;
}
