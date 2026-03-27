0x43CAE0: push    esi
0x43CAE1: mov     esi, ecx
0x43CAE3: cmp     dword ptr [esi+0Ch], 4
0x43CAE7: jl      loc_43CB80
0x43CAED: cmp     dword ptr [esi+1Ch], 0
0x43CAF1: jz      short loc_43CB08
0x43CAF3: mov     eax, [esi+1Ch]
0x43CAF6: movzx   ecx, word ptr [eax+0Ch]
0x43CAFA: mov     edx, [eax+10h]
0x43CAFD: xor     eax, eax
0x43CAFF: cmp     ecx, edx
0x43CB01: setz    al
0x43CB04: test    al, al
0x43CB06: jz      short loc_43CB80
0x43CB08: cmp     dword ptr [esi+0Ch], 6
0x43CB0C: jz      short loc_43CB80
0x43CB0E: mov     eax, [esi+24h]
0x43CB11: test    eax, eax
0x43CB13: jz      short loc_43CB27
0x43CB15: cmp     dword ptr [esi+28h], 0
0x43CB19: lea     ecx, [esi+28h]
0x43CB1C: jnz     short loc_43CB27
0x43CB1E: mov     eax, [eax+28h]
0x43CB21: push    eax
0x43CB22: call    sub_435AB0
0x43CB27: cmp     dword ptr [esi+28h], 0
0x43CB2B: jz      short loc_43CB82
0x43CB2D: mov     ecx, [esi+20h]
0x43CB30: mov     edx, [ecx]
0x43CB32: mov     eax, [edx+190h]
0x43CB38: call    eax
0x43CB3A: test    al, al
0x43CB3C: jnz     short loc_43CB82
0x43CB3E: mov     ecx, [esi+20h]; this
0x43CB41: push    0; a2
0x43CB43: call    TESObjectREFR_GetParentCell
0x43CB48: mov     ecx, TES
0x43CB4E: push    eax; a1
0x43CB4F: call    TESObjectCELL_IsProcessLevel?LowHigh
0x43CB54: test    al, al
0x43CB56: jz      short loc_43CB82
0x43CB58: mov     ecx, [esi+20h]
0x43CB5B: push    ecx
0x43CB5C: mov     ecx, TES
0x43CB62: call    sub_441E90
0x43CB67: test    al, al
0x43CB69: jz      short loc_43CB82
0x43CB6B: mov     edx, [esi+20h]
0x43CB6E: cmp     dword ptr [edx+3Ch], 0
0x43CB72: jnz     short loc_43CB82
0x43CB74: mov     ecx, ModelLoaderPtr
0x43CB7A: push    esi
0x43CB7B: call    sub_43C530
0x43CB80: pop     esi
0x43CB81: retn
0x43CB82: mov     ecx, esi
0x43CB84: pop     esi
0x43CB85: jmp     sub_4BD750
