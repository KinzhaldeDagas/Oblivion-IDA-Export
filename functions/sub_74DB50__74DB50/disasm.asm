0x74DB50: mov     eax, [esp+arg_0]
0x74DB54: push    ebx
0x74DB55: push    ebp
0x74DB56: mov     ebp, [esp+8+arg_4]
0x74DB5A: push    esi
0x74DB5B: push    ebp
0x74DB5C: push    eax
0x74DB5D: mov     ebx, ecx
0x74DB5F: call    sub_752C40
0x74DB64: xor     esi, esi
0x74DB66: cmp     [ebx+22h], si
0x74DB6A: jbe     short loc_74DBBE
0x74DB6C: push    edi
0x74DB6D: lea     ecx, [ecx+0]
0x74DB70: mov     ecx, [ebx+1Ch]
0x74DB73: mov     ecx, [ecx+esi*4]
0x74DB76: test    ecx, ecx
0x74DB78: jz      short loc_74DBB2
0x74DB7A: mov     edx, [ecx]
0x74DB7C: mov     eax, [edx+18h]
0x74DB7F: push    ebp
0x74DB80: call    eax
0x74DB82: push    eax
0x74DB83: push    esi
0x74DB84: lea     ecx, [esp+18h+arg_4]
0x74DB88: push    ecx
0x74DB89: mov     ecx, [esp+1Ch+arg_0]
0x74DB8D: call    sub_74D8C0
0x74DB92: mov     edi, [esp+10h+arg_4]
0x74DB96: test    edi, edi
0x74DB98: jz      short loc_74DBB2
0x74DB9A: lea     edx, [edi+4]
0x74DB9D: push    edx; lpAddend
0x74DB9E: call    dword ptr ds:0A2807Ch
0x74DBA4: test    eax, eax
0x74DBA6: jnz     short loc_74DBB2
0x74DBA8: mov     eax, [edi]
0x74DBAA: mov     edx, [eax]
0x74DBAC: push    1
0x74DBAE: mov     ecx, edi
0x74DBB0: call    edx
0x74DBB2: movzx   eax, word ptr [ebx+22h]
0x74DBB6: add     esi, 1
0x74DBB9: cmp     esi, eax
0x74DBBB: jb      short loc_74DB70
0x74DBBD: pop     edi
0x74DBBE: pop     esi
0x74DBBF: pop     ebp
0x74DBC0: pop     ebx
0x74DBC1: retn    8
