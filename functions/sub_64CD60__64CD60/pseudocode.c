char __userpurge sub_64CD60@<al>(
        int *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        int a6,
        int a7,
        int a8,
        TESObjectCELL *a9,
        TESObjectREFR *a10)
{
  TESObjectCELL *v10; // ebp
  int (__usercall *v12)@<eax>(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>); // edx
  int v13; // eax
  TESObjectREFR *v14; // esi
  char result; // al
  TESObjectCELL *ParentCell; // edi
  TESWorldSpace *WorldSpace; // ebx
  float *v18; // eax
  float *v19; // ebx
  float *v20; // eax
  TESObjectREFR *v21; // edi
  int v22; // edx
  int (__thiscall *v23)(int *); // eax
  _DWORD *v24; // edi
  int *v25; // ecx
  char IsSleeping; // al
  int v27; // ecx
  bool v28; // zf
  char v29; // al
  _DWORD *v30; // ecx
  int *v31; // eax
  int v32; // ecx
  int v33; // ecx
  int v35; // [esp+18h] [ebp-Ch] BYREF
  int v36; // [esp+1Ch] [ebp-8h]
  int v37; // [esp+20h] [ebp-4h]

  v10 = a9;
  if ( a9 )
  {
    if ( !TESObjectCELL_IsInterior(a9) )
      v10 = 0;
  }
  v12 = *(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184);
  LOBYTE(a9) = 0;
  v13 = v12(a1, a4, a3, a2);
  v14 = a5;
  if ( !v13 && !a5 )
    return 1;
  if ( !v10 && !a10 )
    return 1;
  ParentCell = TESObjectREFR_GetParentCell(a5);
  WorldSpace = TESObjectREFR_GetWorldSpace(v14);
  if ( (!ParentCell || !TESObjectCELL_IsInterior(ParentCell)) && !WorldSpace )
    return 1;
  LOBYTE(a5) = 0;
  sub_4D8AF0((TESObjectCELL **)v14);
  v19 = v18;
  v20 = 0;
  if ( v10 )
  {
    v20 = sub_4CBBB0(v10, (float *)&a6);
    if ( !v20 )
      v20 = (float *)v10;
  }
  else
  {
    v21 = a10;
    if ( a10 )
    {
      v20 = sub_4F0600(a10, (float *)&a6);
      if ( !v20 )
        v20 = (float *)v21;
    }
  }
  if ( v19 != v20 )
    LOBYTE(a5) = 1;
  v35 = a6;
  v22 = *a1;
  v36 = a7;
  v23 = *(int (__thiscall **)(int *))(v22 + 0xCC);
  v37 = a8;
  v24 = (_DWORD *)v23(a1);
  if ( !Actor_IsSwimming(v14) )
  {
    if ( v24 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v24 + 0x190))(v24) )
      {
        if ( Actor_IsSwimming(v24) )
        {
          a4 = *(float *)&v37 - sub_5E0660(v14);
          *(float *)&v37 = a4;
        }
      }
    }
  }
  v25 = (int *)a1[0xD];
  if ( !v25 )
  {
    (*(void (__thiscall **)(int *))(*a1 + 0x408))(a1);
    goto LABEL_31;
  }
  if ( (_BYTE)a5 )
  {
    sub_689A00(v25);
LABEL_31:
    if ( byte_B15800 )
    {
      IsSleeping = PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef);
      sub_6836E0((_DWORD *)dword_B3BF80, a2, a3, v14, (TESObjectREFR *)v10, a10, v35, v36, v37, IsSleeping);
      v27 = dword_B3BF80;
      LOBYTE(a5) = 0;
      if ( !sub_682820(v27, (int)v14, (int)v14, &a5) )
        goto LABEL_38;
      v28 = (_BYTE)a5 == 0;
    }
    else
    {
      sub_68B030((int *)a1[0xD], a4, v14, (float *)&v35, v10, a10);
      v28 = v29 == 0;
    }
    if ( v28 )
    {
      sub_5F7CF0((Actor *)v14, 0, 0);
    }
    else
    {
      v30 = (_DWORD *)a1[0xD];
      LOBYTE(a9) = 1;
      sub_68A160(v30);
      a6 = *v31;
      v32 = a1[0xD];
      a7 = v31[1];
      a8 = v31[2];
      (*(void (__thiscall **)(int, TESObjectREFR *, int *, _DWORD))(*(_DWORD *)v32 + 0x14))(v32, v14, &a6, 0);
    }
    goto LABEL_38;
  }
  (*(void (__thiscall **)(int *, TESObjectREFR *, int *))(*v25 + 0x24))(v25, v14, &v35);
  LOBYTE(a9) = 1;
LABEL_38:
  v33 = a1[0xD];
  if ( v33 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v33 + 0x30))(v33, 0);
  result = (char)a9;
  if ( (_BYTE)a9 )
    *((_BYTE *)a1 + 0xD0) = 0;
  return result;
}
