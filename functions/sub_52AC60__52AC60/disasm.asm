0x52AC60: sub     esp, 8
0x52AC63: push    esi
0x52AC64: mov     esi, [esp+0Ch+a1]
0x52AC68: test    esi, esi
0x52AC6A: push    edi
0x52AC6B: mov     edi, ecx
0x52AC6D: jz      short loc_52ACB1
0x52AC6F: mov     ecx, esi
0x52AC71: call    TESFile_GetChunkType
0x52AC76: cmp     eax, 58444E49h
0x52AC7B: jnz     short loc_52ACB1
0x52AC7D: cmp     dword ptr [esi+254h], 8
0x52AC84: mov     ecx, esi; a1
0x52AC86: jnz     short loc_52ACA9
0x52AC88: push    8; a4
0x52AC8A: lea     eax, [esp+14h+Dst]
0x52AC8E: push    eax; Dst
0x52AC8F: call    TESFile_GetChunkData
0x52AC94: mov     cl, [esp+10h+var_7]
0x52AC98: mov     dl, [esp+10h+Dst]
0x52AC9C: mov     [edi+1], cl
0x52AC9F: mov     [edi], dl
0x52ACA1: pop     edi
0x52ACA2: pop     esi
0x52ACA3: add     esp, 8
0x52ACA6: retn    4
0x52ACA9: push    2; a4
0x52ACAB: push    edi; Dst
0x52ACAC: call    TESFile_GetChunkData
0x52ACB1: pop     edi
0x52ACB2: pop     esi
0x52ACB3: add     esp, 8
0x52ACB6: retn    4
