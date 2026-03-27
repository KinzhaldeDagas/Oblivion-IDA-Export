0x70E040: push    ebx
0x70E041: mov     ebx, ecx
0x70E043: mov     edx, [ebx+0Ch]
0x70E046: test    edx, edx
0x70E048: jz      short loc_70E075
0x70E04A: push    esi
0x70E04B: mov     esi, [esp+8+arg_0]
0x70E04F: push    edi
0x70E050: lea     eax, [ebx+10h]
0x70E053: add     edx, 64h ; 'd'
0x70E056: mov     edi, eax
0x70E058: mov     ecx, 7
0x70E05D: push    edx; a3
0x70E05E: rep movsd
0x70E060: push    eax; a2
0x70E061: lea     ecx, [ebx+2Ch]; this
0x70E064: call    sub_717A40
0x70E069: pop     edi
0x70E06A: mov     dword ptr [ebx+8Ch], 3Fh ; '?'
0x70E074: pop     esi
0x70E075: pop     ebx
0x70E076: retn    4
