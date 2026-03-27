0x6786A0: push    ebx
0x6786A1: push    ebp
0x6786A2: push    edi
0x6786A3: mov     edi, [esp+0Ch+arg_0]
0x6786A7: test    edi, edi
0x6786A9: mov     ebp, ecx
0x6786AB: mov     ebx, edi
0x6786AD: jz      loc_678747
0x6786B3: push    esi
0x6786B4: mov     ecx, [edi]
0x6786B6: test    ecx, ecx
0x6786B8: jz      loc_678746
0x6786BE: mov     eax, [ecx]
0x6786C0: mov     edx, [eax+188h]
0x6786C6: xor     esi, esi
0x6786C8: call    edx
0x6786CA: test    al, al
0x6786CC: jz      short loc_6786D0
0x6786CE: mov     esi, [edi]
0x6786D0: test    esi, esi
0x6786D2: mov     edi, [edi+4]
0x6786D5: jz      short loc_67873E
0x6786D7: cmp     [esp+10h+arg_4], 0
0x6786DC: jz      short loc_678736
0x6786DE: mov     eax, [esi+8]
0x6786E1: mov     ecx, eax
0x6786E3: shr     ecx, 5
0x6786E6: test    cl, 1
0x6786E9: jnz     short loc_678714
0x6786EB: shr     eax, 0Bh
0x6786EE: test    al, 1
0x6786F0: jnz     short loc_678714
0x6786F2: cmp     esi, ds:0B333C4h
0x6786F8: jz      short loc_67873E
0x6786FA: cmp     dword ptr [esi+58h], 0
0x6786FE: jz      short loc_67873E
0x678700: mov     edx, [esi]
0x678702: mov     eax, [edx+1C4h]
0x678708: mov     ecx, esi
0x67870A: call    eax
0x67870C: test    al, al
0x67870E: jnz     short loc_67873E
0x678710: mov     edi, ebx
0x678712: jmp     short loc_67873E
0x678714: cmp     dword ptr [esi+58h], 0
0x678718: jz      short loc_67873E
0x67871A: mov     ecx, esi; this
0x67871C: call    Actor__GetProcessLevel
0x678721: push    eax
0x678722: push    esi
0x678723: mov     ecx, offset ActorProcessManager_ptr
0x678728: call    sub_674550
0x67872D: mov     ecx, esi
0x67872F: call    sub_659BC0
0x678734: jmp     short loc_67873E
0x678736: push    esi
0x678737: mov     ecx, ebp
0x678739: call    sub_6748B0
0x67873E: test    edi, edi
0x678740: jnz     loc_6786B4
0x678746: pop     esi
0x678747: pop     edi
0x678748: pop     ebp
0x678749: pop     ebx
0x67874A: retn    8
