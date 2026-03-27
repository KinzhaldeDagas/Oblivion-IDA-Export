0x52F3C0: push    esi
0x52F3C1: push    edi
0x52F3C2: mov     esi, ecx
0x52F3C4: call    sub_5A56F0
0x52F3C9: mov     eax, [esi+0Ch]
0x52F3CC: mov     edi, [esp+8+arg_0]
0x52F3D0: cmp     edi, eax
0x52F3D2: jbe     short loc_52F3F8
0x52F3D4: cmp     edi, [esi+8]
0x52F3D7: jb      short loc_52F3E6
0x52F3D9: mov     eax, [esi+14h]
0x52F3DC: add     eax, edi
0x52F3DE: push    eax
0x52F3DF: mov     ecx, esi
0x52F3E1: call    sub_452910
0x52F3E6: lea     ecx, [esp+8+arg_4]
0x52F3EA: push    ecx
0x52F3EB: push    edi
0x52F3EC: mov     ecx, esi
0x52F3EE: call    sub_446C50
0x52F3F3: pop     edi
0x52F3F4: pop     esi
0x52F3F5: retn    8
0x52F3F8: add     eax, 1
0x52F3FB: cmp     [esi+8], eax
0x52F3FE: jnb     short loc_52F40D
0x52F400: mov     edx, [esi+14h]
0x52F403: add     edx, eax
0x52F405: push    edx
0x52F406: mov     ecx, esi
0x52F408: call    sub_452910
0x52F40D: mov     ecx, [esi+0Ch]
0x52F410: mov     eax, [esi+4]
0x52F413: sub     ecx, edi
0x52F415: add     ecx, ecx
0x52F417: add     ecx, ecx
0x52F419: lea     eax, [eax+edi*4]
0x52F41C: push    ecx
0x52F41D: push    eax
0x52F41E: add     eax, 4
0x52F421: push    eax
0x52F422: call    unknown_libname_16
0x52F427: add     dword ptr [esi+0Ch], 1
0x52F42B: mov     eax, [esi+0Ch]
0x52F42E: mov     edx, [esi+4]
0x52F431: mov     [esi+10h], eax
0x52F434: mov     eax, [esp+14h+arg_4]
0x52F438: add     esp, 0Ch
0x52F43B: mov     [edx+edi*4], eax
0x52F43E: pop     edi
0x52F43F: pop     esi
0x52F440: retn    8
