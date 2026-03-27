char __thiscall sub_6195B0(float *this)
{
  int *v2; // edi
  TESObjectREFR *v3; // eax
  _DWORD *v4; // ebx
  void (__thiscall **v5)(_DWORD *, int); // edi
  int v6; // eax
  char v8; // [esp+0h] [ebp-10h]
  float v9; // [esp+8h] [ebp-8h] BYREF
  float v10; // [esp+Ch] [ebp-4h] BYREF

  v10 = 0.0;
  v9 = 0.0;
  sub_6142D0(this, COERCE_FLOAT(&v10), COERCE_FLOAT(&v9));
  if ( *(this + 0x61) < 0.0 )
  {
    v2 = *((int **)this + 0xF);
    v3 = (TESObjectREFR *)sub_6135F0((int)this);
    *(this + 0x61) = TESObjectREFR_GetDistanceBetween_(v2, (TESObjectREFR *)v2, v3, 0, v8);
  }
  if ( v9 >= (double)*(this + 0x61) )
    return 0;
  v4 = *((_DWORD **)this + 0xF);
  v5 = (void (__thiscall **)(_DWORD *, int))(*v4 + 0x340);
  v6 = sub_6135F0((int)this);
  (*v5)(v4, v6);
  return 1;
}
