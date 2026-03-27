char __thiscall sub_54F170(int *this, float a2, int a3)
{
  int v3; // ebx
  int v5; // edi
  int v6; // edi
  unsigned int v7; // edi
  double v8; // st7
  void (__thiscall **v9)(int *, unsigned int, _DWORD); // ebx
  void (__thiscall *v10)(int *, unsigned int, _DWORD); // eax
  int v11; // ebx
  float v13; // [esp+14h] [ebp-24h]
  int v14; // [esp+28h] [ebp-10h]
  float v15; // [esp+2Ch] [ebp-Ch]
  float i; // [esp+2Ch] [ebp-Ch]
  double v17; // [esp+30h] [ebp-8h]
  double v18; // [esp+30h] [ebp-8h]
  float v19; // [esp+30h] [ebp-8h]
  float v20; // [esp+30h] [ebp-8h]

  v3 = a3;
  if ( a3 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x40))(a3) )
  {
    v14 = a3;
  }
  else
  {
    v14 = 0;
    v3 = 0;
  }
  if ( a2 <= 0.0 )
    return 0;
  if ( !v3 )
    return 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
  if ( v5 != (*(int (__thiscall **)(int *))(*this + 4))(this) )
    return 0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x50))(v3);
  if ( v6 != (*(int (__thiscall **)(int *))(*this + 0x50))(this)
    || !(*(unsigned __int8 (__thiscall **)(int *, int))(*this + 0x2C))(this, v3) )
  {
    return 0;
  }
  v15 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 0x30))(a3);
  v17 = sub_54E9B0() * v15;
  v7 = 0;
  for ( i = (sub_54E980() + v17) * a2; v7 < (*(int (__thiscall **)(int *))(*this + 0x50))(this); ++v7 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *, unsigned int))(*this + 0x54))(this, v7) )
    {
      v18 = ((double (__thiscall *)(int, unsigned int))*(_DWORD *)(*(_DWORD *)v3 + 0x48))(v3, v7);
      *(float *)&v18 = v18 - ((double (__thiscall *)(int *, unsigned int))*(_DWORD *)(*this + 0x48))(this, v7);
      v8 = *(float *)&v18;
      *(float *)&v18 = fabs(*(float *)&v18);
      if ( i > (double)*(float *)&v18 )
      {
        v9 = (void (__thiscall **)(int *, unsigned int, _DWORD))(*this + 0x4C);
        (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v14 + 0x48))(v14, v7);
        v10 = *v9;
        goto LABEL_19;
      }
      if ( v8 < 0.0 )
      {
        v11 = *this;
        v19 = ((double (__thiscall *)(int *, unsigned int))*(_DWORD *)(*this + 0x48))(this, v7) - i;
        v8 = v19;
        goto LABEL_18;
      }
      if ( v8 > 0.0 )
      {
        v11 = *this;
        v20 = ((double (__thiscall *)(int *, unsigned int))*(_DWORD *)(*this + 0x48))(this, v7) + i;
        v8 = v20;
LABEL_18:
        v10 = *(void (__thiscall **)(int *, unsigned int, _DWORD))(v11 + 0x4C);
LABEL_19:
        v13 = v8;
        v10(this, v7, LODWORD(v13));
        v3 = v14;
      }
    }
  }
  return 1;
}
