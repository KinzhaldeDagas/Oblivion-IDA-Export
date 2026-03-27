0x54BA90: push    ebp
0x54BA91: mov     ebp, esp
0x54BA93: and     esp, 0FFFFFFF8h
0x54BA96: sub     esp, 14h
0x54BA99: push    ebx
0x54BA9A: push    esi
0x54BA9B: mov     esi, [ebp+arg_8]
0x54BA9E: test    esi, esi
0x54BAA0: push    edi
0x54BAA1: mov     [esp+20h+var_11], 0
0x54BAA6: jz      short loc_54BAF4
0x54BAA8: mov     ebx, [ebp+arg_4]
0x54BAAB: test    ebx, ebx
0x54BAAD: jz      short loc_54BAF4
0x54BAAF: cmp     dword ptr [ebx+0Ch], 0
0x54BAB3: jz      short loc_54BAE5
0x54BAB5: mov     eax, [ebx+4]
0x54BAB8: cmp     dword ptr [eax+8], 0
0x54BABC: jz      short loc_54BADF
0x54BABE: mov     edi, [eax+8]
0x54BAC1: mov     eax, [esi]
0x54BAC3: mov     edx, [eax+4]
0x54BAC6: mov     ecx, esi
0x54BAC8: call    edx
0x54BACA: mov     edx, [edi]
0x54BACC: mov     edx, [edx+4]
0x54BACF: mov     ecx, edi
0x54BAD1: mov     [esp+20h+var_10], eax
0x54BAD5: call    edx
0x54BAD7: mov     ecx, [esp+20h+var_10]
0x54BADB: cmp     eax, ecx
0x54BADD: jnz     short loc_54BAF4
0x54BADF: cmp     dword ptr [ebx+0Ch], 0
0x54BAE3: ja      short loc_54BAFD
0x54BAE5: mov     eax, [esi]
0x54BAE7: fldz
0x54BAE9: mov     edx, [eax+10h]
0x54BAEC: push    ecx
0x54BAED: mov     ecx, esi
0x54BAEF: fstp    dword ptr [esp+24h+var_24]
0x54BAF2: call    edx
0x54BAF4: xor     al, al
0x54BAF6: pop     edi
0x54BAF7: pop     esi
0x54BAF8: pop     ebx
0x54BAF9: mov     esp, ebp
0x54BAFB: pop     ebp
0x54BAFC: retn
0x54BAFD: mov     edi, [esi]
0x54BAFF: mov     eax, [edi+0Ch]
0x54BB02: mov     ecx, esi
0x54BB04: call    eax
0x54BB06: fadd    [ebp+arg_0]
0x54BB09: mov     edx, [edi+10h]
0x54BB0C: push    ecx
0x54BB0D: fstp    [esp+24h+var_10]
0x54BB11: mov     ecx, esi
0x54BB13: fld     [esp+24h+var_10]
0x54BB17: fstp    dword ptr [esp+24h+var_24]
0x54BB1A: call    edx
0x54BB1C: mov     eax, [ebx+4]
0x54BB1F: mov     edi, [eax+8]
0x54BB22: test    edi, edi
0x54BB24: jz      loc_54BBE6
0x54BB2A: lea     ebx, [ebx+0]
0x54BB30: mov     edx, [esi]
0x54BB32: mov     eax, [edx+0Ch]
0x54BB35: mov     ecx, esi
0x54BB37: call    eax
0x54BB39: fstp    [esp+20h+var_C+4]
0x54BB3D: mov     edx, [edi]
0x54BB3F: mov     eax, [edx+0Ch]
0x54BB42: mov     ecx, edi
0x54BB44: call    eax
0x54BB46: fcomp   [esp+20h+var_C+4]
0x54BB4A: fnstsw  ax
0x54BB4C: test    ah, 41h
0x54BB4F: jp      loc_54BC00
0x54BB55: mov     eax, [ebp+arg_C]
0x54BB58: fld1
0x54BB5A: mov     edx, [esi]
0x54BB5C: mov     edx, [edx+1Ch]
0x54BB5F: push    eax
0x54BB60: push    1
0x54BB62: push    ecx
0x54BB63: fstp    [esp+2Ch+var_2C]
0x54BB66: push    edi
0x54BB67: mov     ecx, esi
0x54BB69: call    edx
0x54BB6B: or      [esp+20h+var_11], al
0x54BB6F: mov     eax, [esi]
0x54BB71: mov     dword ptr [esp+20h+var_C+4], eax
0x54BB75: mov     eax, [eax+0Ch]
0x54BB78: mov     ecx, esi
0x54BB7A: call    eax
0x54BB7C: fstp    qword ptr [esp+20h+var_10]
0x54BB80: mov     edx, [edi]
0x54BB82: mov     eax, [edx+0Ch]
0x54BB85: mov     ecx, edi
0x54BB87: call    eax
0x54BB89: fsubr   qword ptr [esp+20h+var_10]
0x54BB8D: mov     edx, dword ptr [esp+20h+var_C+4]
0x54BB91: mov     eax, [edx+10h]
0x54BB94: fstp    [esp+20h+var_10]
0x54BB98: push    ecx
0x54BB99: fld     [esp+24h+var_10]
0x54BB9D: mov     ecx, esi
0x54BB9F: fstp    dword ptr [esp+24h+var_24]
0x54BBA2: call    eax
0x54BBA4: mov     ecx, [ebx+4]
0x54BBA7: mov     eax, [ecx]
0x54BBA9: xor     edx, edx
0x54BBAB: cmp     eax, edx
0x54BBAD: mov     [ebx+4], eax
0x54BBB0: jz      short loc_54BBB7
0x54BBB2: mov     [eax+4], edx
0x54BBB5: jmp     short loc_54BBBA
0x54BBB7: mov     [ebx+8], edx
0x54BBBA: mov     edx, [ebx]
0x54BBBC: mov     eax, [edx+8]
0x54BBBF: push    ecx
0x54BBC0: mov     ecx, ebx
0x54BBC2: call    eax
0x54BBC4: add     dword ptr [ebx+0Ch], 0FFFFFFFFh
0x54BBC8: mov     edx, [edi]
0x54BBCA: mov     eax, [edx]
0x54BBCC: push    1
0x54BBCE: mov     ecx, edi
0x54BBD0: call    eax
0x54BBD2: cmp     dword ptr [ebx+0Ch], 0
0x54BBD6: jbe     short loc_54BBE6
0x54BBD8: mov     ecx, [ebx+4]
0x54BBDB: mov     edi, [ecx+8]
0x54BBDE: test    edi, edi
0x54BBE0: jnz     loc_54BB30
0x54BBE6: mov     eax, [esi]
0x54BBE8: fldz
0x54BBEA: mov     edx, [eax+10h]
0x54BBED: push    ecx
0x54BBEE: mov     ecx, esi
0x54BBF0: fstp    dword ptr [esp+24h+var_24]
0x54BBF3: call    edx
0x54BBF5: mov     al, [esp+20h+var_11]
0x54BBF9: pop     edi
0x54BBFA: pop     esi
0x54BBFB: pop     ebx
0x54BBFC: mov     esp, ebp
0x54BBFE: pop     ebp
0x54BBFF: retn
0x54BC00: mov     ebx, [esi]
0x54BC02: mov     edx, [ebx+0Ch]
0x54BC05: mov     ecx, esi
0x54BC07: call    edx
0x54BC09: fstp    [esp+20h+var_C+4]
0x54BC0D: mov     eax, [ebp+arg_C]
0x54BC10: mov     edx, [edi]
0x54BC12: push    eax
0x54BC13: mov     eax, [edx+0Ch]
0x54BC16: push    1
0x54BC18: mov     ecx, edi
0x54BC1A: call    eax
0x54BC1C: fdivr   qword ptr [esp+20h+var_s0]
0x54BC20: mov     edx, [ebx+1Ch]
0x54BC23: push    ecx
0x54BC24: mov     ecx, esi
0x54BC26: fstp    [esp+24h+var_s0]
0x54BC2A: fld     [esp+24h+var_s0]
0x54BC2E: fstp    dword ptr [esp+24h+var_24]
0x54BC31: push    edi
0x54BC32: call    edx
0x54BC34: or      [esp+20h+var_11], al
0x54BC38: mov     al, [esp+20h+var_11]
0x54BC3C: pop     edi
0x54BC3D: pop     esi
0x54BC3E: pop     ebx
0x54BC3F: mov     esp, ebp
0x54BC41: pop     ebp
0x54BC42: retn
