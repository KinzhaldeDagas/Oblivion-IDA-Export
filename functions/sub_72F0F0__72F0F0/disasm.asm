0x72F0F0: push    ebp
0x72F0F1: mov     ebp, [esp+4+arg_0]
0x72F0F5: push    esi
0x72F0F6: mov     esi, ecx
0x72F0F8: cmp     ebp, [esi+4]
0x72F0FB: jz      short loc_72F169
0x72F0FD: test    ebp, ebp
0x72F0FF: push    edi
0x72F100: jbe     short loc_72F156
0x72F102: xor     ecx, ecx
0x72F104: mov     eax, ebp
0x72F106: mov     edx, 0Ch
0x72F10B: mul     edx
0x72F10D: seto    cl
0x72F110: neg     ecx
0x72F112: or      ecx, eax
0x72F114: push    ecx; Size
0x72F115: call    FormHeapAlloc
0x72F11A: xor     edx, edx
0x72F11C: add     esp, 4
0x72F11F: cmp     [esi+8], edx
0x72F122: mov     edi, eax
0x72F124: jbe     short loc_72F158
0x72F126: xor     ecx, ecx
0x72F128: push    ebx
0x72F129: lea     esp, [esp+0]
0x72F130: mov     eax, [esi]
0x72F132: mov     ebx, [eax+ecx]
0x72F135: add     eax, ecx
0x72F137: mov     [ecx+edi], ebx
0x72F13A: mov     ebx, [eax+4]
0x72F13D: mov     [ecx+edi+4], ebx
0x72F141: mov     eax, [eax+8]
0x72F144: mov     [ecx+edi+8], eax
0x72F148: add     edx, 1
0x72F14B: add     ecx, 0Ch
0x72F14E: cmp     edx, [esi+8]
0x72F151: jb      short loc_72F130
0x72F153: pop     ebx
0x72F154: jmp     short loc_72F158
0x72F156: xor     edi, edi
0x72F158: mov     ecx, [esi]
0x72F15A: push    ecx
0x72F15B: call    FormHeapFree
0x72F160: add     esp, 4
0x72F163: mov     [esi], edi
0x72F165: mov     [esi+4], ebp
0x72F168: pop     edi
0x72F169: pop     esi
0x72F16A: pop     ebp
0x72F16B: retn    4
