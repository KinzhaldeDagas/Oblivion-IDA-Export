0x83AC70: push    esi
0x83AC71: mov     esi, [esp+4+arg_0]
0x83AC75: push    esi
0x83AC76: call    sub_849020
0x83AC7B: lea     edx, [esi-18Ah]
0x83AC81: mov     eax, 1
0x83AC86: add     esp, 4
0x83AC89: xor     ecx, ecx
0x83AC8B: cmp     dx, ax
0x83AC8E: ja      short loc_83ACC8
0x83AC90: cmp     dword ptr ds:0B42F48h, 2
0x83AC97: jl      short loc_83ACB4
0x83AC99: mov     edx, ds:0B44F8Ch
0x83AC9F: mov     [edx+8], al
0x83ACA2: mov     edx, ds:0B45084h
0x83ACA8: mov     [edx+8], al
0x83ACAB: mov     edx, ds:0B44F88h
0x83ACB1: mov     [edx+8], al
0x83ACB4: mov     edx, ds:0B45060h
0x83ACBA: mov     [edx+8], al
0x83ACBD: mov     edx, ds:0B45550h
0x83ACC3: mov     [edx+8], al
0x83ACC6: jmp     short loc_83ACFE
0x83ACC8: cmp     dword ptr ds:0B42F48h, 2
0x83ACCF: jl      short loc_83ACFE
0x83ACD1: mov     edx, ds:0B44F8Ch
0x83ACD7: mov     [edx+8], cl
0x83ACDA: mov     edx, ds:0B45084h
0x83ACE0: mov     [edx+8], cl
0x83ACE3: mov     edx, ds:0B44F88h
0x83ACE9: mov     [edx+8], cl
0x83ACEC: mov     edx, ds:0B45060h
0x83ACF2: mov     [edx+8], cl
0x83ACF5: mov     edx, ds:0B45550h
0x83ACFB: mov     [edx+8], cl
0x83ACFE: cmp     si, 0E0h ; 'à'
0x83AD03: jz      short loc_83AD16
0x83AD05: cmp     si, 0E1h ; 'á'
0x83AD0A: jz      short loc_83AD16
0x83AD0C: mov     eax, ds:0B45554h
0x83AD11: mov     [eax+8], cl
0x83AD14: jmp     short loc_83AD1F
0x83AD16: mov     edx, ds:0B45554h
0x83AD1C: mov     [edx+8], al
0x83AD1F: mov     eax, ds:0B45538h
0x83AD24: cmp     eax, ecx
0x83AD26: pop     esi
0x83AD27: jz      short locret_83AD2C
0x83AD29: mov     [eax+8], cl
0x83AD2C: retn
