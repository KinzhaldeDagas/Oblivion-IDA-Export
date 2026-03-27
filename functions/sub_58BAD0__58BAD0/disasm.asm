0x58BAD0: push    0FFFFFFFFh
0x58BAD2: push    offset SEH_596FE0
0x58BAD7: mov     eax, large fs:0
0x58BADD: push    eax
0x58BADE: sub     esp, 8
0x58BAE1: push    ebx
0x58BAE2: push    esi
0x58BAE3: push    edi
0x58BAE4: mov     eax, ds:0B30AACh
0x58BAE9: xor     eax, esp
0x58BAEB: push    eax; ArgList
0x58BAEC: lea     eax, [esp+24h+var_C]
0x58BAF0: mov     large fs:0, eax
0x58BAF6: xor     ebx, ebx
0x58BAF8: mov     [esp+24h+Format], ebx
0x58BAFC: mov     [esp+24h+var_10], bx
0x58BB01: mov     [esp+24h+var_E], bx
0x58BB06: mov     edi, [esp+24h+arg_0]
0x58BB0A: mov     [esp+24h+var_4], ebx
0x58BB0E: xor     esi, esi
0x58BB10: mov     eax, ds:0B3AF10h[esi*4]
0x58BB17: cmp     eax, ebx
0x58BB19: jz      short loc_58BB27
0x58BB1B: cmp     eax, edi
0x58BB1D: jz      short loc_58BB59
0x58BB1F: add     esi, 1
0x58BB22: cmp     esi, 64h ; 'd'
0x58BB25: jl      short loc_58BB10
0x58BB27: mov     eax, ds:0B3B0ACh
0x58BB2C: mov     ds:0B3AF10h[eax*4], edi
0x58BB33: add     eax, 1
0x58BB36: push    ebx
0x58BB37: mov     ds:0B3B0ACh, eax
0x58BB3C: call    FormHeapFree
0x58BB41: add     esp, 4
0x58BB44: xor     al, al
0x58BB46: mov     ecx, [esp+24h+var_C]
0x58BB4A: mov     large fs:0, ecx
0x58BB51: pop     ecx
0x58BB52: pop     edi
0x58BB53: pop     esi
0x58BB54: pop     ebx
0x58BB55: add     esp, 14h
0x58BB58: retn
0x58BB59: push    offset asc_A6AB74; "\n*****\n"
0x58BB5E: call    sub_40FEC0
0x58BB63: push    offset aErrorLoopDetec; "***** ERROR: Loop Detected\n"
0x58BB68: call    sub_40FEC0
0x58BB6D: push    offset aLoopInvolvesTi; "***** Loop Involves Tiles:"
0x58BB72: call    sub_40FEC0
0x58BB77: add     esp, 0Ch
0x58BB7A: cmp     esi, 64h ; 'd'
0x58BB7D: jge     short loc_58BBB9
0x58BB7F: lea     esi, ds:0B3AF10h[esi*4]
0x58BB86: mov     eax, [esi]
0x58BB88: cmp     eax, ebx
0x58BB8A: jz      short loc_58BBB9
0x58BB8C: mov     eax, [eax]
0x58BB8E: mov     eax, [eax+8]
0x58BB91: push    eax; ArgList
0x58BB92: lea     ecx, [esp+28h+Format]
0x58BB96: push    offset aS_1; "  %s"
0x58BB9B: push    ecx; ArgList
0x58BB9C: call    BSStringT_Static_Format
0x58BBA1: mov     edx, [esp+30h+Format]
0x58BBA5: push    edx; Format
0x58BBA6: call    sub_40FEC0
0x58BBAB: add     esi, 4
0x58BBAE: add     esp, 10h
0x58BBB1: cmp     esi, offset byte_B3B0A0
0x58BBB7: jl      short loc_58BB86
0x58BBB9: mov     eax, [edi]
0x58BBBB: mov     eax, [eax+8]
0x58BBBE: push    eax; ArgList
0x58BBBF: lea     ecx, [esp+28h+Format]
0x58BBC3: push    offset aAllReferencesT; "\n***** [ All references targeting %s h"...
0x58BBC8: push    ecx; ArgList
0x58BBC9: call    BSStringT_Static_Format
0x58BBCE: mov     esi, [esp+30h+Format]
0x58BBD2: push    esi; ArgList
0x58BBD3: call    sub_40FEC0
0x58BBD8: push    offset asc_A6AAEC; "*****\n\n"
0x58BBDD: call    sub_40FEC0
0x58BBE2: mov     eax, [edi+10h]
0x58BBE5: add     esp, 14h
0x58BBE8: cmp     eax, ebx
0x58BBEA: jz      short loc_58BBFA
0x58BBEC: lea     esp, [esp+0]
0x58BBF0: mov     [eax+0Ch], ebx
0x58BBF3: mov     eax, [eax+4]
0x58BBF6: cmp     eax, ebx
0x58BBF8: jnz     short loc_58BBF0
0x58BBFA: push    esi
0x58BBFB: call    FormHeapFree
0x58BC00: add     esp, 4
0x58BC03: mov     al, 1
0x58BC05: mov     ecx, [esp+24h+var_C]
0x58BC09: mov     large fs:0, ecx
0x58BC10: pop     ecx
0x58BC11: pop     edi
0x58BC12: pop     esi
0x58BC13: pop     ebx
0x58BC14: add     esp, 14h
0x58BC17: retn
