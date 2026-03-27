0x74CBD0: push    esi
0x74CBD1: push    edi
0x74CBD2: mov     edi, [esp+8+arg_0]
0x74CBD6: push    edi
0x74CBD7: mov     esi, ecx
0x74CBD9: call    sub_753080
0x74CBDE: test    al, al
0x74CBE0: jz      short loc_74CC07
0x74CBE2: fld     dword ptr [esi+54h]
0x74CBE5: fld     dword ptr [edi+54h]
0x74CBE8: fucompp
0x74CBEA: fnstsw  ax
0x74CBEC: test    ah, 44h
0x74CBEF: jp      short loc_74CC07
0x74CBF1: fld     dword ptr [esi+58h]
0x74CBF4: fld     dword ptr [edi+58h]
0x74CBF7: fucompp
0x74CBF9: fnstsw  ax
0x74CBFB: test    ah, 44h
0x74CBFE: jp      short loc_74CC07
0x74CC00: pop     edi
0x74CC01: mov     al, 1
0x74CC03: pop     esi
0x74CC04: retn    4
0x74CC07: pop     edi
0x74CC08: xor     al, al
0x74CC0A: pop     esi
0x74CC0B: retn    4
