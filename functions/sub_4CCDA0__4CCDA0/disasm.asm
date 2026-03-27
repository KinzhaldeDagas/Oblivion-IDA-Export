0x4CCDA0: push    ebx
0x4CCDA1: mov     ebx, ecx
0x4CCDA3: push    edi
0x4CCDA4: push    ebx; a2
0x4CCDA5: mov     ecx, offset stru_B35C80; this
0x4CCDAA: call    sub_496EA0
0x4CCDAF: lea     edi, [ebx+48h]
0x4CCDB2: test    edi, edi
0x4CCDB4: jz      short loc_4CCDE6
0x4CCDB6: push    esi
0x4CCDB7: mov     esi, [edi]
0x4CCDB9: test    esi, esi
0x4CCDBB: jz      short loc_4CCDE5
0x4CCDBD: cmp     esi, ds:0B333C4h
0x4CCDC3: jz      short loc_4CCDDE
0x4CCDC5: mov     ecx, esi; this
0x4CCDC7: call    TESObjectREFR_IsPersistent?
0x4CCDCC: test    al, al
0x4CCDCE: jz      short loc_4CCDDE
0x4CCDD0: mov     eax, [esi]
0x4CCDD2: mov     edx, [eax+150h]
0x4CCDD8: push    0
0x4CCDDA: mov     ecx, esi
0x4CCDDC: call    edx
0x4CCDDE: mov     edi, [edi+4]
0x4CCDE1: test    edi, edi
0x4CCDE3: jnz     short loc_4CCDB7
0x4CCDE5: pop     esi
0x4CCDE6: push    ebx; a2
0x4CCDE7: mov     ecx, offset stru_B35C80; this
0x4CCDEC: call    sub_496F50
0x4CCDF1: pop     edi
0x4CCDF2: pop     ebx
0x4CCDF3: retn
