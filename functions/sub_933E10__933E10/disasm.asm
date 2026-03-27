0x933E10: push    ebp
0x933E11: mov     ebp, esp
0x933E13: and     esp, 0FFFFFFF0h
0x933E16: sub     esp, 14h
0x933E19: mov     eax, [ebp+arg_0]
0x933E1C: mov     ecx, [eax]
0x933E1E: mov     eax, [ecx]
0x933E20: mov     edx, [eax]
0x933E22: push    ebx
0x933E23: push    esi
0x933E24: lea     esi, [eax+10h]
0x933E27: lea     eax, [edx+eax+10h]
0x933E2B: push    edi
0x933E2C: mov     edi, [ebp+arg_4]
0x933E2F: mov     [esp+20h+var_4], eax
0x933E33: mov     [esp+20h+var_8], 4
0x933E3B: jmp     short loc_933E40
0x933E3D: align 10h
0x933E40: movzx   ecx, byte ptr [esi]
0x933E43: cmp     ecx, 6; switch 7 cases
0x933E46: mov     eax, esi
0x933E48: ja      short def_933E4A
0x933E4A: jmp     ds:jpt_933E4A[ecx*4]; switch jump
0x933E51: lea     edx, [esi+10h]; jumptable 00933E4A cases 2,3,6
0x933E54: movzx   ecx, byte ptr [esi+3]
0x933E58: mov     ebx, [edi]
0x933E5A: add     esi, ecx
0x933E5C: movzx   ecx, byte ptr [eax+1]
0x933E60: imul    ecx, 34h ; '4'
0x933E63: mov     ecx, [ecx+ebx+16B0h]
0x933E6A: test    ecx, ecx
0x933E6C: jz      short def_933E4A
0x933E6E: push    edi
0x933E6F: push    edx
0x933E70: push    eax
0x933E71: call    ecx
0x933E73: add     esp, 0Ch
0x933E76: jmp     short def_933E4A
0x933E78: xorps   xmm0, xmm0; jumptable 00933E4A cases 4,5
0x933E7B: lea     edx, [esi+20h]
0x933E7E: mov     dword ptr [esi+0Ch], 0BF800000h
0x933E85: movaps  xmmword ptr [esi+10h], xmm0
0x933E89: jmp     short loc_933E54
0x933E8B: movzx   edx, byte ptr [esi+3]; jumptable 00933E4A case 0
0x933E8F: add     esi, edx
