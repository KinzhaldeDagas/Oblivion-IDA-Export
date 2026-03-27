0x926A60: push    0FFFFFFFFh
0x926A62: push    offset SEH_926A60
0x926A67: mov     eax, large fs:0
0x926A6D: push    eax
0x926A6E: push    ebx
0x926A6F: push    esi
0x926A70: push    edi
0x926A71: mov     eax, ds:0B30AACh
0x926A76: xor     eax, esp
0x926A78: push    eax
0x926A79: lea     eax, [esp+1Ch+var_C]
0x926A7D: mov     large fs:0, eax
0x926A83: mov     edi, ecx
0x926A85: mov     esi, [esp+1Ch+arg_0]
0x926A89: test    esi, esi
0x926A8B: mov     ebx, [edi+4]
0x926A8E: jnz     short loc_926AC3
0x926A90: mov     ecx, ds:0BA7D98h
0x926A96: mov     eax, [ecx]
0x926A98: mov     edx, [eax+10h]
0x926A9B: push    29h ; ')'
0x926A9D: push    0A0h ; ' '
0x926AA2: call    edx
0x926AA4: mov     word ptr [eax+4], 0A0h ; ' '
0x926AAA: mov     [esp+1Ch+arg_0], eax
0x926AAE: mov     ecx, eax
0x926AB0: mov     [esp+1Ch+var_4], esi
0x926AB4: call    sub_924930
0x926AB9: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x926AC1: mov     esi, eax
0x926AC3: mov     eax, [ebx+98h]
0x926AC9: push    eax
0x926ACA: mov     ecx, esi
0x926ACC: call    sub_924960
0x926AD1: mov     ecx, [esp+1Ch+arg_4]
0x926AD5: mov     al, [ebx+91h]
0x926ADB: push    ecx
0x926ADC: push    esi
0x926ADD: mov     ecx, edi
0x926ADF: mov     [esi+91h], al
0x926AE5: call    sub_8B2DD0
0x926AEA: mov     ecx, [esp+1Ch+var_C]
0x926AEE: mov     large fs:0, ecx
0x926AF5: pop     ecx
0x926AF6: pop     edi
0x926AF7: pop     esi
0x926AF8: pop     ebx
0x926AF9: add     esp, 0Ch
0x926AFC: retn    8
