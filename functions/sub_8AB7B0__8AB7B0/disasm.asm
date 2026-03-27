0x8AB7B0: sub     esp, 14h
0x8AB7B3: push    ebx
0x8AB7B4: push    ebp
0x8AB7B5: push    esi
0x8AB7B6: push    edi
0x8AB7B7: mov     edi, [esp+24h+arg_0]
0x8AB7BB: push    edi
0x8AB7BC: mov     ebx, ecx
0x8AB7BE: call    sub_715F40
0x8AB7C3: mov     eax, [edi+21Ch]
0x8AB7C9: push    1
0x8AB7CB: lea     ecx, [esp+28h+var_10]
0x8AB7CF: push    ecx
0x8AB7D0: push    4
0x8AB7D2: lea     edx, [esp+30h+var_14]
0x8AB7D6: push    edx
0x8AB7D7: push    eax
0x8AB7D8: mov     eax, [eax+4]
0x8AB7DB: mov     [esp+38h+var_10], 4
0x8AB7E3: call    eax
0x8AB7E5: mov     ecx, [esp+38h+var_14]
0x8AB7E9: add     esp, 14h
0x8AB7EC: lea     esi, [ebx+40h]
0x8AB7EF: push    ecx
0x8AB7F0: mov     ecx, esi
0x8AB7F2: call    sub_8AA480
0x8AB7F7: xor     ebp, ebp
0x8AB7F9: cmp     [esp+24h+var_14], ebp
0x8AB7FD: jbe     loc_8AB891
0x8AB803: fldz
0x8AB805: fdiv    qword ptr ds:0A309F0h
0x8AB80B: fstp    [esp+24h+var_10]
0x8AB80F: jmp     short loc_8AB824
0x8AB811: jmp     short loc_8AB820
0x8AB813: align 10h
0x8AB820: mov     edi, [esp+24h+arg_0]
0x8AB824: fld     dword ptr ds:0A30634h
0x8AB82A: mov     eax, [edi+21Ch]
0x8AB830: fstp    [esp+24h+var_C]
0x8AB834: push    0
0x8AB836: fld     [esp+28h+var_10]
0x8AB83A: push    0
0x8AB83C: fstp    [esp+2Ch+var_4]
0x8AB840: push    0Ch
0x8AB842: fld     [esp+30h+var_4]
0x8AB846: lea     edx, [esp+30h+var_C]
0x8AB84A: push    edx
0x8AB84B: fstp    [esp+34h+var_8]
0x8AB84F: push    eax
0x8AB850: mov     eax, [eax+4]
0x8AB853: call    eax
0x8AB855: mov     edi, [esi+0Ch]
0x8AB858: add     esp, 14h
0x8AB85B: cmp     edi, [esi+8]
0x8AB85E: jb      short loc_8AB86D
0x8AB860: mov     ecx, [esi+14h]
0x8AB863: add     ecx, edi
0x8AB865: push    ecx
0x8AB866: mov     ecx, esi
0x8AB868: call    sub_8AA480
0x8AB86D: lea     edx, [esp+24h+var_C]
0x8AB871: push    edx
0x8AB872: push    edi
0x8AB873: mov     ecx, esi
0x8AB875: call    sub_8AA710
0x8AB87A: mov     ecx, ebx
0x8AB87C: mov     dword ptr [ebx+3Ch], 0
0x8AB883: call    sub_8AABE0
0x8AB888: add     ebp, 1
0x8AB88B: cmp     ebp, [esp+24h+var_14]
0x8AB88F: jb      short loc_8AB820
0x8AB891: pop     edi
0x8AB892: pop     esi
0x8AB893: pop     ebp
0x8AB894: pop     ebx
0x8AB895: add     esp, 14h
0x8AB898: retn    4
