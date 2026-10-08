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

  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x154))(this); /*0x62529f*/
  v4 = v3; /*0x6252a1*/
  if ( v3 ) /*0x6252a5*/
  {
    v9 = (NiPoint3 *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 0x58))(v3, "EntryPoint"); /*0x6252dd*/
    if ( v9 ) /*0x6252e1*/
    {
      v14 = sub_7101F0((NiTransform *)(v4 + 0x30), (NiTransform *)&v15, v9 + 7); /*0x62532c*/
      *a2 = v14->rot.data[0][0] + *(float *)(v4 + 0x54); /*0x62533b*/
      a2[1] = v14->rot.data[0][1] + *(float *)(v4 + 0x58); /*0x625343*/
      a2[2] = v14->rot.data[0][2] + *(float *)(v4 + 0x5C); /*0x62534f*/
    }
    else
    {
      v10 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x6252ed*/
      FormModelPAth = GetFormModelPAth(v10); /*0x6252f0*/
      PrintError("Missing 'EntryPoint' node for creature '%s'.", FormModelPAth); /*0x6252fb*/
      v12 = *(_DWORD *)(v4 + 0x58); /*0x625307*/
      *a2 = *(float *)(v4 + 0x54); /*0x62530d*/
      v13 = *(_DWORD *)(v4 + 0x5C); /*0x62530f*/
      *((_DWORD *)a2 + 1) = v12; /*0x625313*/
      *((_DWORD *)a2 + 2) = v13; /*0x625316*/
    }
    return a2; /*0x625303*/
  }
  else
  {
    v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this); /*0x6252b1*/
    *a2 = *(float *)v5; /*0x6252b9*/
    v6 = *(_DWORD *)(v5 + 4); /*0x6252bb*/
    v7 = *(_DWORD *)(v5 + 8); /*0x6252be*/
    *((_DWORD *)a2 + 1) = v6; /*0x6252c1*/
    *((_DWORD *)a2 + 2) = v7; /*0x6252c5*/
    return a2; /*0x6252c8*/
  }
}
