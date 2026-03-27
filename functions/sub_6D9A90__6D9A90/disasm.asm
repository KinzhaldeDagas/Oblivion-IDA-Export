0x6D9A90: push    esi
0x6D9A91: push    edi
0x6D9A92: mov     edi, [esp+8+arg_0]
0x6D9A96: push    edi
0x6D9A97: mov     esi, ecx
0x6D9A99: call    sub_6EC2E0
0x6D9A9E: test    al, al
0x6D9AA0: jnz     short loc_6D9AA9
0x6D9AA2: pop     edi
0x6D9AA3: xor     al, al
0x6D9AA5: pop     esi
0x6D9AA6: retn    4
0x6D9AA9: lea     eax, [edi+0Ch]
0x6D9AAC: push    eax
0x6D9AAD: lea     ecx, [esi+0Ch]
0x6D9AB0: call    sub_6D5A40
0x6D9AB5: test    al, al
0x6D9AB7: jnz     short loc_6D9AA2
0x6D9AB9: mov     ecx, [esi+1Ch]
0x6D9ABC: test    ecx, ecx
0x6D9ABE: jz      short loc_6D9ACA
0x6D9AC0: cmp     dword ptr [edi+1Ch], 0
0x6D9AC4: jz      short loc_6D9AA2
0x6D9AC6: test    ecx, ecx
0x6D9AC8: jnz     short loc_6D9AD4
0x6D9ACA: cmp     dword ptr [edi+1Ch], 0
0x6D9ACE: jnz     short loc_6D9AA2
0x6D9AD0: test    ecx, ecx
0x6D9AD2: jz      short loc_6D9AE3
0x6D9AD4: mov     edi, [edi+1Ch]
0x6D9AD7: mov     edx, [ecx]
0x6D9AD9: mov     eax, [edx+2Ch]
0x6D9ADC: push    edi
0x6D9ADD: call    eax
0x6D9ADF: test    al, al
0x6D9AE1: jz      short loc_6D9AA2
0x6D9AE3: pop     edi
0x6D9AE4: mov     al, 1
0x6D9AE6: pop     esi
0x6D9AE7: retn    4
