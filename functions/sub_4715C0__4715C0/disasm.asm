0x4715C0: push    esi
0x4715C1: push    edi
0x4715C2: mov     edi, ecx
0x4715C4: xor     esi, esi
0x4715C6: cmp     [edi+54h], esi
0x4715C9: jbe     short loc_4715ED
0x4715CB: jmp     short loc_4715D0
0x4715CD: align 10h
0x4715D0: mov     eax, [edi+4Ch]
0x4715D3: fld     [esp+8+arg_0]
0x4715D7: push    0; char
0x4715D9: push    ecx
0x4715DA: mov     ecx, [eax+esi*4]
0x4715DD: fstp    [esp+10h+var_10]; float
0x4715E0: call    sub_6C9CB0
0x4715E5: add     esi, 1
0x4715E8: cmp     esi, [edi+54h]
0x4715EB: jb      short loc_4715D0
0x4715ED: pop     edi
0x4715EE: pop     esi
0x4715EF: retn    4
