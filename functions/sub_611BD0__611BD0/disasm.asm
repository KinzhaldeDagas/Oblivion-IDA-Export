0x611BD0: push    esi
0x611BD1: mov     esi, ecx
0x611BD3: mov     eax, [esi]
0x611BD5: mov     edx, [eax+1A0h]
0x611BDB: push    edi
0x611BDC: call    edx
0x611BDE: test    al, al
0x611BE0: jnz     loc_611C76
0x611BE6: mov     edi, [esp+8+friendlyFight_]
0x611BEA: mov     eax, ds:0B333C4h
0x611BEF: cmp     edi, eax
0x611BF1: jnz     short loc_611BFC
0x611BF3: cmp     byte ptr [eax+610h], 0
0x611BFA: jnz     short loc_611C76
0x611BFC: mov     ecx, esi
0x611BFE: call    sub_5E0F50
0x611C03: mov     edx, [eax]
0x611C05: mov     ecx, eax
0x611C07: mov     eax, [edx+16Ch]
0x611C0D: push    10h
0x611C0F: call    eax
0x611C11: test    al, al
0x611C13: jnz     short loc_611C76
0x611C15: push    64h ; 'd'; responsibility
0x611C17: push    0; a7
0x611C19: push    0; a6
0x611C1B: push    0; a5
0x611C1D: push    0
0x611C1F: push    edi
0x611C20: mov     ecx, esi
0x611C22: call    TesObjectREF_GetDistance
0x611C27: mov     edx, [esi]
0x611C29: mov     eax, [edx+284h]
0x611C2F: push    ecx
0x611C30: fstp    [esp+1Ch+var_1C]
0x611C33: push    21h ; '!'
0x611C35: mov     ecx, esi
0x611C37: call    eax
0x611C39: mov     edx, [esi]
0x611C3B: push    eax; distanceToTarget
0x611C3C: mov     eax, [edx+224h]
0x611C42: push    0; aggressionStat
0x611C44: push    edi; friendlyFight?
0x611C45: mov     ecx, esi
0x611C47: call    eax
0x611C49: push    eax; disposition
0x611C4A: call    shouldActorFight
0x611C4F: add     esp, 20h
0x611C52: test    eax, eax
0x611C54: jg      short loc_611C76
0x611C56: test    edi, edi
0x611C58: jz      short loc_611C5F
0x611C5A: lea     eax, [edi+5Ch]
0x611C5D: jmp     short loc_611C61
0x611C5F: xor     eax, eax
0x611C61: push    eax
0x611C62: lea     ecx, [esi+68h]
0x611C65: call    sub_6A1EE0
0x611C6A: neg     al
0x611C6C: pop     edi
0x611C6D: pop     esi
0x611C6E: sbb     eax, eax
0x611C70: add     eax, 1
0x611C73: retn    4
0x611C76: pop     edi
0x611C77: xor     al, al
0x611C79: pop     esi
0x611C7A: retn    4
