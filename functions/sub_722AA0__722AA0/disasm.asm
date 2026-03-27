0x722AA0: sub     esp, 20h
0x722AA3: push    esi
0x722AA4: mov     esi, ecx
0x722AA6: mov     ecx, [esi+24h]
0x722AA9: mov     eax, [esi+20h]
0x722AAC: mov     edx, [esi+28h]
0x722AAF: push    edi
0x722AB0: lea     edi, [esi+20h]
0x722AB3: mov     [esp+28h+var_1C], ecx
0x722AB7: mov     ecx, [esi+0B8h]
0x722ABD: test    ecx, ecx
0x722ABF: mov     [esp+28h+var_20], eax
0x722AC3: mov     eax, [edi+0Ch]
0x722AC6: mov     [esp+28h+var_18], edx
0x722ACA: mov     [esp+28h+var_14], eax
0x722ACE: jz      short loc_722AE5
0x722AD0: lea     edx, [esp+28h+var_10]
0x722AD4: push    edx
0x722AD5: call    sub_72BB30
0x722ADA: lea     eax, [esi+64h]
0x722ADD: push    eax
0x722ADE: lea     ecx, [esp+2Ch+var_10]
0x722AE2: push    ecx
0x722AE3: jmp     short loc_722AF3
0x722AE5: mov     eax, [esi+0B4h]
0x722AEB: lea     edx, [esi+64h]
0x722AEE: push    edx
0x722AEF: add     eax, 0Ch
0x722AF2: push    eax
0x722AF3: mov     ecx, edi
0x722AF5: call    sub_72A820
0x722AFA: mov     cl, [esi+18h]
0x722AFD: shr     cl, 7
0x722B00: test    cl, 1
0x722B03: jz      short loc_722B27
0x722B05: lea     edx, [esp+28h+var_20]
0x722B09: push    edx
0x722B0A: mov     ecx, edi
0x722B0C: call    sub_72A0A0
0x722B11: test    al, al
0x722B13: jz      short loc_722B21
0x722B15: or      word ptr [esi+18h], 80h
0x722B1B: pop     edi
0x722B1C: pop     esi
0x722B1D: add     esp, 20h
0x722B20: retn
0x722B21: and     word ptr [esi+18h], 0FF7Fh
0x722B27: pop     edi
0x722B28: pop     esi
0x722B29: add     esp, 20h
0x722B2C: retn
