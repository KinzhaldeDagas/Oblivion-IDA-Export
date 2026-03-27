0x665260: push    ebx
0x665261: mov     ebx, [esp+4+arg_0]
0x665265: cmp     ebx, ds:0B333C4h
0x66526B: push    ebp
0x66526C: mov     ebp, ecx
0x66526E: jnz     short loc_665285
0x665270: cmp     dword ptr [ebp+638h], 0
0x665277: jz      short loc_66527E
0x665279: call    sub_663D30
0x66527E: mov     byte ptr [ebp+117h], 1
0x665285: mov     ecx, [ebp+5F4h]
0x66528B: test    ecx, ecx
0x66528D: jz      loc_66533A
0x665293: cmp     byte ptr [ebp+117h], 0
0x66529A: push    edi
0x66529B: jnz     short loc_6652AD
0x66529D: lea     edi, [ebp+5F8h]
0x6652A3: push    edi
0x6652A4: call    sub_5299B0
0x6652A9: test    al, al
0x6652AB: jnz     short loc_6652C6
0x6652AD: mov     ecx, [ebp+5F4h]
0x6652B3: lea     edi, [ebp+5F8h]
0x6652B9: push    edi
0x6652BA: call    sub_529A20
0x6652BF: mov     byte ptr [ebp+117h], 0
0x6652C6: test    edi, edi
0x6652C8: jz      short loc_665339
0x6652CA: push    esi
0x6652CB: jmp     short loc_6652D0
0x6652CD: align 10h
0x6652D0: mov     ecx, [edi]
0x6652D2: test    ecx, ecx
0x6652D4: jz      short loc_665338
0x6652D6: cmp     byte ptr [ebp+117h], 0
0x6652DD: jnz     short loc_665338
0x6652DF: mov     edi, [edi+4]
0x6652E2: push    1
0x6652E4: call    sub_52B440
0x6652E9: mov     esi, eax
0x6652EB: cmp     esi, ebx
0x6652ED: jnz     short loc_6652F6
0x6652EF: mov     byte ptr [ebp+117h], 1
0x6652F6: test    esi, esi
0x6652F8: jz      short loc_665334
0x6652FA: mov     ecx, esi; this
0x6652FC: call    TESObjectREFR_GetContainer
0x665301: test    eax, eax
0x665303: jz      short loc_665334
0x665305: mov     ecx, esi; this
0x665307: call    TESObjectREFR_GetContainer
0x66530C: test    eax, eax
0x66530E: jz      short loc_665334
0x665310: push    eax
0x665311: push    esi; a1
0x665312: call    ContainerExtraData_GetContainerExtraDataForRef
0x665317: add     esp, 8
0x66531A: test    eax, eax
0x66531C: jz      short loc_665334
0x66531E: mov     esi, [esi+0Ch]
0x665321: push    esi
0x665322: mov     ecx, eax
0x665324: call    sub_487820
0x665329: test    al, al
0x66532B: jz      short loc_665334
0x66532D: mov     byte ptr [ebp+117h], 1
0x665334: test    edi, edi
0x665336: jnz     short loc_6652D0
0x665338: pop     esi
0x665339: pop     edi
0x66533A: pop     ebp
0x66533B: pop     ebx
0x66533C: retn    4
