0x6F4930: push    0FFFFFFFFh
0x6F4932: push    offset SEH_6F4930
0x6F4937: mov     eax, large fs:0
0x6F493D: push    eax
0x6F493E: sub     esp, 8
0x6F4941: push    ebx
0x6F4942: push    ebp
0x6F4943: push    esi
0x6F4944: push    edi
0x6F4945: mov     eax, ds:0B30AACh
0x6F494A: xor     eax, esp
0x6F494C: push    eax
0x6F494D: lea     eax, [esp+28h+var_C]
0x6F4951: mov     large fs:0, eax
0x6F4957: mov     esi, ecx
0x6F4959: mov     ecx, [esi+4]
0x6F495C: xor     ebp, ebp
0x6F495E: cmp     ecx, ebp
0x6F4960: mov     [esp+28h+var_4], ebp
0x6F4964: jnz     short loc_6F496A
0x6F4966: xor     eax, eax
0x6F4968: jmp     short loc_6F4980
0x6F496A: mov     edx, [esi+8]
0x6F496D: sub     edx, ecx
0x6F496F: mov     eax, 2AAAAAABh
0x6F4974: imul    edx
0x6F4976: sar     edx, 3
0x6F4979: mov     eax, edx
0x6F497B: shr     eax, 1Fh
0x6F497E: add     eax, edx
0x6F4980: mov     ebx, [esp+28h+arg_0]
0x6F4984: cmp     eax, ebx
0x6F4986: jnb     short loc_6F49C5
0x6F4988: cmp     ecx, ebp
0x6F498A: jnz     short loc_6F4990
0x6F498C: xor     edi, edi
0x6F498E: jmp     short loc_6F49A6
0x6F4990: mov     edx, [esi+8]
0x6F4993: sub     edx, ecx
0x6F4995: mov     eax, 2AAAAAABh
0x6F499A: imul    edx
0x6F499C: sar     edx, 3
0x6F499F: mov     edi, edx
0x6F49A1: shr     edi, 1Fh
0x6F49A4: add     edi, edx
0x6F49A6: mov     ebp, [esi+8]
0x6F49A9: cmp     ecx, ebp
0x6F49AB: jbe     short loc_6F49B2
0x6F49AD: call    __invalid_parameter_noinfo
0x6F49B2: lea     eax, [esp+28h+arg_4]
0x6F49B6: push    eax
0x6F49B7: sub     ebx, edi
0x6F49B9: push    ebx
0x6F49BA: push    ebp
0x6F49BB: push    esi
0x6F49BC: mov     ecx, esi
0x6F49BE: call    sub_6F44D0
0x6F49C3: jmp     short loc_6F4A27
0x6F49C5: cmp     ecx, ebp
0x6F49C7: jz      short loc_6F4A29
0x6F49C9: mov     edi, [esi+8]
0x6F49CC: mov     edx, edi
0x6F49CE: sub     edx, ecx
0x6F49D0: mov     eax, 2AAAAAABh
0x6F49D5: imul    edx
0x6F49D7: sar     edx, 3
0x6F49DA: mov     eax, edx
0x6F49DC: shr     eax, 1Fh
0x6F49DF: add     eax, edx
0x6F49E1: cmp     ebx, eax
0x6F49E3: jnb     short loc_6F4A29
0x6F49E5: cmp     ecx, edi
0x6F49E7: jbe     short loc_6F49EE
0x6F49E9: call    __invalid_parameter_noinfo
0x6F49EE: mov     ebp, [esi+4]
0x6F49F1: cmp     ebp, [esi+8]
0x6F49F4: jbe     short loc_6F49FB
0x6F49F6: call    __invalid_parameter_noinfo
0x6F49FB: lea     ecx, [ebx+ebx*2]
0x6F49FE: shl     ecx, 4
0x6F4A01: lea     ebx, [ecx+ebp]
0x6F4A04: cmp     ebx, [esi+8]
0x6F4A07: mov     [esp+28h+var_10], ebp
0x6F4A0B: ja      short loc_6F4A12
0x6F4A0D: cmp     ebx, [esi+4]
0x6F4A10: jnb     short loc_6F4A17
0x6F4A12: call    __invalid_parameter_noinfo
0x6F4A17: push    edi
0x6F4A18: push    esi
0x6F4A19: push    ebx
0x6F4A1A: push    esi
0x6F4A1B: lea     edx, [esp+38h+var_14]
0x6F4A1F: push    edx
0x6F4A20: mov     ecx, esi
0x6F4A22: call    sub_6F3830
0x6F4A27: xor     ebp, ebp
0x6F4A29: mov     eax, [esp+28h+arg_28]
0x6F4A2D: cmp     eax, ebp
0x6F4A2F: jz      short loc_6F4A3A
0x6F4A31: push    eax
0x6F4A32: call    FormHeapFree
0x6F4A37: add     esp, 4
0x6F4A3A: cmp     [esp+28h+arg_1C], 10h
0x6F4A3F: mov     [esp+28h+arg_28], ebp
0x6F4A43: mov     [esp+28h+arg_2C], ebp
0x6F4A47: mov     [esp+28h+arg_30], ebp
0x6F4A4B: jb      short loc_6F4A5A
0x6F4A4D: mov     eax, [esp+28h+arg_8]
0x6F4A51: push    eax
0x6F4A52: call    FormHeapFree
0x6F4A57: add     esp, 4
0x6F4A5A: mov     ecx, [esp+28h+var_C]
0x6F4A5E: mov     large fs:0, ecx
0x6F4A65: pop     ecx
0x6F4A66: pop     edi
0x6F4A67: pop     esi
0x6F4A68: pop     ebp
0x6F4A69: pop     ebx
0x6F4A6A: add     esp, 14h
0x6F4A6D: retn    34h ; '4'
