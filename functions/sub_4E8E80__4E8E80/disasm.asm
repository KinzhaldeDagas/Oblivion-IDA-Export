0x4E8E80: mov     edx, [ecx+20h]; Verified: iterates every connected-point list bucket and calls sub_67EDA0 on each node. That helper clears coordinate/temporary fields and masks the flag byte at +0x10; exact field meanings remain Unknown.
0x4E8E83: sub     esp, 0Ch
0x4E8E86: push    esi
0x4E8E87: push    edi
0x4E8E88: lea     edi, [ecx+1Ch]
0x4E8E8B: xor     eax, eax
0x4E8E8D: test    edx, edx
0x4E8E8F: jbe     short loc_4E8EA5
0x4E8E91: mov     esi, [edi+8]
0x4E8E94: mov     ecx, esi
0x4E8E96: cmp     dword ptr [ecx], 0
0x4E8E99: jnz     short loc_4E8EFC
0x4E8E9B: add     eax, 1
0x4E8E9E: add     ecx, 4
0x4E8EA1: cmp     eax, edx
0x4E8EA3: jb      short loc_4E8E96
0x4E8EA5: xor     eax, eax
0x4E8EA7: test    eax, eax
0x4E8EA9: mov     [esp+14h+position], eax
0x4E8EAD: jz      short loc_4E8EF6
0x4E8EAF: nop
0x4E8EB0: lea     eax, [esp+14h+valueOut]
0x4E8EB4: push    eax; valueOut
0x4E8EB5: lea     ecx, [esp+18h+keyOut]
0x4E8EB9: push    ecx; keyOut
0x4E8EBA: lea     edx, [esp+1Ch+position]
0x4E8EBE: push    edx; position
0x4E8EBF: mov     ecx, edi; self
0x4E8EC1: mov     [esp+20h+valueOut], 0
0x4E8EC9: call    NiTMap_U32Pointer_GetNextEntry
0x4E8ECE: mov     esi, [esp+14h+valueOut]
0x4E8ED2: test    esi, esi
0x4E8ED4: jz      short loc_4E8EEF
0x4E8ED6: cmp     dword ptr [esi+4], 0
0x4E8EDA: jnz     short loc_4E8EE1
0x4E8EDC: cmp     dword ptr [esi], 0
0x4E8EDF: jz      short loc_4E8EEF
0x4E8EE1: mov     ecx, [esi]; this
0x4E8EE3: call    GraphNode_ResetTransientSearchState; Verified resets graph-node scratch state: clears F/G/H at +0/+4/+8, predecessor at +0x0C, and masks flags at +0x10 with 0x68, preserving bits 0x08/0x20/0x40 while clearing the other transient bits.
0x4E8EE8: mov     esi, [esi+4]
0x4E8EEB: test    esi, esi
0x4E8EED: jnz     short loc_4E8ED6
0x4E8EEF: cmp     [esp+14h+position], 0
0x4E8EF4: jnz     short loc_4E8EB0
0x4E8EF6: pop     edi
0x4E8EF7: pop     esi
0x4E8EF8: add     esp, 0Ch
0x4E8EFB: retn
0x4E8EFC: mov     eax, [esi+eax*4]
0x4E8EFF: jmp     short loc_4E8EA7
