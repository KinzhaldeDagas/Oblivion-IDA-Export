0x504B00: push    esi
0x504B01: mov     esi, dword ptr [esp+4+arg_8]
0x504B05: test    esi, esi
0x504B07: jnz     short loc_504B0D
0x504B09: xor     al, al
0x504B0B: pop     esi
0x504B0C: retn
0x504B0D: mov     ecx, [esp+4+l]
0x504B11: mov     edx, [esp+4+arg_10]
0x504B15: lea     eax, [esp+4+arg_8]
0x504B19: push    eax; UInt16
0x504B1A: mov     eax, [esp+8+arg_C]
0x504B1E: push    ecx; l
0x504B1F: mov     ecx, [esp+0Ch+a3]
0x504B23: push    edx; a6
0x504B24: mov     edx, [esp+10h+arg_4]
0x504B28: push    eax; a5
0x504B29: mov     eax, [esp+14h+a1]
0x504B2D: push    esi; a4
0x504B2E: push    ecx; a3
0x504B2F: push    edx; a2
0x504B30: push    eax; a1
0x504B31: mov     dword ptr [esp+24h+arg_8], 0
0x504B39: call    Script_ExtractArgs
0x504B3E: add     esp, 20h
0x504B41: test    al, al
0x504B43: jz      short loc_504B09
0x504B45: mov     ecx, esi
0x504B47: call    sub_4D7740
0x504B4C: test    eax, eax
0x504B4E: jz      short loc_504B85
0x504B50: and     byte ptr [eax+8], 0FEh
0x504B54: mov     ecx, esi
0x504B56: call    sub_4D9070
0x504B5B: cmp     dword ptr [esp+4+arg_8], 0
0x504B60: jle     short loc_504B77
0x504B62: mov     ecx, esi; this
0x504B64: call    GetTeleportExtraData
0x504B69: test    eax, eax
0x504B6B: jz      short loc_504B77
0x504B6D: push    1
0x504B6F: push    esi
0x504B70: mov     ecx, eax
0x504B72: call    sub_42B5F0
0x504B77: mov     edx, [esi]
0x504B79: mov     eax, [edx+90h]
0x504B7F: push    1
0x504B81: mov     ecx, esi
0x504B83: call    eax
0x504B85: cmp     byte ptr ds:0B361ACh, 0
0x504B8C: jz      short loc_504BA3
0x504B8E: mov     ecx, esi; this
0x504B90: call    TESObjectREFR_GetName
0x504B95: push    eax
0x504B96: push    offset aUnlockedS; "Unlocked %s "
0x504B9B: call    Interface_ConsolePrint
0x504BA0: add     esp, 8
0x504BA3: mov     al, 1
0x504BA5: pop     esi
0x504BA6: retn
