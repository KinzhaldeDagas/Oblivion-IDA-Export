0x8DE600: push    esi
0x8DE601: push    edi
0x8DE602: mov     esi, ecx
0x8DE604: mov     edi, [esi+60h]
0x8DE607: dec     edi
0x8DE608: js      short loc_8DE623
0x8DE60A: lea     ebx, [ebx+0]
0x8DE610: mov     eax, [esi+5Ch]
0x8DE613: mov     ecx, [eax+edi*4]
0x8DE616: test    ecx, ecx
0x8DE618: jz      short loc_8DE620
0x8DE61A: mov     edx, [ecx]
0x8DE61C: push    esi
0x8DE61D: call    dword ptr [edx+0Ch]
0x8DE620: dec     edi
0x8DE621: jns     short loc_8DE610
0x8DE623: mov     edx, [esi+60h]
0x8DE626: dec     edx
0x8DE627: js      short loc_8DE667
0x8DE629: lea     esp, [esp+0]
0x8DE630: mov     eax, [esi+5Ch]
0x8DE633: cmp     dword ptr [eax+edx*4], 0
0x8DE637: jnz     short loc_8DE664
0x8DE639: mov     eax, [esi+60h]
0x8DE63C: dec     eax
0x8DE63D: mov     ecx, eax
0x8DE63F: cmp     edx, ecx
0x8DE641: mov     [esi+60h], eax
0x8DE644: mov     eax, edx
0x8DE646: jge     short loc_8DE664
0x8DE648: jmp     short loc_8DE650
0x8DE64A: align 10h
0x8DE650: mov     ecx, [esi+5Ch]
0x8DE653: mov     edi, [ecx+eax*4+4]
0x8DE657: lea     ecx, [ecx+eax*4]
0x8DE65A: mov     [ecx], edi
0x8DE65C: mov     ecx, [esi+60h]
0x8DE65F: inc     eax
0x8DE660: cmp     eax, ecx
0x8DE662: jl      short loc_8DE650
0x8DE664: dec     edx
0x8DE665: jns     short loc_8DE630
0x8DE667: pop     edi
0x8DE668: pop     esi
0x8DE669: retn
