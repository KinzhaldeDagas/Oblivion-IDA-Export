0x8B8700: push    esi
0x8B8701: mov     esi, [esp+4+arg_0]
0x8B8705: test    esi, esi
0x8B8707: jz      short loc_8B8767
0x8B8709: push    offset unk_BA8000
0x8B870E: mov     ecx, esi
0x8B8710: call    sub_700010
0x8B8715: test    eax, eax
0x8B8717: jz      short loc_8B8721
0x8B8719: push    eax
0x8B871A: mov     ecx, esi
0x8B871C: call    sub_6FFE90
0x8B8721: mov     eax, [esi]
0x8B8723: mov     edx, [eax+8]
0x8B8726: push    edi
0x8B8727: mov     ecx, esi
0x8B8729: call    edx
0x8B872B: mov     edi, eax
0x8B872D: test    edi, edi
0x8B872F: jz      short loc_8B8766
0x8B8731: movzx   eax, word ptr [edi+0B6h]
0x8B8738: xor     esi, esi
0x8B873A: test    eax, eax
0x8B873C: jbe     short loc_8B8766
0x8B873E: cmp     eax, esi
0x8B8740: ja      short loc_8B8746
0x8B8742: xor     eax, eax
0x8B8744: jmp     short loc_8B874F
0x8B8746: mov     eax, [edi+0B0h]
0x8B874C: mov     eax, [eax+esi*4]
0x8B874F: push    eax
0x8B8750: call    sub_8B8700
0x8B8755: movzx   eax, word ptr [edi+0B6h]
0x8B875C: add     esi, 1
0x8B875F: add     esp, 4
0x8B8762: cmp     eax, esi
0x8B8764: ja      short loc_8B8746
0x8B8766: pop     edi
0x8B8767: pop     esi
0x8B8768: retn
