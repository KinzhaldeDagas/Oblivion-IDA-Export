0x61E980: push    ebx
0x61E981: push    esi
0x61E982: push    edi
0x61E983: mov     edi, [esp+0Ch+arg_0]
0x61E987: xor     bl, bl
0x61E989: test    edi, edi
0x61E98B: mov     esi, ecx
0x61E98D: jz      short loc_61E993
0x61E98F: mov     bl, 1
0x61E991: jmp     short loc_61E9A2
0x61E993: call    sub_6135F0
0x61E998: mov     edi, eax
0x61E99A: test    edi, edi
0x61E99C: jz      loc_61EAD8
0x61E9A2: mov     ecx, esi
0x61E9A4: call    sub_6135F0
0x61E9A9: push    eax
0x61E9AA: mov     ecx, esi
0x61E9AC: call    sub_613640
0x61E9B1: cmp     byte ptr [eax+8], 0
0x61E9B5: jnz     loc_61EAD1
0x61E9BB: test    edi, edi
0x61E9BD: push    ebp
0x61E9BE: mov     ebp, [esi+40h]
0x61E9C1: jz      loc_61EAD0
0x61E9C7: mov     ecx, [esi+40h]
0x61E9CA: xor     eax, eax
0x61E9CC: test    ecx, ecx
0x61E9CE: jz      short loc_61EA0C
0x61E9D0: cmp     [ecx+4], eax
0x61E9D3: jnz     short loc_61E9D9
0x61E9D5: cmp     [ecx], eax
0x61E9D7: jz      short loc_61EA0C
0x61E9D9: mov     eax, [ecx]
0x61E9DB: test    eax, eax
0x61E9DD: jz      short loc_61E9E3
0x61E9DF: mov     eax, [eax]
0x61E9E1: jmp     short loc_61EA0C
0x61E9E3: mov     eax, [ecx+4]
0x61E9E6: test    eax, eax
0x61E9E8: jz      short loc_61E9FF
0x61E9EA: mov     edx, [eax+4]
0x61E9ED: mov     [ecx+4], edx
0x61E9F0: mov     edx, [eax]
0x61E9F2: push    eax
0x61E9F3: mov     [ecx], edx
0x61E9F5: call    FormHeapFree
0x61E9FA: add     esp, 4
0x61E9FD: jmp     short loc_61EA05
0x61E9FF: mov     dword ptr [ecx], 0
0x61EA05: mov     ecx, esi
0x61EA07: call    sub_6135F0
0x61EA0C: cmp     edi, eax
0x61EA0E: jnz     loc_61EAA3
0x61EA14: mov     eax, [esi+40h]
0x61EA17: test    eax, eax
0x61EA19: jz      short loc_61EA92
0x61EA1B: cmp     dword ptr [eax+4], 0
0x61EA1F: jnz     short loc_61EA26
0x61EA21: cmp     dword ptr [eax], 0
0x61EA24: jz      short loc_61EA92
0x61EA26: mov     ecx, [eax]
0x61EA28: test    ecx, ecx
0x61EA2A: jz      short loc_61EA30
0x61EA2C: mov     eax, [ecx]
0x61EA2E: jmp     short loc_61EA59
0x61EA30: mov     ecx, [eax+4]
0x61EA33: test    ecx, ecx
0x61EA35: jz      short loc_61EA4C
0x61EA37: mov     edx, [ecx+4]
0x61EA3A: mov     [eax+4], edx
0x61EA3D: mov     edx, [ecx]
0x61EA3F: push    ecx
0x61EA40: mov     [eax], edx
0x61EA42: call    FormHeapFree
0x61EA47: add     esp, 4
0x61EA4A: jmp     short loc_61EA52
0x61EA4C: mov     dword ptr [eax], 0
0x61EA52: mov     ecx, esi
0x61EA54: call    sub_6135F0
0x61EA59: test    eax, eax
0x61EA5B: jz      short loc_61EA92
0x61EA5D: mov     ecx, esi
0x61EA5F: call    sub_6135F0
0x61EA64: mov     ecx, eax
0x61EA66: call    Actor_IsSwimming
0x61EA6B: test    al, al
0x61EA6D: jz      short loc_61EA92
0x61EA6F: mov     ecx, [esi+3Ch]
0x61EA72: call    Actor_IsSwimming
0x61EA77: test    al, al
0x61EA79: jnz     short loc_61EA92
0x61EA7B: mov     ecx, [esi+3Ch]
0x61EA7E: call    Actor_CanFightInWater
0x61EA83: test    al, al
0x61EA85: jnz     short loc_61EA92
0x61EA87: xor     ecx, ecx
0x61EA89: test    al, al
0x61EA8B: setz    cl
0x61EA8E: mov     eax, ecx
0x61EA90: jmp     short loc_61EAA5
0x61EA92: mov     al, [esi+174h]
0x61EA98: xor     ecx, ecx
0x61EA9A: test    al, al
0x61EA9C: setz    cl
0x61EA9F: mov     eax, ecx
0x61EAA1: jmp     short loc_61EAA5
0x61EAA3: xor     eax, eax
0x61EAA5: push    0
0x61EAA7: push    eax
0x61EAA8: push    edi
0x61EAA9: mov     ecx, esi
0x61EAAB: call    sub_619D40
0x61EAB0: test    bl, bl
0x61EAB2: jnz     short loc_61EAD0
0x61EAB4: test    ebp, ebp
0x61EAB6: jz      short loc_61EAC8
0x61EAB8: mov     ebp, [ebp+4]
0x61EABB: test    ebp, ebp
0x61EABD: jz      short loc_61EAD0
0x61EABF: mov     eax, [ebp+0]
0x61EAC2: test    eax, eax
0x61EAC4: jz      short loc_61EAD0
0x61EAC6: mov     edi, [eax]
0x61EAC8: test    edi, edi
0x61EACA: jnz     loc_61E9C7
0x61EAD0: pop     ebp
0x61EAD1: mov     ecx, esi
0x61EAD3: call    sub_619C90
0x61EAD8: pop     edi
0x61EAD9: pop     esi
0x61EADA: pop     ebx
0x61EADB: retn    4
