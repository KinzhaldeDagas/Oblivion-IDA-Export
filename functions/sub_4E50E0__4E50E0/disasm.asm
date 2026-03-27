0x4E50E0: push    ebx
0x4E50E1: mov     ebx, [esp+4+a2]
0x4E50E5: test    ebx, ebx
0x4E50E7: jz      short loc_4E5163
0x4E50E9: cmp     [esp+4+arg_4], 0
0x4E50EE: jz      short loc_4E5163
0x4E50F0: push    esi
0x4E50F1: push    edi
0x4E50F2: lea     eax, [esp+0Ch+a2]
0x4E50F6: lea     edi, [ecx+34h]
0x4E50F9: push    eax
0x4E50FA: push    ebx
0x4E50FB: mov     ecx, edi
0x4E50FD: mov     [esp+14h+a2], 0
0x4E5105: call    NiTMap_GetAt
0x4E510A: test    al, al
0x4E510C: jz      short loc_4E5116
0x4E510E: mov     esi, [esp+0Ch+a2]
0x4E5112: test    esi, esi
0x4E5114: jnz     short loc_4E5140
0x4E5116: push    8; Size
0x4E5118: call    FormHeapAlloc
0x4E511D: add     esp, 4
0x4E5120: test    eax, eax
0x4E5122: jz      short loc_4E5133
0x4E5124: mov     dword ptr [eax], 0
0x4E512A: mov     dword ptr [eax+4], 0
0x4E5131: jmp     short loc_4E5135
0x4E5133: xor     eax, eax
0x4E5135: push    eax; a3
0x4E5136: push    ebx; a2
0x4E5137: mov     ecx, edi; this
0x4E5139: mov     esi, eax
0x4E513B: call    NiTMap_SetAt
0x4E5140: test    esi, esi
0x4E5142: mov     eax, esi
0x4E5144: jz      short loc_4E5155
0x4E5146: mov     ecx, [eax]
0x4E5148: cmp     ecx, [esp+0Ch+arg_4]
0x4E514C: jz      short loc_4E5161
0x4E514E: mov     eax, [eax+4]
0x4E5151: test    eax, eax
0x4E5153: jnz     short loc_4E5146
0x4E5155: mov     edx, [esp+0Ch+arg_4]
0x4E5159: push    edx
0x4E515A: mov     ecx, esi
0x4E515C: call    BSSimpleList_PushFront
0x4E5161: pop     edi
0x4E5162: pop     esi
0x4E5163: pop     ebx
0x4E5164: retn    8
