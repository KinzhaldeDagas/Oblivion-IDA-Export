0x611B40: push    esi
0x611B41: push    edi
0x611B42: mov     edi, [esp+8+arg_0]
0x611B46: mov     esi, ecx
0x611B48: mov     eax, [esi]
0x611B4A: mov     edx, [eax+370h]
0x611B50: push    edi
0x611B51: call    edx
0x611B53: test    al, al
0x611B55: mov     eax, [esi]
0x611B57: mov     edx, [eax+308h]
0x611B5D: push    0
0x611B5F: mov     ecx, esi
0x611B61: jz      short loc_611BC2
0x611B63: push    6
0x611B65: push    edi
0x611B66: call    edx
0x611B68: mov     eax, [esi]
0x611B6A: mov     edx, [eax+330h]
0x611B70: mov     ecx, esi
0x611B72: call    edx
0x611B74: test    eax, eax
0x611B76: jz      short loc_611B8C
0x611B78: mov     eax, [esi]
0x611B7A: mov     edx, [eax+330h]
0x611B80: push    edi
0x611B81: mov     ecx, esi
0x611B83: call    edx
0x611B85: mov     ecx, eax
0x611B87: call    sub_615480
0x611B8C: mov     eax, [esi]
0x611B8E: mov     edx, [eax+340h]
0x611B94: push    edi
0x611B95: mov     ecx, esi
0x611B97: call    edx
0x611B99: mov     ecx, esi; this
0x611B9B: call    sub_5E6C60
0x611BA0: test    al, al
0x611BA2: jz      short loc_611BC7
0x611BA4: mov     eax, ds:0B333C4h
0x611BA9: cmp     edi, eax
0x611BAB: jnz     short loc_611BC7
0x611BAD: cmp     byte ptr [eax+738h], 0
0x611BB4: jz      short loc_611BC7
0x611BB6: pop     edi
0x611BB7: mov     byte ptr [eax+738h], 0
0x611BBE: pop     esi
0x611BBF: retn    4
0x611BC2: push    0
0x611BC4: push    edi
0x611BC5: call    edx
0x611BC7: pop     edi
0x611BC8: pop     esi
0x611BC9: retn    4
