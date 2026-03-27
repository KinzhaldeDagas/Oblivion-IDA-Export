0x4B28E0: mov     eax, [esp+arg_4]
0x4B28E4: push    ebx
0x4B28E5: push    esi
0x4B28E6: push    edi
0x4B28E7: push    0; int
0x4B28E9: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4B28EE: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4B28F3: push    0; int
0x4B28F5: push    eax; void *
0x4B28F6: mov     ebx, ecx
0x4B28F8: call    OblivionDynamicCast
0x4B28FD: mov     edi, eax
0x4B28FF: add     esp, 14h
0x4B2902: test    edi, edi
0x4B2904: jz      short loc_4B2964
0x4B2906: mov     esi, [esp+0Ch+arg_0]
0x4B290A: test    esi, esi
0x4B290C: jz      short loc_4B2964
0x4B290E: lea     ecx, [esi+44h]
0x4B2911: call    ExtraDataList_GetExtraCount
0x4B2916: cmp     byte ptr [ebx+4], 19h
0x4B291A: movsx   eax, ax
0x4B291D: mov     [esp+0Ch+arg_4], eax
0x4B2921: jnz     short loc_4B2949
0x4B2923: cmp     edi, ds:0B333C4h
0x4B2929: jnz     short loc_4B2949
0x4B292B: cmp     eax, 1
0x4B292E: jle     short loc_4B2949
0x4B2930: push    esi
0x4B2931: push    eax
0x4B2932: push    0
0x4B2934: lea     ecx, [esp+18h+arg_4]
0x4B2938: push    0FFFFFFFFh
0x4B293A: push    ecx
0x4B293B: call    sub_5C05D0
0x4B2940: add     esp, 14h
0x4B2943: pop     edi
0x4B2944: pop     esi
0x4B2945: pop     ebx
0x4B2946: retn    14h
0x4B2949: mov     ecx, [esp+0Ch+arg_8]
0x4B294D: mov     edx, [edi]
0x4B294F: mov     edx, [edx+2CCh]
0x4B2955: push    ecx
0x4B2956: push    eax
0x4B2957: push    esi
0x4B2958: mov     ecx, edi
0x4B295A: call    edx
0x4B295C: pop     edi
0x4B295D: pop     esi
0x4B295E: mov     al, 1
0x4B2960: pop     ebx
0x4B2961: retn    14h
0x4B2964: pop     edi
0x4B2965: pop     esi
0x4B2966: xor     al, al
0x4B2968: pop     ebx
0x4B2969: retn    14h
