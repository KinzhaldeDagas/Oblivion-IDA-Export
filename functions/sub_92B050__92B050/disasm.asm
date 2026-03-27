0x92B050: push    ebx
0x92B051: push    ebp
0x92B052: push    esi
0x92B053: push    edi
0x92B054: mov     edi, ecx
0x92B056: mov     esi, [edi+8]
0x92B059: dec     esi
0x92B05A: js      short loc_92B081
0x92B05C: mov     ebx, [esp+10h+arg_8]
0x92B060: mov     ebp, [esp+10h+arg_4]
0x92B064: mov     eax, [edi+4]
0x92B067: mov     eax, [eax+esi*4]
0x92B06A: mov     edx, [eax+14h]
0x92B06D: push    ebx
0x92B06E: lea     ecx, [eax+14h]
0x92B071: push    ebp
0x92B072: lea     eax, [esp+18h+arg_8]
0x92B076: push    eax
0x92B077: call    dword ptr [edx]
0x92B079: cmp     byte ptr [eax], 0
0x92B07C: jz      short loc_92B08F
0x92B07E: dec     esi
0x92B07F: jns     short loc_92B064
0x92B081: mov     eax, [esp+10h+arg_0]
0x92B085: pop     edi
0x92B086: pop     esi
0x92B087: pop     ebp
0x92B088: mov     byte ptr [eax], 1
0x92B08B: pop     ebx
0x92B08C: retn    0Ch
0x92B08F: mov     eax, [esp+10h+arg_0]
0x92B093: pop     edi
0x92B094: pop     esi
0x92B095: pop     ebp
0x92B096: mov     byte ptr [eax], 0
0x92B099: pop     ebx
0x92B09A: retn    0Ch
