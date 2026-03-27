0x478CE0: push    esi
0x478CE1: push    0
0x478CE3: mov     esi, ecx
0x478CE5: push    1
0x478CE7: lea     eax, [esi+0DCh]
0x478CED: push    eax
0x478CEE: call    sub_478780
0x478CF3: mov     ecx, [esi+150h]
0x478CF9: mov     edx, [ecx]
0x478CFB: mov     eax, [edx+190h]
0x478D01: call    eax
0x478D03: test    al, al
0x478D05: jz      short loc_478D64
0x478D07: push    edi
0x478D08: mov     edi, [esi+150h]
0x478D0E: mov     ecx, edi; this
0x478D10: call    Actor_IsCreature
0x478D15: test    al, al
0x478D17: jnz     short loc_478D63
0x478D19: cmp     dword ptr [edi+58h], 0
0x478D1D: jz      short loc_478D63
0x478D1F: mov     ecx, edi
0x478D21: call    Actor_IsWeaponOut
0x478D26: test    al, al
0x478D28: jz      short loc_478D63
0x478D2A: mov     ecx, ds:0B333C4h
0x478D30: cmp     [esi+150h], ecx
0x478D36: jnz     short loc_478D52
0x478D38: push    1
0x478D3A: call    sub_6600D0
0x478D3F: cmp     esi, eax
0x478D41: jnz     short loc_478D52
0x478D43: mov     ecx, ds:0B333C4h; this
0x478D49: push    1; a2
0x478D4B: call    Player_GetAnimData
0x478D50: jmp     short loc_478D59
0x478D52: mov     ecx, edi
0x478D54: call    TESObjectREFR_GetAnimData
0x478D59: test    eax, eax
0x478D5B: jz      short loc_478D63
0x478D5D: mov     [eax+0C8h], edi
0x478D63: pop     edi
0x478D64: pop     esi
0x478D65: retn
