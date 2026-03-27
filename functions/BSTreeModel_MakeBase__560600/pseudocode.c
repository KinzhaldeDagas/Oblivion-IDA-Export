char __thiscall BSTreeModel::MakeBase(float *this, int a2, int a3)
{
  int *v4; // ebx
  __int16 v5; // cx
  int v6; // edx
  int (__thiscall *v7)(int *); // eax
  const char *v8; // edx
  unsigned int v9; // eax
  char *v10; // edi
  float **v12; // eax
  float **v13; // esi
  const char *v14; // eax
  int v15; // ebx
  void (__thiscall *v16)(float *, int); // eax
  float v18; // [esp+10h] [ebp-158h]
  float v19; // [esp+10h] [ebp-158h]
  int v20; // [esp+10h] [ebp-158h]
  float v21; // [esp+28h] [ebp-140h]
  float v22; // [esp+28h] [ebp-140h]
  float v23; // [esp+28h] [ebp-140h]
  float v24; // [esp+28h] [ebp-140h]
  float v25; // [esp+2Ch] [ebp-13Ch] BYREF
  int v26; // [esp+30h] [ebp-138h]
  float v27; // [esp+34h] [ebp-134h] BYREF
  int v28; // [esp+38h] [ebp-130h] BYREF
  unsigned int v29; // [esp+3Ch] [ebp-12Ch]
  char v30; // [esp+53h] [ebp-115h] BYREF
  char v31[4]; // [esp+54h] [ebp-114h] BYREF
  __int16 v32; // [esp+58h] [ebp-110h]
  int v33; // [esp+164h] [ebp-4h]

  v26 = a2;
  if ( !a2 )
    return 1;
  v4 = (int *)(a2 + 0x24);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 0x24) + 0x14))(a2 + 0x24)
    || !*(_BYTE *)(*(int (__thiscall **)(int *))(*v4 + 0x14))(v4)
    || *((_DWORD *)this + 2) )
  {
    return 1;
  }
  v5 = word_A366C8;
  v6 = *v4;
  *(_DWORD *)v31 = dword_A366C4;
  v7 = *(int (__thiscall **)(int *))(v6 + 0x14);
  v32 = v5;
  v8 = (const char *)v7(v4);
  v9 = strlen(v8) + 1;
  v10 = &v30;
  while ( *++v10 )
    ;
  qmemcpy(v10, v8, v9);
  v12 = (float **)FormHeapAlloc(0xA0u);
  v25 = *(float *)&v12;
  v33 = 0;
  if ( v12 )
    v13 = sub_78D6A0(v12);
  else
    v13 = 0;
  v33 = 0xFFFFFFFF;
  if ( sub_78E310((char *)v13, v31) )
  {
    sub_786FA0(&v28);
    v33 = 1;
    sub_78A890(v13, &v28);
    if ( v29 > 3 )
    {
      sub_78B700(v13, (_DWORD *)1);
      if ( v29 > 6 )
      {
        v14 = (const char *)(*(int (__thiscall **)(int *))(*v4 + 0x14))(v4);
        PrintError("Tree %s has too many leaf maps (greater than six).  Leaves may not display properly.", v14);
      }
    }
    else
    {
      sub_78B700(v13, (_DWORD *)2);
    }
    sub_7870D0(v13, 1);
    sub_787060(v13, &v25, &v27);
    v21 = flt_B39E18 * v27;
    v18 = v21;
    v22 = flt_B39E18 * v25;
    sub_78B0E0((int *)v13, v22, v18);
    sub_78BBF0(v13, 0.0, flt_A30634, flt_A30634);
    sub_78BE70((int)v13, 0, 4);
    v13[6] = (float *)1;
    sub_78B950((int)v13, 0);
    sub_78BAA0((int)v13, 0);
    sub_78B820((int)v13, 0);
    sub_78B320((int)v13, 0);
    sub_78B560((int)v13, 0);
    sub_78B440((int)v13, 0);
    v23 = flt_B0760C * flt_B39E10;
    v19 = v23;
    v24 = flt_B0760C * fTreeNearDistanceBase;
    sub_7871D0(v13, v24, v19);
    v33 = 0xFFFFFFFF;
    sub_786FC0(&v28);
    v15 = v26;
    v16 = *(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0xC);
    v20 = v26;
    *((_DWORD *)this + 2) = 1;
    *((_DWORD *)this + 3) = v13;
    v16(this, v20);
    if ( sub_78CCA0(v13, 0, a3, COERCE_FLOAT(1)) )
    {
      sub_789030(v13);
      *((_DWORD *)this + 0x12) = sub_78B220((int *)v13);
      *(this + 0x14) = sub_787140(v13);
      *(this + 0x15) = sub_787120(v13);
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0x14))(this, v15);
      sub_78B0C0((int *)v13);
      sub_78C160((int)v13);
      sub_789EC0((int)v13);
      return 1;
    }
  }
  else if ( v13 )
  {
    sub_78C9B0((void (__stdcall ****)(signed int))v13);
    FormHeapFree((unsigned int)v13);
  }
  return 0;
}
