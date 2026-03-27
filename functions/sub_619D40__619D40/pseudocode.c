int __userpurge sub_619D40@<eax>(int a1@<ecx>, int a2@<ebx>, TESObjectREFR *a3, int a4, int a5)
{
  TESObjectREFR ***v7; // eax
  TESObjectREFR **v8; // edi
  TESObjectREFR **v9; // ecx
  TESObjectREFRVtbl *vtbl; // ebx
  double Distance; // st7
  char v12; // al
  TESObjectREFR *v13; // ecx
  float retaddr; // [esp+14h] [ebp+0h]
  int v17; // [esp+18h] [ebp+4h]

  v7 = *(TESObjectREFR ****)(a1 + 0x40);
  v8 = 0;
  if ( v7 )
  {
    do
    {
      v9 = v7[1];
      if ( !v9 && !*v7 )
        break;
      v8 = *v7;
      if ( **v7 == a3 )
        break;
      v7 = (TESObjectREFR ***)v7[1];
      v8 = 0;
    }
    while ( v9 );
  }
  vtbl = a3[1].vtbl;
  if ( !vtbl )
    JUMPOUT(0x619F67);
  v17 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 8))(
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
          a2);
  if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl) != v17 )
    JUMPOUT(0x619F5A);
  ((int (__thiscall *)(TESObjectREFR *, int))a3->vtbl[1].Unk_37)(a3, 4);
  retaddr = 0.0;
  if ( !v8 || *((_BYTE *)v8 + 8) )
    JUMPOUT(0x619F6E);
  switch ( *(_DWORD *)(a1 + 0x70) )
  {
    case 0:
    case 1:
    case 3:
      if ( a3 == (TESObjectREFR *)sub_6135F0(a1) )
        Distance = flt_A2FE7C;
      else
        Distance = TesObjectREF_GetDistance((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), a3, 0);
      break;
    case 2:
    case 4:
      v12 = sub_5F2820(*(Actor **)(a1 + 0x3C), 0.0, 0, a3, 1, 0, 0);
      v13 = *(TESObjectREFR **)(a1 + 0x3C);
      if ( v12 )
        Distance = TesObjectREF_GetDistance(v13, a3, 0);
      else
        Distance = TesObjectREF_GetDistance(v13, a3, 0) + dbl_A3F450;
      break;
    default:
      JUMPOUT(0x619E2E);
  }
  retaddr = Distance;
  return def_619DD6(v17, a4, a5);
}
