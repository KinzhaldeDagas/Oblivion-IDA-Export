0x6C5760: push    0FFFFFFFFh
0x6C5762: push    offset SEH_6C5760
0x6C5767: mov     eax, large fs:0
0x6C576D: push    eax
0x6C576E: push    ebp
0x6C576F: push    esi
0x6C5770: push    edi
0x6C5771: mov     eax, ds:0B30AACh
0x6C5776: xor     eax, esp
0x6C5778: push    eax
0x6C5779: lea     eax, [esp+1Ch+var_C]
0x6C577D: mov     large fs:0, eax
0x6C5783: mov     ebp, ecx
0x6C5785: test    ebp, ebp
0x6C5787: mov     esi, [esp+1Ch+arg_0]
0x6C578B: jz      short loc_6C5793
0x6C578D: cmp     dword ptr [esi+40h], 0
0x6C5791: jnz     short loc_6C57C7
0x6C5793: cmp     dword ptr [esi+5Ch], 0
0x6C5797: mov     [esi+40h], ebp
0x6C579A: jnz     short loc_6C57AA
0x6C579C: mov     eax, [ebp+30h]
0x6C579F: mov     eax, [eax+8]
0x6C57A2: push    eax; Src
0x6C57A3: mov     ecx, esi
0x6C57A5: call    sub_49F4D0
0x6C57AA: cmp     byte ptr [esp+1Ch+arg_8], 0
0x6C57AF: jz      short loc_6C57DE
0x6C57B1: mov     ecx, [ebp+30h]
0x6C57B4: push    ecx
0x6C57B5: mov     ecx, esi
0x6C57B7: call    sub_6C9590
0x6C57BC: test    al, al
0x6C57BE: jnz     short loc_6C57DE
0x6C57C0: mov     dword ptr [esi+40h], 0
0x6C57C7: xor     al, al
0x6C57C9: mov     ecx, [esp+1Ch+var_C]
0x6C57CD: mov     large fs:0, ecx
0x6C57D4: pop     ecx
0x6C57D5: pop     edi
0x6C57D6: pop     esi
0x6C57D7: pop     ebp
0x6C57D8: add     esp, 0Ch
0x6C57DB: retn    0Ch
0x6C57DE: mov     eax, [esp+1Ch+arg_4]
0x6C57E2: test    eax, eax
0x6C57E4: jz      short loc_6C57EE
0x6C57E6: push    eax
0x6C57E7: mov     ecx, esi
0x6C57E9: call    sub_434930
0x6C57EE: lea     edi, [esi+4]
0x6C57F1: push    edi; lpAddend
0x6C57F2: mov     [esp+20h+arg_8], esi
0x6C57F6: call    dword ptr ds:0A28078h
0x6C57FC: lea     edx, [esp+1Ch+arg_8]
0x6C5800: push    edx
0x6C5801: lea     ecx, [ebp+3Ch]
0x6C5804: mov     [esp+20h+var_4], 0
0x6C580C: call    sub_6C5240
0x6C5811: push    edi; lpAddend
0x6C5812: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6C581A: call    dword ptr ds:0A2807Ch
0x6C5820: test    eax, eax
0x6C5822: jnz     short loc_6C582E
0x6C5824: mov     eax, [esi]
0x6C5826: mov     edx, [eax]
0x6C5828: push    1
0x6C582A: mov     ecx, esi
0x6C582C: call    edx
0x6C582E: mov     eax, [esi+8]
0x6C5831: push    esi
0x6C5832: push    eax
0x6C5833: lea     ecx, [ebp+58h]
0x6C5836: call    sub_412D30
0x6C583B: mov     al, 1
0x6C583D: mov     ecx, [esp+1Ch+var_C]
0x6C5841: mov     large fs:0, ecx
0x6C5848: pop     ecx
0x6C5849: pop     edi
0x6C584A: pop     esi
0x6C584B: pop     ebp
0x6C584C: add     esp, 0Ch
0x6C584F: retn    0Ch
