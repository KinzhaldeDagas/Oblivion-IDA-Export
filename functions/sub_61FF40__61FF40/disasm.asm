0x61FF40: push    ecx
0x61FF41: push    esi
0x61FF42: mov     esi, ecx
0x61FF44: cmp     dword ptr [esi+70h], 8
0x61FF48: jz      loc_62003E
0x61FF4E: fld     dword ptr [esi+44h]
0x61FF51: fsub    dword ptr [esi+134h]
0x61FF57: fld     dword ptr [esi+138h]
0x61FF5D: fcompp
0x61FF5F: fnstsw  ax
0x61FF61: test    ah, 5
0x61FF64: jp      loc_62003E
0x61FF6A: fld     dword ptr ds:0B37288h
0x61FF70: fstp    [esp+8+var_4]
0x61FF74: fld     dword ptr [esi+44h]
0x61FF77: fstp    dword ptr [esi+134h]
0x61FF7D: fld     [esp+8+var_4]
0x61FF81: fstp    dword ptr [esi+138h]
0x61FF87: fld     dword ptr ds:0A30634h
0x61FF8D: fstp    dword ptr [esi+13Ch]
0x61FF93: mov     eax, [esi+178h]
0x61FF99: cmp     eax, ds:0B372B0h
0x61FF9F: jg      short loc_61FFBF
0x61FFA1: mov     ecx, [esi+3Ch]
0x61FFA4: call    Actor_IsSwimming
0x61FFA9: test    al, al
0x61FFAB: jnz     short loc_61FFBF
0x61FFAD: mov     ecx, [esi+9Ch]
0x61FFB3: push    ecx
0x61FFB4: mov     ecx, esi
0x61FFB6: call    sub_61D9B0
0x61FFBB: test    al, al
0x61FFBD: jnz     short loc_62003E
0x61FFBF: mov     edx, [esi+94h]
0x61FFC5: push    edx
0x61FFC6: mov     ecx, esi
0x61FFC8: call    sub_61D9B0
0x61FFCD: test    al, al
0x61FFCF: jnz     short loc_62003E
0x61FFD1: mov     eax, [esi+98h]
0x61FFD7: push    eax
0x61FFD8: mov     ecx, esi
0x61FFDA: call    sub_61D9B0
0x61FFDF: test    al, al
0x61FFE1: jnz     short loc_62003E
0x61FFE3: cmp     dword ptr [esi+90h], 0
0x61FFEA: jnz     short loc_620030
0x61FFEC: mov     eax, [esi+68h]
0x61FFEF: test    eax, eax
0x61FFF1: jz      short loc_620030
0x61FFF3: mov     eax, [eax]
0x61FFF5: test    eax, eax
0x61FFF7: mov     [esi+90h], eax
0x61FFFD: jz      short loc_620008
0x61FFFF: mov     ecx, [eax]
0x620001: push    0
0x620003: call    sub_41A610
0x620008: mov     ecx, [esi+68h]
0x62000B: push    edi
0x62000C: call    sub_67F100
0x620011: mov     edi, [esi+68h]
0x620014: mov     ecx, edi
0x620016: call    BSSimpleList_IsEmpty
0x62001B: test    al, al
0x62001D: jz      short loc_62002F
0x62001F: push    edi
0x620020: call    FormHeapFree
0x620025: add     esp, 4
0x620028: mov     dword ptr [esi+68h], 0
0x62002F: pop     edi
0x620030: mov     ecx, [esi+90h]
0x620036: push    ecx
0x620037: mov     ecx, esi
0x620039: call    sub_61D9B0
0x62003E: pop     esi
0x62003F: pop     ecx
0x620040: retn
