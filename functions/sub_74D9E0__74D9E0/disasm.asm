0x74D9E0: push    ecx
0x74D9E1: push    ebx
0x74D9E2: mov     ebx, [esp+8+arg_0]
0x74D9E6: push    ebp
0x74D9E7: movzx   ebp, word ptr [esp+0Ch+arg_4]
0x74D9EC: mov     edx, ecx
0x74D9EE: mov     ecx, [ebx+5Ch]
0x74D9F1: lea     eax, ds:0[ebp*8]
0x74D9F8: sub     eax, ebp
0x74D9FA: movzx   eax, word ptr [ecx+eax*4+18h]
0x74D9FF: movzx   ecx, word ptr [edx+22h]
0x74DA03: cmp     ax, cx
0x74DA06: push    esi
0x74DA07: push    edi
0x74DA08: mov     [esp+14h+var_4], edx
0x74DA0C: jb      short loc_74DA14
0x74DA0E: add     ecx, 0FFFFFFFFh
0x74DA11: movzx   eax, cx
0x74DA14: movzx   edi, ax
0x74DA17: movzx   eax, word ptr [ebx+7Eh]
0x74DA1B: cmp     edi, eax
0x74DA1D: jb      short loc_74DA23
0x74DA1F: xor     esi, esi
0x74DA21: jmp     short loc_74DA4B
0x74DA23: mov     ecx, [ebx+78h]
0x74DA26: cmp     dword ptr [ecx+edi*4], 0
0x74DA2A: lea     eax, [ecx+edi*4]
0x74DA2D: jnz     short loc_74DA33
0x74DA2F: xor     esi, esi
0x74DA31: jmp     short loc_74DA4B
0x74DA33: mov     ecx, [eax]
0x74DA35: lea     edx, [esp+14h+arg_4]
0x74DA39: push    edx
0x74DA3A: call    sub_74D790
0x74DA3F: mov     esi, [esp+14h+arg_4]
0x74DA43: test    esi, esi
0x74DA45: jnz     short loc_74DA88
0x74DA47: mov     edx, [esp+14h+var_4]
0x74DA4B: mov     eax, [edx+1Ch]
0x74DA4E: mov     ecx, [eax+edi*4]
0x74DA51: call    sub_700900
0x74DA56: mov     edi, eax
0x74DA58: cmp     esi, edi
0x74DA5A: jz      short loc_74DA88
0x74DA5C: test    esi, esi
0x74DA5E: jz      short loc_74DA78
0x74DA60: lea     ecx, [esi+4]
0x74DA63: push    ecx; lpAddend
0x74DA64: call    dword ptr ds:0A2807Ch
0x74DA6A: test    eax, eax
0x74DA6C: jnz     short loc_74DA78
0x74DA6E: mov     edx, [esi]
0x74DA70: mov     eax, [edx]
0x74DA72: push    1
0x74DA74: mov     ecx, esi
0x74DA76: call    eax
0x74DA78: test    edi, edi
0x74DA7A: mov     esi, edi
0x74DA7C: jz      short loc_74DA88
0x74DA7E: add     edi, 4
0x74DA81: push    edi; lpAddend
0x74DA82: call    dword ptr ds:0A28078h
0x74DA88: fldz
0x74DA8A: or      word ptr [esi+18h], 1
0x74DA8F: push    ecx
0x74DA90: fstp    [esp+18h+var_18]; float
0x74DA93: push    esi; int
0x74DA94: call    sub_715C10
0x74DA99: mov     ecx, [ebx+68h]
0x74DA9C: mov     edx, [ecx]
0x74DA9E: mov     edx, [edx+90h]
0x74DAA4: add     esp, 8
0x74DAA7: push    esi
0x74DAA8: push    ebp
0x74DAA9: lea     eax, [esp+1Ch+arg_4]
0x74DAAD: push    eax
0x74DAAE: call    edx
0x74DAB0: mov     eax, [esp+14h+arg_4]
0x74DAB4: test    eax, eax
0x74DAB6: mov     ebx, ds:0A2807Ch
0x74DABC: jz      short loc_74DAD8
0x74DABE: mov     edi, eax
0x74DAC0: add     eax, 4
0x74DAC3: push    eax; lpAddend
0x74DAC4: call    ebx ; InterlockedDecrement
0x74DAC6: test    eax, eax
0x74DAC8: jnz     short loc_74DAD8
0x74DACA: test    edi, edi
0x74DACC: jz      short loc_74DAD8
0x74DACE: mov     eax, [edi]
0x74DAD0: mov     edx, [eax]
0x74DAD2: push    1
0x74DAD4: mov     ecx, edi
0x74DAD6: call    edx
0x74DAD8: mov     edi, [esp+14h+var_4]
0x74DADC: mov     ecx, [edi+10h]
0x74DADF: mov     edx, [ecx+0ACh]
0x74DAE5: mov     eax, [esi]
0x74DAE7: mov     eax, [eax+6Ch]
0x74DAEA: push    edx
0x74DAEB: mov     ecx, esi
0x74DAED: call    eax
0x74DAEF: mov     ecx, [edi+10h]
0x74DAF2: mov     edi, [ecx+0B0h]
0x74DAF8: test    edi, edi
0x74DAFA: jz      short loc_74DB06
0x74DAFC: lea     edx, [edi+4]
0x74DAFF: push    edx; lpAddend
0x74DB00: call    dword ptr ds:0A28078h
0x74DB06: mov     eax, [esi]
0x74DB08: mov     edx, [eax+70h]
0x74DB0B: push    edi
0x74DB0C: mov     ecx, esi
0x74DB0E: call    edx
0x74DB10: test    edi, edi
0x74DB12: jz      short loc_74DB28
0x74DB14: lea     eax, [edi+4]
0x74DB17: push    eax; lpAddend
0x74DB18: call    ebx ; InterlockedDecrement
0x74DB1A: test    eax, eax
0x74DB1C: jnz     short loc_74DB28
0x74DB1E: mov     edx, [edi]
0x74DB20: mov     eax, [edx]
0x74DB22: push    1
0x74DB24: mov     ecx, edi
0x74DB26: call    eax
0x74DB28: lea     ecx, [esi+4]
0x74DB2B: push    ecx; lpAddend
0x74DB2C: call    ebx ; InterlockedDecrement
0x74DB2E: test    eax, eax
0x74DB30: jnz     short loc_74DB3C
0x74DB32: mov     edx, [esi]
0x74DB34: mov     eax, [edx]
0x74DB36: push    1
0x74DB38: mov     ecx, esi
0x74DB3A: call    eax
0x74DB3C: pop     edi
0x74DB3D: pop     esi
0x74DB3E: pop     ebp
0x74DB3F: pop     ebx
0x74DB40: pop     ecx
0x74DB41: retn    8
