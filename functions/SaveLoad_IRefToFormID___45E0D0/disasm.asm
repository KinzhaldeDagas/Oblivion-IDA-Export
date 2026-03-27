0x45E0D0: push    ebx
0x45E0D1: mov     ebx, [esp+4+arg_0]
0x45E0D5: push    esi
0x45E0D6: mov     esi, ecx
0x45E0D8: mov     ecx, ds:0B33A98h
0x45E0DE: push    ebx; _DWORD
0x45E0DF: call    TESDataHandler_IsFormIDCreated?
0x45E0E4: test    al, al
0x45E0E6: jz      short loc_45E0EF
0x45E0E8: pop     esi
0x45E0E9: mov     eax, ebx
0x45E0EB: pop     ebx
0x45E0EC: retn    4
0x45E0EF: mov     esi, [esi+74h]
0x45E0F2: mov     ecx, [esi+0Ch]
0x45E0F5: xor     eax, eax
0x45E0F7: test    ecx, ecx
0x45E0F9: jbe     short loc_45E10E
0x45E0FB: mov     edx, [esi+4]
0x45E0FE: mov     edi, edi
0x45E100: cmp     [edx], ebx
0x45E102: jz      short loc_45E178
0x45E104: add     eax, 1
0x45E107: add     edx, 4
0x45E10A: cmp     eax, ecx
0x45E10C: jb      short loc_45E100
0x45E10E: push    edi
0x45E10F: mov     edi, ecx
0x45E111: cmp     edi, [esi+8]
0x45E114: jb      short loc_45E123
0x45E116: mov     eax, [esi+14h]
0x45E119: add     eax, edi
0x45E11B: push    eax
0x45E11C: mov     ecx, esi
0x45E11E: call    sub_452910
0x45E123: cmp     edi, [esi+0Ch]
0x45E126: jb      short loc_45E144
0x45E128: test    ebx, ebx
0x45E12A: lea     ecx, [edi+1]
0x45E12D: mov     [esi+0Ch], ecx
0x45E130: jz      short loc_45E16F
0x45E132: mov     ecx, [esi+4]
0x45E135: add     dword ptr [esi+10h], 1
0x45E139: mov     [ecx+edi*4], ebx
0x45E13C: mov     eax, edi
0x45E13E: pop     edi
0x45E13F: pop     esi
0x45E140: pop     ebx
0x45E141: retn    4
0x45E144: test    ebx, ebx
0x45E146: jz      short loc_45E162
0x45E148: mov     edx, [esi+4]
0x45E14B: cmp     dword ptr [edx+edi*4], 0
0x45E14F: jnz     short loc_45E16F
0x45E151: add     dword ptr [esi+10h], 1
0x45E155: mov     ecx, edx
0x45E157: mov     [ecx+edi*4], ebx
0x45E15A: mov     eax, edi
0x45E15C: pop     edi
0x45E15D: pop     esi
0x45E15E: pop     ebx
0x45E15F: retn    4
0x45E162: mov     eax, [esi+4]
0x45E165: cmp     dword ptr [eax+edi*4], 0
0x45E169: jz      short loc_45E16F
0x45E16B: add     dword ptr [esi+10h], 0FFFFFFFFh
0x45E16F: mov     ecx, [esi+4]
0x45E172: mov     [ecx+edi*4], ebx
0x45E175: mov     eax, edi
0x45E177: pop     edi
0x45E178: pop     esi
0x45E179: pop     ebx
0x45E17A: retn    4
