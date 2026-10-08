// Ensures every stock registry slot has a runtime TESTopic. Missing slots are allocated, assigned the slot's fixed FormID and name as editor ID/full name, then registered with the DataHandler and editor-ID map. Thus GREETING/HELLO/ANY/GOODBYE/INFO GENERAL and the other stock topics are synthesized from this Oblivion table when absent.
void __cdecl InitializeStockDialogueTopics()
{
  int v0; // eax
  int *v1; // ecx
  _DWORD *v2; // ebp
  int v3; // edi
  TESForm *v4; // eax
  TESForm *v5; // esi
  int v6; // [esp+14h] [ebp-1Ch]
  int v7; // [esp+18h] [ebp-18h]
  int *v8; // [esp+1Ch] [ebp-14h]

  v0 = 0; /*0x52feb9*/
  v6 = 0; /*0x52febb*/
  do /*0x52ffff*/
  {
    v1 = (int *)(4 * v0 + 0xB110F4); /*0x52fec7*/
    v7 = 0; /*0x52fece*/
    v8 = v1; /*0x52fed2*/
    if ( *v1 > 0 ) /*0x52fed6*/
    {
      v2 = (_DWORD *)(4 * v0 + 0xB111B8); /*0x52fedc*/
      v3 = 0; /*0x52fee3*/
      do /*0x52ffef*/
      {
        if ( !*(_DWORD *)(v3 + *v2) ) /*0x52fef3*/
        {
          v4 = (TESForm *)FormHeapAlloc(0x3Cu); /*0x52fefe*/
          v5 = v4; /*0x52ff03*/
          if ( v4 ) /*0x52ff12*/
          {
            TESForm_constr(v4); /*0x52ff16*/
            v5[1].vtbl = (TESFormVtbl *)&TESFullName::`vftable'; /*0x52ff1f*/
            *(_DWORD *)&v5[1].member.type = 0; /*0x52ff26*/
            LOWORD(v5[1].member.flags) = 0; /*0x52ff29*/
            HIWORD(v5[1].member.flags) = 0; /*0x52ff2d*/
            v5->vtbl = (TESFormVtbl *)&TESTopic::`vftable'{for `TESTopic'}; /*0x52ff31*/
            v5[1].vtbl = (TESFormVtbl *)&TESTopic::`vftable'{for `TESFullName'}; /*0x52ff37*/
            v5[1].member.modlist.data = 0; /*0x52ff3e*/
            v5[1].member.modlist.next = 0; /*0x52ff41*/
            *(_DWORD *)&v5[2].member.type = 0; /*0x52ff44*/
            LOWORD(v5[2].member.flags) = 0; /*0x52ff47*/
            HIWORD(v5[2].member.flags) = 0; /*0x52ff4b*/
            v5[2].vtbl = 0; /*0x52ff4f*/
            LOBYTE(v5[1].member.refID) = v6; /*0x52ff52*/
            v5->member.type = kFormType_Dialog; /*0x52ff55*/
          }
          else
          {
            v5 = 0; /*0x52ff5b*/
          }
          *(_DWORD *)(v3 + *v2) = v5; /*0x52ff60*/
          TESForm_SetFormID(*(TESForm **)(*v2 + v3), *(_DWORD *)(*v2 + v3 + 4), 1); /*0x52ff7a*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*v2 + v3) + 0xD8))( /*0x52ff96*/
            *(_DWORD *)(*v2 + v3),
            *(_DWORD *)(*v2 + v3 + 8));
          BSStringT_Set((BSStringT *)(*(_DWORD *)(v3 + *v2) + 0x1C), *(const char **)(*v2 + v3 + 8), 0); /*0x52ffa8*/
          sub_447530((_DWORD *)g_TESDataHandler, *(_DWORD *)(*v2 + v3)); /*0x52ffba*/
          sub_412D30(&off_B06164, *(_DWORD *)(*v2 + v3 + 8), *(TESForm **)(*v2 + v3)); /*0x52ffd2*/
          v0 = v6; /*0x52ffd7*/
          v1 = v8; /*0x52ffdb*/
        }
        v3 += 0xC; /*0x52ffe6*/
        ++v7; /*0x52ffeb*/
      }
      while ( v7 < *v1 ); /*0x52ffef*/
    }
    v6 = ++v0; /*0x52fffb*/
  }
  while ( v0 < 7 ); /*0x52ffff*/
}
