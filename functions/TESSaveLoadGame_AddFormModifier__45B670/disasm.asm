0x45B670: mov     eax, ds:0BA9DE4h
0x45B675: push    esi
0x45B676: mov     esi, ecx
0x45B678: mov     ecx, large fs:2Ch
0x45B67F: mov     eax, [ecx+eax*4]
0x45B682: cmp     byte ptr [eax+185h], 0
0x45B689: jz      short loc_45B6ED
0x45B68B: cmp     byte ptr [eax+184h], 0
0x45B692: jnz     short loc_45B6ED
0x45B694: mov     edx, ds:0B33A98h
0x45B69A: cmp     byte ptr [edx+0CD4h], 0
0x45B6A1: jnz     short loc_45B6ED
0x45B6A3: push    edi
0x45B6A4: mov     edi, [esp+8+arg_0]
0x45B6A8: mov     eax, [edi+8]
0x45B6AB: shr     eax, 0Eh
0x45B6AE: test    al, 1
0x45B6B0: jnz     short loc_45B6EC
0x45B6B2: mov     ecx, esi
0x45B6B4: call    sub_45A500
0x45B6B9: test    al, al
0x45B6BB: jz      short loc_45B6DF
0x45B6BD: mov     ecx, [esi+18h]
0x45B6C0: shr     ecx, 3
0x45B6C3: test    cl, 1
0x45B6C6: jz      short loc_45B6EC
0x45B6C8: mov     ecx, [esi+4]
0x45B6CB: test    ecx, ecx
0x45B6CD: jz      short loc_45B6EC
0x45B6CF: mov     edx, [esp+8+arg_4]
0x45B6D3: push    edx
0x45B6D4: push    edi
0x45B6D5: call    sub_452C20
0x45B6DA: pop     edi
0x45B6DB: pop     esi
0x45B6DC: retn    8
0x45B6DF: mov     eax, [esp+8+arg_4]
0x45B6E3: mov     ecx, [esi]
0x45B6E5: push    eax
0x45B6E6: push    edi
0x45B6E7: call    sub_452C20
0x45B6EC: pop     edi
0x45B6ED: pop     esi
0x45B6EE: retn    8
