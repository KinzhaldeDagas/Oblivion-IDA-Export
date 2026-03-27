0x8FF180: mov     eax, [esp+arg_8]
0x8FF184: push    esi
0x8FF185: push    edi
0x8FF186: mov     edi, [esp+8+arg_4]
0x8FF18A: push    eax
0x8FF18B: lea     esi, [edi+0Ch]
0x8FF18E: push    esi
0x8FF18F: call    sub_939B60
0x8FF194: mov     cl, [esi+2]
0x8FF197: mov     edx, [esp+10h+arg_0]
0x8FF19B: mov     [edx+2], cl
0x8FF19E: movzx   eax, byte ptr [esi+2]
0x8FF1A2: movzx   ecx, byte ptr [esi+1]
0x8FF1A6: movzx   edx, byte ptr [esi]
0x8FF1A9: lea     eax, [ecx+eax*4]
0x8FF1AC: add     eax, edx
0x8FF1AE: lea     eax, [eax+eax+1Fh]
0x8FF1B2: add     esp, 8
0x8FF1B5: and     eax, 0FFFFFFF0h
0x8FF1B8: add     eax, edi
0x8FF1BA: pop     edi
0x8FF1BB: pop     esi
0x8FF1BC: retn
