0x7A3B80: push    ebx; Forward deep-copy assignment over existing 0x54-byte SIdvLeafTexture records; returns the destination end.
0x7A3B81: mov     ebx, [esp+4+last]
0x7A3B85: push    ebp
0x7A3B86: push    esi
0x7A3B87: mov     esi, [esp+0Ch+first]
0x7A3B8B: mov     ecx, ebx
0x7A3B8D: sub     ecx, esi
0x7A3B8F: mov     eax, 30C30C31h
0x7A3B94: imul    ecx
0x7A3B96: mov     ebp, [esp+0Ch+destinationFirst]
0x7A3B9A: sar     edx, 4
0x7A3B9D: mov     eax, edx
0x7A3B9F: shr     eax, 1Fh
0x7A3BA2: push    edi
0x7A3BA3: add     eax, edx
0x7A3BA5: mov     edi, eax
0x7A3BA7: imul    edi, 54h ; 'T'
0x7A3BAA: add     edi, ebp
0x7A3BAC: cmp     esi, ebx
0x7A3BAE: jz      short loc_7A3BC2
0x7A3BB0: sub     ebp, esi
0x7A3BB2: push    esi; source
0x7A3BB3: lea     ecx, [esi+ebp]; this
0x7A3BB6: call    OB_SIdvLeafTexture_CopyAssign_010201A0; Deep copy-assigns a compact 0x54 SIdvLeafTexture: byte blossom flag, color/variance, owned filename, origin, size, and sizeUsed.
0x7A3BBB: add     esi, 54h ; 'T'
0x7A3BBE: cmp     esi, ebx
0x7A3BC0: jnz     short loc_7A3BB2
0x7A3BC2: mov     eax, edi
0x7A3BC4: pop     edi
0x7A3BC5: pop     esi
0x7A3BC6: pop     ebp
0x7A3BC7: pop     ebx
0x7A3BC8: retn
