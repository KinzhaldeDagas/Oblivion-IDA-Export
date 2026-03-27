0x45D030: sub     esp, 14h
0x45D033: push    esi
0x45D034: mov     esi, ecx
0x45D036: mov     ecx, [esi+60h]
0x45D039: mov     edx, [ecx+4]
0x45D03C: xor     eax, eax
0x45D03E: test    edx, edx
0x45D040: push    edi
0x45D041: jbe     short loc_45D063
0x45D043: mov     edi, [ecx+8]
0x45D046: mov     ecx, edi
0x45D048: jmp     short loc_45D050
0x45D04A: align 10h
0x45D050: cmp     dword ptr [ecx], 0
0x45D053: jnz     loc_45D0E3
0x45D059: add     eax, 1
0x45D05C: add     ecx, 4
0x45D05F: cmp     eax, edx
0x45D061: jb      short loc_45D050
0x45D063: xor     eax, eax
0x45D065: test    eax, eax
0x45D067: mov     [esp+1Ch+var_C], eax
0x45D06B: jz      loc_45D162
0x45D071: push    ebx
0x45D072: push    ebp
0x45D073: lea     eax, [esp+24h+var_14]
0x45D077: push    eax
0x45D078: lea     ecx, [esp+28h+a1]
0x45D07C: push    ecx
0x45D07D: mov     ecx, [esi+60h]
0x45D080: lea     edx, [esp+2Ch+var_C]
0x45D084: push    edx
0x45D085: call    sub_452600
0x45D08A: mov     ebp, [esp+24h+a1]
0x45D08E: push    0; int
0x45D090: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x45D095: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45D09A: push    0; int
0x45D09C: push    ebp; a1
0x45D09D: call    TESForm_LookupByFormID
0x45D0A2: add     esp, 4
0x45D0A5: push    eax; void *
0x45D0A6: call    OblivionDynamicCast
0x45D0AB: mov     ebx, [esp+38h+var_14]
0x45D0AF: mov     edi, eax
0x45D0B1: add     esp, 14h
0x45D0B4: test    edi, edi
0x45D0B6: jz      loc_45D141
0x45D0BC: cmp     dword ptr [edi+3Ch], 0
0x45D0C0: jnz     short loc_45D0EB
0x45D0C2: mov     eax, ebx
0x45D0C4: push    eax
0x45D0C5: lea     ecx, [edi+44h]
0x45D0C8: call    sub_4211E0
0x45D0CD: mov     ecx, [esi+4]
0x45D0D0: test    ecx, ecx
0x45D0D2: push    1000000h
0x45D0D7: push    edi
0x45D0D8: jnz     short loc_45D0DC
0x45D0DA: mov     ecx, [esi]
0x45D0DC: call    sub_452C20
0x45D0E1: jmp     short loc_45D14C
0x45D0E3: mov     eax, [edi+eax*4]
0x45D0E6: jmp     loc_45D065
0x45D0EB: mov     ecx, [esi+14h]
0x45D0EE: mov     [esi+14h], ebx
0x45D0F1: mov     [esp+24h+var_4], ecx
0x45D0F5: mov     ecx, ds:0B33B00h
0x45D0FB: mov     eax, [ecx+14h]
0x45D0FE: mov     bp, [eax]
0x45D101: add     eax, 2
0x45D104: mov     word ptr [esp+24h+var_8], bp
0x45D109: mov     edx, [esp+24h+var_8]
0x45D10D: mov     [ecx+14h], eax
0x45D110: push    edx
0x45D111: mov     ecx, edi
0x45D113: call    sub_4E31E0
0x45D118: movzx   eax, bp
0x45D11B: lea     ecx, [eax+ebx+2]
0x45D11F: cmp     ecx, [esi+14h]
0x45D122: jz      short loc_45D136
0x45D124: mov     ecx, ds:0B34D90h
0x45D12A: mov     edx, [ecx]
0x45D12C: mov     eax, [edx+18h]
0x45D12F: push    offset aLoadhavokdataC; "LoadHavokData() call did not properly e"...
0x45D134: call    eax
0x45D136: mov     ecx, [esp+24h+var_4]
0x45D13A: mov     ebp, [esp+24h+a1]
0x45D13E: mov     [esi+14h], ecx
0x45D141: push    ebx; void *
0x45D142: mov     ecx, offset FormHeap
0x45D147: call    MemoryHeap_Free_checked
0x45D14C: mov     ecx, [esi+60h]
0x45D14F: push    ebp
0x45D150: call    NiTMap_RemoveAt
0x45D155: cmp     [esp+24h+var_C], 0
0x45D15A: jnz     loc_45D073
0x45D160: pop     ebp
0x45D161: pop     ebx
0x45D162: mov     edx, [esi+60h]
0x45D165: cmp     dword ptr [edx+0Ch], 0
0x45D169: pop     edi
0x45D16A: pop     esi
0x45D16B: jz      short loc_45D17F
0x45D16D: mov     ecx, ds:0B34D90h
0x45D173: mov     eax, [ecx]
0x45D175: mov     edx, [eax+18h]
0x45D178: push    offset aLoadhavokdat_0; "LoadHavokData() call finished, but stil"...
0x45D17D: call    edx
0x45D17F: add     esp, 14h
0x45D182: retn
