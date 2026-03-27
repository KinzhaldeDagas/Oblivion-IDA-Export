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

  v5 = a2;
  if ( !a2 || !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a2 + 0x40))(a2) )
    v5 = 0;
  v6 = a3;
  if ( !a3 || !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a3 + 0x40))(a3) )
    v6 = 0;
  v30 = 0;
  v23 = 0;
  v26 = 0;
  if ( !v5 )
    return 0;
  if ( !v6 )
    return 0;
  if ( v5 == v6 )
    return 0;
  v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)v6 + 4))(v6);
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 4))(v5) != v7 )
    return 0;
  if ( v5 == this )
  {
    v8 = (float *)FormHeapAlloc(0x14u);
    if ( v8 )
      v5 = sub_54EAA0(v8, (int)this);
    else
      v5 = 0;
    v30 = 1;
  }
  else if ( v6 == this )
  {
    v9 = (float *)FormHeapAlloc(0x14u);
    if ( v9 )
      v10 = sub_54EAA0(v9, (int)this);
    else
      v10 = 0;
    v6 = v10;
    v23 = 1;
  }
  v11 = 0.0;
  if ( a4 >= 0.0 )
  {
    v11 = 1.0;
    if ( a4 <= 1.0 )
      v11 = a4;
  }
  v31 = v11;
  v12 = (*(int (__thiscall **)(float *))(*(_DWORD *)v6 + 0x50))(v6);
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 0x50))(v5) < v12 )
  {
    v13 = *v6;
    v14 = v6;
  }
  else
  {
    v13 = *v5;
    v14 = v5;
  }
  (*(void (__thiscall **)(float *))(LODWORD(v13) + 0x50))(v14);
  v15 = (void (__thiscall **)(float *, int))(*(_DWORD *)this + 8);
  v16 = (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 4))(v5);
  (*v15)(this, v16);
  for ( i = 0; i < *((_DWORD *)this + 4); ++i )
  {
    v18 = 0.0;
    if ( 0.0 == v31 || !(*(unsigned __int8 (__thiscall **)(float *, unsigned int))(*(_DWORD *)v6 + 0x54))(v6, i) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(float *, unsigned int))(*(_DWORD *)v5 + 0x54))(v5, i) )
      {
        v29 = *(_DWORD *)this + 0x4C;
        (*(void (__thiscall **)(float *, unsigned int))(*(_DWORD *)v5 + 0x48))(v5, i);
        v20 = (int (__thiscall **)(float *, unsigned int, _DWORD))v29;
        goto LABEL_39;
      }
    }
    else
    {
      v18 = 1.0;
      if ( 1.0 != v31 && (*(unsigned __int8 (__thiscall **)(float *, unsigned int))(*(_DWORD *)v5 + 0x54))(v5, i) )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(float *, unsigned int))(*(_DWORD *)v5 + 0x54))(v5, i)
          || !(*(unsigned __int8 (__thiscall **)(float *, unsigned int))(*(_DWORD *)v6 + 0x54))(v6, i) )
        {
          continue;
        }
        v24 = *(_DWORD *)this + 0x4C;
        v25 = ((double (__thiscall *)(float *, unsigned int))*(_DWORD *)(*(_DWORD *)v5 + 0x48))(v5, i) * (1.0 - v31);
        v19 = ((double (__thiscall *)(float *, unsigned int))*(_DWORD *)(*(_DWORD *)v6 + 0x48))(v6, i);
        v20 = (int (__thiscall **)(float *, unsigned int, _DWORD))v24;
        v27 = v19 * v31 + v25;
        v18 = v27;
        goto LABEL_39;
      }
      if ( (*(unsigned __int8 (__thiscall **)(float *, unsigned int))(*(_DWORD *)v6 + 0x54))(v6, i) )
      {
        v28 = *(_DWORD *)this + 0x4C;
        (*(void (__thiscall **)(float *, unsigned int))(*(_DWORD *)v6 + 0x48))(v6, i);
        v20 = (int (__thiscall **)(float *, unsigned int, _DWORD))v28;
LABEL_39:
        v22 = v18;
        v26 = (*v20)(this, i, LODWORD(v22));
      }
    }
  }
  if ( v30 )
    (**(void (__thiscall ***)(float *, int))v5)(v5, 1);
  if ( v23 )
    (**(void (__thiscall ***)(float *, int))v6)(v6, 1);
  return v26;
}
