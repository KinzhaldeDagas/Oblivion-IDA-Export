0x8E8930: push    ebx
0x8E8931: push    esi
0x8E8932: push    edi
0x8E8933: mov     edi, [esp+0Ch+arg_0]
0x8E8937: mov     eax, [edi]
0x8E8939: mov     esi, ecx
0x8E893B: push    esi
0x8E893C: push    1
0x8E893E: push    offset aListshape; "ListShape"
0x8E8943: mov     ecx, edi
0x8E8945: call    dword ptr [eax]
0x8E8947: mov     eax, [esi+18h]
0x8E894A: test    eax, eax
0x8E894C: js      short loc_8E8970
0x8E894E: mov     ecx, [esi+10h]
0x8E8951: mov     edx, [edi]
0x8E8953: and     eax, 3FFFFFFFh
0x8E8958: shl     eax, 3
0x8E895B: push    eax
0x8E895C: mov     eax, [esi+14h]
0x8E895F: shl     eax, 3
0x8E8962: push    eax
0x8E8963: push    ecx
0x8E8964: push    1
0x8E8966: push    offset aChildptrs; "ChildPtrs"
0x8E896B: mov     ecx, edi
0x8E896D: call    dword ptr [edx+4]
0x8E8970: mov     eax, [esi+14h]
0x8E8973: xor     ebx, ebx
0x8E8975: test    eax, eax
0x8E8977: jle     short loc_8E899D
0x8E8979: lea     esp, [esp+0]
0x8E8980: mov     eax, [esi+10h]
0x8E8983: mov     ecx, [eax+ebx*8]
0x8E8986: mov     edx, [edi]
0x8E8988: push    ecx
0x8E8989: push    1
0x8E898B: push    offset aChild_0; "Child"
0x8E8990: mov     ecx, edi
0x8E8992: call    dword ptr [edx+8]
0x8E8995: mov     eax, [esi+14h]
0x8E8998: inc     ebx
0x8E8999: cmp     ebx, eax
0x8E899B: jl      short loc_8E8980
0x8E899D: mov     edx, [edi]
0x8E899F: mov     ecx, edi
0x8E89A1: call    dword ptr [edx+14h]
0x8E89A4: pop     edi
0x8E89A5: pop     esi
0x8E89A6: pop     ebx
0x8E89A7: retn    4
