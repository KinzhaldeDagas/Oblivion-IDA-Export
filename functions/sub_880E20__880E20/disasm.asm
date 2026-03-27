0x880E20: push    0FFFFFFFFh
0x880E22: push    offset SEH_882120
0x880E27: mov     eax, large fs:0
0x880E2D: push    eax
0x880E2E: push    ebx
0x880E2F: push    ebp
0x880E30: push    esi
0x880E31: push    edi
0x880E32: mov     eax, ds:0B30AACh
0x880E37: xor     eax, esp
0x880E39: push    eax
0x880E3A: lea     eax, [esp+20h+var_C]
0x880E3E: mov     large fs:0, eax
0x880E44: mov     esi, ecx
0x880E46: mov     ebx, [esp+20h+arg_8]
0x880E4A: mov     eax, [ebx+10h]
0x880E4D: mov     edi, ds:0B47740h
0x880E53: push    eax
0x880E54: call    sub_848C40
0x880E59: mov     ebx, [ebx+0Ch]
0x880E5C: push    ebx
0x880E5D: mov     ecx, esi
0x880E5F: call    sub_848E50
0x880E64: mov     ecx, [esp+20h+arg_0]
0x880E68: mov     eax, [esi]
0x880E6A: mov     edx, [eax+0BCh]
0x880E70: push    0
0x880E72: push    ebx
0x880E73: push    ecx
0x880E74: mov     ecx, esi
0x880E76: call    edx
0x880E78: mov     eax, [edi+24h]
0x880E7B: mov     ebp, [esp+20h+arg_C]
0x880E7F: mov     ebx, [eax]
0x880E81: mov     edx, [ebp+0]
0x880E84: mov     eax, [edx+88h]
0x880E8A: push    0
0x880E8C: mov     ecx, ebp
0x880E8E: mov     [esp+24h+arg_8], ebx
0x880E92: call    eax
0x880E94: mov     ebx, [ebx+4]
0x880E97: cmp     ebx, eax
0x880E99: mov     [esp+20h+arg_0], eax
0x880E9D: jz      short loc_880ED8
0x880E9F: test    ebx, ebx
0x880EA1: jz      short loc_880EC3
0x880EA3: lea     ecx, [ebx+4]
0x880EA6: push    ecx; lpAddend
0x880EA7: call    dword ptr ds:0A2807Ch
0x880EAD: test    eax, eax
0x880EAF: jnz     short loc_880EBF
0x880EB1: test    ebx, ebx
0x880EB3: jz      short loc_880EBF
0x880EB5: mov     edx, [ebx]
0x880EB7: mov     eax, [edx]
0x880EB9: push    1
0x880EBB: mov     ecx, ebx
0x880EBD: call    eax
0x880EBF: mov     eax, [esp+20h+arg_0]
0x880EC3: test    eax, eax
0x880EC5: mov     ecx, [esp+20h+arg_8]
0x880EC9: mov     [ecx+4], eax
0x880ECC: jz      short loc_880ED8
0x880ECE: add     eax, 4
0x880ED1: push    eax; lpAddend
0x880ED2: call    dword ptr ds:0A28078h
0x880ED8: mov     edx, [edi+24h]
0x880EDB: mov     ebx, [edx+4]
0x880EDE: push    0
0x880EE0: push    ebp
0x880EE1: mov     ecx, esi
0x880EE3: mov     [esp+28h+arg_8], ebx
0x880EE7: call    sub_848FD0
0x880EEC: mov     ebx, [ebx+4]
0x880EEF: cmp     ebx, eax
0x880EF1: mov     [esp+20h+arg_0], eax
0x880EF5: jz      short loc_880F30
0x880EF7: test    ebx, ebx
0x880EF9: jz      short loc_880F1B
0x880EFB: lea     eax, [ebx+4]
0x880EFE: push    eax; lpAddend
0x880EFF: call    dword ptr ds:0A2807Ch
0x880F05: test    eax, eax
0x880F07: jnz     short loc_880F17
0x880F09: test    ebx, ebx
0x880F0B: jz      short loc_880F17
0x880F0D: mov     edx, [ebx]
0x880F0F: mov     eax, [edx]
0x880F11: push    1
0x880F13: mov     ecx, ebx
0x880F15: call    eax
0x880F17: mov     eax, [esp+20h+arg_0]
0x880F1B: test    eax, eax
0x880F1D: mov     ecx, [esp+20h+arg_8]
0x880F21: mov     [ecx+4], eax
0x880F24: jz      short loc_880F30
0x880F26: add     eax, 4
0x880F29: push    eax; lpAddend
0x880F2A: call    dword ptr ds:0A28078h
0x880F30: mov     edx, [edi+24h]
0x880F33: mov     ebx, [edx+8]
0x880F36: mov     eax, [ebp+0]
0x880F39: mov     edx, [eax+88h]
0x880F3F: push    1
0x880F41: mov     ecx, ebp
0x880F43: mov     [esp+24h+arg_8], ebx
0x880F47: call    edx
0x880F49: mov     ebx, [ebx+4]
0x880F4C: cmp     ebx, eax
0x880F4E: mov     [esp+20h+arg_0], eax
0x880F52: jz      short loc_880F8D
0x880F54: test    ebx, ebx
0x880F56: jz      short loc_880F78
0x880F58: lea     eax, [ebx+4]
0x880F5B: push    eax; lpAddend
0x880F5C: call    dword ptr ds:0A2807Ch
0x880F62: test    eax, eax
0x880F64: jnz     short loc_880F74
0x880F66: test    ebx, ebx
0x880F68: jz      short loc_880F74
0x880F6A: mov     edx, [ebx]
0x880F6C: mov     eax, [edx]
0x880F6E: push    1
0x880F70: mov     ecx, ebx
0x880F72: call    eax
0x880F74: mov     eax, [esp+20h+arg_0]
0x880F78: test    eax, eax
0x880F7A: mov     ecx, [esp+20h+arg_8]
0x880F7E: mov     [ecx+4], eax
0x880F81: jz      short loc_880F8D
0x880F83: add     eax, 4
0x880F86: push    eax; lpAddend
0x880F87: call    dword ptr ds:0A28078h
0x880F8D: mov     edx, [edi+24h]
0x880F90: mov     eax, [edx+0Ch]
0x880F93: push    1
0x880F95: push    ebp
0x880F96: mov     ecx, esi
0x880F98: mov     [esp+28h+arg_8], eax
0x880F9C: call    sub_848FD0
0x880FA1: mov     ecx, [esp+20h+arg_8]
0x880FA5: mov     ebp, [ecx+4]
0x880FA8: mov     ebx, eax
0x880FAA: cmp     ebp, ebx
0x880FAC: jz      short loc_880FE4
0x880FAE: test    ebp, ebp
0x880FB0: jz      short loc_880FCF
0x880FB2: lea     edx, [ebp+4]
0x880FB5: push    edx; lpAddend
0x880FB6: call    dword ptr ds:0A2807Ch
0x880FBC: test    eax, eax
0x880FBE: jnz     short loc_880FCF
0x880FC0: test    ebp, ebp
0x880FC2: jz      short loc_880FCF
0x880FC4: mov     eax, [ebp+0]
0x880FC7: mov     edx, [eax]
0x880FC9: push    1
0x880FCB: mov     ecx, ebp
0x880FCD: call    edx
0x880FCF: test    ebx, ebx
0x880FD1: mov     eax, [esp+20h+arg_8]
0x880FD5: mov     [eax+4], ebx
0x880FD8: jz      short loc_880FE4
0x880FDA: add     ebx, 4
0x880FDD: push    ebx; lpAddend
0x880FDE: call    dword ptr ds:0A28078h
0x880FE4: mov     ecx, [edi+24h]
0x880FE7: mov     ebx, [ecx+18h]
0x880FEA: mov     eax, ds:0B43108h
0x880FEF: mov     ebp, [ebx+4]
0x880FF2: add     ebx, 4
0x880FF5: cmp     ebp, eax
0x880FF7: mov     [esp+20h+arg_8], eax
0x880FFB: jz      short loc_881032
0x880FFD: test    ebp, ebp
0x880FFF: jz      short loc_881022
0x881001: lea     edx, [ebp+4]
0x881004: push    edx; lpAddend
0x881005: call    dword ptr ds:0A2807Ch
0x88100B: test    eax, eax
0x88100D: jnz     short loc_88101E
0x88100F: test    ebp, ebp
0x881011: jz      short loc_88101E
0x881013: mov     eax, [ebp+0]
0x881016: mov     edx, [eax]
0x881018: push    1
0x88101A: mov     ecx, ebp
0x88101C: call    edx
0x88101E: mov     eax, [esp+20h+arg_8]
0x881022: test    eax, eax
0x881024: mov     [ebx], eax
0x881026: jz      short loc_881032
0x881028: add     eax, 4
0x88102B: push    eax; lpAddend
0x88102C: call    dword ptr ds:0A28078h
0x881032: mov     eax, [edi+24h]
0x881035: mov     ebx, [eax+1Ch]
0x881038: mov     eax, ds:0B4310Ch
0x88103D: mov     ebp, [ebx+4]
0x881040: cmp     ebp, eax
0x881042: mov     ecx, eax
0x881044: mov     [esp+20h+arg_8], ecx
0x881048: jz      short loc_881080
0x88104A: test    ebp, ebp
0x88104C: jz      short loc_88106F
0x88104E: lea     ecx, [ebp+4]
0x881051: push    ecx; lpAddend
0x881052: call    dword ptr ds:0A2807Ch
0x881058: test    eax, eax
0x88105A: jnz     short loc_88106B
0x88105C: test    ebp, ebp
0x88105E: jz      short loc_88106B
0x881060: mov     edx, [ebp+0]
0x881063: mov     eax, [edx]
0x881065: push    1
0x881067: mov     ecx, ebp
0x881069: call    eax
0x88106B: mov     ecx, [esp+20h+arg_8]
0x88106F: test    ecx, ecx
0x881071: mov     [ebx+4], ecx
0x881074: jz      short loc_881080
0x881076: add     ecx, 4
0x881079: push    ecx; lpAddend
0x88107A: call    dword ptr ds:0A28078h
0x881080: mov     ebx, 1
0x881085: add     [edi+60h], ebx
0x881088: mov     [esp+20h+arg_8], edi
0x88108C: mov     edx, [esi+38h]
0x88108F: lea     ecx, [esp+20h+arg_8]
0x881093: push    ecx
0x881094: push    edx
0x881095: lea     ecx, [esi+40h]
0x881098: mov     [esp+28h+var_4], 0
0x8810A0: call    sub_76CE40
0x8810A5: or      eax, 0FFFFFFFFh
0x8810A8: add     [edi+60h], eax
0x8810AB: mov     [esp+20h+var_4], eax
0x8810AF: jnz     short loc_8810B8
0x8810B1: mov     ecx, edi
0x8810B3: call    sub_7604D0
0x8810B8: add     [esi+38h], ebx
0x8810BB: mov     ecx, [esp+20h+var_C]
0x8810BF: mov     large fs:0, ecx
0x8810C6: pop     ecx
0x8810C7: pop     edi
0x8810C8: pop     esi
0x8810C9: pop     ebp
0x8810CA: pop     ebx
0x8810CB: add     esp, 0Ch
0x8810CE: retn    10h
