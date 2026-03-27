0x46E850: mov     eax, [esp+arg_0]
0x46E854: push    esi
0x46E855: push    0; int
0x46E857: push    offset ??_R0?AVTESReactionForm@@@8; struct TypeDescriptor *
0x46E85C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46E861: push    0; int
0x46E863: push    eax; void *
0x46E864: mov     esi, ecx
0x46E866: call    OblivionDynamicCast
0x46E86B: add     esp, 14h
0x46E86E: test    eax, eax
0x46E870: jnz     short loc_46E878
0x46E872: mov     al, 1
0x46E874: pop     esi
0x46E875: retn    4
0x46E878: lea     ecx, [esi+4]
0x46E87B: add     eax, 4
0x46E87E: test    ecx, ecx
0x46E880: push    edi
0x46E881: jz      short loc_46E8AF
0x46E883: test    eax, eax
0x46E885: jz      short loc_46E8BE
0x46E887: mov     edx, [ecx]
0x46E889: test    edx, edx
0x46E88B: mov     esi, [eax]
0x46E88D: jz      short loc_46E8A1
0x46E88F: test    esi, esi
0x46E891: jz      short loc_46E8BE
0x46E893: mov     edi, [edx]
0x46E895: cmp     edi, [esi]
0x46E897: jnz     short loc_46E8BE
0x46E899: mov     edx, [edx+4]
0x46E89C: cmp     edx, [esi+4]
0x46E89F: jmp     short loc_46E8A3
0x46E8A1: test    esi, esi
0x46E8A3: jnz     short loc_46E8BE
0x46E8A5: mov     ecx, [ecx+4]
0x46E8A8: test    ecx, ecx
0x46E8AA: mov     eax, [eax+4]
0x46E8AD: jnz     short loc_46E883
0x46E8AF: test    eax, eax
0x46E8B1: jz      short loc_46E8C5
0x46E8B3: cmp     dword ptr [eax+4], 0
0x46E8B7: jnz     short loc_46E8BE
0x46E8B9: cmp     dword ptr [eax], 0
0x46E8BC: jz      short loc_46E8C5
0x46E8BE: pop     edi
0x46E8BF: mov     al, 1
0x46E8C1: pop     esi
0x46E8C2: retn    4
0x46E8C5: pop     edi
0x46E8C6: xor     al, al
0x46E8C8: pop     esi
0x46E8C9: retn    4
