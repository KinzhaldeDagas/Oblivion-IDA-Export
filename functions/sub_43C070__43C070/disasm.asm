0x43C070: sub     esp, 0Ch
0x43C073: mov     edx, [esp+0Ch+Comperand]
0x43C077: push    ebx
0x43C078: mov     ebx, ds:InterlockedCompareExchange
0x43C07E: push    ebp
0x43C07F: push    esi
0x43C080: mov     esi, ecx
0x43C082: mov     eax, [esi]
0x43C084: mov     ecx, [eax+0Ch]
0x43C087: lea     eax, [ecx+edx*4]
0x43C08A: push    edi
0x43C08B: mov     [esp+1Ch+var_4], eax
0x43C08F: nop
0x43C090: mov     ecx, [esp+1Ch+var_4]
0x43C094: mov     [esi+10h], ecx
0x43C097: mov     edx, ecx
0x43C099: mov     eax, [edx]
0x43C09B: mov     [esi+14h], eax
0x43C09E: mov     ecx, [esi+14h]
0x43C0A1: mov     edx, [esi+8]
0x43C0A4: and     ecx, 0FFFFFFFEh
0x43C0A7: mov     [edx], ecx
0x43C0A9: mov     eax, [esi+14h]
0x43C0AC: and     eax, 0FFFFFFFEh
0x43C0AF: mov     [esp+1Ch+var_C], eax
0x43C0B3: mov     eax, [esp+1Ch+var_C]
0x43C0B7: and     eax, 0FFFFFFFEh
0x43C0BA: mov     [esp+1Ch+var_C], eax
0x43C0BE: mov     eax, [esi+10h]
0x43C0C1: mov     eax, [eax]
0x43C0C3: mov     ecx, [esp+1Ch+var_C]
0x43C0C7: cmp     eax, ecx
0x43C0C9: jnz     short loc_43C090
0x43C0CB: jmp     short loc_43C0D0
0x43C0CD: align 10h
0x43C0D0: mov     edx, [esi+14h]
0x43C0D3: test    edx, 0FFFFFFFEh
0x43C0D9: jz      loc_43C1FD
0x43C0DF: mov     eax, [esi+14h]
0x43C0E2: and     eax, 0FFFFFFFEh
0x43C0E5: mov     ecx, [eax+8]
0x43C0E8: mov     [esi+18h], ecx
0x43C0EB: mov     edx, [esi+18h]
0x43C0EE: mov     eax, [esi+4]
0x43C0F1: and     edx, 0FFFFFFFEh
0x43C0F4: mov     [eax], edx
0x43C0F6: mov     ecx, [esi+18h]
0x43C0F9: mov     eax, [esi+14h]
0x43C0FC: and     eax, 0FFFFFFFEh
0x43C0FF: mov     edx, [eax+8]
0x43C102: cmp     ecx, edx
0x43C104: jnz     short loc_43C090
0x43C106: mov     eax, [esi+14h]
0x43C109: and     eax, 0FFFFFFFEh
0x43C10C: mov     edi, [eax]
0x43C10E: mov     eax, [esi+14h]
0x43C111: and     eax, 0FFFFFFFEh
0x43C114: mov     [esp+1Ch+Comperand], eax
0x43C118: mov     ecx, [esp+1Ch+Comperand]
0x43C11C: mov     eax, [esi+10h]
0x43C11F: mov     eax, [eax]
0x43C121: and     ecx, 0FFFFFFFEh
0x43C124: mov     [esp+1Ch+Comperand], ecx
0x43C128: mov     edx, [esp+1Ch+Comperand]
0x43C12C: cmp     eax, edx
0x43C12E: jnz     loc_43C090
0x43C134: mov     eax, [esi+18h]
0x43C137: test    al, 1
0x43C139: jnz     short loc_43C16B
0x43C13B: mov     ecx, [esi]
0x43C13D: mov     ebp, [esp+1Ch+arg_4]
0x43C141: mov     edx, [ecx]
0x43C143: mov     eax, [edx+28h]
0x43C146: push    ebp
0x43C147: push    edi
0x43C148: call    eax
0x43C14A: test    al, al
0x43C14C: jnz     loc_43C209
0x43C152: mov     ecx, [esi+14h]
0x43C155: and     ecx, 0FFFFFFFEh
0x43C158: add     ecx, 8
0x43C15B: mov     [esi+10h], ecx
0x43C15E: mov     edx, [esi+14h]
0x43C161: mov     eax, [esi+0Ch]
0x43C164: and     edx, 0FFFFFFFEh
0x43C167: mov     [eax], edx
0x43C169: jmp     short loc_43C1E7
0x43C16B: mov     eax, [esi+18h]
0x43C16E: and     eax, 0FFFFFFFEh
0x43C171: mov     [esp+1Ch+Exchange], eax
0x43C175: mov     ecx, [esp+1Ch+Exchange]
0x43C179: mov     edi, [esp+1Ch+Comperand]
0x43C17D: and     ecx, 0FFFFFFFEh
0x43C180: mov     [esp+1Ch+Exchange], ecx
0x43C184: mov     eax, [esp+1Ch+Exchange]
0x43C188: mov     ecx, [esi+10h]
0x43C18B: push    edi; Comperand
0x43C18C: push    eax; Exchange
0x43C18D: push    ecx; Destination
0x43C18E: call    ebx ; InterlockedCompareExchange
0x43C190: cmp     eax, edi
0x43C192: jnz     loc_43C090
0x43C198: mov     edi, [esi+14h]
0x43C19B: and     edi, 0FFFFFFFEh
0x43C19E: mov     ebp, [edi+4]
0x43C1A1: test    ebp, ebp
0x43C1A3: jz      short loc_43C1C9
0x43C1A5: lea     edx, [ebp+8]
0x43C1A8: push    edx; lpAddend
0x43C1A9: call    ds:InterlockedDecrement
0x43C1AF: test    eax, eax
0x43C1B1: jnz     short loc_43C1C2
0x43C1B3: test    ebp, ebp
0x43C1B5: jz      short loc_43C1C2
0x43C1B7: mov     eax, [ebp+0]
0x43C1BA: mov     edx, [eax]
0x43C1BC: push    1
0x43C1BE: mov     ecx, ebp
0x43C1C0: call    edx
0x43C1C2: mov     dword ptr [edi+4], 0
0x43C1C9: mov     eax, [esi+1Ch]
0x43C1CC: mov     [edi+4], eax
0x43C1CF: add     dword ptr [esi+20h], 1
0x43C1D3: mov     eax, [esi+20h]
0x43C1D6: mov     ecx, [esi]
0x43C1D8: mov     [esi+1Ch], edi
0x43C1DB: cmp     eax, [ecx+10h]
0x43C1DE: jnz     short loc_43C1E7
0x43C1E0: mov     ecx, esi
0x43C1E2: call    sub_43A3F0
0x43C1E7: mov     edx, [esi+18h]
0x43C1EA: mov     [esi+14h], edx
0x43C1ED: mov     eax, [esi+18h]
0x43C1F0: mov     ecx, [esi+8]
0x43C1F3: and     eax, 0FFFFFFFEh
0x43C1F6: mov     [ecx], eax
0x43C1F8: jmp     loc_43C0D0
0x43C1FD: pop     edi
0x43C1FE: pop     esi
0x43C1FF: pop     ebp
0x43C200: xor     al, al
0x43C202: pop     ebx
0x43C203: add     esp, 0Ch
0x43C206: retn    8
0x43C209: mov     ecx, [esi]
0x43C20B: mov     edx, [ecx]
0x43C20D: mov     eax, [edx+2Ch]
0x43C210: push    ebp
0x43C211: push    edi
0x43C212: call    eax
0x43C214: pop     edi
0x43C215: pop     esi
0x43C216: pop     ebp
0x43C217: pop     ebx
0x43C218: add     esp, 0Ch
0x43C21B: retn    8
