0x4447F0: cmp     byte ptr ds:0B33A34h, 0
0x4447F7: mov     eax, ds:0B333A0h
0x4447FC: push    ebx
0x4447FD: setz    bl
0x444800: push    esi
0x444801: mov     ds:0B33A34h, bl
0x444807: mov     esi, [eax+34h]
0x44480A: test    esi, esi
0x44480C: jz      short loc_444823
0x44480E: mov     ecx, esi; this
0x444810: call    TESObjectCELL_IsInterior
0x444815: test    al, al
0x444817: jz      short loc_444823
0x444819: lea     ecx, [esi+28h]
0x44481C: call    sub_424180
0x444821: jmp     short loc_444828
0x444823: mov     eax, ds:0B35C24h
0x444828: test    eax, eax
0x44482A: jz      short loc_444834
0x44482C: test    bl, bl
0x44482E: setz    cl
0x444831: mov     [eax+19h], cl
0x444834: pop     esi
0x444835: pop     ebx
0x444836: retn
