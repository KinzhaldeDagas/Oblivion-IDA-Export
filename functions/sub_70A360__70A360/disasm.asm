0x70A360: fldz
0x70A362: push    esi
0x70A363: push    edi
0x70A364: mov     esi, ecx
0x70A366: xor     edi, edi
0x70A368: fst     dword ptr [esi+2Ch]
0x70A36B: cmp     [esi+0B6h], di
0x70A372: jbe     short loc_70A3CF
0x70A374: mov     eax, [esi+0B0h]
0x70A37A: mov     ecx, [eax+edi*4]
0x70A37D: test    ecx, ecx
0x70A37F: jz      short loc_70A3C1
0x70A381: fcom    dword ptr [ecx+2Ch]
0x70A384: fnstsw  ax
0x70A386: test    ah, 44h
0x70A389: jnp     short loc_70A3C1
0x70A38B: fcom    dword ptr [esi+2Ch]
0x70A38E: fnstsw  ax
0x70A390: test    ah, 44h
0x70A393: jp      short loc_70A3B1
0x70A395: lea     eax, [ecx+20h]
0x70A398: mov     ecx, [eax]
0x70A39A: mov     [esi+20h], ecx
0x70A39D: mov     edx, [eax+4]
0x70A3A0: mov     [esi+24h], edx
0x70A3A3: mov     ecx, [eax+8]
0x70A3A6: mov     [esi+28h], ecx
0x70A3A9: mov     edx, [eax+0Ch]
0x70A3AC: mov     [esi+2Ch], edx
0x70A3AF: jmp     short loc_70A3C1
0x70A3B1: add     ecx, 20h ; ' '
0x70A3B4: fstp    st
0x70A3B6: push    ecx
0x70A3B7: lea     ecx, [esi+20h]
0x70A3BA: call    sub_72A6B0
0x70A3BF: fldz
0x70A3C1: movzx   eax, word ptr [esi+0B6h]
0x70A3C8: add     edi, 1
0x70A3CB: cmp     edi, eax
0x70A3CD: jb      short loc_70A374
0x70A3CF: pop     edi
0x70A3D0: fstp    st
0x70A3D2: pop     esi
0x70A3D3: retn
