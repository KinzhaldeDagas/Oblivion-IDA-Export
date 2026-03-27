0x5EFFD0: push    ebp
0x5EFFD1: push    esi
0x5EFFD2: mov     esi, ecx
0x5EFFD4: cmp     dword ptr [esi+58h], 0
0x5EFFD8: jz      short loc_5EFFE9
0x5EFFDA: mov     ecx, [esi+58h]
0x5EFFDD: mov     eax, [ecx]
0x5EFFDF: mov     edx, [eax+2D0h]
0x5EFFE5: call    edx
0x5EFFE7: jmp     short loc_5EFFEC
0x5EFFE9: or      eax, 0FFFFFFFFh
0x5EFFEC: sub     eax, 3
0x5EFFEF: mov     ebp, [esp+8+arg_4]
0x5EFFF3: jz      loc_5F0092
0x5EFFF9: sub     eax, 2
0x5EFFFC: jz      loc_5F00D2
0x5F0002: sub     eax, 1
0x5F0005: jnz     loc_5F018E
0x5F000B: mov     eax, [esp+8+arg_0]
0x5F000F: sub     eax, 2
0x5F0012: jz      short loc_5F0019
0x5F0014: sub     eax, 4
0x5F0017: jmp     short loc_5F0028
0x5F0019: test    ebp, ebp
0x5F001B: jz      short loc_5F004B
0x5F001D: mov     ecx, [ebp+68h]
0x5F0020: call    TESAnimGroup_GetAnimationGroup
0x5F0025: cmp     eax, 1Dh
0x5F0028: jz      loc_5F018E
0x5F002E: test    ebp, ebp
0x5F0030: jz      short loc_5F004B
0x5F0032: mov     ecx, [ebp+68h]
0x5F0035: call    TESAnimGroup_GetAnimationGroup
0x5F003A: lea     eax, [eax+eax*8]
0x5F003D: cmp     dword ptr ds:0B102E8h[eax*4], 1
0x5F0045: jz      loc_5F018E
0x5F004B: mov     ecx, esi
0x5F004D: call    TESObjectREFR_GetAnimData
0x5F0052: test    eax, eax
0x5F0054: jz      loc_5F018E
0x5F005A: fldz
0x5F005C: push    ecx
0x5F005D: fstp    [esp+0Ch+var_C]; float
0x5F0060: mov     ecx, eax
0x5F0062: push    1; int
0x5F0064: call    sub_470FC0
0x5F0069: mov     ecx, ds:0B333C4h; this
0x5F006F: cmp     esi, ecx
0x5F0071: jnz     loc_5F018E
0x5F0077: push    1; a2
0x5F0079: call    Player_GetAnimData
0x5F007E: fldz
0x5F0080: push    ecx
0x5F0081: fstp    [esp+0Ch+var_C]; float
0x5F0084: push    1; int
0x5F0086: mov     ecx, eax
0x5F0088: call    sub_470FC0
0x5F008D: jmp     loc_5F018E
0x5F0092: cmp     dword ptr [esi+58h], 0
0x5F0096: jz      loc_5F01A7
0x5F009C: mov     ecx, [esi+58h]
0x5F009F: mov     edx, [ecx]
0x5F00A1: mov     eax, [edx+0ECh]
0x5F00A7: push    1
0x5F00A9: call    eax
0x5F00AB: test    eax, eax
0x5F00AD: jz      loc_5F018E
0x5F00B3: mov     ecx, [esi+58h]
0x5F00B6: mov     edx, [ecx]
0x5F00B8: mov     eax, [edx+0ECh]
0x5F00BE: push    1
0x5F00C0: call    eax
0x5F00C2: mov     ecx, [eax+8]
0x5F00C5: cmp     byte ptr [ecx+90h], 5
0x5F00CC: jnz     loc_5F018E
0x5F00D2: cmp     dword ptr [esi+58h], 0
0x5F00D6: jz      loc_5F01A7
0x5F00DC: mov     ecx, [esi+58h]
0x5F00DF: mov     edx, [ecx]
0x5F00E1: mov     eax, [edx+2D0h]
0x5F00E7: call    eax
0x5F00E9: cmp     eax, 5
0x5F00EC: jnz     short loc_5F00F5
0x5F00EE: cmp     [esp+8+arg_0], 3
0x5F00F3: jnz     short loc_5F011F
0x5F00F5: cmp     dword ptr [esi+58h], 0
0x5F00F9: jz      loc_5F01A7
0x5F00FF: mov     ecx, [esi+58h]
0x5F0102: mov     edx, [ecx]
0x5F0104: mov     eax, [edx+2D0h]
0x5F010A: call    eax
0x5F010C: cmp     eax, 3
0x5F010F: jnz     short loc_5F018E
0x5F0111: cmp     [esp+8+arg_0], 0FFFFFFFFh
0x5F0116: jz      short loc_5F018E
0x5F0118: cmp     [esp+8+arg_0], 2
0x5F011D: jz      short loc_5F018E
0x5F011F: mov     edx, [esi]
0x5F0121: mov     eax, [edx+168h]
0x5F0127: push    ebx
0x5F0128: push    edi
0x5F0129: mov     ecx, esi
0x5F012B: call    eax
0x5F012D: mov     ecx, ds:0B333C4h
0x5F0133: cmp     esi, ecx
0x5F0135: mov     edi, eax
0x5F0137: mov     ebx, 1
0x5F013C: jnz     short loc_5F016A
0x5F013E: mov     ebx, 2
0x5F0143: jmp     short loc_5F014B
0x5F0145: mov     ecx, ds:0B333C4h
0x5F014B: cmp     esi, ecx
0x5F014D: jnz     short loc_5F016A
0x5F014F: cmp     ebx, 1
0x5F0152: jnz     short loc_5F016A
0x5F0154: mov     dl, [ecx+588h]
0x5F015A: mov     byte ptr [esp+10h+arg_4], dl
0x5F015E: mov     eax, [esp+10h+arg_4]
0x5F0162: push    eax
0x5F0163: call    sub_6600D0
0x5F0168: mov     edi, eax
0x5F016A: mov     ecx, [esi+58h]
0x5F016D: mov     edx, [ecx]
0x5F016F: mov     eax, [edx+12Ch]
0x5F0175: push    edi
0x5F0176: call    eax
0x5F0178: test    eax, eax
0x5F017A: jz      short loc_5F0187
0x5F017C: lea     ecx, [eax+0ACh]
0x5F0182: call    sub_477EF0
0x5F0187: sub     ebx, 1
0x5F018A: jnz     short loc_5F0145
0x5F018C: pop     edi
0x5F018D: pop     ebx
0x5F018E: cmp     dword ptr [esi+58h], 0
0x5F0192: jz      short loc_5F01A7
0x5F0194: mov     ecx, [esi+58h]
0x5F0197: mov     edx, [ecx]
0x5F0199: mov     eax, [esp+8+arg_0]
0x5F019D: mov     edx, [edx+2D8h]
0x5F01A3: push    ebp
0x5F01A4: push    eax
0x5F01A5: call    edx
0x5F01A7: pop     esi
0x5F01A8: pop     ebp
0x5F01A9: retn    8
