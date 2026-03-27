0x6E4EF0: push    esi
0x6E4EF1: push    edi
0x6E4EF2: mov     edi, [esp+8+arg_0]
0x6E4EF6: push    edi
0x6E4EF7: mov     esi, ecx
0x6E4EF9: call    sub_6ED500
0x6E4EFE: push    edi
0x6E4EFF: lea     ecx, [esi+1Ch]
0x6E4F02: call    sub_6CBA90
0x6E4F07: mov     eax, [edi+220h]
0x6E4F0D: push    1
0x6E4F0F: lea     ecx, [esp+0Ch+arg_0]
0x6E4F13: push    ecx
0x6E4F14: push    4
0x6E4F16: lea     edx, [esi+3Ch]
0x6E4F19: push    edx
0x6E4F1A: push    eax
0x6E4F1B: mov     eax, [eax+8]
0x6E4F1E: mov     [esp+1Ch+arg_0], 4
0x6E4F26: call    eax
0x6E4F28: mov     eax, [edi+220h]
0x6E4F2E: push    1
0x6E4F30: lea     ecx, [esp+20h+arg_0]
0x6E4F34: push    ecx
0x6E4F35: push    4
0x6E4F37: lea     edx, [esi+40h]
0x6E4F3A: push    edx
0x6E4F3B: push    eax
0x6E4F3C: mov     eax, [eax+8]
0x6E4F3F: mov     [esp+30h+arg_0], 4
0x6E4F47: call    eax
0x6E4F49: mov     edi, [edi+220h]
0x6E4F4F: mov     edx, [edi+8]
0x6E4F52: push    1
0x6E4F54: lea     ecx, [esp+34h+arg_0]
0x6E4F58: push    ecx
0x6E4F59: push    4
0x6E4F5B: add     esi, 44h ; 'D'
0x6E4F5E: push    esi
0x6E4F5F: push    edi
0x6E4F60: mov     [esp+44h+arg_0], 4
0x6E4F68: call    edx
0x6E4F6A: add     esp, 3Ch
0x6E4F6D: pop     edi
0x6E4F6E: pop     esi
0x6E4F6F: retn    4
