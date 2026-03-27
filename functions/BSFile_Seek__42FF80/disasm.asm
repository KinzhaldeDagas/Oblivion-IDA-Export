0x42FF80: push    ebx
0x42FF81: mov     ebx, [esp+4+Origin]
0x42FF85: cmp     ebx, ds:BSFile_FilePos_Beg
0x42FF8B: push    esi
0x42FF8C: push    edi
0x42FF8D: mov     esi, ecx
0x42FF8F: jnz     short loc_42FFAB
0x42FF91: cmp     dword ptr [esi+20h], 0
0x42FF95: mov     eax, [esp+0Ch+Offset]
0x42FF99: mov     edi, eax
0x42FF9B: jnz     short loc_42FFE4
0x42FF9D: mov     ebx, ds:BSFile_FilePos_Cur
0x42FFA3: sub     eax, [esi+148h]
0x42FFA9: jmp     short loc_42FFE4
0x42FFAB: cmp     ebx, ds:BSFile_FilePos_Cur
0x42FFB1: jnz     short loc_42FFC1
0x42FFB3: mov     edi, [esi+148h]
0x42FFB9: mov     eax, [esp+0Ch+Offset]
0x42FFBD: add     edi, eax
0x42FFBF: jmp     short loc_42FFE4
0x42FFC1: cmp     ebx, ds:BSFile_FilePos_End
0x42FFC7: jnz     short loc_42FFDA
0x42FFC9: mov     eax, [esi]
0x42FFCB: mov     edx, [eax+1Ch]
0x42FFCE: call    edx
0x42FFD0: mov     edi, eax
0x42FFD2: mov     eax, [esp+0Ch+Offset]
0x42FFD6: sub     edi, eax
0x42FFD8: jmp     short loc_42FFE4
0x42FFDA: mov     edi, [esi+148h]
0x42FFE0: mov     eax, [esp+0Ch+Offset]
0x42FFE4: cmp     edi, [esi+148h]
0x42FFEA: jz      short loc_42FFFB
0x42FFEC: push    ebx; Origin
0x42FFED: push    eax; Offset
0x42FFEE: mov     ecx, esi
0x42FFF0: call    NiFile_Seek
0x42FFF5: mov     [esi+148h], edi
0x42FFFB: pop     edi
0x42FFFC: pop     esi
0x42FFFD: pop     ebx
0x42FFFE: retn    8
