0x948430: push    esi
0x948431: mov     esi, ecx
0x948433: mov     ecx, [esi+4]
0x948436: test    ecx, ecx
0x948438: jz      short loc_94846A
0x94843A: push    edi
0x94843B: mov     edi, [esp+8+arg_4]
0x94843F: lea     eax, [edi+5]
0x948442: push    eax
0x948443: call    sub_918440
0x948448: mov     ecx, [esi+4]
0x94844B: push    0Fh
0x94844D: call    sub_9181B0
0x948452: mov     ecx, [esi+4]
0x948455: push    edi
0x948456: call    sub_918440
0x94845B: mov     ecx, [esp+8+arg_0]
0x94845F: push    edi
0x948460: push    ecx
0x948461: mov     ecx, [esi+4]
0x948464: call    sub_918390
0x948469: pop     edi
0x94846A: mov     ecx, [esi+4]
0x94846D: test    ecx, ecx
0x94846F: pop     esi
0x948470: jz      short loc_948486
0x948472: lea     edx, [esp+arg_4]
0x948476: push    edx
0x948477: call    sub_918060
0x94847C: cmp     byte ptr [eax], 0
0x94847F: jz      short loc_948486
0x948481: xor     eax, eax
0x948483: retn    8
0x948486: mov     eax, 1
0x94848B: retn    8
