0x91BC60: push    ecx
0x91BC61: push    ebx
0x91BC62: push    esi
0x91BC63: mov     esi, large fs:2Ch
0x91BC6A: push    edi
0x91BC6B: mov     edi, ds:0BA9DE4h
0x91BC71: mov     eax, [esi+edi*4]
0x91BC74: mov     edx, [eax+1A4h]
0x91BC7A: cmp     edx, [eax+1A8h]
0x91BC80: jnb     short loc_91BCA8
0x91BC82: push    ebp
0x91BC83: mov     ebp, eax
0x91BC85: mov     ebx, [ebp+1A4h]
0x91BC8B: mov     dword ptr [ebx], offset aTthkshapedispl; "TthkShapeDisplayViewer"
0x91BC91: rdtsc
0x91BC93: mov     [esp+14h+var_4], eax
0x91BC97: mov     eax, [esp+14h+var_4]
0x91BC9B: mov     [ebx+4], eax
0x91BC9E: add     ebx, 0Ch
0x91BCA1: mov     [ebp+1A4h], ebx
0x91BCA7: pop     ebp
0x91BCA8: mov     al, [ecx+10h]
0x91BCAB: test    al, al
0x91BCAD: jnz     short loc_91BCEB
0x91BCAF: mov     eax, [esi+edi*4]
0x91BCB2: mov     ecx, [eax+1A4h]
0x91BCB8: cmp     ecx, [eax+1A8h]
0x91BCBE: jnb     short loc_91BD38
0x91BCC0: mov     esi, eax
0x91BCC2: mov     ecx, [esi+1A4h]
0x91BCC8: mov     dword ptr [ecx], offset aEt; "Et"
0x91BCCE: rdtsc
0x91BCD0: mov     [esp+10h+arg_0], eax
0x91BCD4: mov     edx, [esp+10h+arg_0]
0x91BCD8: mov     [ecx+4], edx
0x91BCDB: add     ecx, 0Ch
0x91BCDE: pop     edi
0x91BCDF: mov     [esi+1A4h], ecx
0x91BCE5: pop     esi
0x91BCE6: pop     ebx
0x91BCE7: pop     ecx
0x91BCE8: retn    8
0x91BCEB: mov     eax, [esp+10h+arg_0]
0x91BCEF: mov     ecx, [ecx-14h]
0x91BCF2: push    0BF800000h; float
0x91BCF7: push    eax; int
0x91BCF8: push    ecx; int
0x91BCF9: call    sub_91BAC0
0x91BCFE: mov     eax, [esi+edi*4]
0x91BD01: mov     edx, [eax+1A4h]
0x91BD07: mov     ecx, [eax+1A8h]
0x91BD0D: add     esp, 0Ch
0x91BD10: cmp     edx, ecx
0x91BD12: jnb     short loc_91BD38
0x91BD14: mov     esi, eax
0x91BD16: mov     ecx, [esi+1A4h]
0x91BD1C: mov     dword ptr [ecx], offset aEt; "Et"
0x91BD22: rdtsc
0x91BD24: mov     [esp+10h+arg_0], eax
0x91BD28: mov     eax, [esp+10h+arg_0]
0x91BD2C: mov     [ecx+4], eax
0x91BD2F: add     ecx, 0Ch
0x91BD32: mov     [esi+1A4h], ecx
0x91BD38: pop     edi
0x91BD39: pop     esi
0x91BD3A: pop     ebx
0x91BD3B: pop     ecx
0x91BD3C: retn    8
