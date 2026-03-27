0x845EC0: push    0FFFFFFFFh
0x845EC2: push    offset SEH_851CA0
0x845EC7: mov     eax, large fs:0
0x845ECD: push    eax
0x845ECE: push    ecx
0x845ECF: push    ebx
0x845ED0: push    ebp
0x845ED1: push    esi
0x845ED2: push    edi
0x845ED3: mov     eax, ds:0B30AACh
0x845ED8: xor     eax, esp
0x845EDA: push    eax
0x845EDB: lea     eax, [esp+24h+var_C]
0x845EDF: mov     large fs:0, eax
0x845EE5: mov     ebp, ecx
0x845EE7: mov     eax, ds:0B42EB8h
0x845EEC: mov     ecx, [eax+0Ch]
0x845EEF: mov     ebx, [esp+24h+arg_8]
0x845EF3: mov     edx, [ecx]
0x845EF5: mov     eax, [ebx+0Ch]
0x845EF8: mov     esi, ds:0B45B80h
0x845EFE: push    eax
0x845EFF: mov     ecx, ebp
0x845F01: mov     [esp+28h+var_10], edx
0x845F05: call    sub_848E50
0x845F0A: mov     eax, [ebx+8]
0x845F0D: test    byte ptr [eax+18h], 1
0x845F11: jnz     short loc_845F36
0x845F13: mov     ax, [eax+18h]
0x845F17: shr     ax, 9
0x845F1B: test    al, 1
0x845F1D: jnz     short loc_845F36
0x845F1F: mov     ecx, ds:0B430B0h
0x845F25: mov     eax, ds:0B45274h[ecx*8]
0x845F2C: push    eax; a2
0x845F2D: mov     ecx, esi; this
0x845F2F: call    sub_7AEC60
0x845F34: jmp     short loc_845F7B
0x845F36: mov     edx, ds:0B430B0h
0x845F3C: mov     ebx, ds:0B45278h[edx*8]
0x845F43: mov     edi, [esi+44h]
0x845F46: cmp     edi, ebx
0x845F48: jz      short loc_845F7B
0x845F4A: test    edi, edi
0x845F4C: jz      short loc_845F6A
0x845F4E: lea     eax, [edi+4]
0x845F51: push    eax; lpAddend
0x845F52: call    dword ptr ds:0A2807Ch
0x845F58: test    eax, eax
0x845F5A: jnz     short loc_845F6A
0x845F5C: test    edi, edi
0x845F5E: jz      short loc_845F6A
0x845F60: mov     edx, [edi]
0x845F62: mov     eax, [edx]
0x845F64: push    1
0x845F66: mov     ecx, edi
0x845F68: call    eax
0x845F6A: test    ebx, ebx
0x845F6C: mov     [esi+44h], ebx
0x845F6F: jz      short loc_845F7B
0x845F71: add     ebx, 4
0x845F74: push    ebx; lpAddend
0x845F75: call    dword ptr ds:0A28078h
0x845F7B: mov     ecx, [esi+24h]
0x845F7E: mov     edi, [ecx]
0x845F80: mov     ecx, [esp+24h+arg_C]
0x845F84: mov     edx, [ecx]
0x845F86: mov     eax, [edx+88h]
0x845F8C: push    0
0x845F8E: call    eax
0x845F90: mov     ebx, [edi+4]
0x845F93: cmp     ebx, eax
0x845F95: mov     [esp+24h+arg_8], eax
0x845F99: jz      short loc_845FD0
0x845F9B: test    ebx, ebx
0x845F9D: jz      short loc_845FBF
0x845F9F: lea     ecx, [ebx+4]
0x845FA2: push    ecx; lpAddend
0x845FA3: call    dword ptr ds:0A2807Ch
0x845FA9: test    eax, eax
0x845FAB: jnz     short loc_845FBB
0x845FAD: test    ebx, ebx
0x845FAF: jz      short loc_845FBB
0x845FB1: mov     edx, [ebx]
0x845FB3: mov     eax, [edx]
0x845FB5: push    1
0x845FB7: mov     ecx, ebx
0x845FB9: call    eax
0x845FBB: mov     eax, [esp+24h+arg_8]
0x845FBF: test    eax, eax
0x845FC1: mov     [edi+4], eax
0x845FC4: jz      short loc_845FD0
0x845FC6: add     eax, 4
0x845FC9: push    eax; lpAddend
0x845FCA: call    dword ptr ds:0A28078h
0x845FD0: mov     ecx, [esp+24h+arg_C]
0x845FD4: push    ecx
0x845FD5: push    edi
0x845FD6: mov     ecx, ebp
0x845FD8: call    sub_848FA0
0x845FDD: mov     eax, [esp+24h+var_10]
0x845FE1: mov     edx, [esi+24h]
0x845FE4: mov     ecx, [eax+114h]; this
0x845FEA: mov     ebx, [edx+18h]
0x845FED: call    BSRenderedTexture__GetInnerTexture
0x845FF2: mov     edi, [ebx+4]
0x845FF5: cmp     edi, eax
0x845FF7: mov     [esp+24h+arg_C], eax
0x845FFB: jz      short loc_846032
0x845FFD: test    edi, edi
0x845FFF: jz      short loc_846021
0x846001: lea     ecx, [edi+4]
0x846004: push    ecx; lpAddend
0x846005: call    dword ptr ds:0A2807Ch
0x84600B: test    eax, eax
0x84600D: jnz     short loc_84601D
0x84600F: test    edi, edi
0x846011: jz      short loc_84601D
0x846013: mov     edx, [edi]
0x846015: mov     eax, [edx]
0x846017: push    1
0x846019: mov     ecx, edi
0x84601B: call    eax
0x84601D: mov     eax, [esp+24h+arg_C]
0x846021: test    eax, eax
0x846023: mov     [ebx+4], eax
0x846026: jz      short loc_846032
0x846028: add     eax, 4
0x84602B: push    eax; lpAddend
0x84602C: call    dword ptr ds:0A28078h
0x846032: push    0
0x846034: mov     ecx, ebx
0x846036: call    sub_7715E0
0x84603B: mov     edi, 1
0x846040: add     [esi+60h], edi
0x846043: mov     [esp+24h+arg_C], esi
0x846047: mov     edx, [ebp+38h]
0x84604A: lea     ecx, [esp+24h+arg_C]
0x84604E: push    ecx
0x84604F: push    edx
0x846050: lea     ecx, [ebp+40h]
0x846053: mov     [esp+2Ch+var_4], 0
0x84605B: call    sub_76CE40
0x846060: or      eax, 0FFFFFFFFh
0x846063: add     [esi+60h], eax
0x846066: mov     [esp+24h+var_4], eax
0x84606A: jnz     short loc_846073
0x84606C: mov     ecx, esi
0x84606E: call    sub_7604D0
0x846073: add     [ebp+38h], edi
0x846076: mov     ecx, dword ptr [esp+24h+var_C]
0x84607A: mov     large fs:0, ecx
0x846081: pop     ecx
0x846082: pop     edi
0x846083: pop     esi
0x846084: pop     ebp
0x846085: pop     ebx
0x846086: add     esp, 10h
0x846089: retn    10h
