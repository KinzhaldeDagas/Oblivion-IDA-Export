0x929960: push    esi
0x929961: push    edi
0x929962: mov     edi, [esp+8+arg_0]
0x929966: mov     eax, [edi]
0x929968: mov     esi, ecx
0x92996A: push    esi
0x92996B: push    1
0x92996D: push    offset aMultiray; "MultiRay"
0x929972: mov     ecx, edi
0x929974: call    dword ptr [eax]
0x929976: mov     eax, [esi+14h]
0x929979: test    eax, eax
0x92997B: js      short loc_92999F
0x92997D: mov     ecx, [esi+0Ch]
0x929980: mov     edx, [edi]
0x929982: and     eax, 3FFFFFFFh
0x929987: shl     eax, 5
0x92998A: push    eax
0x92998B: mov     eax, [esi+10h]
0x92998E: shl     eax, 5
0x929991: push    eax
0x929992: push    ecx
0x929993: push    1
0x929995: push    offset aRays; "Rays"
0x92999A: mov     ecx, edi
0x92999C: call    dword ptr [edx+4]
0x92999F: mov     edx, [edi]
0x9299A1: mov     ecx, edi
0x9299A3: call    dword ptr [edx+14h]
0x9299A6: pop     edi
0x9299A7: pop     esi
0x9299A8: retn    4
