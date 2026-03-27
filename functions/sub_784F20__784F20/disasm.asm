0x784F20: mov     eax, [esp+arg_0]
0x784F24: mov     edx, [esp+arg_8]
0x784F28: push    ebp
0x784F29: mov     ebp, [esp+4+arg_C]
0x784F2D: push    esi
0x784F2E: push    edi
0x784F2F: mov     esi, ecx
0x784F31: mov     ecx, [esp+0Ch+arg_4]
0x784F35: push    0FFFFFFFFh
0x784F37: mov     [esi+4], ecx
0x784F3A: lea     edi, [esi+0Ch]
0x784F3D: mov     [esi], eax
0x784F3F: mov     [esi+8], edx
0x784F42: push    0
0x784F44: mov     dword ptr [edi+18h], 0Fh
0x784F4B: mov     dword ptr [edi+14h], 0
0x784F52: push    ebp
0x784F53: mov     ecx, edi
0x784F55: mov     byte ptr [edi+4], 0
0x784F59: call    sub_414420
0x784F5E: mov     eax, [ebp+1Ch]
0x784F61: mov     cl, [esp+0Ch+arg_10]
0x784F65: mov     [edi+1Ch], eax
0x784F68: pop     edi
0x784F69: mov     [esi+2Ch], cl
0x784F6C: mov     byte ptr [esi+2Dh], 0
0x784F70: mov     eax, esi
0x784F72: pop     esi
0x784F73: pop     ebp
0x784F74: retn    14h
