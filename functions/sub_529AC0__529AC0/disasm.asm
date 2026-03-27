0x529AC0: push    ebx
0x529AC1: push    esi
0x529AC2: push    edi
0x529AC3: mov     edi, ecx
0x529AC5: lea     esi, [edi+40h]
0x529AC8: test    esi, esi
0x529ACA: jz      short loc_529AE7
0x529ACC: mov     bl, [esp+0Ch+arg_0]
0x529AD0: mov     eax, [esi+4]
0x529AD3: test    eax, eax
0x529AD5: jnz     short loc_529ADB
0x529AD7: cmp     [esi], eax
0x529AD9: jz      short loc_529AE7
0x529ADB: mov     ecx, [esi]
0x529ADD: cmp     [ecx], bl
0x529ADF: jz      short loc_529AEF
0x529AE1: mov     esi, eax
0x529AE3: test    esi, esi
0x529AE5: jnz     short loc_529AD0
0x529AE7: pop     edi
0x529AE8: pop     esi
0x529AE9: xor     al, al
0x529AEB: pop     ebx
0x529AEC: retn    4
0x529AEF: mov     al, [edi+3Ch]
0x529AF2: test    al, 2
0x529AF4: jz      short loc_529AFA
0x529AF6: test    al, 8
0x529AF8: jz      short loc_529B09
0x529AFA: or      byte ptr [edi+3Ch], 1
0x529AFE: mov     edx, [edi]
0x529B00: mov     eax, [edx+40h]
0x529B03: push    4
0x529B05: mov     ecx, edi
0x529B07: call    eax
0x529B09: cmp     bl, [edi+5Ch]
0x529B0C: jbe     short loc_529B11
0x529B0E: mov     [edi+5Ch], bl
0x529B11: mov     ecx, [esi]
0x529B13: push    edi
0x529B14: call    sub_52B080
0x529B19: mov     edx, [edi]
0x529B1B: mov     eax, [edx+40h]
0x529B1E: push    10000000h
0x529B23: mov     ecx, edi
0x529B25: call    eax
0x529B27: pop     edi
0x529B28: pop     esi
0x529B29: mov     al, 1
0x529B2B: pop     ebx
0x529B2C: retn    4
