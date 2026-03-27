0x8C8AA0: push    ebp
0x8C8AA1: mov     ebp, esp
0x8C8AA3: and     esp, 0FFFFFFF0h
0x8C8AA6: sub     esp, 14h
0x8C8AA9: mov     eax, [ebp+arg_0]
0x8C8AAC: push    ebx
0x8C8AAD: mov     ebx, [ebp+arg_4]
0x8C8AB0: push    esi
0x8C8AB1: push    edi
0x8C8AB2: mov     edi, ecx
0x8C8AB4: mov     edx, [edi]
0x8C8AB6: mov     edx, [edx+74h]
0x8C8AB9: mov     [esp+20h+var_4], eax
0x8C8ABD: lea     eax, [esp+20h+var_9]
0x8C8AC1: push    eax
0x8C8AC2: call    edx
0x8C8AC4: mov     ecx, eax
0x8C8AC6: test    ecx, ecx
0x8C8AC8: jz      short loc_8C8B3F
0x8C8ACA: fld     dword ptr [ebx+10h]
0x8C8ACD: fstp    [esp+20h+var_8]
0x8C8AD1: fld1
0x8C8AD3: fld     [esp+20h+var_8]
0x8C8AD7: fucom   st(1)
0x8C8AD9: fnstsw  ax
0x8C8ADB: fstp    st(1)
0x8C8ADD: test    ah, 44h
0x8C8AE0: jnp     short loc_8C8B3D
0x8C8AE2: mov     edx, [ecx+0Ch]
0x8C8AE5: test    edx, edx
0x8C8AE7: jz      short loc_8C8B18
0x8C8AE9: movss   xmm1, [esp+20h+var_8]
0x8C8AEF: xorps   xmm0, xmm0
0x8C8AF2: mov     esi, edx
0x8C8AF4: movss   xmm0, xmm1
0x8C8AF8: shufps  xmm0, xmm0, 0
0x8C8AFC: shl     esi, 4
0x8C8AFF: mov     eax, [ecx+8]
0x8C8B02: sub     esi, 10h
0x8C8B05: movaps  xmm1, xmmword ptr [eax+esi]
0x8C8B09: add     eax, esi
0x8C8B0B: sub     edx, 1
0x8C8B0E: test    edx, edx
0x8C8B10: mulps   xmm1, xmm0
0x8C8B13: movaps  xmmword ptr [eax], xmm1
0x8C8B16: jnz     short loc_8C8AFF
0x8C8B18: mov     edx, [ecx+18h]
0x8C8B1B: test    edx, edx
0x8C8B1D: jz      short loc_8C8B3D
0x8C8B1F: mov     esi, edx
0x8C8B21: shl     esi, 4
0x8C8B24: mov     eax, [ecx+14h]
0x8C8B27: sub     esi, 10h
0x8C8B2A: fld     dword ptr [eax+esi+0Ch]
0x8C8B2E: lea     eax, [eax+esi+0Ch]
0x8C8B32: fmul    st, st(1)
0x8C8B34: sub     edx, 1
0x8C8B37: test    edx, edx
0x8C8B39: fstp    dword ptr [eax]
0x8C8B3B: jnz     short loc_8C8B24
0x8C8B3D: fstp    st
0x8C8B3F: mov     ecx, [esp+20h+var_4]
0x8C8B43: push    ebx
0x8C8B44: push    ecx
0x8C8B45: mov     ecx, edi
0x8C8B47: call    sub_8A2670
0x8C8B4C: pop     edi
0x8C8B4D: pop     esi
0x8C8B4E: pop     ebx
0x8C8B4F: mov     esp, ebp
0x8C8B51: pop     ebp
0x8C8B52: retn    8
