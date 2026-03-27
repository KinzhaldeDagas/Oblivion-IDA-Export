0x98C828: neg     edi
0x98C82A: add     edi, 10h
0x98C82D: mov     [ebp-10h], edi
0x98C830: xor     eax, eax
0x98C832: mov     edi, [ebp+8]
0x98C835: mov     ecx, [ebp-10h]
0x98C838: rep stosb
0x98C83A: mov     eax, [ebp-10h]
0x98C83D: mov     ecx, [ebp+8]
0x98C840: mov     edx, [ebp+10h]
0x98C843: add     ecx, eax
0x98C845: sub     edx, eax
0x98C847: push    edx
0x98C848: push    0
0x98C84A: push    ecx
0x98C84B: call    __VEC_memzero
0x98C850: add     esp, 0Ch
0x98C853: mov     eax, [ebp+8]
