0x8FDB70: push    ebp
0x8FDB71: mov     ebp, esp
0x8FDB73: and     esp, 0FFFFFFF0h
0x8FDB76: sub     esp, 1A4h
0x8FDB7C: push    ebx
0x8FDB7D: mov     ebx, large fs:2Ch
0x8FDB84: mov     [esp+1A8h+var_194], ecx
0x8FDB88: mov     ecx, ds:0BA9DE4h
0x8FDB8E: mov     eax, [ebx+ecx*4]
0x8FDB91: mov     edx, [eax+1A4h]
0x8FDB97: push    esi
0x8FDB98: cmp     edx, [eax+1A8h]
0x8FDB9E: push    edi
0x8FDB9F: jnb     short loc_8FDBC5
0x8FDBA1: mov     esi, eax
0x8FDBA3: mov     ecx, [esi+1A4h]
0x8FDBA9: mov     dword ptr [ecx], offset aTtboxbox; "TtBoxBox"
0x8FDBAF: rdtsc
0x8FDBB1: mov     [esp+1B0h+var_198], eax
0x8FDBB5: mov     eax, [esp+1B0h+var_198]
0x8FDBB9: mov     [ecx+4], eax
0x8FDBBC: add     ecx, 0Ch
0x8FDBBF: mov     [esi+1A4h], ecx
0x8FDBC5: mov     esi, [ebp+arg_0]
0x8FDBC8: mov     eax, [esi]
0x8FDBCA: mov     edx, [eax+0Ch]
0x8FDBCD: mov     edi, [ebp+arg_4]
0x8FDBD0: mov     ecx, [edi]
0x8FDBD2: movaps  xmm1, xmmword ptr [eax+10h]
0x8FDBD6: mov     eax, [ecx+0Ch]
0x8FDBD9: mov     [esp+1B0h+var_198], edx
0x8FDBDD: movss   xmm0, [esp+1B0h+var_198]
0x8FDBE3: mov     edx, [esi+8]
0x8FDBE6: shufps  xmm0, xmm0, 0
0x8FDBEA: addps   xmm1, xmm0
0x8FDBED: movaps  [esp+1B0h+var_190], xmm1
0x8FDBF2: movaps  xmm1, xmmword ptr [ecx+10h]
0x8FDBF6: mov     ecx, [edi+8]
0x8FDBF9: mov     [esp+1B0h+var_198], eax
0x8FDBFD: movss   xmm0, [esp+1B0h+var_198]
0x8FDC03: push    ecx
0x8FDC04: shufps  xmm0, xmm0, 0
0x8FDC08: addps   xmm1, xmm0
0x8FDC0B: push    edx
0x8FDC0C: lea     ecx, [esp+1B8h+var_170]
0x8FDC10: movaps  [esp+1B8h+var_180], xmm1
0x8FDC15: call    sub_8B1FF0
0x8FDC1A: mov     eax, [ebp+arg_8]
0x8FDC1D: fld     dword ptr [eax+8]
0x8FDC20: mov     edx, [ebp+arg_C]
0x8FDC23: movaps  xmm0, [esp+1B0h+var_170]
0x8FDC28: fst     [esp+1B0h+var_80]
0x8FDC2F: mov     [esp+1B0h+var_128], eax
0x8FDC36: mov     eax, [esp+1B0h+var_194]
0x8FDC3A: fstp    [esp+1B0h+var_194]
0x8FDC3E: mov     ecx, [eax+8]
0x8FDC41: mov     [esp+1B0h+var_124], ecx
0x8FDC48: mov     ecx, [esi+8]
0x8FDC4B: mov     [esp+1B0h+var_120], edx
0x8FDC52: mov     edx, [edi+8]
0x8FDC55: mov     [esp+1B0h+var_11C], ecx
0x8FDC5C: mov     ecx, dword ptr [esp+1B0h+var_190]
0x8FDC60: movaps  [esp+1B0h+var_110], xmm0
0x8FDC68: movaps  xmm0, [esp+1B0h+var_160]
0x8FDC6D: mov     [esp+1B0h+var_118], edx
0x8FDC74: mov     edx, dword ptr [esp+1B0h+var_190+4]
0x8FDC78: mov     dword ptr [esp+1B0h+var_D0], ecx
0x8FDC7F: mov     ecx, dword ptr [esp+1B0h+var_190+8]
0x8FDC83: movaps  [esp+1B0h+var_100], xmm0
0x8FDC8B: movaps  xmm0, [esp+1B0h+var_150]
0x8FDC90: mov     dword ptr [esp+1B0h+var_D0+4], edx
0x8FDC97: mov     edx, dword ptr [esp+1B0h+var_190+0Ch]
0x8FDC9B: movaps  [esp+1B0h+var_F0], xmm0
0x8FDCA3: movaps  xmm0, [esp+1B0h+var_140]
0x8FDCA8: mov     dword ptr [esp+1B0h+var_C8], ecx
0x8FDCAF: mov     ecx, dword ptr [esp+1B0h+var_180]
0x8FDCB3: movaps  [esp+1B0h+var_E0], xmm0
0x8FDCBB: movss   xmm0, [esp+1B0h+var_194]
0x8FDCC1: mov     dword ptr [esp+1B0h+var_C8+4], edx
0x8FDCC8: mov     edx, dword ptr [esp+1B0h+var_180+4]
0x8FDCCC: mov     dword ptr [esp+1B0h+var_C0], ecx
0x8FDCD3: mov     ecx, dword ptr [esp+1B0h+var_180+8]
0x8FDCD7: shufps  xmm0, xmm0, 0
0x8FDCDB: mov     dword ptr [esp+1B0h+var_C0+4], edx
0x8FDCE2: mov     edx, dword ptr [esp+1B0h+var_180+0Ch]
0x8FDCE6: movaps  xmm1, xmm0
0x8FDCE9: addps   xmm1, [esp+1B0h+var_190]
0x8FDCEE: add     eax, 10h
0x8FDCF1: mov     dword ptr [esp+1B0h+var_B8], ecx
0x8FDCF8: movaps  [esp+1B0h+var_B0], xmm0
0x8FDD00: addps   xmm0, [esp+1B0h+var_180]
0x8FDD05: push    eax
0x8FDD06: lea     ecx, [esp+1B4h+var_130]
0x8FDD0D: mov     [esp+1B4h+var_130], esi
0x8FDD14: mov     [esp+1B4h+var_12C], edi
0x8FDD1B: mov     dword ptr [esp+1B4h+var_B8+4], edx
0x8FDD22: mov     [esp+1B4h+var_7C], 3C23D70Ah
0x8FDD2D: movaps  [esp+1B4h+var_A0], xmm1
0x8FDD35: movaps  [esp+1B4h+var_90], xmm0
0x8FDD3D: call    sub_9386C0
0x8FDD42: mov     ecx, ds:0BA9DE4h
0x8FDD48: mov     eax, [ebx+ecx*4]
0x8FDD4B: mov     edx, [eax+1A4h]
0x8FDD51: cmp     edx, [eax+1A8h]
0x8FDD57: jnb     short loc_8FDD7D
0x8FDD59: mov     ebx, eax
0x8FDD5B: mov     ecx, [ebx+1A4h]
0x8FDD61: mov     dword ptr [ecx], offset aEt; "Et"
0x8FDD67: rdtsc
0x8FDD69: mov     [esp+1B0h+var_194], eax
0x8FDD6D: mov     eax, [esp+1B0h+var_194]
0x8FDD71: mov     [ecx+4], eax
0x8FDD74: add     ecx, 0Ch
0x8FDD77: mov     [ebx+1A4h], ecx
0x8FDD7D: pop     edi
0x8FDD7E: pop     esi
0x8FDD7F: pop     ebx
0x8FDD80: mov     esp, ebp
0x8FDD82: pop     ebp
0x8FDD83: retn    10h
