void __userpurge sub_5F05F0(
        int a1@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8,
        int a9)
{
  _DWORD *v10; // esi
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  double v15; // st5
  int v16; // ecx
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // eax
  _DWORD v21[5]; // [esp+30h] [ebp-24h] BYREF
  char v22; // [esp+44h] [ebp-10h]
  char v23; // [esp+45h] [ebp-Fh]
  char *v24; // [esp+48h] [ebp-Ch]
  int v25; // [esp+4Ch] [ebp-8h]
  _DWORD *v26; // [esp+50h] [ebp-4h]

  v10 = a8;
  if ( !a8
    && a7
    && (*(int (__thiscall **)(int))(*(_DWORD *)a7 + 0x154))(a7)
    && (v12 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a7 + 0x154))(a7, a3, a2),
        (v13 = sub_480340(v12)) != 0) )
  {
    v10 = *(_DWORD **)(v13 + 0x10);
    v14 = *(_DWORD *)(sub_494F10(v10) + 0x10);
  }
  else
  {
    v14 = a9;
  }
  *(float *)&v21[4] = flt_A3D65C;
  v15 = flt_A2FE7C;
  v21[1] = a5;
  *(float *)&v21[3] = v15;
  v16 = *(_DWORD *)(a1 + 0x58);
  v26 = v10;
  v25 = 0;
  v22 = 0x1F;
  v23 = v14;
  v21[0] = a4;
  v21[2] = a6;
  v24 = (char *)v10 + a1;
  if ( v16 && (v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v16 + 0xEC))(v16, 1)) != 0 )
    v18 = *(_DWORD *)(v17 + 8);
  else
    v18 = 0;
  if ( a7 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a7 + 0x190))(a7) )
  {
    if ( v18 )
      v19 = *(char *)(v18 + 0x90);
    else
      v19 = 0xFFFFFFFF;
    sub_6AF880(0.0, a2, a1, 0.0, COERCE_INT(0.0), a7, v19, 0xFFFFFFFF, 0xFFFFFFFF, 0, 0);
  }
  else
  {
    if ( v14 != 6 )
    {
      if ( v18 )
        v20 = *(char *)(v18 + 0x90);
      else
        v20 = 0xFFFFFFFF;
      v15 = 0.0;
      sub_6AF880(0.0, a2, a1, 0.0, COERCE_INT(0.0), a1, v20, 0xFFFFFFFF, 0xFFFFFFFF, 1, 0);
    }
    sub_6B0C70(v15, COERCE_FLOAT(v21));
  }
}
