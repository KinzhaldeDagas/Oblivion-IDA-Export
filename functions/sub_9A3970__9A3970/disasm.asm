0x9A3970: sub     esp, 8
0x9A3973: cmp     byte_B4295C, 0
0x9A397A: push    ebx
0x9A397B: push    ebp
0x9A397C: push    esi
0x9A397D: push    edi
0x9A397E: mov     edi, [esp+18h+arg_4]
0x9A3982: mov     esi, [edi+18h]
0x9A3985: movzx   ebx, byte ptr [edi+15h]
0x9A3989: mov     [esp+18h+var_8], 0
0x9A3991: jnz     short loc_9A3998
0x9A3993: call    sub_783D70
0x9A3998: mov     eax, dword_B42914[ebx*4]
0x9A399F: mov     ebx, [esp+18h+arg_1C]
0x9A39A3: push    esi
0x9A39A4: push    eax
0x9A39A5: push    ebx
0x9A39A6: call    sub_9A8290
0x9A39AB: mov     esi, [edi+10h]
0x9A39AE: mov     ebp, eax
0x9A39B0: lea     eax, [esp+24h+var_4]
0x9A39B4: push    eax
0x9A39B5: lea     ecx, [esp+28h+arg_4]
0x9A39B9: push    ecx
0x9A39BA: push    esi
0x9A39BB: call    sub_9A5610
0x9A39C0: add     esp, 18h
0x9A39C3: test    eax, eax
0x9A39C5: jnz     short loc_9A39D6
0x9A39C7: pop     edi
0x9A39C8: pop     esi
0x9A39C9: pop     ebp
0x9A39CA: mov     eax, 80000010h
0x9A39CF: pop     ebx
0x9A39D0: add     esp, 8
0x9A39D3: retn    2Ch ; ','
0x9A39D6: mov     edx, [esp+18h+arg_28]
0x9A39DA: mov     ecx, [esp+18h+arg_24]
0x9A39DE: mov     eax, [esp+18h+arg_4]
0x9A39E2: push    edx
0x9A39E3: mov     edx, [esp+1Ch+arg_20]
0x9A39E7: push    ecx
0x9A39E8: mov     ecx, [esp+20h+arg_18]
0x9A39EC: push    edx
0x9A39ED: mov     edx, [esp+24h+arg_14]
0x9A39F1: push    ebx
0x9A39F2: push    ecx
0x9A39F3: mov     ecx, [esp+2Ch+arg_10]
0x9A39F7: push    edx
0x9A39F8: mov     edx, [esp+30h+arg_C]
0x9A39FC: push    ecx
0x9A39FD: mov     ecx, [esp+34h+arg_8]
0x9A3A01: push    edx
0x9A3A02: push    ecx
0x9A3A03: add     eax, eax
0x9A3A05: push    ebp
0x9A3A06: add     eax, eax
0x9A3A08: push    esi
0x9A3A09: lea     edx, ds:0[eax*4]
0x9A3A10: push    edx
0x9A3A11: push    offset unk_BAA898
0x9A3A16: call    sub_9A66F0
0x9A3A1B: add     esp, 34h
0x9A3A1E: test    al, al
0x9A3A20: jnz     short loc_9A3A2A
0x9A3A22: mov     [esp+18h+var_8], 80000060h
0x9A3A2A: mov     ecx, [esp+18h+arg_0]
0x9A3A2E: mov     eax, [ecx]
0x9A3A30: mov     edx, [eax+30h]
0x9A3A33: push    0
0x9A3A35: push    offset unk_BAA898
0x9A3A3A: push    edi
0x9A3A3B: call    edx
0x9A3A3D: test    al, al
0x9A3A3F: jnz     short loc_9A3A49
0x9A3A41: mov     [esp+18h+var_8], 80000050h
0x9A3A49: mov     eax, [esp+18h+var_8]
0x9A3A4D: pop     edi
0x9A3A4E: pop     esi
0x9A3A4F: pop     ebp
0x9A3A50: pop     ebx
0x9A3A51: add     esp, 8
0x9A3A54: retn    2Ch ; ','
