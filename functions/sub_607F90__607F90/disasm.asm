0x607F90: push    ecx
0x607F91: push    ebx
0x607F92: push    ebp
0x607F93: push    esi
0x607F94: push    edi
0x607F95: push    0; a2
0x607F97: mov     ecx, offset ActorProcessManager_ptr; this
0x607F9C: call    sub_673A50
0x607FA1: mov     ecx, eax; this
0x607FA3: call    sub_7616D0
0x607FA8: mov     ebp, eax
0x607FAA: xor     ebx, ebx
0x607FAC: test    ebp, ebp
0x607FAE: mov     edi, ebp
0x607FB0: mov     [esp+14h+var_4], ebx
0x607FB4: jz      loc_608070
0x607FBA: lea     ebx, [ebx+0]
0x607FC0: cmp     dword ptr [edi+4], 0
0x607FC4: jnz     short loc_607FCF
0x607FC6: cmp     dword ptr [edi], 0
0x607FC9: jz      loc_608070
0x607FCF: cmp     ebx, [esp+14h+arg_4]
0x607FD3: jge     loc_608070
0x607FD9: mov     eax, [edi]
0x607FDB: push    0; int
0x607FDD: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x607FE2: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x607FE7: push    0; int
0x607FE9: push    eax; void *
0x607FEA: xor     bl, bl
0x607FEC: call    OblivionDynamicCast
0x607FF1: mov     esi, eax
0x607FF3: add     esp, 14h
0x607FF6: test    esi, esi
0x607FF8: jz      short loc_60805F
0x607FFA: mov     eax, [esi+5Ch]
0x607FFD: test    eax, eax
0x607FFF: jz      short loc_608006
0x608001: mov     eax, [eax+28h]
0x608004: jmp     short loc_608008
0x608006: xor     eax, eax
0x608008: cmp     eax, [esp+14h+arg_8]
0x60800C: jnz     short loc_60805F
0x60800E: mov     eax, [esi]
0x608010: mov     edx, [eax+170h]
0x608016: mov     ecx, esi
0x608018: call    edx
0x60801A: cmp     eax, [esp+14h+arg_0]
0x60801E: jnz     short loc_60805F
0x608020: cmp     [esp+14h+arg_10], 0
0x608025: jz      short loc_608030
0x608027: cmp     byte ptr [esi+95h], 0
0x60802E: jz      short loc_60805F
0x608030: cmp     [esp+14h+arg_C], 0
0x608035: jz      short loc_608046
0x608037: mov     eax, [esi]
0x608039: mov     edx, [eax+10h]
0x60803C: push    1
0x60803E: mov     ecx, esi
0x608040: call    edx
0x608042: mov     bl, 1
0x608044: jmp     short loc_60804D
0x608046: mov     dword ptr [esi+60h], 3
0x60804D: add     [esp+14h+var_4], 1
0x608052: test    bl, bl
0x608054: jz      short loc_60805F
0x608056: cmp     edi, ebp
0x608058: jz      short loc_608064
0x60805A: mov     edi, [ebp+4]
0x60805D: jmp     short loc_608064
0x60805F: mov     ebp, edi
0x608061: mov     edi, [edi+4]
0x608064: test    edi, edi
0x608066: mov     ebx, [esp+14h+var_4]
0x60806A: jnz     loc_607FC0
0x608070: push    1; a2
0x608072: mov     ecx, offset ActorProcessManager_ptr; this
0x608077: call    sub_673A50
0x60807C: mov     ecx, eax; this
0x60807E: call    sub_7616D0
0x608083: mov     ebp, eax
0x608085: test    ebp, ebp
0x608087: mov     edi, ebp
0x608089: jz      loc_60811A
0x60808F: nop
0x608090: cmp     dword ptr [edi+4], 0
0x608094: jnz     short loc_60809B
0x608096: cmp     dword ptr [edi], 0
0x608099: jz      short loc_60811A
0x60809B: cmp     ebx, [esp+14h+arg_4]
0x60809F: jge     short loc_60811A
0x6080A1: mov     eax, [edi]
0x6080A3: push    0; int
0x6080A5: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x6080AA: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6080AF: push    0; int
0x6080B1: push    eax; void *
0x6080B2: call    OblivionDynamicCast
0x6080B7: mov     esi, eax
0x6080B9: add     esp, 14h
0x6080BC: test    esi, esi
0x6080BE: jz      short loc_60810D
0x6080C0: mov     eax, [esi+5Ch]
0x6080C3: test    eax, eax
0x6080C5: jz      short loc_6080CC
0x6080C7: mov     eax, [eax+28h]
0x6080CA: jmp     short loc_6080CE
0x6080CC: xor     eax, eax
0x6080CE: cmp     eax, [esp+14h+arg_8]
0x6080D2: jnz     short loc_60810D
0x6080D4: mov     eax, [esi]
0x6080D6: mov     edx, [eax+170h]
0x6080DC: mov     ecx, esi
0x6080DE: call    edx
0x6080E0: cmp     eax, [esp+14h+arg_0]
0x6080E4: jnz     short loc_60810D
0x6080E6: cmp     [esp+14h+arg_10], 0
0x6080EB: jz      short loc_6080F6
0x6080ED: cmp     byte ptr [esi+95h], 0
0x6080F4: jz      short loc_60810D
0x6080F6: mov     eax, [esi]
0x6080F8: mov     edx, [eax+10h]
0x6080FB: push    1
0x6080FD: mov     ecx, esi
0x6080FF: call    edx
0x608101: cmp     edi, ebp
0x608103: jz      short loc_608108
0x608105: mov     edi, [ebp+4]
0x608108: add     ebx, 1
0x60810B: jmp     short loc_608112
0x60810D: mov     ebp, edi
0x60810F: mov     edi, [edi+4]
0x608112: test    edi, edi
0x608114: jnz     loc_608090
0x60811A: pop     edi
0x60811B: pop     esi
0x60811C: pop     ebp
0x60811D: pop     ebx
0x60811E: pop     ecx
0x60811F: retn
