0x6C9BA0: push    esi
0x6C9BA1: mov     esi, ecx
0x6C9BA3: cmp     dword ptr [esi+44h], 0
0x6C9BA7: jz      short loc_6C9BAF
0x6C9BA9: xor     al, al
0x6C9BAB: pop     esi
0x6C9BAC: retn    18h
0x6C9BAF: push    edi
0x6C9BB0: mov     edi, [esp+8+arg_10]
0x6C9BB4: test    edi, edi
0x6C9BB6: mov     dword ptr [esi+58h], 0
0x6C9BBD: jz      short loc_6C9BE3
0x6C9BBF: mov     eax, [edi+58h]
0x6C9BC2: test    eax, eax
0x6C9BC4: jz      short loc_6C9BD4
0x6C9BC6: cmp     eax, esi
0x6C9BC8: jz      short loc_6C9C23
0x6C9BCA: push    eax
0x6C9BCB: call    sub_6C6110
0x6C9BD0: test    al, al
0x6C9BD2: jz      short loc_6C9C23
0x6C9BD4: push    edi
0x6C9BD5: mov     ecx, esi
0x6C9BD7: call    sub_6C6ED0
0x6C9BDC: test    al, al
0x6C9BDE: jz      short loc_6C9C23
0x6C9BE0: mov     [esi+58h], edi
0x6C9BE3: mov     eax, [esp+8+arg_0]
0x6C9BE7: push    eax
0x6C9BE8: mov     ecx, esi
0x6C9BEA: call    sub_6C6A50
0x6C9BEF: fld     [esp+8+arg_8]
0x6C9BF3: fstp    dword ptr [esi+1Ch]
0x6C9BF6: fldz
0x6C9BF8: fcomp   [esp+8+arg_C]
0x6C9BFC: fnstsw  ax
0x6C9BFE: test    ah, 5
0x6C9C01: jp      short loc_6C9C64
0x6C9C03: cmp     byte ptr [esp+8+a2], 0
0x6C9C08: jz      short loc_6C9C2A
0x6C9C0A: cmp     dword ptr [esi+44h], 0
0x6C9C0E: mov     dword ptr [esi+44h], 5
0x6C9C15: setz    al
0x6C9C18: test    al, al
0x6C9C1A: jz      short loc_6C9C50
0x6C9C1C: lea     ecx, [esp+8+a2]
0x6C9C20: push    ecx
0x6C9C21: jmp     short loc_6C9C41
0x6C9C23: pop     edi
0x6C9C24: xor     al, al
0x6C9C26: pop     esi
0x6C9C27: retn    18h
0x6C9C2A: cmp     dword ptr [esi+44h], 0
0x6C9C2E: mov     dword ptr [esi+44h], 2
0x6C9C35: setz    al
0x6C9C38: test    al, al
0x6C9C3A: jz      short loc_6C9C50
0x6C9C3C: lea     edx, [esp+8+a2]
0x6C9C40: push    edx; a2
0x6C9C41: mov     ecx, [esi+40h]
0x6C9C44: add     ecx, 4Ch ; 'L'; this
0x6C9C47: mov     [esp+0Ch+a2], esi
0x6C9C4B: call    sub_73A5E0
0x6C9C50: fld     dword ptr ds:0A7DEB4h
0x6C9C56: fchs
0x6C9C58: fstp    dword ptr [esi+4Ch]
0x6C9C5B: fld     [esp+8+arg_C]
0x6C9C5F: fstp    dword ptr [esi+50h]
0x6C9C62: jmp     short loc_6C9C8A
0x6C9C64: cmp     dword ptr [esi+44h], 0
0x6C9C68: mov     dword ptr [esi+44h], 1
0x6C9C6F: setz    al
0x6C9C72: test    al, al
0x6C9C74: jz      short loc_6C9C8A
0x6C9C76: mov     ecx, [esi+40h]
0x6C9C79: lea     eax, [esp+8+a2]
0x6C9C7D: push    eax; a2
0x6C9C7E: add     ecx, 4Ch ; 'L'; this
0x6C9C81: mov     [esp+0Ch+a2], esi
0x6C9C85: call    sub_73A5E0
0x6C9C8A: cmp     [esp+8+arg_4], 0
0x6C9C8F: jz      short loc_6C9C9C
0x6C9C91: fld     dword ptr ds:0A7DEB4h
0x6C9C97: fchs
0x6C9C99: fstp    dword ptr [esi+48h]
0x6C9C9C: pop     edi
0x6C9C9D: mov     al, 1
0x6C9C9F: pop     esi
0x6C9CA0: retn    18h
