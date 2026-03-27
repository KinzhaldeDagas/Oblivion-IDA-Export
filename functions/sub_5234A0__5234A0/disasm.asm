0x5234A0: push    ecx
0x5234A1: fld1
0x5234A3: push    esi
0x5234A4: lea     esi, [ecx+3Ch]
0x5234A7: fstp    [esp+8+var_4]
0x5234AB: test    esi, esi
0x5234AD: jz      short loc_5234DF
0x5234AF: push    edi
0x5234B0: mov     eax, [esi]
0x5234B2: test    eax, eax
0x5234B4: jz      short loc_5234DE
0x5234B6: mov     edi, [eax]
0x5234B8: mov     ecx, edi
0x5234BA: call    sub_51F0A0
0x5234BF: fld     [esp+0Ch+var_4]
0x5234C3: fcompp
0x5234C5: fnstsw  ax
0x5234C7: test    ah, 5
0x5234CA: jp      short loc_5234D7
0x5234CC: mov     ecx, edi
0x5234CE: call    sub_51F0A0
0x5234D3: fstp    [esp+0Ch+var_4]
0x5234D7: mov     esi, [esi+4]
0x5234DA: test    esi, esi
0x5234DC: jnz     short loc_5234B0
0x5234DE: pop     edi
0x5234DF: fld     [esp+8+var_4]
0x5234E3: pop     esi
0x5234E4: pop     ecx
0x5234E5: retn
