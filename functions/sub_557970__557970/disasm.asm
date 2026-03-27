0x557970: push    ebx
0x557971: mov     ebx, [esp+4+arg_4]
0x557975: push    esi
0x557976: mov     esi, [esp+8+arg_0]
0x55797A: cmp     esi, ebx
0x55797C: jz      short loc_5579A3
0x55797E: push    edi
0x55797F: mov     edi, [esp+0Ch+arg_8]
0x557983: fld     dword ptr [esi]
0x557985: lea     eax, [esi+4]
0x557988: push    eax
0x557989: fstp    dword ptr [edi]
0x55798B: lea     ecx, [edi+4]
0x55798E: call    sub_557470
0x557993: add     esi, 14h
0x557996: add     edi, 14h
0x557999: cmp     esi, ebx
0x55799B: jnz     short loc_557983
0x55799D: mov     eax, edi
0x55799F: pop     edi
0x5579A0: pop     esi
0x5579A1: pop     ebx
0x5579A2: retn
0x5579A3: mov     eax, [esp+8+arg_8]
0x5579A7: pop     esi
0x5579A8: pop     ebx
0x5579A9: retn
