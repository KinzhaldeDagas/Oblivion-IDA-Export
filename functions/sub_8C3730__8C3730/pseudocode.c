char __thiscall sub_8C3730(_DWORD *this, _DWORD *a2)
{
  char v3; // bl
  int v4; // esi
  int v5; // esi
  _DWORD v7[2]; // [esp+Ch] [ebp-20h] BYREF
  int v8; // [esp+14h] [ebp-18h]
  float v9; // [esp+18h] [ebp-14h]
  _DWORD v10[4]; // [esp+1Ch] [ebp-10h] BYREF

  v3 = sub_8A1ED0(this, (int)a2);
  if ( v3 )
  {
    v9 = 1.0;
    *(float *)&v10[3] = 1.0;
    v7[0] = 0;
    v7[1] = 0;
    v8 = 0;
    memset(v10, 0, 0xC);
    sub_8B0280(this, v7);
    if ( this && (v4 = *(this + 2)) != 0 )
      v5 = *(_DWORD *)(v4 + 0x10);
    else
      v5 = 0;
    v8 = v5;
    sub_8B0280(a2, v10);
  }
  return v3;
}
