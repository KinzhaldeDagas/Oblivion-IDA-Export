int __thiscall sub_626C10(_DWORD *this, TESObjectREFR *a2)
{
  float *v3; // eax
  _DWORD *v4; // eax
  int result; // eax
  _DWORD v6[3]; // [esp+8h] [ebp-Ch] BYREF

  v3 = a2->vtbl->GetPos(a2);
  v4 = sub_5E03E0(a2, v6, (int)v3);
  *(this + 0x10) = *v4;
  *(this + 0x11) = v4[1];
  result = v4[2];
  *(this + 0x12) = result;
  return result;
}
