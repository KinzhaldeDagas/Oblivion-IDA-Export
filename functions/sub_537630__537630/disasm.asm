0x537630: push    esi
0x537631: push    edi
0x537632: mov     edi, ecx
0x537634: mov     esi, [edi+1Ch]
0x537637: test    esi, esi
0x537639: jz      short loc_537656
0x53763B: jmp     short loc_537640
0x53763D: align 10h
0x537640: fld     [esp+8+arg_0]
0x537644: push    ecx
0x537645: mov     ecx, esi
0x537647: fstp    [esp+0Ch+var_C]
0x53764A: call    sub_537020
0x53764F: mov     esi, [esi+4]
0x537652: test    esi, esi
0x537654: jnz     short loc_537640
0x537656: mov     edi, [edi+18h]
0x537659: test    edi, edi
0x53765B: jz      short loc_537686
0x53765D: lea     ecx, [ecx+0]
0x537660: mov     eax, [edi+10h]
0x537663: test    eax, eax
0x537665: jz      short loc_53767F
0x537667: mov     ecx, [eax+0Ch]
0x53766A: mov     edx, [ecx]
0x53766C: mov     esi, [eax+4]
0x53766F: push    eax
0x537670: mov     eax, [edx+110h]
0x537676: push    edi
0x537677: call    eax
0x537679: test    esi, esi
0x53767B: mov     eax, esi
0x53767D: jnz     short loc_537667
0x53767F: mov     edi, [edi+4]
0x537682: test    edi, edi
0x537684: jnz     short loc_537660
0x537686: pop     edi
0x537687: pop     esi
0x537688: retn    4
