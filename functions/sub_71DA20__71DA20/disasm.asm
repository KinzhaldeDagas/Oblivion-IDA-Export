0x71DA20: push    ecx
0x71DA21: mov     eax, [esp+4+arg_4]
0x71DA25: test    eax, eax
0x71DA27: push    edi
0x71DA28: mov     edi, [esp+8+arg_C]
0x71DA2C: jbe     loc_71DAF3
0x71DA32: push    ebx
0x71DA33: push    ebp
0x71DA34: push    esi
0x71DA35: mov     esi, [esp+14h+arg_18]
0x71DA39: mov     [esp+14h+var_4], eax
0x71DA3D: mov     eax, [esp+14h+arg_14]
0x71DA41: mov     ebp, [esp+14h+arg_0]
0x71DA45: test    ebp, ebp
0x71DA47: jbe     loc_71DAE5
0x71DA4D: lea     ecx, [ecx+0]
0x71DA50: mov     dl, [esi]
0x71DA52: mov     bl, [esi+1]
0x71DA55: add     esi, 1
0x71DA58: movzx   ecx, byte ptr [esi+1]
0x71DA5C: add     esi, 1
0x71DA5F: mov     byte ptr [esp+14h+arg_4], cl
0x71DA63: movzx   ecx, byte ptr [esi+1]
0x71DA67: add     esi, 1
0x71DA6A: mov     byte ptr [esp+14h+arg_C], cl
0x71DA6E: movzx   ecx, byte ptr [eax+15h]
0x71DA72: shr     bl, cl
0x71DA74: movzx   ecx, byte ptr [eax+11h]
0x71DA78: movzx   bx, bl
0x71DA7C: shl     bx, cl
0x71DA7F: movzx   ecx, byte ptr [eax+14h]
0x71DA83: and     bx, [eax+4]
0x71DA87: shr     dl, cl
0x71DA89: movzx   ecx, byte ptr [eax+10h]
0x71DA8D: movzx   dx, dl
0x71DA91: shl     dx, cl
0x71DA94: movzx   ecx, byte ptr [eax+17h]
0x71DA98: and     dx, [eax]
0x71DA9B: add     esi, 1
0x71DA9E: or      bx, dx
0x71DAA1: mov     dl, byte ptr [esp+14h+arg_C]
0x71DAA5: shr     dl, cl
0x71DAA7: movzx   ecx, byte ptr [eax+13h]
0x71DAAB: movzx   dx, dl
0x71DAAF: shl     dx, cl
0x71DAB2: movzx   ecx, byte ptr [eax+16h]
0x71DAB6: and     dx, [eax+0Ch]
0x71DABA: add     edi, 2
0x71DABD: or      bx, dx
0x71DAC0: mov     dl, byte ptr [esp+14h+arg_4]
0x71DAC4: shr     dl, cl
0x71DAC6: movzx   ecx, byte ptr [eax+12h]
0x71DACA: movzx   dx, dl
0x71DACE: shl     dx, cl
0x71DAD1: and     dx, [eax+8]
0x71DAD5: or      bx, dx
0x71DAD8: sub     ebp, 1
0x71DADB: mov     [edi-2], bx
0x71DADF: jnz     loc_71DA50
0x71DAE5: sub     [esp+14h+var_4], 1
0x71DAEA: jnz     loc_71DA41
0x71DAF0: pop     esi
0x71DAF1: pop     ebp
0x71DAF2: pop     ebx
0x71DAF3: pop     edi
0x71DAF4: pop     ecx
0x71DAF5: retn
