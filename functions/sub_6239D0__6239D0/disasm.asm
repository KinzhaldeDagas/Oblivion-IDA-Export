0x6239D0: push    ebx
0x6239D1: push    esi
0x6239D2: mov     esi, ecx
0x6239D4: mov     eax, [esi+3Ch]
0x6239D7: test    eax, eax
0x6239D9: jz      short loc_623A0D
0x6239DB: mov     eax, [eax+58h]
0x6239DE: test    eax, eax
0x6239E0: jz      short loc_623A0D
0x6239E2: mov     edx, [eax]
0x6239E4: mov     ecx, eax
0x6239E6: mov     eax, [edx+0ECh]
0x6239EC: push    1
0x6239EE: call    eax
0x6239F0: test    eax, eax
0x6239F2: jz      short loc_623A0D
0x6239F4: mov     ecx, [esi+3Ch]
0x6239F7: mov     ecx, [ecx+58h]
0x6239FA: mov     edx, [ecx]
0x6239FC: mov     eax, [edx+0ECh]
0x623A02: push    1
0x623A04: call    eax
0x623A06: mov     ebx, [eax+8]
0x623A09: test    ebx, ebx
0x623A0B: jnz     short loc_623A13
0x623A0D: mov     ebx, [esi+0A8h]
0x623A13: cmp     dword ptr [esi+0A8h], 0
0x623A1A: jnz     short loc_623A36
0x623A1C: mov     ecx, [esi+3Ch]
0x623A1F: call    sub_5E0F50
0x623A24: mov     edx, [eax]
0x623A26: mov     ecx, eax
0x623A28: mov     eax, [edx+168h]
0x623A2E: push    1
0x623A30: call    eax
0x623A32: test    al, al
0x623A34: jz      short loc_623A3A
0x623A36: mov     byte ptr [esi+48h], 1
0x623A3A: mov     ecx, [esi+3Ch]
0x623A3D: call    sub_5E1CF0
0x623A42: test    al, al
0x623A44: jz      short loc_623A5F
0x623A46: test    ebx, ebx
0x623A48: jnz     short loc_623A5F
0x623A4A: cmp     [esi+48h], bl
0x623A4D: jnz     short loc_623A5F
0x623A4F: cmp     dword ptr [esi+70h], 6
0x623A53: jz      short loc_623A5F
0x623A55: pop     esi
0x623A56: mov     eax, 0Dh
0x623A5B: pop     ebx
0x623A5C: retn    8
0x623A5F: push    ebp
0x623A60: mov     ebp, [esi+70h]
0x623A63: cmp     ebp, 5
0x623A66: push    edi
0x623A67: jz      short loc_623A99
0x623A69: cmp     byte ptr ds:0B3B908h, 0
0x623A70: jz      short loc_623A8D
0x623A72: mov     ecx, [esi+3Ch]; this
0x623A75: push    offset aAttemptToYield; "attempt to Yield"
0x623A7A: call    TESObjectREFR_GetName
0x623A7F: push    eax
0x623A80: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x623A85: call    Interface_ConsolePrint
0x623A8A: add     esp, 0Ch
0x623A8D: fld     dword ptr ds:0A30634h
0x623A93: fstp    dword ptr [esi+188h]
0x623A99: mov     edi, [esi+3Ch]
0x623A9C: mov     ecx, esi
0x623A9E: mov     dword ptr [esi+70h], 5
0x623AA5: call    sub_6135F0
0x623AAA: mov     ecx, ds:0B362C0h
0x623AB0: push    eax
0x623AB1: push    edi
0x623AB2: call    sub_521450
0x623AB7: push    ebp
0x623AB8: mov     ecx, esi
0x623ABA: mov     [esi+0C8h], eax
0x623AC0: call    sub_612DE0
0x623AC5: cmp     [esp+10h+arg_4], 0
0x623ACA: jnz     short loc_623AD6
0x623ACC: cmp     byte ptr [esi+4Dh], 0
0x623AD0: jnz     short loc_623AD6
0x623AD2: xor     al, al
0x623AD4: jmp     short loc_623ADB
0x623AD6: mov     eax, 1
0x623ADB: cmp     dword ptr [esi+0C8h], 0
0x623AE2: mov     edx, [esp+10h+arg_0]
0x623AE6: mov     edi, [esi+3Ch]
0x623AE9: setnz   cl
0x623AEC: push    ecx
0x623AED: push    eax
0x623AEE: push    edx
0x623AEF: mov     ecx, esi
0x623AF1: call    sub_6135F0
0x623AF6: push    eax
0x623AF7: push    0
0x623AF9: push    edi
0x623AFA: call    sub_621B40
0x623AFF: add     esp, 18h
0x623B02: test    ebx, ebx
0x623B04: mov     edi, eax
0x623B06: jz      loc_623B9C
0x623B0C: test    edi, edi
0x623B0E: jnz     short loc_623B2E
0x623B10: mov     ebx, [esi+3Ch]
0x623B13: push    eax
0x623B14: push    1
0x623B16: push    eax
0x623B17: push    eax
0x623B18: push    1
0x623B1A: mov     ecx, esi
0x623B1C: call    sub_612D60
0x623B21: push    eax
0x623B22: mov     ecx, ebx
0x623B24: call    Actor_UnequipItem
0x623B29: jmp     loc_623BB4
0x623B2E: cmp     edi, 0Dh
0x623B31: jnz     short loc_623B9C
0x623B33: movsx   eax, byte ptr [ebx+90h]
0x623B3A: cmp     eax, 5; switch 6 cases
0x623B3D: ja      short def_623B3F
0x623B3F: jmp     ds:jpt_623B3F[eax*4]; switch jump
0x623B46: mov     eax, [esi+3Ch]; jumptable 00623B3F case 5
0x623B49: mov     ecx, [eax+58h]
0x623B4C: mov     edx, [ecx]
0x623B4E: mov     eax, [edx+0F4h]
0x623B54: push    1
0x623B56: call    eax
0x623B58: test    eax, eax
0x623B5A: jnz     short loc_623B6D; jumptable 00623B3F case 4
0x623B5C: cmp     [esi+48h], al
0x623B5F: jnz     short loc_623B6D; jumptable 00623B3F case 4
0x623B61: mov     ecx, [esi+3Ch]; int
0x623B64: push    5; int
0x623B66: push    1; char
0x623B68: call    sub_5F5170
0x623B6D: mov     ecx, [esi+3Ch]; jumptable 00623B3F case 4
0x623B70: push    1
0x623B72: mov     edi, 2
0x623B77: call    sub_5E6D70
0x623B7C: jmp     short loc_623BB4
0x623B7E: mov     ecx, [esi+3Ch]; jumptable 00623B3F cases 0-3
0x623B81: mov     edi, 1
0x623B86: push    edi
0x623B87: call    sub_5E6D70
0x623B8C: jmp     short loc_623BB4
