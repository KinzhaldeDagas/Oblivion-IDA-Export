0x4A2850: push    0FFFFFFFFh
0x4A2852: push    offset SEH_7B3E60
0x4A2857: mov     eax, large fs:0
0x4A285D: push    eax
0x4A285E: sub     esp, 0Ch
0x4A2861: push    ebx
0x4A2862: push    ebp
0x4A2863: push    esi
0x4A2864: push    edi
0x4A2865: mov     eax, ds:0B30AACh
0x4A286A: xor     eax, esp
0x4A286C: push    eax
0x4A286D: lea     eax, [esp+2Ch+var_C]
0x4A2871: mov     large fs:0, eax
0x4A2877: mov     ebp, ecx
0x4A2879: call    sub_4A25F0
0x4A287E: xor     edi, edi
0x4A2880: mov     [esp+2Ch+var_18], edi
0x4A2884: mov     edx, [ebp+0Ch]
0x4A2887: mov     ecx, [edx+4]
0x4A288A: xor     eax, eax
0x4A288C: cmp     ecx, edi
0x4A288E: mov     [esp+2Ch+var_4], edi
0x4A2892: jbe     short loc_4A28B2
0x4A2894: mov     edx, [edx+8]
0x4A2897: mov     esi, edx
0x4A2899: lea     esp, [esp+0]
0x4A28A0: cmp     [esi], edi
0x4A28A2: jnz     loc_4A295B
0x4A28A8: add     eax, 1
0x4A28AB: add     esi, 4
0x4A28AE: cmp     eax, ecx
0x4A28B0: jb      short loc_4A28A0
0x4A28B2: xor     eax, eax
0x4A28B4: mov     bl, ds:0B06B18h
0x4A28BA: xor     esi, esi
0x4A28BC: test    eax, eax
0x4A28BE: mov     [esp+2Ch+var_14], eax
0x4A28C2: mov     byte ptr ds:0B06B18h, 1
0x4A28C9: jz      short loc_4A291B
0x4A28CB: jmp     short loc_4A28D0
0x4A28CD: align 10h
0x4A28D0: lea     eax, [esp+2Ch+var_18]
0x4A28D4: push    eax
0x4A28D5: lea     ecx, [esp+30h+ArgList]
0x4A28D9: push    ecx
0x4A28DA: mov     ecx, [ebp+0Ch]
0x4A28DD: lea     edx, [esp+34h+var_14]
0x4A28E1: push    edx
0x4A28E2: call    sub_7B2600
0x4A28E7: mov     edi, [esp+2Ch+var_18]
0x4A28EB: test    edi, edi
0x4A28ED: jz      short loc_4A2914
0x4A28EF: mov     eax, [edi+4]
0x4A28F2: test    eax, eax
0x4A28F4: jz      short loc_4A2914
0x4A28F6: cmp     eax, 2
0x4A28F9: jz      short loc_4A2914
0x4A28FB: add     eax, 0FFFFFFFEh
0x4A28FE: push    eax
0x4A28FF: mov     eax, dword ptr [esp+30h+ArgList]
0x4A2903: push    eax; ArgList
0x4A2904: push    offset aTextureSCountD; "Texture \"%s\" count %d.\r\n"
0x4A2909: call    PrintError
0x4A290E: add     esp, 0Ch
0x4A2911: add     esi, 1
0x4A2914: cmp     [esp+2Ch+var_14], 0
0x4A2919: jnz     short loc_4A28D0
0x4A291B: test    edi, edi
0x4A291D: mov     ds:0B06B18h, bl
0x4A2923: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4A292B: jz      short loc_4A2945
0x4A292D: lea     ecx, [edi+4]
0x4A2930: push    ecx; lpAddend
0x4A2931: call    dword ptr ds:0A2807Ch
0x4A2937: test    eax, eax
0x4A2939: jnz     short loc_4A2945
0x4A293B: mov     edx, [edi]
0x4A293D: mov     eax, [edx]
0x4A293F: push    1
0x4A2941: mov     ecx, edi
0x4A2943: call    eax
0x4A2945: mov     eax, esi
0x4A2947: mov     ecx, dword ptr [esp+2Ch+var_C]
0x4A294B: mov     large fs:0, ecx
0x4A2952: pop     ecx
0x4A2953: pop     edi
0x4A2954: pop     esi
0x4A2955: pop     ebp
0x4A2956: pop     ebx
0x4A2957: add     esp, 18h
0x4A295A: retn
0x4A295B: mov     eax, [edx+eax*4]
0x4A295E: jmp     loc_4A28B4
