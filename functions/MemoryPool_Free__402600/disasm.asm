0x402600: mov     eax, [esp+arg_0]
0x402604: test    eax, eax
0x402606: jz      short locret_40263C
0x402608: mov     dword ptr [eax], 0
0x40260E: mov     edx, [ecx+44h]
0x402611: mov     [eax+4], edx
0x402614: mov     edx, [ecx+44h]
0x402617: test    edx, edx
0x402619: jz      short loc_40261D
0x40261B: mov     [edx], eax
0x40261D: add     dword ptr [ecx+114h], 1
0x402624: mov     [ecx+44h], eax
0x402627: sub     eax, [ecx+40h]
0x40262A: mov     ecx, [ecx+108h]
0x402630: shr     eax, 0Ch
0x402633: add     word ptr [ecx+eax*2], 0FFFFh
0x402639: lea     eax, [ecx+eax*2]
0x40263C: retn    4
