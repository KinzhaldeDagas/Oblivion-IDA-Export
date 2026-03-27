0x5F8300: push    0FFFFFFFFh
0x5F8302: push    offset SEH_616530
0x5F8307: mov     eax, large fs:0
0x5F830D: push    eax
0x5F830E: sub     esp, 0Ch
0x5F8311: push    ebx
0x5F8312: push    ebp
0x5F8313: push    esi
0x5F8314: push    edi
0x5F8315: mov     eax, ds:0B30AACh
0x5F831A: xor     eax, esp
0x5F831C: push    eax
0x5F831D: lea     eax, [esp+2Ch+var_C]
0x5F8321: mov     large fs:0, eax
0x5F8327: mov     esi, ecx
0x5F8329: xor     ebx, ebx
0x5F832B: cmp     [esi+58h], ebx
0x5F832E: jz      loc_5F843E
0x5F8334: mov     ecx, [esi+58h]
0x5F8337: mov     eax, [ecx]
0x5F8339: mov     edx, [eax+0F4h]
0x5F833F: push    1
0x5F8341: call    edx
0x5F8343: cmp     eax, ebx
0x5F8345: jz      loc_5F843E
0x5F834B: mov     edi, [eax+8]
0x5F834E: mov     ecx, esi; this
0x5F8350: mov     [esp+2Ch+var_18], ebx
0x5F8354: call    TESObjectREFR_GetContainer
0x5F8359: cmp     eax, ebx
0x5F835B: jz      short loc_5F8377
0x5F835D: push    eax
0x5F835E: push    esi; a1
0x5F835F: call    ContainerExtraData_GetContainerExtraDataForRef
0x5F8364: add     esp, 8
0x5F8367: cmp     eax, ebx
0x5F8369: jz      short loc_5F8377
0x5F836B: push    edi; a2
0x5F836C: mov     ecx, eax; this
0x5F836E: call    ContainerExtraData_GetItemCount
0x5F8373: mov     [esp+2Ch+var_18], eax
0x5F8377: mov     ecx, [esi+58h]
0x5F837A: mov     eax, [ecx]
0x5F837C: mov     ebp, [esp+2Ch+arg_0]
0x5F8380: mov     edx, [eax+128h]
0x5F8386: push    ebp
0x5F8387: call    edx
0x5F8389: test    eax, eax
0x5F838B: jz      loc_5F843E
0x5F8391: mov     edi, [esp+2Ch+arg_4]
0x5F8395: cmp     edi, ebx
0x5F8397: jnz     short loc_5F83AB
0x5F8399: mov     esi, [esi+58h]
0x5F839C: mov     eax, [esi]
0x5F839E: mov     edx, [eax+128h]
0x5F83A4: push    ebp
0x5F83A5: mov     ecx, esi
0x5F83A7: call    edx
0x5F83A9: mov     edi, eax
0x5F83AB: mov     eax, [edi]
0x5F83AD: mov     edx, [eax+58h]
0x5F83B0: push    offset aArrow0; "Arrow:0"
0x5F83B5: mov     ecx, edi
0x5F83B7: call    edx
0x5F83B9: cmp     eax, ebx
0x5F83BB: jz      short loc_5F83C3
0x5F83BD: and     word ptr [eax+18h], 0FFFEh
0x5F83C3: mov     esi, 1
0x5F83C8: cmp     esi, ds:0B35588h
0x5F83CE: jge     short loc_5F843E
0x5F83D0: mov     [esp+2Ch+var_14], ebx
0x5F83D4: mov     [esp+2Ch+var_10], bx
0x5F83D9: mov     [esp+2Ch+var_E], bx
0x5F83DE: push    esi; ArgList
0x5F83DF: lea     eax, [esp+30h+var_14]
0x5F83E3: push    offset aArrowD; "Arrow%d"
0x5F83E8: push    eax; int
0x5F83E9: mov     [esp+38h+var_4], ebx
0x5F83ED: call    BSStringT_Static_Format
0x5F83F2: mov     edx, [edi]
0x5F83F4: mov     ebp, [esp+38h+var_14]
0x5F83F8: mov     eax, [edx+58h]
0x5F83FB: add     esp, 0Ch
0x5F83FE: push    ebp
0x5F83FF: mov     ecx, edi
0x5F8401: call    eax
0x5F8403: cmp     eax, ebx
0x5F8405: jz      short loc_5F841A
0x5F8407: cmp     esi, [esp+2Ch+var_18]
0x5F840B: jl      short loc_5F8414
0x5F840D: or      word ptr [eax+18h], 1
0x5F8412: jmp     short loc_5F841A
0x5F8414: and     word ptr [eax+18h], 0FFFEh
0x5F841A: push    ebp
0x5F841B: mov     [esp+30h+var_4], 0FFFFFFFFh
0x5F8423: call    FormHeapFree
0x5F8428: add     esp, 4
0x5F842B: mov     [esp+2Ch+var_14], ebx
0x5F842F: mov     [esp+2Ch+var_E], bx
0x5F8434: mov     [esp+2Ch+var_10], bx
0x5F8439: add     esi, 1
0x5F843C: jmp     short loc_5F83C8
0x5F843E: mov     ecx, [esp+2Ch+var_C]
0x5F8442: mov     large fs:0, ecx
0x5F8449: pop     ecx
0x5F844A: pop     edi
0x5F844B: pop     esi
0x5F844C: pop     ebp
0x5F844D: pop     ebx
0x5F844E: add     esp, 18h
0x5F8451: retn    8
