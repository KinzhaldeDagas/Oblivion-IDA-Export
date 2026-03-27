0x8B9BA0: push    esi
0x8B9BA1: push    edi
0x8B9BA2: mov     edi, ecx
0x8B9BA4: test    edi, edi
0x8B9BA6: jz      short loc_8B9BBD
0x8B9BA8: mov     ecx, [edi+8]
0x8B9BAB: test    ecx, ecx
0x8B9BAD: jz      short loc_8B9BBD
0x8B9BAF: call    sub_8AC0C0
0x8B9BB4: test    eax, eax
0x8B9BB6: jz      short loc_8B9BBD
0x8B9BB8: mov     eax, [eax+0Ch]
0x8B9BBB: jmp     short loc_8B9BBF
0x8B9BBD: xor     eax, eax
0x8B9BBF: mov     esi, [esp+8+arg_0]
0x8B9BC3: mov     edx, [esi]
0x8B9BC5: push    eax
0x8B9BC6: mov     eax, [edx+2Ch]
0x8B9BC9: mov     ecx, esi
0x8B9BCB: call    eax
0x8B9BCD: push    esi
0x8B9BCE: mov     ecx, edi
0x8B9BD0: call    sub_89D7B0
0x8B9BD5: pop     edi
0x8B9BD6: pop     esi
0x8B9BD7: retn    4
