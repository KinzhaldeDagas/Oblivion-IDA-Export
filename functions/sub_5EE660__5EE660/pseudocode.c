int __thiscall sub_5EE660(void *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // edx
  float v5; // ecx
  float *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // ebx
  double v10; // st7
  double v12; // st7
  int (__thiscall *v13)(void *); // eax
  float *v14; // eax
  double v15; // st7

  v3 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x168))(this);
  v4 = *((_DWORD *)&Vector3_InitValue_ + 1);
  *(float *)a2 = Vector3_InitValue_;
  v5 = dword_B3F9B0;
  *(_DWORD *)(a2 + 4) = v4;
  *(float *)(a2 + 8) = v5;
  if ( v3 && (v6 = (float *)sub_477EC0(v3, 0)) != 0
    || (v7 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x154))(this)) != 0
    && (v8 = sub_700010(v7, (int)&stru_B3CAC0)) != 0
    && (v9 = v8[0x1F]) != 0
    && ((v6 = (float *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v9 + 0x4C))(v9, "Bip01 Head")) != 0
     || (v6 = (float *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v9 + 0x4C))(v9, "Bip02 Head")) != 0) )
  {
    *(float *)a2 = v6[0x22] + *(float *)a2;
    *(float *)(a2 + 4) = v6[0x23] + *(float *)(a2 + 4);
    v10 = v6[0x24];
    *(float *)(a2 + 8) = v10 + *(float *)(a2 + 8);
    return a2;
  }
  else
  {
    v12 = sub_5E0660(this);
    v13 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174);
    *(float *)(a2 + 8) = v12 * dbl_A6E700 + *(float *)(a2 + 8);
    v14 = (float *)v13(this);
    *(float *)a2 = *v14 + *(float *)a2;
    *(float *)(a2 + 4) = v14[1] + *(float *)(a2 + 4);
    v15 = v14[2];
    *(float *)(a2 + 8) = v15 + *(float *)(a2 + 8);
    return a2;
  }
}
