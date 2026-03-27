0x8E79E0: push    ebp
0x8E79E1: mov     ebp, esp
0x8E79E3: and     esp, 0FFFFFFF0h
0x8E79E6: sub     esp, 28h
0x8E79E9: fld     [ebp+arg_0]
0x8E79EC: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8E79F3: push    esi
0x8E79F4: mov     esi, ecx
0x8E79F6: fsub    dword ptr [esi+0Ch]
0x8E79F9: movaps  xmm1, xmmword ptr [esi+30h]
0x8E79FD: push    edi
0x8E79FE: mov     edi, [ebp+arg_4]
0x8E7A01: fmul    dword ptr [esi+1Ch]
0x8E7A04: lea     eax, [esp+30h+var_20]
0x8E7A08: push    eax
0x8E7A09: fstp    [esp+34h+var_24]
0x8E7A0D: mov     ecx, edi
0x8E7A0F: movss   xmm0, [esp+34h+var_24]
0x8E7A15: movaps  [esp+34h+var_10], xmm0
0x8E7A1A: shufps  xmm0, xmm0, 0
0x8E7A1E: movaps  xmm2, xmm0
0x8E7A21: subps   xmm3, xmm0
0x8E7A24: mulps   xmm2, xmm1
0x8E7A27: movaps  xmm1, xmmword ptr [esi+20h]
0x8E7A2B: movaps  xmm0, xmm3
0x8E7A2E: mulps   xmm0, xmm1
0x8E7A31: movaps  xmm1, xmm0
0x8E7A34: addps   xmm1, xmm2
0x8E7A37: movaps  xmm2, xmm1
0x8E7A3A: mulps   xmm2, xmm1
0x8E7A3D: movaps  xmm0, xmm2
0x8E7A40: shufps  xmm0, xmm2, 4Eh ; 'N'
0x8E7A44: addps   xmm0, xmm2
0x8E7A47: movaps  xmm2, xmm0
0x8E7A4A: shufps  xmm2, xmm0, 0B1h ; '±'
0x8E7A4E: addps   xmm0, xmm2
0x8E7A51: movaps  [esp+34h+var_20], xmm0
0x8E7A56: rsqrtss xmm2, xmm0
0x8E7A5A: movss   dword ptr [esp+34h+var_20], xmm2
0x8E7A60: movaps  xmm2, [esp+34h+var_20]
0x8E7A65: mulss   xmm0, xmm2
0x8E7A69: mulss   xmm0, xmm2
0x8E7A6D: mov     [esp+34h+var_24], 40400000h
0x8E7A75: movss   xmm3, [esp+34h+var_24]
0x8E7A7B: subss   xmm3, xmm0
0x8E7A7F: mov     [esp+34h+var_24], 3F000000h
0x8E7A87: movss   xmm0, [esp+34h+var_24]
0x8E7A8D: mulss   xmm0, xmm2
0x8E7A91: mulss   xmm0, xmm3
0x8E7A95: movaps  xmm2, xmm0
0x8E7A98: shufps  xmm2, xmm0, 0
0x8E7A9C: mulps   xmm2, xmm1
0x8E7A9F: movaps  [esp+34h+var_20], xmm2
0x8E7AA4: call    sub_8B1DD0
0x8E7AA9: movaps  xmm1, xmmword ptr [esi+10h]
0x8E7AAD: movaps  xmm0, [esp+30h+var_10]
0x8E7AB2: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8E7AB9: shufps  xmm0, xmm0, 0
0x8E7ABD: subps   xmm3, xmm0
0x8E7AC0: movaps  xmm2, xmm0
0x8E7AC3: mulps   xmm2, xmm1
0x8E7AC6: movaps  xmm1, xmmword ptr [esi]
0x8E7AC9: mulps   xmm3, xmm1
0x8E7ACC: addps   xmm3, xmm2
0x8E7ACF: movaps  xmmword ptr [edi+30h], xmm3
0x8E7AD3: movaps  xmm0, xmmword ptr [esi+40h]
0x8E7AD7: movaps  xmm2, xmmword ptr [edi+20h]
0x8E7ADB: movaps  xmm3, xmmword ptr [edi+10h]
0x8E7ADF: movaps  xmm1, xmm0
0x8E7AE2: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8E7AE6: mulps   xmm2, xmm1
0x8E7AE9: movaps  xmm1, xmm0
0x8E7AEC: shufps  xmm1, xmm0, 55h ; 'U'
0x8E7AF0: mulps   xmm3, xmm1
0x8E7AF3: movaps  xmm1, xmm0
0x8E7AF6: shufps  xmm1, xmm0, 0
0x8E7AFA: movaps  xmm0, xmmword ptr [edi]
0x8E7AFD: mulps   xmm0, xmm1
0x8E7B00: movaps  xmm1, xmmword ptr [edi+30h]
0x8E7B04: addps   xmm0, xmm3
0x8E7B07: addps   xmm0, xmm2
0x8E7B0A: subps   xmm1, xmm0
0x8E7B0D: movaps  xmmword ptr [edi+30h], xmm1
0x8E7B11: pop     edi
0x8E7B12: pop     esi
0x8E7B13: mov     esp, ebp
0x8E7B15: pop     ebp
0x8E7B16: retn    8
