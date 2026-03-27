char __thiscall sub_6541A0(int *this, int a2, _DWORD *a1)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int (__thiscall *v11)(int, char *); // edx
  int v12; // eax
  int v13; // ecx
  int (__thiscall *v14)(int, char *); // edx
  int v15; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char *v21; // [esp-24h] [ebp-30h]
  char *v22; // [esp-1Ch] [ebp-28h]
  char *v23; // [esp-Ch] [ebp-18h]
  int v24; // [esp-4h] [ebp-10h]
  int v25; // [esp-4h] [ebp-10h]

  v4 = *(char *)(*(_DWORD *)(*(this + 0x39) + 8) + 0x90);
  v5 = 5;
  if ( v4 == 1 || (unsigned int)(v4 - 3) <= 2 )
    v5 = 4;
  if ( a2 )
  {
    if ( Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1)
      && a2 == *((_DWORD *)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1) + 0x26) )
    {
      v6 = (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(a2 + 0x7C) + 0x4C))(
             *(_DWORD *)(a2 + 0x7C),
             off_B0655C[0]);
      v7 = *(_DWORD *)(a2 + 0x7C);
      v8 = *(_DWORD *)(4 * v5 + 0xB06550);
      dword_B3BA84 = v6;
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x4C))(v7, v8);
      v10 = *(_DWORD *)(a2 + 0x7C);
      v11 = *(int (__thiscall **)(int, char *))(*(_DWORD *)v10 + 0x4C);
      dword_B3BA90 = v9;
      dword_B3BA88 = v11(v10, off_B06570);
      v12 = NiObjectNET_LookupObjectByName(a1, off_B0656C[0]);
      v13 = *(_DWORD *)(a2 + 0x7C);
      v14 = *(int (__thiscall **)(int, char *))(*(_DWORD *)v13 + 0x4C);
      dword_B3BA8C = v12;
      v15 = v14(v13, off_B06568[0]);
LABEL_8:
      v24 = dword_B3BA84;
      dword_B3BA94 = v15;
      dword_B3BA98 = 0;
      return sub_480770(v24);
    }
    *(this + 0x3F) = (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(a2 + 0x7C) + 0x4C))(
                       *(_DWORD *)(a2 + 0x7C),
                       off_B0655C[0]);
    *(this + 0x42) = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a2 + 0x7C) + 0x4C))(
                       *(_DWORD *)(a2 + 0x7C),
                       *(_DWORD *)(4 * v5 + 0xB06550));
    *(this + 0x40) = (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(a2 + 0x7C) + 0x4C))(
                       *(_DWORD *)(a2 + 0x7C),
                       off_B06570);
    *(this + 0x41) = NiObjectNET_LookupObjectByName(a1, off_B0656C[0]);
    v17 = (*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(a2 + 0x7C) + 0x4C))(
            *(_DWORD *)(a2 + 0x7C),
            off_B06568[0]);
  }
  else
  {
    if ( !a1 )
      goto LABEL_11;
    if ( Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1)
      && a1 == *((_DWORD **)Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1) + 1) )
    {
      v18 = NiObjectNET_LookupObjectByName(a1, off_B0655C[0]);
      v23 = *(char **)(4 * v5 + 0xB06550);
      dword_B3BA84 = v18;
      dword_B3BA90 = NiObjectNET_LookupObjectByName(a1, v23);
      v19 = NiObjectNET_LookupObjectByName(a1, off_B06570);
      v22 = off_B0656C[0];
      dword_B3BA88 = v19;
      v20 = NiObjectNET_LookupObjectByName(a1, v22);
      v21 = off_B06568[0];
      dword_B3BA8C = v20;
      v15 = NiObjectNET_LookupObjectByName(a1, v21);
      goto LABEL_8;
    }
    *(this + 0x3F) = NiObjectNET_LookupObjectByName(a1, off_B0655C[0]);
    *(this + 0x42) = NiObjectNET_LookupObjectByName(a1, *(char **)(4 * v5 + 0xB06550));
    *(this + 0x40) = NiObjectNET_LookupObjectByName(a1, off_B06570);
    *(this + 0x41) = NiObjectNET_LookupObjectByName(a1, off_B0656C[0]);
    v17 = NiObjectNET_LookupObjectByName(a1, off_B06568[0]);
  }
  *(this + 0x43) = v17;
LABEL_11:
  v25 = *(this + 0x3F);
  *(this + 0x44) = 0;
  return sub_480770(v25);
}
