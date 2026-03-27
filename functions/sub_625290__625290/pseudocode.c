float *__thiscall sub_625290(void *this, float *a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  NiPoint3 *v9; // eax
  void *v10; // eax
  CHAR *FormModelPAth; // eax
  int v12; // edx
  int v13; // ecx
  NiTransform *v14; // eax
  char v15; // [esp+8h] [ebp-Ch] BYREF

  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x154))(this);
  v4 = v3;
  if ( v3 )
  {
    v9 = (NiPoint3 *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 0x58))(v3, "EntryPoint");
    if ( v9 )
    {
      v14 = sub_7101F0((NiTransform *)(v4 + 0x30), (NiTransform *)&v15, v9 + 7);
      *a2 = v14->rot.data[0][0] + *(float *)(v4 + 0x54);
      a2[1] = v14->rot.data[0][1] + *(float *)(v4 + 0x58);
      a2[2] = v14->rot.data[0][2] + *(float *)(v4 + 0x5C);
    }
    else
    {
      v10 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
      FormModelPAth = GetFormModelPAth(v10);
      PrintError("Missing 'EntryPoint' node for creature '%s'.", FormModelPAth);
      v12 = *(_DWORD *)(v4 + 0x58);
      *a2 = *(float *)(v4 + 0x54);
      v13 = *(_DWORD *)(v4 + 0x5C);
      *((_DWORD *)a2 + 1) = v12;
      *((_DWORD *)a2 + 2) = v13;
    }
    return a2;
  }
  else
  {
    v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this);
    *a2 = *(float *)v5;
    v6 = *(_DWORD *)(v5 + 4);
    v7 = *(_DWORD *)(v5 + 8);
    *((_DWORD *)a2 + 1) = v6;
    *((_DWORD *)a2 + 2) = v7;
    return a2;
  }
}
