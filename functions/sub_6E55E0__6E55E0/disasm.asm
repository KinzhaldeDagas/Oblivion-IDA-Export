0x6E55E0: push    esi
0x6E55E1: push    edi
0x6E55E2: mov     edi, [esp+8+arg_0]
0x6E55E6: push    edi
0x6E55E7: mov     esi, ecx
0x6E55E9: call    sub_6ED370
0x6E55EE: test    al, al
0x6E55F0: jnz     short loc_6E55F9
0x6E55F2: pop     edi
0x6E55F3: xor     al, al
0x6E55F5: pop     esi
0x6E55F6: retn    4
0x6E55F9: fld     dword ptr [esi+1Ch]
0x6E55FC: fld     dword ptr [edi+1Ch]
0x6E55FF: fucompp
0x6E5601: fnstsw  ax
0x6E5603: test    ah, 44h
0x6E5606: jp      short loc_6E55F2
0x6E5608: mov     eax, [edi+20h]
0x6E560B: cmp     eax, [esi+20h]
0x6E560E: pop     edi
0x6E560F: setz    al
0x6E5612: pop     esi
0x6E5613: retn    4
