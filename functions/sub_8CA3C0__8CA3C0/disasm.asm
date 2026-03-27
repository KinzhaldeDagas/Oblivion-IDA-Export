0x8CA3C0: push    ebp
0x8CA3C1: push    esi
0x8CA3C2: push    edi
0x8CA3C3: mov     ebp, ecx
0x8CA3C5: mov     ecx, ds:0BA7D98h
0x8CA3CB: mov     eax, [ecx]
0x8CA3CD: push    13h
0x8CA3CF: push    4
0x8CA3D1: call    dword ptr [eax+10h]
0x8CA3D4: mov     esi, eax
0x8CA3D6: test    esi, esi
0x8CA3D8: jz      short loc_8CA414
0x8CA3DA: push    ebx
0x8CA3DB: mov     ebx, [esp+10h+arg_0]
0x8CA3DF: test    ebx, ebx
0x8CA3E1: jz      short loc_8CA405
0x8CA3E3: push    ebx
0x8CA3E4: call    sub_8B1860
0x8CA3E9: mov     edi, eax
0x8CA3EB: push    edi
0x8CA3EC: call    sub_8B1950
0x8CA3F1: add     eax, 0Ch
0x8CA3F4: inc     edi
0x8CA3F5: push    edi
0x8CA3F6: push    ebx
0x8CA3F7: push    eax
0x8CA3F8: mov     [esi], eax
0x8CA3FA: call    sub_8B1890
0x8CA3FF: add     esp, 14h
0x8CA402: pop     ebx
0x8CA403: jmp     short loc_8CA416
0x8CA405: inc     dword ptr ds:0BA7FC0h
0x8CA40B: mov     dword ptr [esi], offset unk_BA7FC4
0x8CA411: pop     ebx
0x8CA412: jmp     short loc_8CA416
0x8CA414: xor     esi, esi
0x8CA416: mov     ecx, [ebp+54h]
0x8CA419: mov     eax, [ebp+50h]
0x8CA41C: lea     edi, [ebp+4Ch]
0x8CA41F: and     ecx, 3FFFFFFFh
0x8CA425: cmp     eax, ecx
0x8CA427: jnz     short loc_8CA434
0x8CA429: push    4
0x8CA42B: push    edi
0x8CA42C: call    sub_8A6EE0
0x8CA431: add     esp, 8
0x8CA434: mov     edx, [edi+4]
0x8CA437: mov     eax, [edi]
0x8CA439: mov     [eax+edx*4], esi
0x8CA43C: inc     dword ptr [edi+4]
0x8CA43F: pop     edi
0x8CA440: pop     esi
0x8CA441: pop     ebp
0x8CA442: retn    4
