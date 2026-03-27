0x4CC850: push    ebp
0x4CC851: mov     ebp, [esp+4+arg_0]
0x4CC855: test    ebp, ebp
0x4CC857: jnz     short loc_4CC85D
0x4CC859: xor     al, al
0x4CC85B: pop     ebp
0x4CC85C: retn
0x4CC85D: mov     eax, [ebp+23Ch]
0x4CC863: cmp     eax, ds:0B06048h
0x4CC869: push    edi
0x4CC86A: lea     edi, [ebp+23Ch]
0x4CC870: jnz     short loc_4CC889
0x4CC872: push    1
0x4CC874: mov     ecx, ebp
0x4CC876: call    TESFile_NextRecordEx; NextForm?
0x4CC87B: test    al, al
0x4CC87D: jz      short loc_4CC889
0x4CC87F: mov     ecx, [edi]
0x4CC881: cmp     ecx, ds:0B05E20h
0x4CC887: jz      short loc_4CC88E
0x4CC889: pop     edi
0x4CC88A: xor     al, al
0x4CC88C: pop     ebp
0x4CC88D: retn
0x4CC88E: push    ebx
0x4CC88F: mov     ebx, [edi+4]
0x4CC892: push    1
0x4CC894: mov     ecx, ebp
0x4CC896: sub     ebx, 14h
0x4CC899: call    TESFile_NextRecordEx; NextForm?
0x4CC89E: test    al, al
0x4CC8A0: jnz     short loc_4CC8A6
0x4CC8A2: pop     ebx
0x4CC8A3: pop     edi
0x4CC8A4: pop     ebp
0x4CC8A5: retn
0x4CC8A6: and     [esp+0Ch+arg_4], 0FFFFFFh
0x4CC8AE: push    esi
0x4CC8AF: mov     byte ptr [esp+10h+arg_0], 0
0x4CC8B4: xor     esi, esi
0x4CC8B6: cmp     esi, ebx
0x4CC8B8: mov     eax, edi
0x4CC8BA: jnb     short loc_4CC8FB
0x4CC8BC: mov     edx, [eax]
0x4CC8BE: cmp     edx, ds:0B05E20h
0x4CC8C4: jz      short loc_4CC8E1
0x4CC8C6: mov     ecx, [ebp+248h]
0x4CC8CC: and     ecx, 0FFFFFFh
0x4CC8D2: cmp     ecx, [esp+10h+arg_4]
0x4CC8D6: jz      short loc_4CC8F6
0x4CC8D8: mov     edx, [eax+4]
0x4CC8DB: lea     esi, [esi+edx+14h]
0x4CC8DF: jmp     short loc_4CC8E4
0x4CC8E1: add     esi, 14h
0x4CC8E4: push    1
0x4CC8E6: mov     ecx, ebp
0x4CC8E8: call    TESFile_NextRecordEx; NextForm?
0x4CC8ED: test    al, al
0x4CC8EF: jnz     short loc_4CC8B6
0x4CC8F1: pop     esi
0x4CC8F2: pop     ebx
0x4CC8F3: pop     edi
0x4CC8F4: pop     ebp
0x4CC8F5: retn
0x4CC8F6: mov     byte ptr [esp+10h+arg_0], 1
0x4CC8FB: mov     al, byte ptr [esp+10h+arg_0]
0x4CC8FF: pop     esi
0x4CC900: pop     ebx
0x4CC901: pop     edi
0x4CC902: pop     ebp
0x4CC903: retn
