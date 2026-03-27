0x45E03A: mov     edx, [edi]
0x45E03C: mov     eax, [edx+24h]
0x45E03F: mov     ecx, edi
0x45E041: call    eax
0x45E043: mov     ecx, [ebx+18h]
0x45E046: mov     esi, ds:0B33C18h
0x45E04C: shr     ecx, 9
0x45E04F: test    cl, 1
0x45E052: jz      short loc_45E05C
0x45E054: add     [ebx+90h], esi
0x45E05A: jmp     short loc_45E07F
0x45E05C: mov     eax, ds:0B33C14h
0x45E061: push    1
0x45E063: lea     edx, [esp+4+arg_14]
0x45E067: push    edx
0x45E068: push    esi
0x45E069: push    eax
0x45E06A: mov     eax, [esp+10h+arg_34]
0x45E06E: mov     ecx, [eax+8]
0x45E071: push    eax
0x45E072: mov     [esp+14h+arg_14], 1
0x45E07A: call    ecx
0x45E07C: add     esp, 14h
0x45E07F: mov     ecx, [ebx+40h]
0x45E082: test    ecx, ecx
0x45E084: jz      short loc_45E0A8
0x45E086: mov     dl, [edi+4]
0x45E089: lea     eax, [esp+arg_24]
0x45E08D: push    eax
0x45E08E: mov     byte ptr [esp+4+arg_28], dl
0x45E092: mov     [esp+4+arg_24], ebp
0x45E096: mov     [esp+4+anonymous_0+2], si
0x45E09B: mov     [esp+4+arg_28+1], 0
0x45E0A3: call    sub_45AD00
0x45E0A8: mov     ecx, edi
0x45E0AA: call    TESFile_ClearFormRecord
