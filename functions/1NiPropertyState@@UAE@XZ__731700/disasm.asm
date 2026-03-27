0x731700: push    0FFFFFFFFh
0x731702: push    offset ??1NiPropertyState@@UAE@XZ_SEH
0x731707: mov     eax, large fs:0
0x73170D: push    eax
0x73170E: push    ecx
0x73170F: push    ebx
0x731710: push    ebp
0x731711: push    esi
0x731712: push    edi
0x731713: mov     eax, ds:0B30AACh
0x731718: xor     eax, esp
0x73171A: push    eax
0x73171B: lea     eax, [esp+24h+var_C]
0x73171F: mov     large fs:0, eax
0x731725: mov     ebx, ecx
0x731727: mov     [esp+24h+var_10], ebx
0x73172B: mov     dword ptr [ebx], offset ??_7NiPropertyState@@6B@; const NiPropertyState::`vftable'
0x731731: mov     [esp+24h+var_4], 1
0x731739: lea     edi, [ebx+8]
0x73173C: mov     ebp, 0Ah
0x731741: mov     esi, [edi]
0x731743: test    esi, esi
0x731745: jz      short loc_731769
0x731747: lea     eax, [esi+4]
0x73174A: push    eax; lpAddend
0x73174B: call    dword ptr ds:0A2807Ch
0x731751: test    eax, eax
0x731753: jnz     short loc_731763
0x731755: test    esi, esi
0x731757: jz      short loc_731763
0x731759: mov     edx, [esi]
0x73175B: mov     eax, [edx]
0x73175D: push    1
0x73175F: mov     ecx, esi
0x731761: call    eax
0x731763: mov     dword ptr [edi], 0
0x731769: add     edi, 4
0x73176C: sub     ebp, 1
0x73176F: jnz     short loc_731741
0x731771: push    offset sub_7016A0; void (__thiscall *)(void *)
0x731776: push    0Ah; int
0x731778: push    4; unsigned int
0x73177A: lea     eax, [ebx+8]
0x73177D: push    eax; void *
0x73177E: mov     byte ptr [esp+34h+var_4], 0
0x731783: call    $LN21
0x731788: push    offset NiRefObject_objcount; lpAddend
0x73178D: mov     dword ptr [ebx], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x731793: call    dword ptr ds:0A2807Ch
0x731799: mov     ecx, dword ptr [esp+24h+var_C]
0x73179D: mov     large fs:0, ecx
0x7317A4: pop     ecx
0x7317A5: pop     edi
0x7317A6: pop     esi
0x7317A7: pop     ebp
0x7317A8: pop     ebx
0x7317A9: add     esp, 10h
0x7317AC: retn
