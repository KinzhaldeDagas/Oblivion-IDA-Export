0x76F0D0: mov     ecx, [esp+arg_0]
0x76F0D4: mov     edx, [ecx+24h]
0x76F0D7: push    esi
0x76F0D8: xor     eax, eax
0x76F0DA: xor     esi, esi
0x76F0DC: cmp     [ecx+8], ax
0x76F0E0: push    edi
0x76F0E1: mov     edi, [ecx+10h]
0x76F0E4: jbe     short loc_76F102
0x76F0E6: push    ebx
0x76F0E7: test    edi, edi
0x76F0E9: jz      short loc_76F105
0x76F0EB: mov     ebx, [edi]
0x76F0ED: mov     [edx], ebx
0x76F0EF: add     edi, [ecx+18h]
0x76F0F2: add     edx, [ecx+20h]
0x76F0F5: add     eax, [ecx+1Ch]
0x76F0F8: add     esi, 1
0x76F0FB: cmp     si, [ecx+8]
0x76F0FF: jb      short loc_76F0E7
0x76F101: pop     ebx
0x76F102: pop     edi
0x76F103: pop     esi
0x76F104: retn
0x76F105: mov     dword ptr [edx], 0FFFFFFFFh
0x76F10B: jmp     short loc_76F0F2
