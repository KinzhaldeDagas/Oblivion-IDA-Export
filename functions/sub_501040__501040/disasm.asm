0x501040: sub     esp, 8
0x501043: mov     edx, [esp+8+l]
0x501047: lea     eax, [esp+8+var_8]
0x50104A: push    eax
0x50104B: mov     eax, [esp+0Ch+arg_10]
0x50104F: lea     ecx, [esp+0Ch+var_4]
0x501053: push    ecx; UInt16
0x501054: mov     ecx, [esp+10h+arg_C]
0x501058: push    edx; l
0x501059: mov     edx, [esp+14h+a4]
0x50105D: push    eax; a6
0x50105E: mov     eax, [esp+18h+a3]
0x501062: push    ecx; a5
0x501063: mov     ecx, [esp+1Ch+arg_4]
0x501067: push    edx; a4
0x501068: mov     edx, [esp+20h+a1]
0x50106C: push    eax; a3
0x50106D: push    ecx; a2
0x50106E: push    edx; a1
0x50106F: mov     dword ptr [esp+2Ch+var_4], 0
0x501077: mov     [esp+2Ch+var_8], 0
0x50107F: call    Script_ExtractArgs
0x501084: add     esp, 24h
0x501087: test    al, al
0x501089: jnz     short loc_50108F
0x50108B: add     esp, 8
0x50108E: retn
0x50108F: mov     eax, [esp+8+var_8]
0x501092: push    esi
0x501093: mov     esi, dword ptr [esp+0Ch+var_4]
0x501097: cmp     eax, esi
0x501099: jge     short loc_5010A1
0x50109B: mov     eax, esi
0x50109D: mov     [esp+0Ch+var_8], eax
0x5010A1: lea     ecx, [eax+1]
0x5010A4: cmp     esi, ecx
0x5010A6: jge     short loc_5010D2
0x5010A8: mov     ecx, ds:0B02184h
0x5010AE: mov     edi, edi
0x5010B0: test    ecx, ecx
0x5010B2: jz      short loc_5010C8
0x5010B4: push    esi
0x5010B5: push    0
0x5010B7: push    0
0x5010B9: call    ecx ; dword_B02184
0x5010BB: mov     eax, [esp+18h+var_8]
0x5010BF: mov     ecx, ds:0B02184h
0x5010C5: add     esp, 0Ch
0x5010C8: add     esi, 1
0x5010CB: lea     edx, [eax+1]
0x5010CE: cmp     esi, edx
0x5010D0: jl      short loc_5010B0
0x5010D2: mov     al, 1
0x5010D4: pop     esi
0x5010D5: add     esp, 8
0x5010D8: retn
