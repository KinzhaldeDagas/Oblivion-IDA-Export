0x77FD70: push    esi
0x77FD71: push    edi
0x77FD72: mov     edi, [esp+8+arg_0]
0x77FD76: test    byte ptr [edi+18h], 1
0x77FD7A: mov     esi, ecx
0x77FD7C: push    0
0x77FD7E: jz      short loc_77FDAA
0x77FD80: mov     eax, [esi]
0x77FD82: mov     edx, [eax+64h]
0x77FD85: push    1
0x77FD87: push    7
0x77FD89: call    edx
0x77FD8B: movzx   ecx, byte ptr [edi+18h]
0x77FD8F: mov     eax, [esi]
0x77FD91: mov     eax, [eax+64h]
0x77FD94: shr     ecx, 2
0x77FD97: and     ecx, 0Fh
0x77FD9A: mov     edx, [esi+ecx*4+100h]
0x77FDA1: push    0
0x77FDA3: push    edx
0x77FDA4: push    17h
0x77FDA6: mov     ecx, esi
0x77FDA8: jmp     short loc_77FDB3
0x77FDAA: mov     edx, [esi]
0x77FDAC: mov     eax, [edx+64h]
0x77FDAF: push    0
0x77FDB1: push    7
0x77FDB3: call    eax
0x77FDB5: movzx   eax, byte ptr [edi+18h]
0x77FDB9: mov     edx, [esi]
0x77FDBB: mov     edx, [edx+64h]
0x77FDBE: shr     al, 1
0x77FDC0: push    0
0x77FDC2: mov     ecx, esi
0x77FDC4: and     eax, 1
0x77FDC7: push    eax
0x77FDC8: push    0Eh
0x77FDCA: call    edx
0x77FDCC: pop     edi
0x77FDCD: pop     esi
0x77FDCE: retn    4
