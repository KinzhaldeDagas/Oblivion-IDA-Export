0x4440E0: push    0FFFFFFFFh
0x4440E2: push    offset SEH_56C0F0
0x4440E7: mov     eax, large fs:0
0x4440ED: push    eax
0x4440EE: push    ecx
0x4440EF: push    ebx
0x4440F0: push    esi
0x4440F1: push    edi
0x4440F2: mov     eax, ds:0B30AACh
0x4440F7: xor     eax, esp
0x4440F9: push    eax
0x4440FA: lea     eax, [esp+20h+var_C]
0x4440FE: mov     large fs:0, eax
0x444104: mov     edi, ecx
0x444106: mov     [esp+20h+var_10], edi
0x44410A: mov     esi, [edi]
0x44410C: test    esi, esi
0x44410E: mov     ebx, ds:0A2807Ch
0x444114: mov     [esp+20h+var_4], 0
0x44411C: jz      short loc_44413C
0x44411E: lea     eax, [esi+4]
0x444121: push    eax; lpAddend
0x444122: call    ebx ; InterlockedDecrement
0x444124: test    eax, eax
0x444126: jnz     short loc_444136
0x444128: test    esi, esi
0x44412A: jz      short loc_444136
0x44412C: mov     edx, [esi]
0x44412E: mov     eax, [edx]
0x444130: push    1
0x444132: mov     ecx, esi
0x444134: call    eax
0x444136: mov     dword ptr [edi], 0
0x44413C: mov     eax, [edi+4]
0x44413F: test    eax, eax
0x444141: jz      short loc_444160
0x444143: mov     ecx, [eax-4]
0x444146: lea     esi, [eax-4]
0x444149: push    offset sub_7016A0; void (__thiscall *)(void *)
0x44414E: push    ecx; int
0x44414F: push    4; unsigned int
0x444151: push    eax; void *
0x444152: call    $LN21
0x444157: push    esi
0x444158: call    FormHeapFree
0x44415D: add     esp, 4
0x444160: mov     esi, [edi]
0x444162: test    esi, esi
0x444164: mov     [esp+20h+var_4], 0FFFFFFFFh
0x44416C: jz      short loc_444186
0x44416E: lea     edx, [esi+4]
0x444171: push    edx; lpAddend
0x444172: call    ebx ; InterlockedDecrement
0x444174: test    eax, eax
0x444176: jnz     short loc_444186
0x444178: test    esi, esi
0x44417A: jz      short loc_444186
0x44417C: mov     eax, [esi]
0x44417E: mov     edx, [eax]
0x444180: push    1
0x444182: mov     ecx, esi
0x444184: call    edx
0x444186: mov     ecx, dword ptr [esp+20h+var_C]
0x44418A: mov     large fs:0, ecx
0x444191: pop     ecx
0x444192: pop     edi
0x444193: pop     esi
0x444194: pop     ebx
0x444195: add     esp, 10h
0x444198: retn
