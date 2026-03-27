0x504A10: push    ecx
0x504A11: push    esi
0x504A12: mov     esi, dword ptr [esp+8+arg_8]
0x504A16: test    esi, esi
0x504A18: jnz     short loc_504A1F
0x504A1A: xor     al, al
0x504A1C: pop     esi
0x504A1D: pop     ecx
0x504A1E: retn
0x504A1F: mov     edx, [esp+8+l]
0x504A23: lea     eax, [esp+8+var_4]
0x504A27: push    eax
0x504A28: mov     eax, [esp+0Ch+arg_10]
0x504A2C: lea     ecx, [esp+0Ch+arg_8]
0x504A30: push    ecx; UInt16
0x504A31: mov     ecx, [esp+10h+arg_C]
0x504A35: push    edx; l
0x504A36: mov     edx, [esp+14h+a3]
0x504A3A: push    eax; a6
0x504A3B: mov     eax, [esp+18h+arg_4]
0x504A3F: push    ecx; a5
0x504A40: mov     ecx, [esp+1Ch+a1]
0x504A44: push    esi; a4
0x504A45: push    edx; a3
0x504A46: push    eax; a2
0x504A47: push    ecx; a1
0x504A48: mov     dword ptr [esp+2Ch+arg_8], 0
0x504A50: mov     [esp+2Ch+var_4], 0
0x504A58: call    Script_ExtractArgs
0x504A5D: add     esp, 24h
0x504A60: test    al, al
0x504A62: jz      short loc_504A1A
0x504A64: push    4
0x504A66: mov     ecx, esi
0x504A68: call    sub_4D8260
0x504A6D: test    al, al
0x504A6F: jz      short loc_504A7C
0x504A71: push    1; char
0x504A73: push    0; float
0x504A75: mov     ecx, esi
0x504A77: call    sub_4DE460
0x504A7C: mov     ecx, esi
0x504A7E: call    sub_4D7740
0x504A83: test    eax, eax
0x504A85: jnz     short loc_504A8E
0x504A87: mov     ecx, esi
0x504A89: call    sub_4DBDF0
0x504A8E: mov     ecx, dword ptr [esp+8+arg_8]
0x504A92: test    ecx, ecx
0x504A94: jz      short loc_504A98
0x504A96: mov     [eax], cl
0x504A98: or      byte ptr [eax+8], 1
0x504A9C: mov     ecx, esi
0x504A9E: call    sub_4D9070
0x504AA3: cmp     [esp+8+var_4], 0
0x504AA8: jle     short loc_504ABF
0x504AAA: mov     ecx, esi; this
0x504AAC: call    GetTeleportExtraData
0x504AB1: test    eax, eax
0x504AB3: jz      short loc_504ABF
0x504AB5: push    0
0x504AB7: push    esi
0x504AB8: mov     ecx, eax
0x504ABA: call    sub_42B5F0
0x504ABF: mov     edx, [esi]
0x504AC1: mov     eax, [edx+90h]
0x504AC7: push    1
0x504AC9: mov     ecx, esi
0x504ACB: call    eax
0x504ACD: cmp     byte ptr ds:0B361ACh, 0
0x504AD4: jz      short loc_504AF0
0x504AD6: mov     ecx, dword ptr [esp+8+arg_8]
0x504ADA: push    ecx
0x504ADB: mov     ecx, esi; this
0x504ADD: call    TESObjectREFR_GetName
0x504AE2: push    eax
0x504AE3: push    offset aLockedSWithLoc; "Locked %s with lock level %d"
0x504AE8: call    Interface_ConsolePrint
0x504AED: add     esp, 0Ch
0x504AF0: mov     al, 1
0x504AF2: pop     esi
0x504AF3: pop     ecx
0x504AF4: retn
