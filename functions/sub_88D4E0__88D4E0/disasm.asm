0x88D4E0: push    esi
0x88D4E1: mov     esi, [esp+4+arg_0]
0x88D4E5: mov     eax, [esi]
0x88D4E7: push    esi
0x88D4E8: push    eax
0x88D4E9: call    sub_88D3D0
0x88D4EE: add     esp, 8
0x88D4F1: test    al, al
0x88D4F3: jnz     short loc_88D506
0x88D4F5: mov     ecx, [esi+4]
0x88D4F8: push    esi
0x88D4F9: push    ecx
0x88D4FA: call    sub_88D3D0
0x88D4FF: add     esp, 8
0x88D502: test    al, al
0x88D504: jz      short loc_88D50D
0x88D506: mov     dword ptr [esi+1Ch], 1
0x88D50D: pop     esi
0x88D50E: retn    4
