0x707470: push    esi; Fog property propagation decode: direct single-property insertion helper; formula would place fog kind 1 at state +0x0C, but stock native callsites are screen-texture non-fog inserts.
0x707471: mov     esi, [esp+4+a2]
0x707475: test    esi, esi
0x707477: push    edi
0x707478: mov     edi, ecx
0x70747A: jz      short loc_70749D
0x70747C: mov     eax, [esi]
0x70747E: mov     edx, [eax+4Ch]
0x707481: mov     ecx, esi
0x707483: call    edx
0x707485: cmp     eax, 0Ah
0x707488: jg      short loc_70749D; Fog property propagation decode: direct insertion uses the same kind guard as 0x7077D0; fog kind 1 would pass.
0x70748A: mov     eax, [esi]
0x70748C: mov     edx, [eax+4Ch]
0x70748F: push    esi; a2
0x707490: mov     ecx, esi
0x707492: call    edx
0x707494: lea     ecx, [edi+eax*4+8]; this
0x707498: call    NiSmartPointer_Set??; Fog property propagation decode: direct insertion target is state +0x08 + 4*kind; fog kind 1 would be state +0x0C.
0x70749D: pop     edi
0x70749E: pop     esi
0x70749F: retn    4
