0x4349B0: push    0FFFFFFFFh
0x4349B2: push    offset SEH_4349B0
0x4349B7: mov     eax, large fs:0
0x4349BD: push    eax
0x4349BE: push    ecx
0x4349BF: push    ebp
0x4349C0: push    esi
0x4349C1: push    edi
0x4349C2: mov     eax, ___security_cookie
0x4349C7: xor     eax, esp
0x4349C9: push    eax
0x4349CA: lea     eax, [esp+20h+var_C]
0x4349CE: mov     large fs:0, eax
0x4349D4: mov     edi, ecx
0x4349D6: mov     [esp+20h+var_10], edi
0x4349DA: push    3
0x4349DC: mov     [esp+24h+var_4], 0
0x4349E4: call    nullsub_returnTrue_0arg
0x4349E9: mov     esi, [edi+8]
0x4349EC: mov     ebp, ds:InterlockedDecrement
0x4349F2: add     esp, 4
0x4349F5: test    esi, esi
0x4349F7: jz      short loc_434A18
0x4349F9: lea     eax, [esi+4]
0x4349FC: push    eax; lpAddend
0x4349FD: call    ebp ; InterlockedDecrement
0x4349FF: test    eax, eax
0x434A01: jnz     short loc_434A11
0x434A03: test    esi, esi
0x434A05: jz      short loc_434A11
0x434A07: mov     edx, [esi]
0x434A09: mov     eax, [edx]
0x434A0B: push    1
0x434A0D: mov     ecx, esi
0x434A0F: call    eax
0x434A11: mov     dword ptr [edi+8], 0
0x434A18: push    2
0x434A1A: call    nullsub_returnTrue_0arg
0x434A1F: mov     eax, [edi]
0x434A21: push    eax
0x434A22: call    FormHeapFree
0x434A27: mov     edi, [edi+8]
0x434A2A: add     esp, 8
0x434A2D: test    edi, edi
0x434A2F: mov     [esp+20h+var_4], 0FFFFFFFFh
0x434A37: jz      short loc_434A51
0x434A39: lea     ecx, [edi+4]
0x434A3C: push    ecx; lpAddend
0x434A3D: call    ebp ; InterlockedDecrement
0x434A3F: test    eax, eax
0x434A41: jnz     short loc_434A51
0x434A43: test    edi, edi
0x434A45: jz      short loc_434A51
0x434A47: mov     edx, [edi]
0x434A49: mov     eax, [edx]
0x434A4B: push    1
0x434A4D: mov     ecx, edi
0x434A4F: call    eax
0x434A51: mov     ecx, dword ptr [esp+20h+var_C]
0x434A55: mov     large fs:0, ecx
0x434A5C: pop     ecx
0x434A5D: pop     edi
0x434A5E: pop     esi
0x434A5F: pop     ebp
0x434A60: add     esp, 10h
0x434A63: retn
