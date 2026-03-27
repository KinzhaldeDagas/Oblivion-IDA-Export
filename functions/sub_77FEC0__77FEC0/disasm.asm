0x77FEC0: push    esi
0x77FEC1: push    edi
0x77FEC2: mov     edi, ecx
0x77FEC4: xor     esi, esi
0x77FEC6: mov     eax, [edi]
0x77FEC8: mov     edx, [eax+5Ch]
0x77FECB: push    esi
0x77FECC: mov     ecx, edi
0x77FECE: call    edx
0x77FED0: add     esi, 1
0x77FED3: cmp     esi, 100h
0x77FED9: jb      short loc_77FEC6
0x77FEDB: pop     edi
0x77FEDC: pop     esi
0x77FEDD: retn
