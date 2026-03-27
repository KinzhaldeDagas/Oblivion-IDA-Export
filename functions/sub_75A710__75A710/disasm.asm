0x75A710: push    esi
0x75A711: push    edi
0x75A712: mov     edi, [esp+8+arg_0]
0x75A716: push    edi
0x75A717: mov     esi, ecx
0x75A719: call    sub_752CD0
0x75A71E: test    al, al
0x75A720: jnz     short loc_75A729
0x75A722: pop     edi
0x75A723: xor     al, al
0x75A725: pop     esi
0x75A726: retn    4
0x75A729: mov     ecx, [esi+18h]
0x75A72C: test    ecx, ecx
0x75A72E: jz      short loc_75A73A
0x75A730: cmp     dword ptr [edi+18h], 0
0x75A734: jz      short loc_75A722
0x75A736: test    ecx, ecx
0x75A738: jnz     short loc_75A744
0x75A73A: cmp     dword ptr [edi+18h], 0
0x75A73E: jnz     short loc_75A722
0x75A740: test    ecx, ecx
0x75A742: jz      short loc_75A757
0x75A744: mov     eax, [edi+18h]
0x75A747: test    eax, eax
0x75A749: jz      short loc_75A757
0x75A74B: mov     edx, [ecx]
0x75A74D: push    eax
0x75A74E: mov     eax, [edx+2Ch]
0x75A751: call    eax
0x75A753: test    al, al
0x75A755: jz      short loc_75A722
0x75A757: pop     edi
0x75A758: mov     al, 1
0x75A75A: pop     esi
0x75A75B: retn    4
