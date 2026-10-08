0x7A5A50: push    ebx; Overlap-safe backward deep-copy assignment of compact SIdvLeafTexture records.
0x7A5A51: push    ebp
0x7A5A52: push    esi
0x7A5A53: mov     esi, [esp+0Ch+last]
0x7A5A57: mov     ebp, [esp+0Ch+destinationEnd]
0x7A5A5B: push    edi
0x7A5A5C: mov     edi, [esp+10h+first]
0x7A5A60: mov     ecx, esi
0x7A5A62: sub     ecx, edi
0x7A5A64: mov     eax, 30C30C31h
0x7A5A69: imul    ecx
0x7A5A6B: sar     edx, 4
0x7A5A6E: mov     eax, edx
0x7A5A70: shr     eax, 1Fh
0x7A5A73: add     eax, edx
0x7A5A75: imul    eax, 54h ; 'T'
0x7A5A78: mov     ebx, ebp
0x7A5A7A: sub     ebx, eax
0x7A5A7C: cmp     edi, esi
0x7A5A7E: jz      short loc_7A5A92
0x7A5A80: sub     ebp, esi
0x7A5A82: sub     esi, 54h ; 'T'
0x7A5A85: push    esi; source
0x7A5A86: lea     ecx, [esi+ebp]; this
0x7A5A89: call    OB_SIdvLeafTexture_CopyAssign_010201A0; Deep copy-assigns a compact 0x54 SIdvLeafTexture: byte blossom flag, color/variance, owned filename, origin, size, and sizeUsed.
0x7A5A8E: cmp     esi, edi
0x7A5A90: jnz     short loc_7A5A82
0x7A5A92: pop     edi
0x7A5A93: pop     esi
0x7A5A94: pop     ebp
0x7A5A95: mov     eax, ebx
0x7A5A97: pop     ebx
0x7A5A98: retn
