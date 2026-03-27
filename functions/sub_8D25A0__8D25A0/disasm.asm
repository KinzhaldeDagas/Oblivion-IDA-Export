0x8D25A0: push    0FFFFFFFFh
0x8D25A2: push    offset SEH_8D25A0
0x8D25A7: mov     eax, large fs:0
0x8D25AD: push    eax
0x8D25AE: sub     esp, 0Ch
0x8D25B1: push    ebx
0x8D25B2: push    ebp
0x8D25B3: push    esi
0x8D25B4: push    edi
0x8D25B5: mov     eax, ds:0B30AACh
0x8D25BA: xor     eax, esp
0x8D25BC: push    eax
0x8D25BD: lea     eax, [esp+2Ch+var_C]
0x8D25C1: mov     large fs:0, eax
0x8D25C7: mov     ebx, ecx
0x8D25C9: mov     edi, [esp+2Ch+arg_0]
0x8D25CD: test    edi, edi
0x8D25CF: jz      loc_8D2674
0x8D25D5: mov     eax, [edi+8]
0x8D25D8: mov     ecx, ds:0BA7D98h
0x8D25DE: mov     edx, [ecx]
0x8D25E0: mov     ebp, [edi+0Ch]
0x8D25E3: push    24h ; '$'
0x8D25E5: mov     [esp+30h+var_18], eax
0x8D25E9: mov     eax, [edx+10h]
0x8D25EC: push    50h ; 'P'
0x8D25EE: call    eax
0x8D25F0: mov     esi, eax
0x8D25F2: mov     word ptr [esi+4], 50h ; 'P'
0x8D25F8: mov     [esp+2Ch+arg_0], esi
0x8D25FC: fld     dword ptr ds:0B2FFE4h
0x8D2602: mov     edx, [esp+2Ch+var_18]
0x8D2606: push    ecx
0x8D2607: fstp    [esp+30h+var_30]
0x8D260A: lea     ecx, [edi+14h]
0x8D260D: push    ecx
0x8D260E: sub     esp, 0Ch
0x8D2611: mov     eax, esp
0x8D2613: mov     [eax], edx
0x8D2615: mov     ecx, 10h
0x8D261A: mov     [eax+4], ebp
0x8D261D: mov     [eax+8], ecx
0x8D2620: mov     ecx, esi
0x8D2622: mov     [esp+40h+var_4], 0
0x8D262A: call    sub_917720
0x8D262F: mov     dword ptr [esi], offset ??_7hkCharControllerShape@@6B@; const hkCharControllerShape::`vftable'
0x8D2635: fld     dword ptr [edi+4]
0x8D2638: fstp    dword ptr [esi+0Ch]
0x8D263B: mov     eax, [ebx]
0x8D263D: mov     edx, [eax+4Ch]
0x8D2640: or      ebp, 0FFFFFFFFh
0x8D2643: push    esi
0x8D2644: mov     ecx, ebx
0x8D2646: mov     [esp+30h+var_4], ebp
0x8D264A: call    edx
0x8D264C: cmp     word ptr [esi+4], 0
0x8D2651: jz      short loc_8D266A
0x8D2653: add     [esi+6], bp
0x8D2657: movzx   eax, word ptr [esi+6]
0x8D265B: test    ax, ax
0x8D265E: jnz     short loc_8D266A
0x8D2660: mov     eax, [esi]
0x8D2662: mov     edx, [eax]
0x8D2664: push    1
0x8D2666: mov     ecx, esi
0x8D2668: call    edx
0x8D266A: mov     eax, [ebx]
0x8D266C: mov     edx, [eax+7Ch]
0x8D266F: push    edi
0x8D2670: mov     ecx, ebx
0x8D2672: call    edx
0x8D2674: mov     ecx, [esp+2Ch+var_C]
0x8D2678: mov     large fs:0, ecx
0x8D267F: pop     ecx
0x8D2680: pop     edi
0x8D2681: pop     esi
0x8D2682: pop     ebp
0x8D2683: pop     ebx
0x8D2684: add     esp, 18h
0x8D2687: retn    4
