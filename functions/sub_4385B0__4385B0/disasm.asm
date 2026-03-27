0x4385B0: push    0FFFFFFFFh
0x4385B2: push    offset SEH_4385B0
0x4385B7: mov     eax, large fs:0
0x4385BD: push    eax
0x4385BE: push    esi
0x4385BF: push    edi
0x4385C0: mov     eax, ___security_cookie
0x4385C5: xor     eax, esp
0x4385C7: push    eax
0x4385C8: lea     eax, [esp+18h+var_C]
0x4385CC: mov     large fs:0, eax
0x4385D2: mov     edi, [esp+18h+arg_0]
0x4385D6: test    edi, edi
0x4385D8: jz      short loc_438651
0x4385DA: cmp     byte ptr [edi], 0
0x4385DD: jz      short loc_438651
0x4385DF: mov     esi, [esp+18h+arg_4]
0x4385E3: test    esi, esi
0x4385E5: jz      short loc_438651
0x4385E7: cmp     dword ptr [esi+1Ch], 0
0x4385EB: jz      short loc_438651
0x4385ED: push    40h ; '@'; Size
0x4385EF: call    FormHeapAlloc
0x4385F4: add     esp, 4
0x4385F7: mov     [esp+18h+arg_0], eax
0x4385FB: test    eax, eax
0x4385FD: mov     [esp+18h+var_4], 0
0x438605: jz      short loc_438616
0x438607: push    esi
0x438608: push    5
0x43860A: push    edi
0x43860B: mov     ecx, eax; this
0x43860D: call    ??0QueuedDistantLOD@@QAE@XZ; QueuedDistantLOD::QueuedDistantLOD(void)
0x438612: mov     esi, eax
0x438614: jmp     short loc_438618
0x438616: xor     esi, esi
0x438618: test    esi, esi
0x43861A: mov     [esp+18h+arg_0], esi
0x43861E: jz      short loc_43862A
0x438620: lea     eax, [esi+8]
0x438623: push    eax; lpAddend
0x438624: call    ds:InterlockedIncrement
0x43862A: mov     edx, [esi]
0x43862C: mov     eax, [esp+18h+arg_8]
0x438630: mov     edx, [edx+30h]
0x438633: push    eax
0x438634: mov     ecx, esi
0x438636: mov     [esp+1Ch+var_4], 1
0x43863E: call    edx
0x438640: lea     ecx, [esp+18h+arg_0]; void *
0x438644: mov     [esp+18h+var_4], 0FFFFFFFFh
0x43864C: call    sub_4BDDC0
0x438651: mov     ecx, dword ptr [esp+18h+var_C]
0x438655: mov     large fs:0, ecx
0x43865C: pop     ecx
0x43865D: pop     edi
0x43865E: pop     esi
0x43865F: add     esp, 0Ch
0x438662: retn    0Ch
