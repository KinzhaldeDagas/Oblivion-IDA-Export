0x6F2C20: push    ebx
0x6F2C21: push    ebp
0x6F2C22: push    esi
0x6F2C23: mov     esi, ecx
0x6F2C25: mov     ecx, [esi+4]
0x6F2C28: test    ecx, ecx
0x6F2C2A: push    edi
0x6F2C2B: jnz     short loc_6F2C31
0x6F2C2D: xor     eax, eax
0x6F2C2F: jmp     short loc_6F2C39
0x6F2C31: mov     eax, [esi+8]
0x6F2C34: sub     eax, ecx
0x6F2C36: sar     eax, 3
0x6F2C39: mov     ebx, [esp+10h+arg_0]
0x6F2C3D: cmp     eax, ebx
0x6F2C3F: jnb     short loc_6F2C75
0x6F2C41: test    ecx, ecx
0x6F2C43: jnz     short loc_6F2C49
0x6F2C45: xor     edi, edi
0x6F2C47: jmp     short loc_6F2C51
0x6F2C49: mov     edi, [esi+8]
0x6F2C4C: sub     edi, ecx
0x6F2C4E: sar     edi, 3
0x6F2C51: mov     ebp, [esi+8]
0x6F2C54: cmp     ecx, ebp
0x6F2C56: jbe     short loc_6F2C5D
0x6F2C58: call    __invalid_parameter_noinfo
0x6F2C5D: lea     eax, [esp+10h+arg_4]
0x6F2C61: push    eax
0x6F2C62: sub     ebx, edi
0x6F2C64: push    ebx
0x6F2C65: push    ebp
0x6F2C66: push    esi
0x6F2C67: mov     ecx, esi
0x6F2C69: call    sub_6F2060
0x6F2C6E: pop     edi
0x6F2C6F: pop     esi
0x6F2C70: pop     ebp
0x6F2C71: pop     ebx
0x6F2C72: retn    0Ch
0x6F2C75: test    ecx, ecx
0x6F2C77: jz      short loc_6F2CC3
0x6F2C79: mov     ebp, [esi+8]
0x6F2C7C: mov     eax, ebp
0x6F2C7E: sub     eax, ecx
0x6F2C80: sar     eax, 3
0x6F2C83: cmp     ebx, eax
0x6F2C85: jnb     short loc_6F2CC3
0x6F2C87: cmp     ecx, ebp
0x6F2C89: jbe     short loc_6F2C90
0x6F2C8B: call    __invalid_parameter_noinfo
0x6F2C90: mov     edi, [esi+4]
0x6F2C93: cmp     edi, [esi+8]
0x6F2C96: jbe     short loc_6F2C9D
0x6F2C98: call    __invalid_parameter_noinfo
0x6F2C9D: mov     [esp+10h+arg_8], edi
0x6F2CA1: lea     edi, [edi+ebx*8]
0x6F2CA4: cmp     edi, [esi+8]
0x6F2CA7: ja      short loc_6F2CAE
0x6F2CA9: cmp     edi, [esi+4]
0x6F2CAC: jnb     short loc_6F2CB3
0x6F2CAE: call    __invalid_parameter_noinfo
0x6F2CB3: push    ebp
0x6F2CB4: push    esi
0x6F2CB5: push    edi
0x6F2CB6: push    esi
0x6F2CB7: lea     ecx, [esp+20h+arg_4]
0x6F2CBB: push    ecx
0x6F2CBC: mov     ecx, esi
0x6F2CBE: call    sub_6F1530
0x6F2CC3: pop     edi
0x6F2CC4: pop     esi
0x6F2CC5: pop     ebp
0x6F2CC6: pop     ebx
0x6F2CC7: retn    0Ch
