0x446D80: push    0FFFFFFFFh
0x446D82: push    offset TESDataHandler_constr_SEH
0x446D87: mov     eax, large fs:0
0x446D8D: push    eax
0x446D8E: sub     esp, 8
0x446D91: push    ebx
0x446D92: push    ebp
0x446D93: push    esi
0x446D94: push    edi
0x446D95: mov     eax, ds:0B30AACh
0x446D9A: xor     eax, esp
0x446D9C: push    eax
0x446D9D: lea     eax, [esp+28h+var_C]
0x446DA1: mov     large fs:0, eax
0x446DA7: mov     esi, ecx
0x446DA9: mov     [esp+28h+var_10], esi
0x446DAD: xor     ebx, ebx
0x446DAF: mov     [esi+4], ebx
0x446DB2: mov     [esi+8], ebx
0x446DB5: mov     [esi+0Ch], ebx
0x446DB8: mov     [esi+10h], ebx
0x446DBB: mov     [esi+14h], ebx
0x446DBE: mov     [esi+18h], ebx
0x446DC1: mov     [esi+1Ch], ebx
0x446DC4: mov     [esi+20h], ebx
0x446DC7: mov     [esi+24h], ebx
0x446DCA: mov     [esi+28h], ebx
0x446DCD: mov     [esi+2Ch], ebx
0x446DD0: mov     [esi+30h], ebx
0x446DD3: mov     [esi+34h], ebx
0x446DD6: mov     [esi+38h], ebx
0x446DD9: mov     [esi+3Ch], ebx
0x446DDC: mov     [esi+40h], ebx
0x446DDF: mov     [esi+44h], ebx
0x446DE2: mov     [esi+48h], ebx
0x446DE5: mov     [esi+4Ch], ebx
0x446DE8: mov     [esi+50h], ebx
0x446DEB: mov     [esi+54h], ebx
0x446DEE: mov     [esi+58h], ebx
0x446DF1: mov     [esi+5Ch], ebx
0x446DF4: mov     [esi+60h], ebx
0x446DF7: mov     [esi+64h], ebx
0x446DFA: mov     [esi+68h], ebx
0x446DFD: mov     [esi+6Ch], ebx
0x446E00: mov     [esi+70h], ebx
0x446E03: mov     [esi+74h], ebx
0x446E06: mov     [esi+78h], ebx
0x446E09: mov     [esi+7Ch], ebx
0x446E0C: mov     [esi+80h], ebx
0x446E12: mov     [esi+84h], ebx
0x446E18: mov     [esi+88h], ebx
0x446E1E: mov     [esi+8Ch], ebx
0x446E24: mov     [esi+90h], ebx
0x446E2A: mov     [esi+94h], ebx
0x446E30: mov     [esi+98h], ebx
0x446E36: mov     [esi+9Ch], ebx
0x446E3C: mov     [esi+0A0h], ebx
0x446E42: mov     [esi+0A4h], ebx
0x446E48: mov     [esi+0A8h], ebx
0x446E4E: mov     [esi+0ACh], ebx
0x446E54: mov     [esi+0B0h], ebx
0x446E5A: mov     [esi+0B4h], ebx
0x446E60: mov     [esi+0B8h], ebx
0x446E66: mov     dword ptr [esi+0C0h], offset ??_7?$NiTLargeArray@PAVTESObjectCELL@@@@6B@; const NiTLargeArray<TESObjectCELL *>::`vftable'
0x446E70: mov     [esi+0C8h], ebx
0x446E76: mov     dword ptr [esi+0D4h], 1
0x446E80: mov     [esi+0CCh], ebx
0x446E86: mov     [esi+0D0h], ebx
0x446E8C: mov     [esi+0C4h], ebx
0x446E92: push    offset ??1TESSkill@@UAE@XZ; a5
0x446E97: push    offset ??0TESSkill@@QAE@XZ; a4
0x446E9C: push    15h; size
0x446E9E: push    60h ; '`'; a2
0x446EA0: lea     eax, [esi+0D8h]
0x446EA6: push    eax; a1
0x446EA7: mov     [esp+3Ch+var_4], ebx
0x446EAB: call    ArrayConstructor
0x446EB0: mov     ecx, ds:0BA9DE4h
0x446EB6: mov     edx, large fs:2Ch
0x446EBD: mov     eax, [edx+ecx*4]
0x446EC0: mov     [esi+8B8h], ebx
0x446EC6: mov     [esi+8BCh], ebx
0x446ECC: mov     [esi+8C8h], ebx
0x446ED2: mov     [esi+8CCh], ebx
0x446ED8: mov     dword ptr [esi+8C0h], 800h
0x446EE2: mov     [esi+8D0h], ebx
0x446EE8: mov     [esi+8C4h], ebx
0x446EEE: mov     [esi+0CD0h], bl
0x446EF4: mov     [esi+0CD1h], bl
0x446EFA: mov     [eax+184h], bl
0x446F00: mov     byte ptr [esp+28h+var_4], 1
0x446F05: mov     [esi+0CD2h], bl
0x446F0B: mov     [esi+0CD3h], bl
0x446F11: mov     [esi+0CD4h], bl
0x446F17: mov     byte ptr [esi+0CD5h], 1
0x446F1E: push    3FCh
0x446F23: lea     ecx, [esi+8D4h]
0x446F29: push    ebx
0x446F2A: push    ecx
0x446F2B: call    __memset
0x446F30: push    10h; Size
0x446F32: call    FormHeapAlloc
0x446F37: add     esp, 10h
0x446F3A: mov     [esp+28h+var_14], eax
0x446F3E: cmp     eax, ebx
0x446F40: mov     byte ptr [esp+28h+var_4], 2
0x446F45: jz      short loc_446F52
0x446F47: push    1
0x446F49: mov     ecx, eax
0x446F4B: call    TESObjectListHead_constr
0x446F50: jmp     short loc_446F54
0x446F52: xor     eax, eax
0x446F54: push    10h; Size
0x446F56: mov     byte ptr [esp+2Ch+var_4], 1
0x446F5B: mov     [esi], eax
0x446F5D: call    FormHeapAlloc
0x446F62: add     esp, 4
0x446F65: mov     [esp+28h+var_14], eax
0x446F69: cmp     eax, ebx
0x446F6B: mov     byte ptr [esp+28h+var_4], 3
0x446F70: jz      short loc_446F7D
0x446F72: push    1
0x446F74: mov     ecx, eax
0x446F76: call    TESRegionList_constr
0x446F7B: jmp     short loc_446F7F
0x446F7D: xor     eax, eax
0x446F7F: mov     byte ptr [esp+28h+var_4], 1
0x446F84: mov     [esi+0BCh], eax
0x446F8A: mov     [esi+0CDCh], ebx
0x446F90: mov     dword ptr [esi+0D4h], 64h ; 'd'
0x446F9A: mov     edi, 3Dh ; '='
0x446F9F: lea     ebp, [esi+104h]
0x446FA5: mov     [esp+28h+var_14], 15h
0x446FAD: lea     ecx, [ecx+0]
0x446FB0: cmp     edi, 5Ah ; 'Z'
0x446FB3: jge     short loc_446FC0
0x446FB5: push    1; a3
0x446FB7: push    edi; a2
0x446FB8: lea     ecx, [ebp-2Ch]; this
0x446FBB: call    TESForm_SetFormID
0x446FC0: lea     edx, [edi-31h]
0x446FC3: mov     [ebp+0], edx
0x446FC6: add     edi, 1
0x446FC9: add     ebp, 60h ; '`'
0x446FCC: sub     [esp+28h+var_14], 1
0x446FD1: jnz     short loc_446FB0
0x446FD3: push    8; Size
0x446FD5: call    FormHeapAlloc
0x446FDA: add     esp, 4
0x446FDD: mov     [esp+28h+var_14], eax
0x446FE1: cmp     eax, ebx
0x446FE3: mov     byte ptr [esp+28h+var_4], 4
0x446FE8: jz      short loc_446FF3
0x446FEA: mov     ecx, eax
0x446FEC: call    TESRegionDataManager_constr
0x446FF1: jmp     short loc_446FF5
0x446FF3: xor     eax, eax
0x446FF5: push    14h; Size
0x446FF7: mov     byte ptr [esp+2Ch+var_4], 1
0x446FFC: mov     [esi+0CD8h], eax
0x447002: call    FormHeapAlloc
0x447007: add     esp, 4
0x44700A: mov     [esp+28h+var_14], eax
0x44700E: cmp     eax, ebx
0x447010: mov     byte ptr [esp+28h+var_4], 5
0x447015: jz      short loc_447020
0x447017: mov     ecx, eax
0x447019: call    sub_521950
0x44701E: jmp     short loc_447022
0x447020: xor     eax, eax
0x447022: mov     ds:0B362C0h, eax
0x447027: mov     [esi+0CD6h], bl
0x44702D: mov     eax, esi
0x44702F: mov     ecx, dword ptr [esp+28h+var_C]
0x447033: mov     large fs:0, ecx
0x44703A: pop     ecx
0x44703B: pop     edi
0x44703C: pop     esi
0x44703D: pop     ebp
0x44703E: pop     ebx
0x44703F: add     esp, 14h
0x447042: retn
