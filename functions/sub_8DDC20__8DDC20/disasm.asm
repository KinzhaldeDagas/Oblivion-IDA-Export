0x8DDC20: mov     eax, [esp+arg_0]
0x8DDC24: push    esi
0x8DDC25: mov     esi, ecx
0x8DDC27: mov     ecx, [esi+34h]
0x8DDC2A: mov     edx, [esi+38h]
0x8DDC2D: mov     edx, [ecx+edx*4-4]
0x8DDC31: push    edi
0x8DDC32: movzx   edi, word ptr [eax+8Ch]
0x8DDC39: mov     [ecx+edi*4], edx
0x8DDC3C: mov     cx, [eax+8Ch]
0x8DDC43: mov     edi, [esi+34h]
0x8DDC46: movzx   edx, cx
0x8DDC49: mov     edx, [edi+edx*4]
0x8DDC4C: mov     [edx+8Ch], cx
0x8DDC53: dec     dword ptr [esi+38h]
0x8DDC56: mov     dword ptr [eax+54h], 0
0x8DDC5D: mov     word ptr [eax+8Ch], 0FFFFh
0x8DDC66: mov     eax, [eax+50h]
0x8DDC69: mov     edx, [eax]
0x8DDC6B: mov     edi, [esi]
0x8DDC6D: mov     ecx, eax
0x8DDC6F: call    dword ptr [edx+1Ch]
0x8DDC72: neg     eax
0x8DDC74: push    eax
0x8DDC75: mov     ecx, esi
0x8DDC77: call    dword ptr [edi+14h]
0x8DDC7A: pop     edi
0x8DDC7B: mov     byte ptr [esi+26h], 1
0x8DDC7F: pop     esi
0x8DDC80: retn    4
