0x809050: push    esi
0x809051: push    edi
0x809052: mov     edi, ecx
0x809054: mov     esi, offset dword_B47620
0x809059: lea     esp, [esp+0]
0x809060: mov     ecx, [esi]
0x809062: mov     eax, [edi]
0x809064: mov     edx, [eax+94h]
0x80906A: push    ecx
0x80906B: mov     ecx, edi
0x80906D: call    edx
0x80906F: add     esi, 4
0x809072: cmp     esi, offset unk_B47710
0x809078: jl      short loc_809060
0x80907A: pop     edi
0x80907B: pop     esi
0x80907C: retn
