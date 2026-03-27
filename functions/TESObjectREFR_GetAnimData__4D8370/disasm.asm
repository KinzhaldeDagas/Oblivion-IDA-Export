0x4D8370: push    esi
0x4D8371: mov     esi, ecx
0x4D8373: movzx   eax, byte ptr [esi+4]
0x4D8377: add     eax, 0FFFFFFCEh
0x4D837A: cmp     eax, 1
0x4D837D: ja      short loc_4D839D
0x4D837F: mov     ecx, [esi+58h]
0x4D8382: test    ecx, ecx
0x4D8384: jz      short loc_4D839D
0x4D8386: mov     eax, [ecx]
0x4D8388: mov     edx, [eax+8]
0x4D838B: call    edx
0x4D838D: cmp     eax, 1
0x4D8390: ja      short loc_4D839D
0x4D8392: mov     eax, [esi+58h]
0x4D8395: mov     eax, [eax+17Ch]
0x4D839B: pop     esi
0x4D839C: retn
0x4D839D: lea     ecx, [esi+44h]
0x4D83A0: pop     esi
0x4D83A1: jmp     BaseExtraList_GetAnimExtraData?
