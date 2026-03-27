0x6C5C20: push    ebx
0x6C5C21: push    esi
0x6C5C22: push    edi
0x6C5C23: mov     edi, [esp+0Ch+arg_0]
0x6C5C27: push    edi
0x6C5C28: mov     esi, ecx
0x6C5C2A: call    sub_715E70
0x6C5C2F: mov     ecx, edi
0x6C5C31: call    sub_7124D0
0x6C5C36: mov     ebx, eax
0x6C5C38: push    ebx
0x6C5C39: lea     ecx, [esi+3Ch]
0x6C5C3C: call    sub_6C4510
0x6C5C41: test    ebx, ebx
0x6C5C43: jbe     short loc_6C5C5D
0x6C5C45: mov     ecx, edi
0x6C5C47: call    sub_7124A0
0x6C5C4C: push    0
0x6C5C4E: push    0
0x6C5C50: push    eax
0x6C5C51: mov     ecx, esi
0x6C5C53: call    sub_6C5760
0x6C5C58: sub     ebx, 1
0x6C5C5B: jnz     short loc_6C5C45
0x6C5C5D: pop     edi
0x6C5C5E: pop     esi
0x6C5C5F: pop     ebx
0x6C5C60: retn    4
