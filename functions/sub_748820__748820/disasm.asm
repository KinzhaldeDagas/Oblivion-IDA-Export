0x748820: push    esi
0x748821: mov     esi, ecx
0x748823: call    NiBinaryStream_constr
0x748828: mov     eax, [esp+4+arg_0]
0x74882C: mov     ecx, [esp+4+arg_4]
0x748830: mov     [esi+0Ch], eax
0x748833: xor     eax, eax
0x748835: mov     [esi+14h], ecx
0x748838: push    eax
0x748839: mov     ecx, esi
0x74883B: mov     dword ptr [esi], offset ??_7NiMemStream@@6B@; const NiMemStream::`vftable'
0x748841: mov     [esi+10h], eax
0x748844: mov     [esi+18h], eax
0x748847: mov     [esi+1Dh], al
0x74884A: call    sub_748CF0
0x74884F: mov     eax, esi
0x748851: pop     esi
0x748852: retn    8
