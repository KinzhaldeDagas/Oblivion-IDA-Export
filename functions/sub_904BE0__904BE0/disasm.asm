0x904BE0: push    ebp
0x904BE1: mov     ebp, esp
0x904BE3: and     esp, 0FFFFFFF0h
0x904BE6: sub     esp, 98h
0x904BEC: mov     eax, [ebp+arg_8]
0x904BEF: movaps  xmm0, xmmword ptr ds:0A965C0h
0x904BF6: movaps  xmm1, xmmword ptr [eax+10h]
0x904BFA: mov     edx, ecx
0x904BFC: push    esi
0x904BFD: push    edi
0x904BFE: mov     esi, eax
0x904C00: add     eax, 10h
0x904C03: mov     ecx, 0Ch
0x904C08: lea     edi, [esp+0A0h+var_30]
0x904C0C: rep movsd
0x904C0E: mov     ecx, eax
0x904C10: mov     edi, [ecx]
0x904C12: mov     [esp+0A0h+var_80], edi
0x904C16: mov     edi, [ecx+4]
0x904C19: mov     [esp+0A0h+var_7C], edi
0x904C1D: mov     edi, [ecx+8]
0x904C20: mov     ecx, [ecx+0Ch]
0x904C23: mov     [esp+0A0h+var_74], ecx
0x904C27: mov     ecx, [ebp+arg_C]
0x904C2A: mov     [esp+0A0h+var_70], ecx
0x904C2E: mov     ecx, [ebp+arg_10]
0x904C31: test    ecx, ecx
0x904C33: mov     esi, offset off_A9B4E8
0x904C38: xorps   xmm1, xmm0
0x904C3B: movaps  [esp+0A0h+var_20], xmm1
0x904C43: mov     [esp+0A0h+var_8C], 7F7FFFFFh
0x904C4B: mov     [esp+0A0h+var_90], esi
0x904C4F: mov     [esp+0A0h+var_78], edi
0x904C53: jz      short loc_904C87
0x904C55: mov     [esp+0A0h+var_60], esi
0x904C59: mov     esi, [eax]
0x904C5B: mov     [esp+0A0h+var_50], esi
0x904C5F: mov     esi, [eax+4]
0x904C62: mov     [esp+0A0h+var_4C], esi
0x904C66: mov     esi, [eax+8]
0x904C69: mov     eax, [eax+0Ch]
0x904C6C: mov     [esp+0A0h+var_40], ecx
0x904C70: lea     ecx, [esp+0A0h+var_60]
0x904C74: mov     [esp+0A0h+var_5C], 7F7FFFFFh
0x904C7C: mov     [esp+0A0h+var_48], esi
0x904C80: mov     [esp+0A0h+var_44], eax
0x904C84: push    ecx
0x904C85: jmp     short loc_904C89
0x904C87: push    0
0x904C89: lea     eax, [esp+0A4h+var_90]
0x904C8D: push    eax
0x904C8E: mov     eax, [ebp+arg_0]
0x904C91: lea     ecx, [esp+0A8h+var_30]
0x904C95: push    ecx
0x904C96: mov     ecx, [ebp+arg_4]
0x904C99: push    eax
0x904C9A: push    ecx
0x904C9B: mov     ecx, edx
0x904C9D: call    sub_904300
0x904CA2: pop     edi
0x904CA3: pop     esi
0x904CA4: mov     esp, ebp
0x904CA6: pop     ebp
0x904CA7: retn    14h
