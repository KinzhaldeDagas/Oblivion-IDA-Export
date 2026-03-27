void __usercall sub_619640(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _BYTE *v7; // ecx
  TESObjectREFR *v8; // edi
  ActorAnimData *v9; // eax
  _DWORD *v10; // ebp
  void (__thiscall **v11)(_DWORD *, int, int, int); // edi
  int v12; // eax
  TESObjectREFR *v13; // edi
  TESObjectREFR *v14; // eax
  char *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  char *Name; // eax
  UInt32 v19; // [esp-14h] [ebp-1Ch]
  UInt32 v20; // [esp-Ch] [ebp-14h]
  char *v21; // [esp-8h] [ebp-10h]
  float v22; // [esp+4h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x70) == 5 )
  {
    if ( *(_BYTE *)(a1 + 0x4A) )
    {
      if ( !*(_DWORD *)(a1 + 0xC8)
        || (v16 = (_DWORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x3C) + 0x164))(
                              *(_DWORD *)(a1 + 0x3C),
                              a4,
                              a3,
                              a2),
            sub_472EA0(v16)) )
      {
        *(_BYTE *)(a1 + 0x4A) = 0;
        if ( sub_6135F0(a1) )
        {
          v17 = sub_6135F0(a1);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 0x36C))(v17, *(_DWORD *)(a1 + 0x3C));
        }
        if ( Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)) )
          sub_5F4AE0(*(Actor **)(a1 + 0x3C), a2, a3, a4, 0);
        sub_6160B0((Actor **)a1);
        v22 = (double)(GetRandomLargeInteger_(0) % 0xA) / dbl_A3F3E8 * flt_B36D70 + flt_B36D68;
        *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44);
        *(float *)(a1 + 0xD8) = v22;
        *(float *)(a1 + 0xDC) = flt_A30634;
        if ( *(_DWORD *)(a1 + 0x70) != 6 )
        {
          if ( byte_B3B908 )
          {
            Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C));
            Interface_ConsolePrint("%.20s is going to %s!", Name, "...just kinda stand around");
          }
          *(float *)(a1 + 0x188) = flt_A30634;
        }
        *(_DWORD *)(a1 + 0x70) = 6;
        *(_BYTE *)(a1 + 0x17D) = 1;
      }
    }
    else
    {
      if ( Actor_IsBlocking(*(_DWORD **)(a1 + 0x3C)) )
        sub_5F4AE0(*(Actor **)(a1 + 0x3C), a2, a3, a4, 0);
      v7 = *(_BYTE **)(a1 + 0xC8);
      *(_BYTE *)(a1 + 0x4A) = 1;
      *(_BYTE *)(a1 + 0x4E) = 0;
      if ( v7 )
      {
        v8 = *(TESObjectREFR **)(a1 + 0x3C);
        v20 = sub_520200(v7);
        v19 = *(_DWORD *)(a1 + 0xC8);
        v9 = v8->vtbl->GetAnimData(v8);
        sub_477DB0(v9, v19, v8, v20, 2);
      }
      v10 = *(_DWORD **)(a1 + 0x3C);
      v11 = (void (__thiscall **)(_DWORD *, int, int, int))(*v10 + 0x308);
      v12 = sub_6135F0(a1);
      (*v11)(v10, v12, 5, 1);
      if ( byte_B3B908 )
      {
        if ( sub_6135F0(a1) )
        {
          v13 = *(TESObjectREFR **)(a1 + 0x3C);
          v14 = (TESObjectREFR *)sub_6135F0(a1);
          v21 = TESObjectREFR_GetName(v14);
          v15 = TESObjectREFR_GetName(v13);
          Interface_ConsolePrint("%.20s wants to yield to %.20s!", v15, v21);
        }
      }
    }
  }
}
