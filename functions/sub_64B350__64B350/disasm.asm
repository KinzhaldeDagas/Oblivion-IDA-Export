0x64B350: push    esi
0x64B351: push    edi
0x64B352: mov     edi, [esp+8+arg_0]
0x64B356: mov     eax, [edi]
0x64B358: mov     edx, [eax+154h]
0x64B35E: mov     esi, ecx
0x64B360: mov     ecx, edi
0x64B362: call    edx
0x64B364: test    eax, eax
0x64B366: jnz     short loc_64B373
0x64B368: pop     edi
0x64B369: mov     [esi+15Ch], eax
0x64B36F: pop     esi
0x64B370: retn    4
0x64B373: cmp     dword ptr [esi+15Ch], 0
0x64B37A: jnz     short loc_64B38B
0x64B37C: push    0; a2
0x64B37E: mov     ecx, edi; this
0x64B380: call    TESObjectREF_GetFaceGenAnimData
0x64B385: mov     [esi+15Ch], eax
0x64B38B: mov     eax, [esi+15Ch]
0x64B391: pop     edi
0x64B392: pop     esi
0x64B393: retn    4
