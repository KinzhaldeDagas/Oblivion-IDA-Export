char __thiscall sub_54EE30(float *this, float *a2, float *a3, float a4)
{
  float *v5; // edi
  float *v6; // ebx
  int v7; // esi
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  double v11; // st7
  unsigned int v12; // esi
  float v13; // eax
  float *v14; // ecx
  void (__thiscall **v15)(float *, int); // esi
  int v16; // eax
  unsigned int i; // esi
  double v18; // st7
  double v19; // st7
  int (__thiscall **v20)(float *, unsigned int, _DWORD); // edx
  float v22; // [esp+Ch] [ebp-34h]
  char v23; // [esp+27h] [ebp-19h]
  int v24; // [esp+28h] [ebp-18h]
  double v25; // [esp+2Ch] [ebp-14h]
  char v26; // [esp+44h] [ebp+4h]
  float v27; // [esp+44h] [ebp+4h]
  int v28; // [esp+44h] [ebp+4h]
  int v29; // [esp+44h] [ebp+4h]
  char v30; // [esp+48h] [ebp+8h]
  float v31; // [esp+4Ch] [ebp+Ch]

  v5 = a2; /*0x54ee59*/
  if ( !a2 || !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a2 + 0x40))(a2) ) /*0x54ee68*/
    v5 = 0; /*0x54ee6e*/
  v6 = a3; /*0x54ee70*/
  if ( !a3 || !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a3 + 0x40))(a3) ) /*0x54ee7f*/
    v6 = 0; /*0x54ee85*/
  v30 = 0; /*0x54ee89*/
  v23 = 0; /*0x54ee8e*/
  v26 = 0; /*0x54ee93*/
  if ( !v5 ) /*0x54ee98*/
    return 0; /*0x54ee98*/
  if ( !v6 ) /*0x54eea0*/
    return 0; /*0x54eea0*/
  if ( v5 == v6 ) /*0x54eea8*/
    return 0; /*0x54eea8*/
  v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)v6 + 4))(v6); /*0x54eeb7*/
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 4))(v5) != v7 ) /*0x54eec4*/
    return 0; /*0x54f0e6*/
  if ( v5 == this ) /*0x54eecc*/
  {
    v8 = (float *)FormHeapAlloc(0x14u); /*0x54eed0*/
    if ( v8 ) /*0x54eee6*/
      v5 = sub_54EAA0(v8, (int)this); /*0x54eef0*/
    else
      v5 = 0; /*0x54eefb*/
    v30 = 1; /*0x54eef2*/
  }
  else if ( v6 == this ) /*0x54ef06*/
  {
    v9 = (float *)FormHeapAlloc(0x14u); /*0x54ef0a*/
    if ( v9 ) /*0x54ef20*/
      v10 = sub_54EAA0(v9, (int)this); /*0x54ef25*/
    else
      v10 = 0; /*0x54ef2c*/
    v6 = v10; /*0x54ef2e*/
    v23 = 1; /*0x54ef30*/
  }
  v11 = 0.0; /*0x54ef3d*/
  if ( a4 >= 0.0 ) /*0x54ef4c*/
  {
    v11 = 1.0; /*0x54ef54*/
    if ( a4 <= 1.0 ) /*0x54ef5d*/
      v11 = a4; /*0x54ef63*/
  }
  v31 = v11; /*0x54ef67*/
  v12 = (*(int (__thiscall **)(float *))(*(_DWORD *)v6 + 0x50))(v6); /*0x54ef72*/
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 0x50))(v5) < v12 ) /*0x54ef7f*/
  {
    v13 = *v6; /*0x54ef87*/
    v14 = v6; /*0x54ef89*/
  }
  else
  {
    v13 = *v5; /*0x54ef81*/
    v14 = v5; /*0x54ef83*/
  }
  (*(void (__thiscall **)(float *))(LODWORD(v13) + 0x50))(v14); /*0x54ef8e*/
  v15 = (void (__thiscall **)(float *, int))(*(_DWORD *)this + 8); /*0x54ef9a*/
  v16 = (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 4))(v5); /*0x54ef9d*/
  (*v15)(this, v16); /*0x54efa4*/
  for ( i = 0; i < *((_DWORD *)this + 4); ++i ) /*0x54efa8*/
  {
    v18 = 0.0; /*0x54efb1*/
    if ( 0.0 == v31 || !(*(unsigned __int8 (__thiscall **)(float *, unsigned int))(*(_DWORD *)v6 + 0x54))(v6, i) ) /*0x54efca*/
    {
      if ( (*(unsigned __int8 (__thiscall **)(float *, unsigned int))(*(_DWORD *)v5 + 0x54))(v5, i) ) /*0x54f085*/
      {
        v29 = *(_DWORD *)this + 0x4C; /*0x54f093*/
        (*(void (__thiscall **)(float *, unsigned int))(*(_DWORD *)v5 + 0x48))(v5, i); /*0x54f09d*/
        v20 = (int (__thiscall **)(float *, unsigned int, _DWORD))v29; /*0x54f09f*/
        goto LABEL_39; /*0x54f09f*/
      }
    }
    else
    {
      v18 = 1.0; /*0x54efd4*/
      if ( 1.0 != v31 && (*(unsigned __int8 (__thiscall **)(float *, unsigned int))(*(_DWORD *)v5 + 0x54))(v5, i) ) /*0x54efe9*/
      {
        if ( !(*(unsigned __int8 (__thiscall **)(float *, unsigned int))(*(_DWORD *)v5 + 0x54))(v5, i) /*0x54f009*/
          || !(*(unsigned __int8 (__thiscall **)(float *, unsigned int))(*(_DWORD *)v6 + 0x54))(v6, i) )
        {
          continue; /*0x54f00d*/
        }
        v24 = *(_DWORD *)this + 0x4C; /*0x54f01b*/
        v25 = ((double (__thiscall *)(float *, unsigned int))*(_DWORD *)(*(_DWORD *)v5 + 0x48))(v5, i) * (1.0 - v31); /*0x54f039*/
        v19 = ((double (__thiscall *)(float *, unsigned int))*(_DWORD *)(*(_DWORD *)v6 + 0x48))(v6, i); /*0x54f03d*/
        v20 = (int (__thiscall **)(float *, unsigned int, _DWORD))v24; /*0x54f043*/
        v27 = v19 * v31 + v25; /*0x54f04b*/
        v18 = v27; /*0x54f04f*/
        goto LABEL_39; /*0x54f053*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(float *, unsigned int))(*(_DWORD *)v6 + 0x54))(v6, i) ) /*0x54f05d*/
      {
        v28 = *(_DWORD *)this + 0x4C; /*0x54f06b*/
        (*(void (__thiscall **)(float *, unsigned int))(*(_DWORD *)v6 + 0x48))(v6, i); /*0x54f075*/
        v20 = (int (__thiscall **)(float *, unsigned int, _DWORD))v28; /*0x54f077*/
LABEL_39:
        v22 = v18; /*0x54f0a3*/
        v26 = (*v20)(this, i, LODWORD(v22)); /*0x54f0ae*/
      }
    }
  }
  if ( v30 ) /*0x54f0c3*/
    (**(void (__thiscall ***)(float *, int))v5)(v5, 1); /*0x54f0cd*/
  if ( v23 ) /*0x54f0d4*/
    (**(void (__thiscall ***)(float *, int))v6)(v6, 1); /*0x54f0de*/
  return v26; /*0x54f0e8*/
}
