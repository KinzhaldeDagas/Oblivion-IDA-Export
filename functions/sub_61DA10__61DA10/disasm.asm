0x61DA10: push    esi
0x61DA11: mov     esi, ecx
0x61DA13: mov     eax, [esi+40h]
0x61DA16: xor     ecx, ecx
0x61DA18: test    eax, eax
0x61DA1A: push    edi
0x61DA1B: jz      short loc_61DA79
0x61DA1D: lea     ecx, [ecx+0]
0x61DA20: cmp     dword ptr [eax], 0
0x61DA23: jz      short loc_61DA28
0x61DA25: add     ecx, 1
0x61DA28: mov     eax, [eax+4]
0x61DA2B: test    eax, eax
0x61DA2D: jnz     short loc_61DA20
0x61DA2F: cmp     ecx, 1
0x61DA32: jbe     short loc_61DA79
0x61DA34: push    ebx
0x61DA35: mov     ecx, esi
0x61DA37: call    sub_6135F0
0x61DA3C: mov     edi, [esi+40h]
0x61DA3F: test    edi, edi
0x61DA41: mov     ebx, eax
0x61DA43: jz      short loc_61DA60
0x61DA45: mov     eax, [edi]
0x61DA47: test    eax, eax
0x61DA49: jz      short loc_61DA60
0x61DA4B: jmp     short loc_61DA50
0x61DA4D: align 10h
0x61DA50: mov     eax, [eax]
0x61DA52: push    eax
0x61DA53: mov     ecx, esi
0x61DA55: call    sub_6162D0
0x61DA5A: mov     eax, [edi]
0x61DA5C: test    eax, eax
0x61DA5E: jnz     short loc_61DA50
0x61DA60: fldz
0x61DA62: sub     esp, 8
0x61DA65: fst     [esp+14h+var_10]; float
0x61DA69: mov     ecx, esi
0x61DA6B: fstp    [esp+14h+var_14]; float
0x61DA6E: push    0; float
0x61DA70: push    0; char
0x61DA72: push    ebx; int
0x61DA73: call    sub_616190
0x61DA78: pop     ebx
0x61DA79: cmp     dword ptr [esi+6Ch], 7
0x61DA7D: jnz     short loc_61DAA5
0x61DA7F: mov     ecx, [esi+3Ch]
0x61DA82: mov     ecx, [ecx+58h]
0x61DA85: mov     edx, [ecx]
0x61DA87: mov     eax, [edx+174h]
0x61DA8D: call    eax
0x61DA8F: cmp     eax, esi
0x61DA91: jz      short loc_61DAA5
0x61DA93: mov     ecx, [esi+3Ch]
0x61DA96: mov     ecx, [ecx+58h]
0x61DA99: mov     edx, [ecx]
0x61DA9B: mov     eax, [edx+178h]
0x61DAA1: push    0
0x61DAA3: call    eax
0x61DAA5: mov     edi, 5
0x61DAAA: cmp     [esi+70h], edi
0x61DAAD: jz      short loc_61DADF
0x61DAAF: cmp     byte ptr ds:0B3B908h, 0
0x61DAB6: jz      short loc_61DAD3
0x61DAB8: mov     ecx, [esi+3Ch]; this
0x61DABB: push    offset aAttemptToYield; "attempt to Yield"
0x61DAC0: call    TESObjectREFR_GetName
0x61DAC5: push    eax
0x61DAC6: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x61DACB: call    Interface_ConsolePrint
0x61DAD0: add     esp, 0Ch
0x61DAD3: fld     dword ptr ds:0A30634h
0x61DAD9: fstp    dword ptr [esi+188h]
0x61DADF: push    0
0x61DAE1: mov     ecx, esi
0x61DAE3: mov     [esi+70h], edi
0x61DAE6: call    sub_619920
0x61DAEB: pop     edi
0x61DAEC: mov     ecx, esi
0x61DAEE: pop     esi
0x61DAEF: jmp     sub_619640
