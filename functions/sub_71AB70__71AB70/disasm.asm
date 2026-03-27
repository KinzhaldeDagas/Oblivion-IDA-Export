0x71AB70: push    0FFFFFFFFh
0x71AB72: push    offset SEH_8C8970
0x71AB77: mov     eax, large fs:0
0x71AB7D: push    eax
0x71AB7E: push    ecx
0x71AB7F: push    esi
0x71AB80: push    edi
0x71AB81: mov     eax, ds:0B30AACh
0x71AB86: xor     eax, esp
0x71AB88: push    eax
0x71AB89: lea     eax, [esp+1Ch+var_C]
0x71AB8D: mov     large fs:0, eax
0x71AB93: mov     edi, ecx
0x71AB95: push    38h ; '8'; Size
0x71AB97: call    FormHeapAlloc
0x71AB9C: mov     esi, eax
0x71AB9E: add     esp, 4
0x71ABA1: mov     [esp+1Ch+var_10], esi
0x71ABA5: test    esi, esi
0x71ABA7: mov     [esp+1Ch+var_4], 0
0x71ABAF: jz      short loc_71ABC8
0x71ABB1: mov     ecx, esi
0x71ABB3: call    NiBackToFrontAccumulator_Constructor
0x71ABB8: mov     dword ptr [esi], offset ??_7NiAlphaAccumulator@@6B@; const NiAlphaAccumulator::`vftable'
0x71ABBE: mov     byte ptr [esi+34h], 1
0x71ABC2: mov     byte ptr [esi+35h], 0
0x71ABC6: jmp     short loc_71ABCA
0x71ABC8: xor     esi, esi
0x71ABCA: mov     eax, [esp+1Ch+arg_0]
0x71ABCE: push    eax
0x71ABCF: push    esi
0x71ABD0: mov     ecx, edi
0x71ABD2: mov     [esp+24h+var_4], 0FFFFFFFFh
0x71ABDA: call    sub_6EC2A0
0x71ABDF: mov     cl, [edi+34h]
0x71ABE2: mov     [esi+34h], cl
0x71ABE5: mov     dl, [edi+35h]
0x71ABE8: mov     [esi+35h], dl
0x71ABEB: mov     eax, esi
0x71ABED: mov     ecx, [esp+1Ch+var_C]
0x71ABF1: mov     large fs:0, ecx
0x71ABF8: pop     ecx
0x71ABF9: pop     edi
0x71ABFA: pop     esi
0x71ABFB: add     esp, 10h
0x71ABFE: retn    4
