0x483680: push    ebx
0x483681: push    esi
0x483682: mov     esi, [ecx+0Ch]
0x483685: imul    esi, [esp+8+arg_0]
0x48368A: add     esi, [esp+8+arg_4]
0x48368E: xor     ebx, ebx
0x483690: shl     esi, 4
0x483693: add     esi, [ecx+10h]
0x483696: mov     eax, [esi+4]
0x483699: cmp     eax, ebx
0x48369B: jz      short loc_48371A
0x48369D: mov     ecx, [eax+1Ch]
0x4836A0: cmp     ecx, ebx
0x4836A2: push    ebp
0x4836A3: mov     ebp, ds:0A2807Ch
0x4836A9: push    edi
0x4836AA: jz      short loc_4836DE
0x4836AC: mov     edx, [ecx]
0x4836AE: mov     edx, [edx+88h]
0x4836B4: push    eax
0x4836B5: lea     eax, [esp+14h+arg_0]
0x4836B9: push    eax
0x4836BA: call    edx
0x4836BC: mov     eax, [esp+10h+arg_0]
0x4836C0: cmp     eax, ebx
0x4836C2: jz      short loc_4836DE
0x4836C4: mov     edi, eax
0x4836C6: add     eax, 4
0x4836C9: push    eax; lpAddend
0x4836CA: call    ebp ; InterlockedDecrement
0x4836CC: test    eax, eax
0x4836CE: jnz     short loc_4836DE
0x4836D0: cmp     edi, ebx
0x4836D2: jz      short loc_4836DE
0x4836D4: mov     eax, [edi]
0x4836D6: mov     edx, [eax]
0x4836D8: push    1
0x4836DA: mov     ecx, edi
0x4836DC: call    edx
0x4836DE: mov     edi, [esi+4]
0x4836E1: cmp     edi, ebx
0x4836E3: jz      short loc_483700
0x4836E5: lea     eax, [edi+4]
0x4836E8: push    eax; lpAddend
0x4836E9: call    ebp ; InterlockedDecrement
0x4836EB: test    eax, eax
0x4836ED: jnz     short loc_4836FD
0x4836EF: cmp     edi, ebx
0x4836F1: jz      short loc_4836FD
0x4836F3: mov     edx, [edi]
0x4836F5: mov     eax, [edx]
0x4836F7: push    1
0x4836F9: mov     ecx, edi
0x4836FB: call    eax
0x4836FD: mov     [esi+4], ebx
0x483700: movzx   ecx, word ptr [esi+0Ch]
0x483704: movzx   edx, word ptr [esi+8]
0x483708: push    ecx
0x483709: push    edx
0x48370A: call    sub_4EF1D0
0x48370F: push    eax
0x483710: call    sub_4B27F0
0x483715: add     esp, 0Ch
0x483718: pop     edi
0x483719: pop     ebp
0x48371A: mov     ecx, ds:0B35B8Ch
0x483720: cmp     ecx, ebx
0x483722: jz      short loc_483731
0x483724: mov     eax, [esi+0Ch]
0x483727: mov     edx, [esi+8]
0x48372A: push    eax
0x48372B: push    edx
0x48372C: call    sub_4BD380
0x483731: mov     [esi], bl
0x483733: mov     [esi+8], ebx
0x483736: mov     [esi+0Ch], ebx
0x483739: mov     [esi+1], bl
0x48373C: pop     esi
0x48373D: pop     ebx
0x48373E: retn    8
