0x961450: push    esi
0x961451: push    edi
0x961452: push    3Ch ; '<'; Size
0x961454: mov     edi, ecx
0x961456: call    FormHeapAlloc
0x96145B: mov     esi, eax
0x96145D: add     esp, 4
0x961460: test    esi, esi
0x961462: jz      short loc_961477
0x961464: push    edi
0x961465: mov     ecx, esi
0x961467: mov     dword ptr [esi], offset ??_7NiCapsuleBV@@6B@; const NiCapsuleBV::`vftable'
0x96146D: call    sub_960180
0x961472: pop     edi
0x961473: mov     eax, esi
0x961475: pop     esi
0x961476: retn
0x961477: pop     edi
0x961478: xor     eax, eax
0x96147A: pop     esi
0x96147B: retn
