int __thiscall sub_6A0540(float *this, int a2, int a3, int a4)
{
  char v5; // bl
  int v6; // eax
  int (__thiscall *v7)(float *, _DWORD); // edx
  float v9; // [esp+18h] [ebp+8h]

  nullsub_18(a2, a3, 0);
  if ( a2 )
    *(this + 0xD) = *(float *)(MagicItem_GetFXEffect(*(_DWORD **)(a2 + 8), 0) + 0x78);
  else
    *((_DWORD *)this + 0xD) = a4;
  v9 = *(this + 8);
  v5 = *((_BYTE *)this + 0x24);
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 0x68))(this);
  v6 = *(_DWORD *)this;
  *(this + 8) = v9;
  v7 = *(int (__thiscall **)(float *, _DWORD))(v6 + 0x50);
  *((_BYTE *)this + 0x24) = v5;
  return v7(this, 0.0);
}
