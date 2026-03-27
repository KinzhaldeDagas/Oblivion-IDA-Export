0x55F3C0: push    0FFFFFFFFh
0x55F3C2: push    offset SEH_690310
0x55F3C7: mov     eax, large fs:0
0x55F3CD: push    eax
0x55F3CE: push    ecx
0x55F3CF: push    ebx
0x55F3D0: push    ebp
0x55F3D1: push    esi
0x55F3D2: push    edi
0x55F3D3: mov     eax, ds:0B30AACh
0x55F3D8: xor     eax, esp
0x55F3DA: push    eax
0x55F3DB: lea     eax, [esp+24h+var_C]
0x55F3DF: mov     large fs:0, eax
0x55F3E5: mov     ebp, ecx
0x55F3E7: mov     esi, [ebp+14h]
0x55F3EA: xor     ebx, ebx
0x55F3EC: cmp     esi, ebx
0x55F3EE: jz      loc_55F49C
0x55F3F4: mov     eax, [esi]
0x55F3F6: mov     ecx, esi; this
0x55F3F8: mov     [esp+24h+a2], eax
0x55F3FC: call    sub_55F0B0
0x55F401: push    esi
0x55F402: call    FormHeapFree
0x55F407: add     esp, 4
0x55F40A: cmp     [ebp+8], ebx
0x55F40D: mov     [ebp+14h], ebx
0x55F410: mov     [ebp+18h], ebx
0x55F413: jbe     short loc_55F468
0x55F415: mov     eax, [ebp+0Ch]
0x55F418: lea     ecx, ds:0[ebx*4]
0x55F41F: mov     esi, [eax+ecx]
0x55F422: add     eax, ecx
0x55F424: mov     eax, [ebp+0Ch]
0x55F427: and     esi, 0FFFFFFFEh
0x55F42A: add     eax, ecx
0x55F42C: test    esi, esi
0x55F42E: mov     dword ptr [eax], 0
0x55F434: jz      short loc_55F460
0x55F436: mov     edi, [esi+8]
0x55F439: xor     eax, eax
0x55F43B: mov     [esi+8], eax
0x55F43E: mov     [esi+4], eax
0x55F441: mov     edx, [ebp+0]
0x55F444: mov     eax, [esi]
0x55F446: mov     edx, [edx+20h]
0x55F449: push    eax
0x55F44A: mov     ecx, ebp
0x55F44C: and     edi, 0FFFFFFFEh
0x55F44F: call    edx
0x55F451: push    esi
0x55F452: call    FormHeapFree
0x55F457: add     esp, 4
0x55F45A: test    edi, edi
0x55F45C: mov     esi, edi
0x55F45E: jnz     short loc_55F436
0x55F460: add     ebx, 1
0x55F463: cmp     ebx, [ebp+8]
0x55F466: jb      short loc_55F415
0x55F468: cmp     byte ptr [esp+24h+arg_0], 0
0x55F46D: jnz     short loc_55F49C
0x55F46F: push    10h; Size
0x55F471: call    FormHeapAlloc
0x55F476: add     esp, 4
0x55F479: mov     [esp+24h+arg_0], eax
0x55F47D: test    eax, eax
0x55F47F: mov     [esp+24h+var_4], 0
0x55F487: jz      short loc_55F497
0x55F489: mov     ecx, [esp+24h+a2]
0x55F48D: push    ecx; a2
0x55F48E: mov     ecx, eax; this
0x55F490: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x55F495: jmp     short loc_55F499
0x55F497: xor     eax, eax
0x55F499: mov     [ebp+14h], eax
0x55F49C: mov     ecx, dword ptr [esp+24h+var_C]
0x55F4A0: mov     large fs:0, ecx
0x55F4A7: pop     ecx
0x55F4A8: pop     edi
0x55F4A9: pop     esi
0x55F4AA: pop     ebp
0x55F4AB: pop     ebx
0x55F4AC: add     esp, 10h
0x55F4AF: retn    4
