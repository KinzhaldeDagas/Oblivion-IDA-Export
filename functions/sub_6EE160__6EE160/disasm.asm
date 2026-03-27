0x6EE160: sub     esp, 8
0x6EE163: mov     edx, [esp+8+arg_8]
0x6EE167: push    ebx
0x6EE168: mov     ebx, [esp+0Ch+arg_0]
0x6EE16C: push    esi
0x6EE16D: mov     esi, [esp+10h+arg_4]
0x6EE171: push    edi
0x6EE172: mov     edi, [esp+14h+arg_8]
0x6EE176: xor     al, al
0x6EE178: mov     byte ptr [esp+14h+var_4], al
0x6EE17C: mov     ecx, [esp+14h+var_4]
0x6EE180: mov     byte ptr [esp+14h+var_8], al
0x6EE184: mov     eax, [esp+14h+var_8]
0x6EE188: push    eax
0x6EE189: push    ecx
0x6EE18A: push    edx
0x6EE18B: push    edi
0x6EE18C: push    esi
0x6EE18D: push    ebx
0x6EE18E: call    sub_6EDB80
0x6EE193: sub     esi, ebx
0x6EE195: mov     eax, 4EC4EC4Fh
0x6EE19A: imul    esi
0x6EE19C: sar     edx, 4
0x6EE19F: mov     eax, edx
0x6EE1A1: shr     eax, 1Fh
0x6EE1A4: add     eax, edx
0x6EE1A6: imul    eax, 34h ; '4'
0x6EE1A9: add     esp, 18h
0x6EE1AC: add     eax, edi
0x6EE1AE: pop     edi
0x6EE1AF: pop     esi
0x6EE1B0: pop     ebx
0x6EE1B1: add     esp, 8
0x6EE1B4: retn
