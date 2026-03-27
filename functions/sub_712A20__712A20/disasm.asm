0x712A20: sub     esp, 8
0x712A23: push    esi
0x712A24: mov     esi, ecx
0x712A26: mov     eax, [esi+21Ch]
0x712A2C: push    1
0x712A2E: lea     ecx, [esp+10h+var_8]
0x712A32: push    ecx
0x712A33: push    4
0x712A35: lea     edx, [esp+18h+var_4]
0x712A39: push    edx
0x712A3A: push    eax
0x712A3B: mov     eax, [eax+4]
0x712A3E: mov     [esp+20h+var_8], 4
0x712A46: call    eax
0x712A48: mov     eax, [esi+228h]
0x712A4E: add     esi, 224h
0x712A54: add     esp, 14h
0x712A57: cmp     [esi+8], eax
0x712A5A: jnz     short loc_712A71
0x712A5C: test    eax, eax
0x712A5E: jbe     short loc_712A64
0x712A60: add     eax, eax
0x712A62: jmp     short loc_712A69
0x712A64: mov     eax, 1
0x712A69: push    eax
0x712A6A: mov     ecx, esi
0x712A6C: call    sub_6E8CA0
0x712A71: mov     ecx, [esi+8]
0x712A74: mov     edx, [esi]
0x712A76: mov     eax, [esp+0Ch+var_4]
0x712A7A: mov     [edx+ecx*4], eax
0x712A7D: add     dword ptr [esi+8], 1
0x712A81: pop     esi
0x712A82: add     esp, 8
0x712A85: retn
