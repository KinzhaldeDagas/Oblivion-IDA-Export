0x5354C0: push    edi
0x5354C1: mov     edi, ecx
0x5354C3: mov     ecx, [edi+1A0h]
0x5354C9: test    ecx, ecx
0x5354CB: jz      short loc_535501
0x5354CD: mov     eax, [ecx]
0x5354CF: mov     edx, [eax+5Ch]
0x5354D2: push    esi
0x5354D3: mov     esi, [esp+8+arg_0]
0x5354D7: push    esi
0x5354D8: call    edx
0x5354DA: test    esi, esi
0x5354DC: jz      short loc_535500
0x5354DE: mov     edi, [edi+1A0h]
0x5354E4: push    0Fh
0x5354E6: push    56h ; 'V'
0x5354E8: push    0ADh ; '­'
0x5354ED: push    58h ; 'X'
0x5354EF: call    sub_8AEB80
0x5354F4: add     esp, 10h
0x5354F7: push    eax
0x5354F8: push    edi
0x5354F9: mov     ecx, esi
0x5354FB: call    sub_88BB60
0x535500: pop     esi
0x535501: pop     edi
0x535502: retn    4
