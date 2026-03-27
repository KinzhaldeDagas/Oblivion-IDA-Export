0x4F28B0: push    0FFFFFFFFh
0x4F28B2: push    offset SEH_4F28B0
0x4F28B7: mov     eax, large fs:0
0x4F28BD: push    eax
0x4F28BE: sub     esp, 14h
0x4F28C1: push    ebx
0x4F28C2: push    ebp
0x4F28C3: push    esi
0x4F28C4: push    edi
0x4F28C5: mov     eax, ds:0B30AACh
0x4F28CA: xor     eax, esp
0x4F28CC: push    eax
0x4F28CD: lea     eax, [esp+34h+var_C]
0x4F28D1: mov     large fs:0, eax
0x4F28D7: mov     ebx, ecx
0x4F28D9: xor     edi, edi
0x4F28DB: mov     byte ptr [ebx+0D8h], 0
0x4F28E2: mov     [esp+34h+var_14], edi
0x4F28E6: mov     [esp+34h+var_10], di
0x4F28EB: mov     [esp+34h+var_E], di
0x4F28F0: mov     eax, [ebx]
0x4F28F2: mov     edx, [eax+0D4h]
0x4F28F8: mov     [esp+34h+var_4], edi
0x4F28FC: call    edx
0x4F28FE: push    eax; ArgList
0x4F28FF: lea     eax, [esp+38h+var_14]
0x4F2903: push    offset aDataDistantlod; "Data\\DistantLOD\\%s.cmp"
0x4F2908: push    eax; int
0x4F2909: call    BSStringT_Static_Format
0x4F290E: mov     ebp, [esp+40h+var_14]
0x4F2912: push    800h
0x4F2917: push    edi
0x4F2918: push    ebp
0x4F2919: call    FileFinder_LoadBSFile
0x4F291E: mov     esi, eax
0x4F2920: add     esp, 18h
0x4F2923: cmp     esi, edi
0x4F2925: jnz     short loc_4F292D
0x4F2927: push    ebp
0x4F2928: jmp     loc_4F29D0
0x4F292D: lea     ebp, [ebx+0C8h]
0x4F2933: mov     ecx, ebp
0x4F2935: call    NiTMap_Clear
0x4F293A: mov     edx, [esi]
0x4F293C: mov     eax, [edx+18h]
0x4F293F: push    edi
0x4F2940: push    edi
0x4F2941: mov     ecx, esi
0x4F2943: call    eax
0x4F2945: mov     edx, [esi]
0x4F2947: mov     eax, [edx+1Ch]
0x4F294A: mov     ecx, esi
0x4F294C: call    eax
0x4F294E: shr     eax, 2
0x4F2951: sub     eax, 1
0x4F2954: cmp     byte ptr [esi+24h], 0
0x4F2958: jz      short loc_4F29C1
0x4F295A: cmp     eax, edi
0x4F295C: jbe     short loc_4F29A8
0x4F295E: mov     [esp+34h+var_1C], eax
0x4F2962: mov     edx, [esi]
0x4F2964: mov     edx, [edx+38h]
0x4F2967: push    4
0x4F2969: lea     eax, [esp+38h+var_18]
0x4F296D: push    eax
0x4F296E: mov     ecx, esi
0x4F2970: call    edx
0x4F2972: mov     ecx, [esp+34h+var_18]
0x4F2976: mov     eax, ecx
0x4F2978: shr     eax, 10h
0x4F297B: movsx   eax, ax
0x4F297E: movzx   edi, cx
0x4F2981: shl     eax, 10h
0x4F2984: or      edi, eax
0x4F2986: lea     eax, [esp+34h+var_1D]
0x4F298A: push    eax
0x4F298B: push    edi
0x4F298C: mov     ecx, ebp
0x4F298E: call    sub_4D6760
0x4F2993: test    al, al
0x4F2995: jnz     short loc_4F29A1
0x4F2997: push    1; a3
0x4F2999: push    edi; a2
0x4F299A: mov     ecx, ebp; this
0x4F299C: call    NiTMap_SetAt
0x4F29A1: sub     [esp+34h+var_1C], 1
0x4F29A6: jnz     short loc_4F2962
0x4F29A8: mov     byte ptr [ebx+0D8h], 1
0x4F29AF: mov     edx, [esi]
0x4F29B1: mov     eax, [edx+38h]
0x4F29B4: push    4
0x4F29B6: add     ebx, 0DCh ; 'Ü'
0x4F29BC: push    ebx
0x4F29BD: mov     ecx, esi
0x4F29BF: call    eax
0x4F29C1: mov     edx, [esi]
0x4F29C3: mov     eax, [edx]
0x4F29C5: push    1
0x4F29C7: mov     ecx, esi
0x4F29C9: call    eax
0x4F29CB: mov     ecx, [esp+34h+var_14]
0x4F29CF: push    ecx
0x4F29D0: call    FormHeapFree
0x4F29D5: add     esp, 4
0x4F29D8: mov     ecx, [esp+34h+var_C]
0x4F29DC: mov     large fs:0, ecx
0x4F29E3: pop     ecx
0x4F29E4: pop     edi
0x4F29E5: pop     esi
0x4F29E6: pop     ebp
0x4F29E7: pop     ebx
0x4F29E8: add     esp, 20h
0x4F29EB: retn
