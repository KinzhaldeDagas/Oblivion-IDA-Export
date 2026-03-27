0x78F600: fld     [esp+arg_4]
0x78F604: push    ebx
0x78F605: push    esi
0x78F606: fstp    [esp+8+arg_4]
0x78F60A: mov     esi, ds:0B429B8h
0x78F610: xor     bl, bl
0x78F612: cmp     dword ptr [esi+2Ch], 0
0x78F616: jnz     short loc_78F641
0x78F618: mov     eax, [esp+8+arg_0]
0x78F61C: test    eax, eax
0x78F61E: mov     edx, 1
0x78F623: jz      short loc_78F641
0x78F625: mov     ecx, [eax]
0x78F627: test    ecx, ecx
0x78F629: jz      short loc_78F63A
0x78F62B: test    edx, edx
0x78F62D: jge     short loc_78F63A
0x78F62F: mov     eax, ecx
0x78F631: add     edx, 1
0x78F634: test    eax, eax
0x78F636: jnz     short loc_78F625
0x78F638: jmp     short loc_78F641
0x78F63A: fld     dword ptr [eax+4]
0x78F63D: fstp    [esp+8+arg_4]
0x78F641: fld     [esp+8+arg_4]
0x78F645: fld     dword ptr [esi+24h]
0x78F648: fcompp
0x78F64A: fnstsw  ax
0x78F64C: test    ah, 5
0x78F64F: jp      short loc_78F67C
0x78F651: fld1
0x78F653: sub     esp, 8
0x78F656: fstp    [esp+10h+var_C]; float
0x78F65A: mov     ecx, offset unk_B429C9
0x78F65F: fldz
0x78F661: fstp    [esp+10h+var_10]; float
0x78F664: call    sub_78EA00
0x78F669: mov     eax, ds:0B429B8h
0x78F66E: fld     dword ptr [eax+28h]
0x78F671: fcompp
0x78F673: fnstsw  ax
0x78F675: mov     al, 1
0x78F677: test    ah, 1
0x78F67A: jz      short loc_78F67E
0x78F67C: mov     al, bl
0x78F67E: pop     esi
0x78F67F: pop     ebx
0x78F680: retn    8
