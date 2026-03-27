0x74DD20: push    ebx
0x74DD21: push    esi
0x74DD22: mov     esi, [esp+8+arg_0]
0x74DD26: push    esi
0x74DD27: mov     ebx, ecx
0x74DD29: call    nullsub_returnvVoid_1arg
0x74DD2E: cmp     dword ptr [esi+0D8h], 0A010000h
0x74DD38: ja      short loc_74DD52
0x74DD3A: movzx   eax, word ptr [ebx+22h]
0x74DD3E: mov     ecx, [ebx+10h]
0x74DD41: mov     ecx, [ecx+0B4h]
0x74DD47: push    eax
0x74DD48: call    sub_75DB40
0x74DD4D: pop     esi
0x74DD4E: pop     ebx
0x74DD4F: retn    4
0x74DD52: mov     edx, [ebx+10h]
0x74DD55: push    edi
0x74DD56: mov     edi, [edx+0B4h]
0x74DD5C: cmp     byte ptr [edi+6Ch], 0
0x74DD60: jz      short loc_74DD96
0x74DD62: xor     esi, esi
0x74DD64: cmp     [edi+7Eh], si
0x74DD68: jbe     short loc_74DD96
0x74DD6A: lea     ebx, [ebx+0]
0x74DD70: movzx   eax, word ptr [ebx+20h]
0x74DD74: cmp     esi, eax
0x74DD76: jnb     short loc_74DD8B
0x74DD78: mov     ecx, [ebx+1Ch]
0x74DD7B: mov     eax, [ecx+esi*4]
0x74DD7E: test    eax, eax
0x74DD80: jz      short loc_74DD8B
0x74DD82: push    eax
0x74DD83: push    esi
0x74DD84: mov     ecx, edi
0x74DD86: call    sub_74D830
0x74DD8B: movzx   edx, word ptr [edi+7Eh]
0x74DD8F: add     esi, 1
0x74DD92: cmp     esi, edx
0x74DD94: jb      short loc_74DD70
0x74DD96: pop     edi
0x74DD97: pop     esi
0x74DD98: pop     ebx
0x74DD99: retn    4
