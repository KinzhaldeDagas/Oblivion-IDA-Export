0x43FAB0: push    ecx
0x43FAB1: push    ebx
0x43FAB2: mov     ebx, [esp+8+arg_0]
0x43FAB6: test    ebx, ebx
0x43FAB8: push    esi
0x43FAB9: mov     esi, ecx
0x43FABB: mov     [esp+0Ch+var_4], 0
0x43FAC3: jz      short loc_43FB28
0x43FAC5: mov     ecx, ebx; this
0x43FAC7: call    TESObjectCELL_IsInterior
0x43FACC: test    al, al
0x43FACE: jnz     short loc_43FB28
0x43FAD0: push    ebp
0x43FAD1: push    edi
0x43FAD2: mov     ecx, ebx; this
0x43FAD4: call    TESObjectCELL_GetXCoordinate
0x43FAD9: mov     ecx, ebx; this
0x43FADB: mov     ebp, eax
0x43FADD: call    TESObjectCELL_GetYCoordinate
0x43FAE2: mov     edi, ds:0B06A2Ch
0x43FAE8: mov     ecx, edi
0x43FAEA: shr     ecx, 1
0x43FAEC: mov     edx, ecx
0x43FAEE: sub     edx, [esi+20h]
0x43FAF1: sub     ecx, [esi+24h]
0x43FAF4: add     edx, ebp
0x43FAF6: add     ecx, eax
0x43FAF8: cmp     edx, edi
0x43FAFA: jnb     short loc_43FB26
0x43FAFC: cmp     ecx, edi
0x43FAFE: jnb     short loc_43FB26
0x43FB00: test    edx, edx
0x43FB02: jl      short loc_43FB26
0x43FB04: test    ecx, ecx
0x43FB06: jl      short loc_43FB26
0x43FB08: push    ecx
0x43FB09: mov     ecx, [esi+8]
0x43FB0C: push    edx
0x43FB0D: call    GetGridEntry
0x43FB12: test    eax, eax
0x43FB14: mov     [esp+14h+var_4], eax
0x43FB18: jz      short loc_43FB26
0x43FB1A: cmp     [eax], ebx
0x43FB1C: jz      short loc_43FB26
0x43FB1E: mov     [esp+14h+var_4], 0
0x43FB26: pop     edi
0x43FB27: pop     ebp
0x43FB28: mov     eax, [esp+0Ch+var_4]
0x43FB2C: pop     esi
0x43FB2D: pop     ebx
0x43FB2E: pop     ecx
0x43FB2F: retn    4
