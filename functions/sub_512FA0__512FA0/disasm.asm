0x512FA0: sub     esp, 8
0x512FA3: mov     edx, [esp+8+l]
0x512FA7: fld     dword ptr ds:0A30634h
0x512FAD: push    edi
0x512FAE: fstp    [esp+0Ch+var_4]
0x512FB2: mov     edi, [esp+0Ch+arg_8]
0x512FB6: lea     eax, [esp+0Ch+var_4]
0x512FBA: push    eax
0x512FBB: mov     eax, [esp+10h+arg_10]
0x512FBF: lea     ecx, [esp+10h+var_8]
0x512FC3: push    ecx; UInt16
0x512FC4: mov     ecx, [esp+14h+arg_C]
0x512FC8: push    edx; l
0x512FC9: mov     edx, [esp+18h+a3]
0x512FCD: push    eax; a6
0x512FCE: mov     eax, [esp+1Ch+arg_4]
0x512FD2: push    ecx; a5
0x512FD3: mov     ecx, [esp+20h+a1]
0x512FD7: push    edi; a4
0x512FD8: push    edx; a3
0x512FD9: push    eax; a2
0x512FDA: push    ecx; a1
0x512FDB: mov     dword ptr [esp+30h+var_8], 0
0x512FE3: call    Script_ExtractArgs
0x512FE8: add     esp, 24h
0x512FEB: test    al, al
0x512FED: jnz     short loc_512FF4
0x512FEF: pop     edi
0x512FF0: add     esp, 8
0x512FF3: retn
0x512FF4: test    edi, edi
0x512FF6: jnz     short loc_512FFE
0x512FF8: mov     edi, ds:0B333C4h
0x512FFE: mov     edx, dword ptr [esp+0Ch+var_8]
0x513002: test    edx, edx
0x513004: jz      short loc_513042
0x513006: movzx   eax, word ptr [edx+20h]
0x51300A: cmp     ax, 0FFFFh
0x51300E: jnz     short loc_513025
0x513010: mov     eax, [edx+1Ch]
0x513013: push    esi
0x513014: lea     esi, [eax+1]
0x513017: mov     cl, [eax]
0x513019: add     eax, 1
0x51301C: test    cl, cl
0x51301E: jnz     short loc_513017
0x513020: sub     eax, esi
0x513022: pop     esi
0x513023: jmp     short loc_513028
0x513025: movzx   eax, ax
0x513028: test    eax, eax
0x51302A: jbe     short loc_513042
0x51302C: lea     ecx, [edx+18h]
0x51302F: mov     edx, [ecx]
0x513031: mov     eax, [edx+14h]
0x513034: call    eax
0x513036: push    eax
0x513037: push    edi
0x513038: mov     ecx, offset ActorProcessManager_ptr
0x51303D: call    sub_678F50
0x513042: cmp     byte ptr ds:0B361ACh, 0
0x513049: jz      short loc_51307F
0x51304B: mov     ecx, edi; this
0x51304D: call    TESObjectREFR_GetName
0x513052: test    eax, eax
0x513054: jz      short loc_513072
0x513056: mov     ecx, edi; this
0x513058: call    TESObjectREFR_GetName
0x51305D: push    eax
0x51305E: push    offset aVisualEffect_2; "Visual effect has been removed from %s"
0x513063: call    Interface_ConsolePrint
0x513068: add     esp, 8
0x51306B: mov     al, 1
0x51306D: pop     edi
0x51306E: add     esp, 8
0x513071: retn
0x513072: push    offset aVisualEffect_3; "Visual effect has been removed from ref"...
0x513077: call    Interface_ConsolePrint
0x51307C: add     esp, 4
0x51307F: mov     al, 1
0x513081: pop     edi
0x513082: add     esp, 8
0x513085: retn
