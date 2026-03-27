0x432A00: push    ebx
0x432A01: mov     ebx, [esp+4+arg_0]
0x432A05: push    esi
0x432A06: push    edi
0x432A07: mov     edi, [ebx+8]
0x432A0A: test    edi, edi
0x432A0C: mov     esi, ecx
0x432A0E: jz      short loc_432A33
0x432A10: lea     eax, [edi+8]
0x432A13: push    eax; lpAddend
0x432A14: call    ds:InterlockedDecrement
0x432A1A: test    eax, eax
0x432A1C: jnz     short loc_432A2C
0x432A1E: test    edi, edi
0x432A20: jz      short loc_432A2C
0x432A22: mov     edx, [edi]
0x432A24: mov     eax, [edx]
0x432A26: push    1
0x432A28: mov     ecx, edi
0x432A2A: call    eax
0x432A2C: mov     dword ptr [ebx+8], 0
0x432A33: mov     ecx, [esi+1Ch]
0x432A36: mov     [ebx+8], ecx
0x432A39: add     dword ptr [esi+20h], 1
0x432A3D: mov     eax, [esi+20h]
0x432A40: mov     edx, [esi]
0x432A42: mov     [esi+1Ch], ebx
0x432A45: cmp     eax, [edx+10h]
0x432A48: jnz     short loc_432A51
0x432A4A: mov     ecx, esi
0x432A4C: call    sub_4328B0
0x432A51: pop     edi
0x432A52: pop     esi
0x432A53: pop     ebx
0x432A54: retn    4
