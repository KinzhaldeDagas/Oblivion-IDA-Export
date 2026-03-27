0x46DFE0: push    ebp
0x46DFE1: push    edi
0x46DFE2: mov     edi, [esp+8+a1]
0x46DFE6: test    edi, edi
0x46DFE8: mov     ebp, ecx
0x46DFEA: jz      loc_46E070
0x46DFF0: push    esi
0x46DFF1: mov     esi, [esp+0Ch+arg_0]
0x46DFF5: test    esi, esi
0x46DFF7: jz      short loc_46E06F
0x46DFF9: mov     ecx, edi
0x46DFFB: call    TESFile_GetChunkType
0x46E000: cmp     eax, 5446494Eh
0x46E005: jz      short loc_46E065
0x46E007: cmp     eax, 5A46494Eh
0x46E00C: jnz     short loc_46E06F
0x46E00E: mov     eax, [edi+254h]
0x46E014: push    ebx
0x46E015: push    eax; Size
0x46E016: call    FormHeapAlloc
0x46E01B: add     esp, 4
0x46E01E: mov     ebx, eax
0x46E020: push    0; a4
0x46E022: push    ebx; Dst
0x46E023: mov     ecx, edi; a1
0x46E025: mov     esi, ebx
0x46E027: call    TESFile_GetChunkData
0x46E02C: cmp     byte ptr [ebx], 0
0x46E02F: jz      short loc_46E055
0x46E031: push    esi
0x46E032: mov     ecx, ebp
0x46E034: call    sub_46DD70
0x46E039: mov     eax, esi
0x46E03B: lea     edx, [eax+1]
0x46E03E: mov     edi, edi
0x46E040: mov     cl, [eax]
0x46E042: add     eax, 1
0x46E045: test    cl, cl
0x46E047: jnz     short loc_46E040
0x46E049: sub     eax, edx
0x46E04B: cmp     [esi+eax+1], cl
0x46E04F: lea     esi, [esi+eax+1]
0x46E053: jnz     short loc_46E031
0x46E055: push    ebx
0x46E056: call    FormHeapFree
0x46E05B: add     esp, 4
0x46E05E: pop     ebx
0x46E05F: pop     esi
0x46E060: pop     edi
0x46E061: pop     ebp
0x46E062: retn    8
0x46E065: push    edi
0x46E066: push    esi
0x46E067: lea     ecx, [ebp+0Ch]
0x46E06A: call    sub_46DE60
0x46E06F: pop     esi
0x46E070: pop     edi
0x46E071: pop     ebp
0x46E072: retn    8
