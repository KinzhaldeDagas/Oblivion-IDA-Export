0x6D2600: sub     esp, 0Ch
0x6D2603: fldz
0x6D2605: push    ebx
0x6D2606: push    esi
0x6D2607: mov     esi, ecx
0x6D2609: fst     dword ptr [esi+30h]
0x6D260C: xor     bl, bl
0x6D260E: cmp     [esi+0Dh], bl
0x6D2611: fld1
0x6D2613: fstp    [esp+14h+var_8]
0x6D2617: mov     [esp+14h+var_9], 0
0x6D261C: jbe     loc_6D26F4
0x6D2622: push    ebp
0x6D2623: mov     ebp, [esp+18h+arg_4]
0x6D2627: push    edi
0x6D2628: jmp     short loc_6D2632
0x6D262A: align 10h
0x6D2630: fldz
0x6D2632: movzx   eax, bl
0x6D2635: lea     edi, [eax+eax*2]
0x6D2638: mov     eax, [esi+14h]
0x6D263B: add     edi, edi
0x6D263D: add     edi, edi
0x6D263F: add     edi, edi
0x6D2641: mov     ecx, [edi+eax]
0x6D2644: test    ecx, ecx
0x6D2646: lea     edx, [edi+eax]
0x6D2649: jz      loc_6D26E2
0x6D264F: fcom    dword ptr [edx+8]
0x6D2652: fnstsw  ax
0x6D2654: test    ah, 5
0x6D2657: jp      loc_6D26E2
0x6D265D: test    ecx, ecx
0x6D265F: fld     [esp+1Ch+arg_0]
0x6D2663: fstp    [esp+1Ch+arg_4]
0x6D2667: jz      short loc_6D2695
0x6D2669: fcomp   dword ptr [edx+8]
0x6D266C: fnstsw  ax
0x6D266E: test    ah, 44h
0x6D2671: jnp     short loc_6D2697
0x6D2673: test    byte ptr [esi+0Ch], 1
0x6D2677: jz      short loc_6D2680
0x6D2679: fld     dword ptr [edx+14h]
0x6D267C: fstp    [esp+1Ch+arg_4]
0x6D2680: fld     [esp+1Ch+arg_4]
0x6D2684: fld     st
0x6D2686: fld     dword ptr ds:0A79F00h
0x6D268C: fucompp
0x6D268E: fnstsw  ax
0x6D2690: test    ah, 44h
0x6D2693: jp      short loc_6D26A4
0x6D2695: fstp    st
0x6D2697: fld     [esp+1Ch+var_8]
0x6D269B: fsub    dword ptr [edx+8]
0x6D269E: fstp    [esp+1Ch+var_8]
0x6D26A2: jmp     short loc_6D26E4
0x6D26A4: mov     edx, [ecx]
0x6D26A6: mov     edx, [edx+5Ch]
0x6D26A9: lea     eax, [esp+1Ch+var_4]
0x6D26AD: push    eax
0x6D26AE: push    ebp
0x6D26AF: push    ecx
0x6D26B0: fstp    [esp+28h+var_28]
0x6D26B3: call    edx
0x6D26B5: test    al, al
0x6D26B7: jz      short loc_6D26D1
0x6D26B9: mov     eax, [esi+14h]
0x6D26BC: fld     dword ptr [edi+eax+8]
0x6D26C0: mov     [esp+1Ch+var_9], 1
0x6D26C5: fmul    [esp+1Ch+var_4]
0x6D26C9: fadd    dword ptr [esi+30h]
0x6D26CC: fstp    dword ptr [esi+30h]
0x6D26CF: jmp     short loc_6D26E4
0x6D26D1: fld     [esp+1Ch+var_8]
0x6D26D5: mov     ecx, [esi+14h]
0x6D26D8: fsub    dword ptr [edi+ecx+8]
0x6D26DC: fstp    [esp+1Ch+var_8]
0x6D26E0: jmp     short loc_6D26E4
0x6D26E2: fstp    st
0x6D26E4: add     bl, 1
0x6D26E7: cmp     bl, [esi+0Dh]
0x6D26EA: jb      loc_6D2630
0x6D26F0: pop     edi
0x6D26F1: pop     ebp
0x6D26F2: jmp     short loc_6D26F6
0x6D26F4: fstp    st
0x6D26F6: cmp     [esp+14h+var_9], 0
0x6D26FB: fld     dword ptr [esi+30h]
0x6D26FE: fdiv    [esp+14h+var_8]
0x6D2702: fstp    [esp+14h+arg_4]
0x6D2706: fld     [esp+14h+arg_4]
0x6D270A: fst     dword ptr [esi+30h]
0x6D270D: jnz     short loc_6D2730
0x6D270F: mov     edx, [esp+14h+arg_8]
0x6D2713: fstp    st
0x6D2715: fld     dword ptr ds:0A7C6B0h
0x6D271B: xor     al, al
0x6D271D: fstp    dword ptr [edx]
0x6D271F: fld     dword ptr ds:0A7C6B0h
0x6D2725: fstp    dword ptr [esi+30h]
0x6D2728: pop     esi
0x6D2729: pop     ebx
0x6D272A: add     esp, 0Ch
0x6D272D: retn    0Ch
0x6D2730: mov     eax, [esp+14h+arg_8]
0x6D2734: pop     esi
0x6D2735: fstp    dword ptr [eax]
0x6D2737: mov     al, 1
0x6D2739: pop     ebx
0x6D273A: add     esp, 0Ch
0x6D273D: retn    0Ch
