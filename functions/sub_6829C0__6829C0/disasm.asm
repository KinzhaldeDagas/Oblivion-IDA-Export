0x6829C0: sub     esp, 8
0x6829C3: push    ebp
0x6829C4: push    edi
0x6829C5: mov     edi, ecx
0x6829C7: mov     ecx, offset unk_B3C000
0x6829CC: call    sub_49F470
0x6829D1: cmp     dword ptr [edi+40h], 0
0x6829D5: lea     ebp, [edi+40h]
0x6829D8: jnz     loc_682A72
0x6829DE: push    ebx
0x6829DF: lea     ecx, [edi+10h]; self
0x6829E2: push    esi
0x6829E3: mov     esi, [ecx+4]
0x6829E6: xor     eax, eax
0x6829E8: test    esi, esi
0x6829EA: jbe     short loc_682A04
0x6829EC: mov     ebx, [ecx+8]
0x6829EF: mov     edx, ebx
0x6829F1: cmp     dword ptr [edx], 0
0x6829F4: jnz     loc_682A81
0x6829FA: add     eax, 1
0x6829FD: add     edx, 4
0x682A00: cmp     eax, esi
0x682A02: jb      short loc_6829F1
0x682A04: xor     eax, eax
0x682A06: test    eax, eax
0x682A08: mov     [esp+18h+position], eax
0x682A0C: jz      short loc_682A1E
0x682A0E: push    ebp; valueOut
0x682A0F: lea     eax, [esp+1Ch+keyOut]
0x682A13: push    eax; keyOut
0x682A14: lea     edx, [esp+20h+position]
0x682A18: push    edx; position
0x682A19: call    NiTMap_U32Pointer_GetNextEntry
0x682A1E: cmp     dword ptr [ebp+0], 0
0x682A22: jnz     short loc_682A48
0x682A24: lea     esi, [edi+20h]
0x682A27: mov     ecx, esi
0x682A29: call    NiTMapBase_GetFirstNode
0x682A2E: test    eax, eax
0x682A30: mov     [esp+18h+position], eax
0x682A34: jz      short loc_682A48
0x682A36: push    ebp; valueOut
0x682A37: lea     eax, [esp+1Ch+keyOut]
0x682A3B: push    eax; keyOut
0x682A3C: lea     ecx, [esp+20h+position]
0x682A40: push    ecx; position
0x682A41: mov     ecx, esi; self
0x682A43: call    NiTMap_U32Pointer_GetNextEntry
0x682A48: mov     esi, [ebp+0]
0x682A4B: test    esi, esi
0x682A4D: jz      short loc_682A70
0x682A4F: push    2
0x682A51: push    offset aPathbuilder; "PathBuilder"
0x682A56: mov     ecx, edi
0x682A58: call    sub_42FA10
0x682A5D: push    0
0x682A5F: mov     ecx, edi
0x682A61: call    sub_42FC90
0x682A66: mov     ecx, edi
0x682A68: mov     [edi+44h], esi
0x682A6B: call    sub_42FD10
0x682A70: pop     esi
0x682A71: pop     ebx
0x682A72: pop     edi
0x682A73: mov     ecx, offset unk_B3C000
0x682A78: pop     ebp
0x682A79: add     esp, 8
0x682A7C: jmp     j_NiLeaveCriticalSection_0
0x682A81: mov     eax, [ebx+eax*4]
0x682A84: jmp     short loc_682A06
