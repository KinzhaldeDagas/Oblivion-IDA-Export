0x740530: push    esi
0x740531: push    edi
0x740532: mov     edi, [esp+8+arg_0]
0x740536: push    edi
0x740537: mov     esi, ecx
0x740539: call    sub_732B80
0x74053E: test    al, al
0x740540: jnz     short loc_740547
0x740542: pop     edi
0x740543: pop     esi
0x740544: retn    4
0x740547: mov     ecx, [esi+5Ch]
0x74054A: mov     eax, [ecx]
0x74054C: mov     edx, [eax+24h]
0x74054F: push    edi
0x740550: call    edx
0x740552: pop     edi
0x740553: mov     al, 1
0x740555: pop     esi
0x740556: retn    4
