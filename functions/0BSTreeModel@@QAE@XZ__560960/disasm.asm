0x560960: push    0FFFFFFFFh
0x560962: push    offset ??0BSTreeModel@@QAE@XZ_SEH
0x560967: mov     eax, large fs:0
0x56096D: push    eax
0x56096E: push    ecx
0x56096F: push    ebx
0x560970: push    ebp
0x560971: push    esi
0x560972: push    edi
0x560973: mov     eax, ds:0B30AACh
0x560978: xor     eax, esp
0x56097A: push    eax
0x56097B: lea     eax, [esp+24h+var_C]
0x56097F: mov     large fs:0, eax
0x560985: mov     esi, ecx
0x560987: mov     [esp+24h+var_10], esi
0x56098B: xor     ebx, ebx
0x56098D: push    offset NiRefObject_objcount; lpAddend
0x560992: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x560998: mov     [esi+4], ebx
0x56099B: call    dword ptr ds:0A28078h
0x5609A1: mov     dword ptr [esi], offset ??_7BSTreeModel@@6B@; const BSTreeModel::`vftable'
0x5609A7: mov     [esp+24h+var_4], ebx
0x5609AB: mov     [esi+10h], ebx
0x5609AE: mov     [esi+1Ch], ebx
0x5609B1: mov     [esi+20h], ebx
0x5609B4: mov     [esi+34h], ebx
0x5609B7: mov     [esi+38h], ebx
0x5609BA: mov     [esi+3Ch], ebx
0x5609BD: mov     [esi+40h], ebx
0x5609C0: mov     ebp, ds:0A2807Ch
0x5609C6: mov     [esi+0Ch], ebx
0x5609C9: mov     [esi+8], ebx
0x5609CC: mov     [esi+14h], ebx
0x5609CF: mov     [esi+18h], ebx
0x5609D2: mov     edi, [esi+1Ch]
0x5609D5: cmp     edi, ebx
0x5609D7: mov     byte ptr [esp+24h+var_4], 7
0x5609DC: jz      short loc_5609F9
0x5609DE: lea     eax, [edi+4]
0x5609E1: push    eax; lpAddend
0x5609E2: call    ebp ; InterlockedDecrement
0x5609E4: test    eax, eax
0x5609E6: jnz     short loc_5609F6
0x5609E8: cmp     edi, ebx
0x5609EA: jz      short loc_5609F6
0x5609EC: mov     edx, [edi]
0x5609EE: mov     eax, [edx]
0x5609F0: push    1
0x5609F2: mov     ecx, edi
0x5609F4: call    eax
0x5609F6: mov     [esi+1Ch], ebx
0x5609F9: mov     edi, [esi+20h]
0x5609FC: cmp     edi, ebx
0x5609FE: jz      short loc_560A1B
0x560A00: lea     ecx, [edi+4]
0x560A03: push    ecx; lpAddend
0x560A04: call    ebp ; InterlockedDecrement
0x560A06: test    eax, eax
0x560A08: jnz     short loc_560A18
0x560A0A: cmp     edi, ebx
0x560A0C: jz      short loc_560A18
0x560A0E: mov     edx, [edi]
0x560A10: mov     eax, [edx]
0x560A12: push    1
0x560A14: mov     ecx, edi
0x560A16: call    eax
0x560A18: mov     [esi+20h], ebx
0x560A1B: mov     [esi+24h], ebx
0x560A1E: mov     [esi+28h], ebx
0x560A21: mov     [esi+2Ch], ebx
0x560A24: mov     [esi+30h], ebx
0x560A27: mov     edi, [esi+34h]
0x560A2A: cmp     edi, ebx
0x560A2C: jz      short loc_560A49
0x560A2E: lea     ecx, [edi+4]
0x560A31: push    ecx; lpAddend
0x560A32: call    ebp ; InterlockedDecrement
0x560A34: test    eax, eax
0x560A36: jnz     short loc_560A46
0x560A38: cmp     edi, ebx
0x560A3A: jz      short loc_560A46
0x560A3C: mov     edx, [edi]
0x560A3E: mov     eax, [edx]
0x560A40: push    1
0x560A42: mov     ecx, edi
0x560A44: call    eax
0x560A46: mov     [esi+34h], ebx
0x560A49: mov     edi, [esi+38h]
0x560A4C: cmp     edi, ebx
0x560A4E: jz      short loc_560A6B
0x560A50: lea     ecx, [edi+4]
0x560A53: push    ecx; lpAddend
0x560A54: call    ebp ; InterlockedDecrement
0x560A56: test    eax, eax
0x560A58: jnz     short loc_560A68
0x560A5A: cmp     edi, ebx
0x560A5C: jz      short loc_560A68
0x560A5E: mov     edx, [edi]
0x560A60: mov     eax, [edx]
0x560A62: push    1
0x560A64: mov     ecx, edi
0x560A66: call    eax
0x560A68: mov     [esi+38h], ebx
0x560A6B: mov     edi, [esi+3Ch]
0x560A6E: cmp     edi, ebx
0x560A70: jz      short loc_560A8D
0x560A72: lea     ecx, [edi+4]
0x560A75: push    ecx; lpAddend
0x560A76: call    ebp ; InterlockedDecrement
0x560A78: test    eax, eax
0x560A7A: jnz     short loc_560A8A
0x560A7C: cmp     edi, ebx
0x560A7E: jz      short loc_560A8A
0x560A80: mov     edx, [edi]
0x560A82: mov     eax, [edx]
0x560A84: push    1
0x560A86: mov     ecx, edi
0x560A88: call    eax
0x560A8A: mov     [esi+3Ch], ebx
0x560A8D: fldz
0x560A8F: mov     dword ptr [esi+48h], 1
0x560A96: fst     dword ptr [esi+44h]
0x560A99: mov     [esi+4Ch], bl
0x560A9C: fst     dword ptr [esi+50h]
0x560A9F: mov     eax, esi
0x560AA1: fstp    dword ptr [esi+54h]
0x560AA4: mov     ecx, dword ptr [esp+24h+var_C]
0x560AA8: mov     large fs:0, ecx
0x560AAF: pop     ecx
0x560AB0: pop     edi
0x560AB1: pop     esi
0x560AB2: pop     ebp
0x560AB3: pop     ebx
0x560AB4: add     esp, 10h
0x560AB7: retn
