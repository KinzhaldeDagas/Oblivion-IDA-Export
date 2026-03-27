0x88D5A0: push    esi
0x88D5A1: mov     esi, ecx
0x88D5A3: xor     al, al
0x88D5A5: cmp     [esi+68h], al
0x88D5A8: jnz     short loc_88D5DC
0x88D5AA: push    ebx
0x88D5AB: push    edi
0x88D5AC: mov     edi, [esp+0Ch+arg_0]
0x88D5B0: push    edi
0x88D5B1: call    sub_89F470
0x88D5B6: mov     bl, al
0x88D5B8: test    bl, bl
0x88D5BA: jz      short loc_88D5D8
0x88D5BC: push    14h
0x88D5BE: push    0
0x88D5C0: push    82h ; '‚'
0x88D5C5: push    1Eh
0x88D5C7: call    sub_8AEB80
0x88D5CC: add     esp, 10h
0x88D5CF: push    eax
0x88D5D0: push    esi
0x88D5D1: mov     ecx, edi
0x88D5D3: call    sub_88BB60
0x88D5D8: pop     edi
0x88D5D9: mov     al, bl
0x88D5DB: pop     ebx
0x88D5DC: pop     esi
0x88D5DD: retn    4
