0x6F0040: mov     ecx, [esp+arg_4]
0x6F0044: push    esi
0x6F0045: mov     esi, [esp+4+arg_0]
0x6F0049: mov     edx, ecx
0x6F004B: sub     edx, esi
0x6F004D: mov     eax, 2AAAAAABh
0x6F0052: imul    edx
0x6F0054: mov     eax, edx
0x6F0056: shr     eax, 1Fh
0x6F0059: add     eax, edx
0x6F005B: mov     edx, [esp+4+arg_8]
0x6F005F: lea     eax, [eax+eax*2]
0x6F0062: add     eax, eax
0x6F0064: push    edi
0x6F0065: mov     edi, eax
0x6F0067: mov     eax, edx
0x6F0069: sub     eax, edi
0x6F006B: cmp     esi, ecx
0x6F006D: jz      short loc_6F0087
0x6F006F: sub     edx, ecx
0x6F0071: mov     edi, [ecx-6]
0x6F0074: sub     ecx, 6
0x6F0077: cmp     ecx, esi
0x6F0079: mov     [edx+ecx], edi
0x6F007C: mov     di, [ecx+4]
0x6F0080: mov     [edx+ecx+4], di
0x6F0085: jnz     short loc_6F0071
0x6F0087: pop     edi
0x6F0088: pop     esi
0x6F0089: retn
