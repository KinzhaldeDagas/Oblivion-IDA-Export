0x54A3B0: push    esi
0x54A3B1: mov     esi, ecx
0x54A3B3: mov     ecx, [esi+4]
0x54A3B6: mov     eax, [ecx]
0x54A3B8: xor     edx, edx
0x54A3BA: cmp     eax, edx
0x54A3BC: push    edi
0x54A3BD: mov     [esi+4], eax
0x54A3C0: jz      short loc_54A3C7
0x54A3C2: mov     [eax+4], edx
0x54A3C5: jmp     short loc_54A3CA
0x54A3C7: mov     [esi+8], edx
0x54A3CA: mov     eax, [esi]
0x54A3CC: mov     edi, [ecx+8]
0x54A3CF: mov     edx, [eax+8]
0x54A3D2: push    ecx
0x54A3D3: mov     ecx, esi
0x54A3D5: call    edx
0x54A3D7: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x54A3DB: mov     eax, edi
0x54A3DD: pop     edi
0x54A3DE: pop     esi
0x54A3DF: retn
