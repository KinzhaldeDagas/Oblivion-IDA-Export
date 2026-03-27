0x5A3F40: push    0FFFFFFFFh
0x5A3F42: push    offset SEH_5A3F40
0x5A3F47: mov     eax, large fs:0
0x5A3F4D: push    eax
0x5A3F4E: push    ecx
0x5A3F4F: push    esi
0x5A3F50: push    edi
0x5A3F51: mov     eax, ds:0B30AACh
0x5A3F56: xor     eax, esp
0x5A3F58: push    eax
0x5A3F59: lea     eax, [esp+1Ch+var_C]
0x5A3F5D: mov     large fs:0, eax
0x5A3F63: mov     esi, ecx
0x5A3F65: mov     [esp+1Ch+var_10], esi
0x5A3F69: xor     edi, edi
0x5A3F6B: mov     [esi], edi
0x5A3F6D: mov     [esi+4], di
0x5A3F71: mov     [esi+6], di
0x5A3F75: push    offset sub_589BB0; a5
0x5A3F7A: push    offset sub_5A3E80; a4
0x5A3F7F: push    15h; size
0x5A3F81: push    1Ch; a2
0x5A3F83: lea     eax, [esi+60h]
0x5A3F86: push    eax; a1
0x5A3F87: mov     [esp+30h+var_4], edi
0x5A3F8B: call    ArrayConstructor
0x5A3F90: mov     eax, 3
0x5A3F95: mov     [esi+8], edi
0x5A3F98: mov     [esi+0Ch], eax
0x5A3F9B: mov     [esi+10h], eax
0x5A3F9E: mov     [esi+14h], eax
0x5A3FA1: mov     [esi+18h], eax
0x5A3FA4: mov     [esi+1Ch], eax
0x5A3FA7: mov     [esi+20h], eax
0x5A3FAA: mov     [esi+24h], eax
0x5A3FAD: mov     [esi+28h], eax
0x5A3FB0: mov     [esi+2Ch], eax
0x5A3FB3: mov     [esi+30h], eax
0x5A3FB6: mov     [esi+34h], eax
0x5A3FB9: mov     [esi+38h], eax
0x5A3FBC: mov     [esi+3Ch], eax
0x5A3FBF: mov     [esi+40h], eax
0x5A3FC2: mov     [esi+44h], eax
0x5A3FC5: mov     [esi+48h], eax
0x5A3FC8: mov     [esi+4Ch], eax
0x5A3FCB: mov     [esi+50h], eax
0x5A3FCE: mov     [esi+54h], eax
0x5A3FD1: mov     [esi+58h], eax
0x5A3FD4: mov     [esi+5Ch], eax
0x5A3FD7: mov     eax, esi
0x5A3FD9: mov     ecx, [esp+1Ch+var_C]
0x5A3FDD: mov     large fs:0, ecx
0x5A3FE4: pop     ecx
0x5A3FE5: pop     edi
0x5A3FE6: pop     esi
0x5A3FE7: add     esp, 10h
0x5A3FEA: retn
