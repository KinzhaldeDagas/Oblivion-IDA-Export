ActiveEffect *__thiscall TelekinesisEffect_Clone(int *this)
{
  ActiveEffect *v2; // eax
  ActiveEffect *v3; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x50u);
  v3 = 0;
  if ( v2 )
    v3 = TelekinesisEffect_constr(v2, *(this + 9), *(this + 2), *(this + 3));
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v3);
  return v3;
}
