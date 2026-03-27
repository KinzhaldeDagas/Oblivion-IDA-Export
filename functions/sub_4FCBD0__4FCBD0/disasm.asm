0x4FCBD0: mov     edx, [esp+arg_4]
0x4FCBD4: push    esi
0x4FCBD5: mov     esi, [esp+4+arg_0]
0x4FCBD9: lea     esp, [esp+0]
0x4FCBE0: mov     ecx, [edx]
0x4FCBE2: mov     al, [ecx+esi]
0x4FCBE5: cmp     al, 9
0x4FCBE7: jz      short loc_4FCBF1
0x4FCBE9: cmp     al, 20h ; ' '
0x4FCBEB: jz      short loc_4FCBF1
0x4FCBED: cmp     al, 2Ch ; ','
0x4FCBEF: jnz     short loc_4FCBF8
0x4FCBF1: add     ecx, 1
0x4FCBF4: mov     [edx], ecx
0x4FCBF6: jmp     short loc_4FCBE0
0x4FCBF8: pop     esi
0x4FCBF9: retn
