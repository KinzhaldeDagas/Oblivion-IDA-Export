0x90A810: push    ebx
0x90A811: mov     ebx, [esp+4+arg_4]
0x90A815: push    ebp
0x90A816: mov     ebp, [esp+8+arg_0]
0x90A81A: push    esi
0x90A81B: push    edi
0x90A81C: mov     edi, [esp+10h+arg_8]
0x90A820: push    edi
0x90A821: mov     esi, ecx
0x90A823: mov     ecx, [esi+0Ch]
0x90A826: mov     eax, [ecx]
0x90A828: push    ebx
0x90A829: push    ebp
0x90A82A: call    dword ptr [eax+24h]
0x90A82D: mov     eax, [esi+10h]
0x90A830: test    eax, eax
0x90A832: jz      short loc_90A83E
0x90A834: push    edi
0x90A835: mov     ecx, eax
0x90A837: mov     edx, [ecx]
0x90A839: push    ebx
0x90A83A: push    ebp
0x90A83B: call    dword ptr [edx+24h]
0x90A83E: pop     edi
0x90A83F: pop     esi
0x90A840: pop     ebp
0x90A841: pop     ebx
0x90A842: retn    0Ch
