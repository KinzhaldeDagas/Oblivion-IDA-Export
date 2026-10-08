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

  v3 = a3; /*0x54f17a*/
  if ( a3 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x40))(a3) ) /*0x54f18c*/
  {
    v14 = a3; /*0x54f192*/
  }
  else
  {
    v14 = 0; /*0x54f198*/
    v3 = 0; /*0x54f1a0*/
  }
  if ( a2 <= 0.0 ) /*0x54f1ae*/
    return 0; /*0x54f1ae*/
  if ( !v3 ) /*0x54f1b6*/
    return 0; /*0x54f1b6*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3); /*0x54f1c5*/
  if ( v5 != (*(int (__thiscall **)(int *))(*this + 4))(this) ) /*0x54f1d2*/
    return 0; /*0x54f1d2*/
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x50))(v3); /*0x54f1e1*/
  if ( v6 != (*(int (__thiscall **)(int *))(*this + 0x50))(this) /*0x54f1fc*/
    || !(*(unsigned __int8 (__thiscall **)(int *, int))(*this + 0x2C))(this, v3) )
  {
    return 0; /*0x54f321*/
  }
  v15 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 0x30))(a3); /*0x54f210*/
  v17 = sub_54E9B0() * v15; /*0x54f21d*/
  v7 = 0; /*0x54f234*/
  for ( i = (sub_54E980() + v17) * a2; v7 < (*(int (__thiscall **)(int *))(*this + 0x50))(this); ++v7 ) /*0x54f23a*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *, unsigned int))(*this + 0x54))(this, v7) ) /*0x54f24c*/
    {
      v18 = ((double (__thiscall *)(int, unsigned int))*(_DWORD *)(*(_DWORD *)v3 + 0x48))(v3, v7); /*0x54f260*/
      *(float *)&v18 = v18 - ((double (__thiscall *)(int *, unsigned int))*(_DWORD *)(*this + 0x48))(this, v7); /*0x54f272*/
      v8 = *(float *)&v18; /*0x54f276*/
      *(float *)&v18 = fabs(*(float *)&v18); /*0x54f27e*/
      if ( i > (double)*(float *)&v18 ) /*0x54f291*/
      {
        v9 = (void (__thiscall **)(int *, unsigned int, _DWORD))(*this + 0x4C); /*0x54f2a1*/
        (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v14 + 0x48))(v14, v7); /*0x54f2a4*/
        v10 = *v9; /*0x54f2a6*/
        goto LABEL_19; /*0x54f2a8*/
      }
      if ( v8 < 0.0 ) /*0x54f2b3*/
      {
        v11 = *this; /*0x54f2b5*/
        v19 = ((double (__thiscall *)(int *, unsigned int))*(_DWORD *)(*this + 0x48))(this, v7) - i; /*0x54f2c7*/
        v8 = v19; /*0x54f2cb*/
        goto LABEL_18; /*0x54f2cf*/
      }
      if ( v8 > 0.0 ) /*0x54f2d8*/
      {
        v11 = *this; /*0x54f2da*/
        v20 = ((double (__thiscall *)(int *, unsigned int))*(_DWORD *)(*this + 0x48))(this, v7) + i; /*0x54f2e8*/
        v8 = v20; /*0x54f2ec*/
LABEL_18:
        v10 = *(void (__thiscall **)(int *, unsigned int, _DWORD))(v11 + 0x4C); /*0x54f2f0*/
LABEL_19:
        v13 = v8; /*0x54f2f3*/
        v10(this, v7, LODWORD(v13)); /*0x54f2fa*/
        v3 = v14; /*0x54f2fc*/
      }
    }
  }
  return 1; /*0x54f316*/
}
