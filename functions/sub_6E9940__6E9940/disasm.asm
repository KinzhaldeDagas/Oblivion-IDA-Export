0x6E9940: sub     esp, 8
0x6E9943: push    ebx
0x6E9944: push    ebp
0x6E9945: push    esi
0x6E9946: mov     esi, [esp+14h+arg_0]
0x6E994A: push    edi
0x6E994B: push    esi
0x6E994C: mov     ebx, ecx
0x6E994E: call    sub_716050
0x6E9953: mov     eax, [esi+220h]
0x6E9959: push    1
0x6E995B: lea     ecx, [esp+1Ch+arg_0]
0x6E995F: push    ecx
0x6E9960: mov     ebp, 4
0x6E9965: push    ebp
0x6E9966: lea     edx, [ebx+3Ch]
0x6E9969: push    edx
0x6E996A: push    eax
0x6E996B: mov     eax, [eax+8]
0x6E996E: mov     [esp+2Ch+arg_0], ebp
0x6E9972: call    eax
0x6E9974: mov     eax, [esi+220h]
0x6E997A: push    1
0x6E997C: lea     ecx, [esp+30h+arg_0]
0x6E9980: push    ecx
0x6E9981: push    ebp
0x6E9982: lea     edx, [ebx+40h]
0x6E9985: push    edx
0x6E9986: push    eax
0x6E9987: mov     eax, [eax+8]
0x6E998A: mov     [esp+40h+arg_0], ebp
0x6E998E: call    eax
0x6E9990: movzx   ecx, word ptr [ebx+4Eh]
0x6E9994: mov     eax, [esi+220h]
0x6E999A: push    1
0x6E999C: lea     edx, [esp+44h+arg_0]
0x6E99A0: push    edx
0x6E99A1: mov     [esp+48h+var_8], ecx
0x6E99A5: mov     edx, [eax+8]
0x6E99A8: push    ebp
0x6E99A9: lea     ecx, [esp+4Ch+var_8]
0x6E99AD: push    ecx
0x6E99AE: push    eax
0x6E99AF: mov     [esp+54h+arg_0], ebp
0x6E99B3: call    edx
0x6E99B5: add     esp, 3Ch
0x6E99B8: cmp     word ptr [ebx+4Eh], 0
0x6E99BD: mov     [esp+18h+arg_0], 0
0x6E99C5: jbe     short loc_6E9A3F
0x6E99C7: jmp     short loc_6E99D0
0x6E99C9: align 10h
0x6E99D0: mov     eax, [ebx+48h]
0x6E99D3: mov     ecx, [esp+18h+arg_0]
0x6E99D7: mov     edi, [eax+ecx*4]
0x6E99DA: test    edi, edi
0x6E99DC: mov     eax, [esi+220h]
0x6E99E2: push    1
0x6E99E4: jz      loc_6E9B5A
0x6E99EA: mov     edx, [edi+8]
0x6E99ED: lea     ecx, [esp+1Ch+var_8]
0x6E99F1: push    ecx
0x6E99F2: mov     [esp+20h+var_4], edx
0x6E99F6: push    ebp
0x6E99F7: lea     edx, [esp+24h+var_4]
0x6E99FB: push    edx
0x6E99FC: push    eax
0x6E99FD: mov     eax, [eax+8]
0x6E9A00: mov     [esp+2Ch+var_8], ebp
0x6E9A04: call    eax
0x6E9A06: xor     ebp, ebp
0x6E9A08: add     esp, 14h
0x6E9A0B: cmp     [edi+8], ebp
0x6E9A0E: jbe     short loc_6E9A27
0x6E9A10: mov     eax, [edi]
0x6E9A12: mov     ecx, [eax+ebp*4]
0x6E9A15: mov     edx, [esi]
0x6E9A17: mov     edx, [edx+2Ch]
0x6E9A1A: push    ecx
0x6E9A1B: mov     ecx, esi
0x6E9A1D: call    edx
0x6E9A1F: add     ebp, 1
0x6E9A22: cmp     ebp, [edi+8]
0x6E9A25: jb      short loc_6E9A10
0x6E9A27: mov     ebp, 4
0x6E9A2C: mov     eax, [esp+18h+arg_0]
0x6E9A30: movzx   ecx, word ptr [ebx+4Eh]
0x6E9A34: add     eax, 1
0x6E9A37: cmp     eax, ecx
0x6E9A39: mov     [esp+18h+arg_0], eax
0x6E9A3D: jb      short loc_6E99D0
0x6E9A3F: movzx   edx, word ptr [ebx+5Eh]
0x6E9A43: mov     eax, [esi+220h]
0x6E9A49: push    1
0x6E9A4B: lea     ecx, [esp+1Ch+arg_0]
0x6E9A4F: push    ecx
0x6E9A50: mov     [esp+20h+var_4], edx
0x6E9A54: push    ebp
0x6E9A55: lea     edx, [esp+24h+var_4]
0x6E9A59: push    edx
0x6E9A5A: push    eax
0x6E9A5B: mov     eax, [eax+8]
0x6E9A5E: mov     [esp+2Ch+arg_0], ebp
0x6E9A62: call    eax
0x6E9A64: add     esp, 14h
0x6E9A67: cmp     word ptr [ebx+5Eh], 0
0x6E9A6C: mov     [esp+18h+arg_0], 0
0x6E9A74: jbe     loc_6E9B0A
0x6E9A7A: lea     ebx, [ebx+0]
0x6E9A80: mov     ecx, [ebx+58h]
0x6E9A83: mov     edx, [esp+18h+arg_0]
0x6E9A87: mov     edi, [ecx+edx*4]
0x6E9A8A: test    edi, edi
0x6E9A8C: push    1
0x6E9A8E: lea     ecx, [esp+1Ch+var_4]
0x6E9A92: push    ecx
0x6E9A93: lea     edx, [esp+20h+var_8]
0x6E9A97: push    ebp
0x6E9A98: mov     [esp+24h+var_4], ebp
0x6E9A9C: push    edx
0x6E9A9D: jz      loc_6E9B7F
0x6E9AA3: mov     eax, [edi+8]
0x6E9AA6: mov     [esp+28h+var_8], eax
0x6E9AAA: mov     eax, [esi+220h]
0x6E9AB0: push    eax
0x6E9AB1: mov     eax, [eax+8]
0x6E9AB4: call    eax
0x6E9AB6: xor     ebp, ebp
0x6E9AB8: add     esp, 14h
0x6E9ABB: cmp     [edi+8], ebp
0x6E9ABE: jbe     short loc_6E9AEE
0x6E9AC0: mov     ecx, [edi]
0x6E9AC2: mov     eax, [ecx+ebp*4]
0x6E9AC5: mov     edx, [esi]
0x6E9AC7: mov     edx, [edx+2Ch]
0x6E9ACA: mov     [esp+18h+var_4], eax
0x6E9ACE: mov     eax, [eax]
0x6E9AD0: push    eax
0x6E9AD1: mov     ecx, esi
0x6E9AD3: call    edx
0x6E9AD5: mov     ecx, [esp+18h+var_4]
0x6E9AD9: mov     edx, [ecx+4]
0x6E9ADC: mov     eax, [esi]
0x6E9ADE: mov     eax, [eax+2Ch]
0x6E9AE1: push    edx
0x6E9AE2: mov     ecx, esi
0x6E9AE4: call    eax
0x6E9AE6: add     ebp, 1
0x6E9AE9: cmp     ebp, [edi+8]
0x6E9AEC: jb      short loc_6E9AC0
0x6E9AEE: mov     ebp, 4
0x6E9AF3: mov     eax, [esp+18h+arg_0]
0x6E9AF7: movzx   ecx, word ptr [ebx+5Eh]
0x6E9AFB: add     eax, 1
0x6E9AFE: cmp     eax, ecx
0x6E9B00: mov     [esp+18h+arg_0], eax
0x6E9B04: jb      loc_6E9A80
0x6E9B0A: mov     edx, [ebx+6Ch]
0x6E9B0D: mov     eax, [esi+220h]
0x6E9B13: push    1
0x6E9B15: lea     ecx, [esp+1Ch+arg_0]
0x6E9B19: push    ecx
0x6E9B1A: mov     [esp+20h+var_4], edx
0x6E9B1E: push    ebp
0x6E9B1F: lea     edx, [esp+24h+var_4]
0x6E9B23: push    edx
0x6E9B24: push    eax
0x6E9B25: mov     eax, [eax+8]
0x6E9B28: mov     [esp+2Ch+arg_0], ebp
0x6E9B2C: call    eax
0x6E9B2E: xor     edi, edi
0x6E9B30: add     esp, 14h
0x6E9B33: cmp     [ebx+6Ch], edi
0x6E9B36: jbe     short loc_6E9B50
0x6E9B38: mov     eax, [ebx+64h]
0x6E9B3B: mov     ecx, [eax+edi*4]
0x6E9B3E: mov     edx, [esi]
0x6E9B40: mov     edx, [edx+2Ch]
0x6E9B43: push    ecx
0x6E9B44: mov     ecx, esi
0x6E9B46: call    edx
0x6E9B48: add     edi, 1
0x6E9B4B: cmp     edi, [ebx+6Ch]
0x6E9B4E: jb      short loc_6E9B38
0x6E9B50: pop     edi
0x6E9B51: pop     esi
0x6E9B52: pop     ebp
0x6E9B53: pop     ebx
0x6E9B54: add     esp, 8
0x6E9B57: retn    4
0x6E9B5A: lea     ecx, [esp+1Ch+var_4]
0x6E9B5E: push    ecx
0x6E9B5F: push    ebp
0x6E9B60: lea     edx, [esp+24h+var_8]
0x6E9B64: push    edx
0x6E9B65: mov     [esp+28h+var_8], 0
0x6E9B6D: push    eax
0x6E9B6E: mov     eax, [eax+8]
0x6E9B71: mov     [esp+2Ch+var_4], ebp
0x6E9B75: call    eax
0x6E9B77: add     esp, 14h
0x6E9B7A: jmp     loc_6E9A2C
0x6E9B7F: mov     eax, [esi+220h]
0x6E9B85: mov     [esp+28h+var_8], 0
0x6E9B8D: push    eax
0x6E9B8E: mov     eax, [eax+8]
0x6E9B91: call    eax
0x6E9B93: add     esp, 14h
0x6E9B96: jmp     loc_6E9AF3
