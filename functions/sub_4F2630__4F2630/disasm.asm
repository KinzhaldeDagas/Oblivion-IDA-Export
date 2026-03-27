0x4F2630: push    0FFFFFFFFh
0x4F2632: push    offset SEH_4F2630
0x4F2637: mov     eax, large fs:0
0x4F263D: push    eax
0x4F263E: sub     esp, 1Ch
0x4F2641: push    esi
0x4F2642: push    edi
0x4F2643: mov     eax, ds:0B30AACh
0x4F2648: xor     eax, esp
0x4F264A: push    eax
0x4F264B: lea     eax, [esp+34h+var_C]
0x4F264F: mov     large fs:0, eax
0x4F2655: mov     esi, ecx
0x4F2657: test    byte ptr [esi+5Ch], 4
0x4F265B: jz      loc_4F274D
0x4F2661: mov     ecx, ds:0B33A10h
0x4F2667: call    sub_432860
0x4F266C: mov     ecx, ds:0B33A98h
0x4F2672: push    0FFFFFFFDh
0x4F2674: call    sub_447DB0
0x4F2679: mov     ecx, ds:0B333A0h
0x4F267F: push    esi
0x4F2680: call    sub_4426F0
0x4F2685: mov     ecx, ds:0B33B00h
0x4F268B: push    esi
0x4F268C: call    sub_459F80
0x4F2691: push    25h ; '%'
0x4F2693: lea     ecx, [esp+38h+var_1C]
0x4F2697: call    sub_4B8420
0x4F269C: mov     ecx, [esi+30h]
0x4F269F: mov     edx, [ecx+4]
0x4F26A2: xor     eax, eax
0x4F26A4: test    edx, edx
0x4F26A6: mov     [esp+34h+var_4], 0
0x4F26AE: jbe     short loc_4F26C8
0x4F26B0: mov     edi, [ecx+8]
0x4F26B3: mov     ecx, edi
0x4F26B5: cmp     dword ptr [ecx], 0
0x4F26B8: jnz     loc_4F275F
0x4F26BE: add     eax, 1
0x4F26C1: add     ecx, 4
0x4F26C4: cmp     eax, edx
0x4F26C6: jb      short loc_4F26B5
0x4F26C8: xor     eax, eax
0x4F26CA: test    eax, eax
0x4F26CC: mov     [esp+34h+var_24], eax
0x4F26D0: jz      short loc_4F270A
0x4F26D2: lea     eax, [esp+34h+var_28]
0x4F26D6: push    eax
0x4F26D7: lea     ecx, [esp+38h+var_20]
0x4F26DB: push    ecx
0x4F26DC: mov     ecx, [esi+30h]
0x4F26DF: lea     edx, [esp+3Ch+var_24]
0x4F26E3: push    edx
0x4F26E4: mov     [esp+40h+var_28], 0
0x4F26EC: call    sub_452600
0x4F26F1: mov     ecx, [esp+34h+var_28]
0x4F26F5: test    ecx, ecx
0x4F26F7: jz      short loc_4F2703
0x4F26F9: lea     eax, [esp+34h+var_1C]
0x4F26FD: push    eax
0x4F26FE: call    sub_4CBE50
0x4F2703: cmp     [esp+34h+var_24], 0
0x4F2708: jnz     short loc_4F26D2
0x4F270A: mov     ecx, [esi+34h]
0x4F270D: test    ecx, ecx
0x4F270F: jz      short loc_4F271B
0x4F2711: lea     edx, [esp+34h+var_1C]
0x4F2715: push    edx
0x4F2716: call    sub_4CBE50
0x4F271B: mov     ecx, ds:0B33A98h
0x4F2721: push    0FFFFFFFFh
0x4F2723: call    sub_447DB0
0x4F2728: mov     ecx, ds:0B33A10h
0x4F272E: call    sub_432890
0x4F2733: lea     ecx, [esp+34h+var_1C]
0x4F2737: call    NiTMap_Clear
0x4F273C: lea     ecx, [esp+34h+var_1C]
0x4F2740: mov     [esp+34h+var_4], 0FFFFFFFFh
0x4F2748: call    ??1?$NiTPointerMap@PAVTESObjectCELL@@_N@@UAE@XZ; NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(void)
0x4F274D: mov     ecx, [esp+34h+var_C]
0x4F2751: mov     large fs:0, ecx
0x4F2758: pop     ecx
0x4F2759: pop     edi
0x4F275A: pop     esi
0x4F275B: add     esp, 28h
0x4F275E: retn
0x4F275F: mov     eax, [edi+eax*4]
0x4F2762: jmp     loc_4F26CA
