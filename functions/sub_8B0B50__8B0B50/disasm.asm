0x8B0B50: push    esi
0x8B0B51: mov     esi, ecx
0x8B0B53: cmp     dword ptr [esi+0Ch], 0
0x8B0B57: jnz     short loc_8B0BC5
0x8B0B59: push    40h ; '@'; Size
0x8B0B5B: call    FormHeapAlloc
0x8B0B60: add     esp, 4
0x8B0B63: test    eax, eax
0x8B0B65: jz      short loc_8B0BA4
0x8B0B67: fld1
0x8B0B69: mov     dword ptr [eax], 0
0x8B0B6F: mov     dword ptr [eax+4], 0
0x8B0B76: fst     dword ptr [eax+10h]
0x8B0B79: fst     dword ptr [eax+14h]
0x8B0B7C: mov     ecx, 2
0x8B0B81: fstp    dword ptr [eax+18h]
0x8B0B84: mov     [eax+20h], ecx
0x8B0B87: fldz
0x8B0B89: mov     [eax+24h], ecx
0x8B0B8C: fst     dword ptr [eax+1Ch]
0x8B0B8F: mov     dword ptr [eax+30h], 0
0x8B0B96: fstp    dword ptr [eax+28h]
0x8B0B99: fld     dword ptr ds:0A30634h
0x8B0B9F: fstp    dword ptr [eax+2Ch]
0x8B0BA2: jmp     short loc_8B0BA6
0x8B0BA4: xor     eax, eax
0x8B0BA6: cmp     dword ptr [esi+8], 0
0x8B0BAA: mov     [esi+0Ch], eax
0x8B0BAD: jz      short loc_8B0BB7
0x8B0BAF: push    eax
0x8B0BB0: mov     ecx, esi
0x8B0BB2: call    sub_8B05D0
0x8B0BB7: mov     eax, [esp+4+arg_0]
0x8B0BBB: mov     byte ptr [eax], 1
0x8B0BBE: mov     eax, [esi+0Ch]
0x8B0BC1: pop     esi
0x8B0BC2: retn    4
0x8B0BC5: mov     ecx, [esp+4+arg_0]
0x8B0BC9: mov     byte ptr [ecx], 0
0x8B0BCC: mov     eax, [esi+0Ch]
0x8B0BCF: pop     esi
0x8B0BD0: retn    4
