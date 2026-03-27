0x73D370: push    0FFFFFFFFh
0x73D372: push    offset SEH_8C8970
0x73D377: mov     eax, large fs:0
0x73D37D: push    eax
0x73D37E: push    ecx
0x73D37F: push    esi
0x73D380: push    edi
0x73D381: mov     eax, ds:0B30AACh
0x73D386: xor     eax, esp
0x73D388: push    eax
0x73D389: lea     eax, [esp+1Ch+var_C]
0x73D38D: mov     large fs:0, eax
0x73D393: mov     edi, ecx
0x73D395: push    128h; Size
0x73D39A: call    FormHeapAlloc
0x73D39F: add     esp, 4
0x73D3A2: mov     [esp+1Ch+var_10], eax
0x73D3A6: xor     esi, esi
0x73D3A8: cmp     eax, esi
0x73D3AA: mov     [esp+1Ch+var_4], esi
0x73D3AE: jz      short loc_73D3B9
0x73D3B0: mov     ecx, eax
0x73D3B2: call    sub_73D160
0x73D3B7: mov     esi, eax
0x73D3B9: mov     eax, [esp+1Ch+arg_0]
0x73D3BD: push    eax
0x73D3BE: push    esi
0x73D3BF: mov     ecx, edi
0x73D3C1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73D3C9: call    sub_73D210
0x73D3CE: mov     eax, esi
0x73D3D0: mov     ecx, [esp+1Ch+var_C]
0x73D3D4: mov     large fs:0, ecx
0x73D3DB: pop     ecx
0x73D3DC: pop     edi
0x73D3DD: pop     esi
0x73D3DE: add     esp, 10h
0x73D3E1: retn    4
