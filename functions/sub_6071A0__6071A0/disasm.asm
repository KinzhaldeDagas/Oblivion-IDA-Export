0x6071A0: push    ebx
0x6071A1: push    esi
0x6071A2: mov     esi, ecx
0x6071A4: mov     eax, [esi+8]
0x6071A7: test    eax, eax
0x6071A9: jz      short loc_6071CE
0x6071AB: push    0; int
0x6071AD: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x6071B2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6071B7: push    0; int
0x6071B9: push    eax; a1
0x6071BA: call    TESForm_LookupByFormID
0x6071BF: add     esp, 4
0x6071C2: push    eax; void *
0x6071C3: call    OblivionDynamicCast
0x6071C8: add     esp, 14h
0x6071CB: mov     [esi+8], eax
0x6071CE: mov     eax, [esi+0Ch]
0x6071D1: test    eax, eax
0x6071D3: jz      short loc_6071F8
0x6071D5: push    0; int
0x6071D7: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6071DC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6071E1: push    0; int
0x6071E3: push    eax; a1
0x6071E4: call    TESForm_LookupByFormID
0x6071E9: add     esp, 4
0x6071EC: push    eax; void *
0x6071ED: call    OblivionDynamicCast
0x6071F2: add     esp, 14h
0x6071F5: mov     [esi+0Ch], eax
0x6071F8: mov     eax, [esi+14h]
0x6071FB: test    eax, eax
0x6071FD: jz      short loc_607222
0x6071FF: push    0; int
0x607201: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x607206: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x60720B: push    0; int
0x60720D: push    eax; a1
0x60720E: call    TESForm_LookupByFormID
0x607213: add     esp, 4
0x607216: push    eax; void *
0x607217: call    OblivionDynamicCast
0x60721C: add     esp, 14h
0x60721F: mov     [esi+14h], eax
0x607222: mov     eax, [esi+24h]
0x607225: test    eax, eax
0x607227: jz      short loc_607235
0x607229: push    eax; a1
0x60722A: call    TESForm_LookupByFormID
0x60722F: add     esp, 4
0x607232: mov     [esi+24h], eax
0x607235: add     esi, 1Ch
0x607238: xor     ebx, ebx
0x60723A: test    esi, esi
0x60723C: jz      short loc_6072B8
0x60723E: push    edi
0x60723F: nop
0x607240: cmp     dword ptr [esi+4], 0
0x607244: jnz     short loc_60724B
0x607246: cmp     dword ptr [esi], 0
0x607249: jz      short loc_6072B7
0x60724B: mov     eax, [esi]
0x60724D: test    eax, eax
0x60724F: mov     edi, eax
0x607251: jz      short loc_607277
0x607253: push    0; int
0x607255: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x60725A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x60725F: push    0; int
0x607261: push    eax; a1
0x607262: call    TESForm_LookupByFormID
0x607267: add     esp, 4
0x60726A: push    eax; void *
0x60726B: call    OblivionDynamicCast
0x607270: add     esp, 14h
0x607273: test    eax, eax
0x607275: jnz     short loc_6072AC
0x607277: test    ebx, ebx
0x607279: jnz     short loc_60729F
0x60727B: mov     eax, [esi+4]
0x60727E: test    eax, eax
0x607280: jz      short loc_607297
0x607282: mov     ecx, [eax+4]
0x607285: mov     [esi+4], ecx
0x607288: mov     edx, [eax]
0x60728A: push    eax
0x60728B: mov     [esi], edx
0x60728D: call    FormHeapFree
0x607292: add     esp, 4
0x607295: jmp     short loc_6072B3
0x607297: mov     dword ptr [esi], 0
0x60729D: jmp     short loc_6072B3
0x60729F: push    edi
0x6072A0: mov     ecx, ebx
0x6072A2: call    BSSimpleList_Remove
0x6072A7: mov     esi, [ebx+4]
0x6072AA: jmp     short loc_6072B3
0x6072AC: mov     [esi], eax
0x6072AE: mov     ebx, esi
0x6072B0: mov     esi, [esi+4]
0x6072B3: test    esi, esi
0x6072B5: jnz     short loc_607240
0x6072B7: pop     edi
0x6072B8: pop     esi
0x6072B9: pop     ebx
0x6072BA: retn
