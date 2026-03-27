0x8C8080: push    esi
0x8C8081: push    edi
0x8C8082: mov     edi, [esp+8+arg_0]
0x8C8086: push    edi
0x8C8087: mov     esi, ecx
0x8C8089: call    sub_8AEA60
0x8C808E: test    esi, esi
0x8C8090: jz      short loc_8C809E
0x8C8092: mov     eax, [esi+8]
0x8C8095: test    eax, eax
0x8C8097: jz      short loc_8C809E
0x8C8099: add     eax, 20h ; ' '
0x8C809C: jmp     short loc_8C80A3
0x8C809E: mov     eax, offset stru_BA7A40
0x8C80A3: push    eax
0x8C80A4: lea     ecx, [edi+10h]
0x8C80A7: call    sub_47DCD0
0x8C80AC: test    esi, esi
0x8C80AE: jz      short loc_8C80BC
0x8C80B0: mov     eax, [esi+8]
0x8C80B3: test    eax, eax
0x8C80B5: jz      short loc_8C80BC
0x8C80B7: add     eax, 30h ; '0'
0x8C80BA: jmp     short loc_8C80C1
0x8C80BC: mov     eax, offset stru_BA7A40
0x8C80C1: push    eax
0x8C80C2: lea     ecx, [edi+20h]
0x8C80C5: call    sub_47DCD0
0x8C80CA: test    esi, esi
0x8C80CC: jz      short loc_8C80EA
0x8C80CE: mov     ecx, [esi+8]
0x8C80D1: test    ecx, ecx
0x8C80D3: jz      short loc_8C80EA
0x8C80D5: call    sub_8F2260
0x8C80DA: fstp    [esp+8+arg_0]
0x8C80DE: fld     [esp+8+arg_0]
0x8C80E2: fstp    dword ptr [edi+30h]
0x8C80E5: pop     edi
0x8C80E6: pop     esi
0x8C80E7: retn    4
0x8C80EA: fldz
0x8C80EC: fstp    [esp+8+arg_0]
0x8C80F0: fld     [esp+8+arg_0]
0x8C80F4: fstp    dword ptr [edi+30h]
0x8C80F7: pop     edi
0x8C80F8: pop     esi
0x8C80F9: retn    4
