0x7459B0: push    esi
0x7459B1: mov     esi, [esp+4+arg_4]
0x7459B5: push    edi
0x7459B6: mov     edi, [esp+8+arg_0]
0x7459BA: movzx   ecx, di
0x7459BD: shr     edi, 10h
0x7459C0: test    esi, esi
0x7459C2: jnz     short loc_7459CC
0x7459C4: pop     edi
0x7459C5: mov     eax, 1
0x7459CA: pop     esi
0x7459CB: retn
0x7459CC: push    ebx
0x7459CD: mov     ebx, [esp+0Ch+arg_8]
0x7459D1: test    ebx, ebx
0x7459D3: jbe     loc_745ADC
0x7459D9: push    ebp
0x7459DA: lea     ebx, [ebx+0]
0x7459E0: cmp     ebx, 15B0h
0x7459E6: mov     eax, ebx
0x7459E8: jb      short loc_7459EF
0x7459EA: mov     eax, 15B0h
0x7459EF: sub     ebx, eax
0x7459F1: cmp     eax, 10h
0x7459F4: jl      loc_745A9B
0x7459FA: mov     edx, eax
0x7459FC: shr     edx, 4
0x7459FF: mov     ebp, edx
0x745A01: neg     ebp
0x745A03: shl     ebp, 4
0x745A06: add     eax, ebp
0x745A08: jmp     short loc_745A10
0x745A0A: align 10h
0x745A10: movzx   ebp, byte ptr [esi]
0x745A13: add     ecx, ebp
0x745A15: movzx   ebp, byte ptr [esi+1]
0x745A19: add     edi, ecx
0x745A1B: add     ecx, ebp
0x745A1D: movzx   ebp, byte ptr [esi+2]
0x745A21: add     edi, ecx
0x745A23: add     ecx, ebp
0x745A25: movzx   ebp, byte ptr [esi+3]
0x745A29: add     edi, ecx
0x745A2B: add     ecx, ebp
0x745A2D: movzx   ebp, byte ptr [esi+4]
0x745A31: add     edi, ecx
0x745A33: add     ecx, ebp
0x745A35: movzx   ebp, byte ptr [esi+5]
0x745A39: add     edi, ecx
0x745A3B: add     ecx, ebp
0x745A3D: movzx   ebp, byte ptr [esi+6]
0x745A41: add     edi, ecx
0x745A43: add     ecx, ebp
0x745A45: movzx   ebp, byte ptr [esi+7]
0x745A49: add     edi, ecx
0x745A4B: add     ecx, ebp
0x745A4D: movzx   ebp, byte ptr [esi+8]
0x745A51: add     edi, ecx
0x745A53: add     ecx, ebp
0x745A55: movzx   ebp, byte ptr [esi+9]
0x745A59: add     edi, ecx
0x745A5B: add     ecx, ebp
0x745A5D: movzx   ebp, byte ptr [esi+0Ah]
0x745A61: add     edi, ecx
0x745A63: add     ecx, ebp
0x745A65: movzx   ebp, byte ptr [esi+0Bh]
0x745A69: add     edi, ecx
0x745A6B: add     ecx, ebp
0x745A6D: movzx   ebp, byte ptr [esi+0Ch]
0x745A71: add     edi, ecx
0x745A73: add     ecx, ebp
0x745A75: movzx   ebp, byte ptr [esi+0Dh]
0x745A79: add     edi, ecx
0x745A7B: add     ecx, ebp
0x745A7D: movzx   ebp, byte ptr [esi+0Eh]
0x745A81: add     edi, ecx
0x745A83: add     ecx, ebp
0x745A85: movzx   ebp, byte ptr [esi+0Fh]
0x745A89: add     edi, ecx
0x745A8B: add     ecx, ebp
0x745A8D: add     edi, ecx
0x745A8F: add     esi, 10h
0x745A92: sub     edx, 1
0x745A95: jnz     loc_745A10
0x745A9B: test    eax, eax
0x745A9D: jz      short loc_745AAF
0x745A9F: nop
0x745AA0: movzx   edx, byte ptr [esi]
0x745AA3: add     ecx, edx
0x745AA5: add     esi, 1
0x745AA8: add     edi, ecx
0x745AAA: sub     eax, 1
0x745AAD: jnz     short loc_745AA0
0x745AAF: mov     eax, 80078071h
0x745AB4: mul     ecx
0x745AB6: shr     edx, 0Fh
0x745AB9: imul    edx, 0FFFF000Fh
0x745ABF: add     ecx, edx
0x745AC1: mov     eax, 80078071h
0x745AC6: mul     edi
0x745AC8: shr     edx, 0Fh
0x745ACB: imul    edx, 0FFFF000Fh
0x745AD1: add     edi, edx
0x745AD3: test    ebx, ebx
0x745AD5: ja      loc_7459E0
0x745ADB: pop     ebp
0x745ADC: mov     eax, edi
0x745ADE: pop     ebx
0x745ADF: shl     eax, 10h
0x745AE2: pop     edi
0x745AE3: or      eax, ecx
0x745AE5: pop     esi
0x745AE6: retn
