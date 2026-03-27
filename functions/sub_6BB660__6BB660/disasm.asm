0x6BB660: push    esi
0x6BB661: mov     esi, [esp+4+arg_4]
0x6BB665: push    edi
0x6BB666: mov     edi, [esp+8+arg_0]
0x6BB66A: push    esi
0x6BB66B: push    edi
0x6BB66C: call    sub_6BB490
0x6BB671: add     esp, 8
0x6BB674: test    al, al
0x6BB676: jnz     short loc_6BB67B
0x6BB678: pop     edi
0x6BB679: pop     esi
0x6BB67A: retn
0x6BB67B: fld     dword ptr [edi+8]
0x6BB67E: fld     dword ptr [esi+8]
0x6BB681: fucompp
0x6BB683: fnstsw  ax
0x6BB685: test    ah, 44h
0x6BB688: jp      short loc_6BB6A1
0x6BB68A: fld     dword ptr [edi+0Ch]
0x6BB68D: fld     dword ptr [esi+0Ch]
0x6BB690: fucompp
0x6BB692: fnstsw  ax
0x6BB694: test    ah, 44h
0x6BB697: jp      short loc_6BB6A1
0x6BB699: pop     edi
0x6BB69A: mov     eax, 1
0x6BB69F: pop     esi
0x6BB6A0: retn
0x6BB6A1: pop     edi
0x6BB6A2: xor     eax, eax
0x6BB6A4: pop     esi
0x6BB6A5: retn
