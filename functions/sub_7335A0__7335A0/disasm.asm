0x7335A0: push    ebp
0x7335A1: mov     ebp, [esp+4+arg_0]
0x7335A5: mov     eax, [ebp+4]
0x7335A8: push    edi
0x7335A9: xor     edi, edi
0x7335AB: test    eax, eax
0x7335AD: mov     [esp+8+arg_0], eax
0x7335B1: jbe     short loc_7335F6
0x7335B3: push    ebx
0x7335B4: push    esi
0x7335B5: lea     esi, [ecx+0Ch]
0x7335B8: mov     eax, [ebp+0]
0x7335BB: mov     edx, [esi]
0x7335BD: mov     ebx, [eax+edi*4]
0x7335C0: mov     eax, [edx+4]
0x7335C3: mov     ecx, esi
0x7335C5: call    eax
0x7335C7: mov     [eax+8], ebx
0x7335CA: mov     dword ptr [eax], 0
0x7335D0: mov     ecx, [esi+8]
0x7335D3: mov     [eax+4], ecx
0x7335D6: mov     ecx, [esi+8]
0x7335D9: test    ecx, ecx
0x7335DB: jz      short loc_7335E1
0x7335DD: mov     [ecx], eax
0x7335DF: jmp     short loc_7335E4
0x7335E1: mov     [esi+4], eax
0x7335E4: add     dword ptr [esi+0Ch], 1
0x7335E8: add     edi, 1
0x7335EB: cmp     edi, [esp+10h+arg_0]
0x7335EF: mov     [esi+8], eax
0x7335F2: jb      short loc_7335B8
0x7335F4: pop     esi
0x7335F5: pop     ebx
0x7335F6: pop     edi
0x7335F7: pop     ebp
0x7335F8: retn    4
