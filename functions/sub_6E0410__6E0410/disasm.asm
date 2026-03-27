0x6E0410: push    esi
0x6E0411: push    edi
0x6E0412: mov     edi, [esp+8+arg_0]
0x6E0416: push    edi
0x6E0417: mov     esi, ecx
0x6E0419: call    sub_715820
0x6E041E: test    al, al
0x6E0420: jnz     short loc_6E0429
0x6E0422: pop     edi
0x6E0423: xor     al, al
0x6E0425: pop     esi
0x6E0426: retn    4
0x6E0429: mov     eax, [esi+40h]
0x6E042C: test    eax, eax
0x6E042E: jz      short loc_6E043A
0x6E0430: cmp     dword ptr [edi+40h], 0
0x6E0434: jz      short loc_6E0422
0x6E0436: test    eax, eax
0x6E0438: jnz     short loc_6E0444
0x6E043A: cmp     dword ptr [edi+40h], 0
0x6E043E: jnz     short loc_6E0422
0x6E0440: test    eax, eax
0x6E0442: jz      short loc_6E0455
0x6E0444: mov     edx, [edi+40h]
0x6E0447: mov     ecx, eax
0x6E0449: mov     eax, [ecx]
0x6E044B: mov     eax, [eax+2Ch]
0x6E044E: push    edx
0x6E044F: call    eax
0x6E0451: test    al, al
0x6E0453: jz      short loc_6E0422
0x6E0455: pop     edi
0x6E0456: mov     al, 1
0x6E0458: pop     esi
0x6E0459: retn    4
