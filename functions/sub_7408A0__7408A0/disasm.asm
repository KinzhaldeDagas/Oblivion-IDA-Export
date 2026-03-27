0x7408A0: push    0FFFFFFFFh
0x7408A2: push    offset SEH_8C8970
0x7408A7: mov     eax, large fs:0
0x7408AD: push    eax
0x7408AE: push    ecx
0x7408AF: push    esi
0x7408B0: push    edi
0x7408B1: mov     eax, ds:0B30AACh
0x7408B6: xor     eax, esp
0x7408B8: push    eax
0x7408B9: lea     eax, [esp+1Ch+var_C]
0x7408BD: mov     large fs:0, eax
0x7408C3: mov     edi, ecx
0x7408C5: push    0C8h ; 'È'; Size
0x7408CA: call    FormHeapAlloc
0x7408CF: mov     esi, eax
0x7408D1: add     esp, 4
0x7408D4: mov     [esp+1Ch+var_10], esi
0x7408D8: test    esi, esi
0x7408DA: mov     [esp+1Ch+var_4], 0
0x7408E2: jz      short loc_7408FA
0x7408E4: mov     ecx, esi
0x7408E6: call    sub_741FA0
0x7408EB: mov     dword ptr [esi], offset ??_7NiParticleMeshes@@6B@; const NiParticleMeshes::`vftable'
0x7408F1: mov     byte ptr [esi+0C4h], 1
0x7408F8: jmp     short loc_7408FC
0x7408FA: xor     esi, esi
0x7408FC: mov     eax, [esp+1Ch+arg_0]
0x740900: push    eax
0x740901: push    esi
0x740902: mov     ecx, edi
0x740904: mov     [esp+24h+var_4], 0FFFFFFFFh
0x74090C: call    sub_722700
0x740911: mov     eax, esi
0x740913: mov     ecx, [esp+1Ch+var_C]
0x740917: mov     large fs:0, ecx
0x74091E: pop     ecx
0x74091F: pop     edi
0x740920: pop     esi
0x740921: add     esp, 10h
0x740924: retn    4
