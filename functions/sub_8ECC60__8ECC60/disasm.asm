0x8ECC60: push    ebp
0x8ECC61: mov     ebp, esp
0x8ECC63: and     esp, 0FFFFFFF0h
0x8ECC66: sub     esp, 74h
0x8ECC69: mov     eax, [ebp+arg_0]
0x8ECC6C: movaps  xmm0, xmmword ptr [eax]
0x8ECC6F: push    ebx
0x8ECC70: push    esi
0x8ECC71: push    edi
0x8ECC72: mov     edi, [ebp+arg_4]
0x8ECC75: mov     esi, ecx
0x8ECC77: mov     ecx, [esi+14h]
0x8ECC7A: lea     eax, [esp+80h+var_5C+0Ch]
0x8ECC7E: push    eax
0x8ECC7F: mov     eax, [esi+8]
0x8ECC82: movaps  xmmword ptr [esi+0A0h], xmm0
0x8ECC89: mov     eax, [eax+74h]
0x8ECC8C: fld     dword ptr [eax+8]
0x8ECC8F: mov     edx, [ecx]
0x8ECC91: fmul    dword ptr ds:0A3D65Ch
0x8ECC97: lea     ebx, [esi+14h]
0x8ECC9A: push    ecx
0x8ECC9B: lea     eax, [esi+70h]
0x8ECC9E: fadd    dword ptr [edi+14h]
0x8ECCA1: fstp    [esp+88h+var_88]
0x8ECCA4: push    eax
0x8ECCA5: call    dword ptr [edx+0Ch]
0x8ECCA8: mov     ecx, [ebp+arg_0]
0x8ECCAB: movaps  xmm1, xmmword ptr [ecx]
0x8ECCAE: movaps  xmm0, xmmword ptr [edi]
0x8ECCB1: movaps  xmm3, xmmword ptr [esp+74h+var_4C+8]
0x8ECCB6: subps   xmm0, xmm1
0x8ECCB9: xorps   xmm1, xmm1
0x8ECCBC: movaps  xmm2, xmm1
0x8ECCBF: minps   xmm2, xmm0
0x8ECCC2: movaps  [esp+74h+var_5C+8], xmm0
0x8ECCC7: maxps   xmm1, xmm0
0x8ECCCA: movaps  xmm0, [esp+74h+var_34]
0x8ECCCF: lea     edx, [esp+74h+var_4C+8]
0x8ECCD3: addps   xmm3, xmm2
0x8ECCD6: addps   xmm0, xmm1
0x8ECCD9: push    edx
0x8ECCDA: mov     ecx, esi
0x8ECCDC: movaps  xmmword ptr [esp+78h+var_4C+8], xmm3
0x8ECCE1: movaps  [esp+78h+var_34], xmm0
0x8ECCE6: call    sub_8DE950
0x8ECCEB: mov     eax, [esi+8]
0x8ECCEE: mov     [esp+74h+var_4], 34000000h
0x8ECCF6: mov     eax, [eax+74h]
0x8ECCF9: mov     ecx, eax
0x8ECCFB: mov     edx, [ecx]
0x8ECCFD: mov     [esp+74h+var_24], edx
0x8ECD01: mov     edx, [ecx+4]
0x8ECD04: mov     [esp+74h+var_20], edx
0x8ECD08: mov     edx, [ecx+8]
0x8ECD0B: mov     [esp+74h+var_1C], edx
0x8ECD0F: mov     ecx, [ecx+0Ch]
0x8ECD12: mov     [esp+74h+var_18], ecx
0x8ECD16: mov     edx, [eax+20h]
0x8ECD19: mov     eax, [edi+14h]
0x8ECD1C: push    eax
0x8ECD1D: lea     ecx, [esp+78h+var_5C+8]
0x8ECD21: push    ecx
0x8ECD22: lea     ecx, [esp+7Ch+var_24]
0x8ECD26: mov     [esp+80h], edx
0x8ECD2D: call    sub_8D9870
0x8ECD32: mov     edx, [edi+10h]
0x8ECD35: mov     eax, [esi+8]
0x8ECD38: mov     edi, [esi+124h]
0x8ECD3E: dec     edi
0x8ECD3F: mov     [esp+74h+var_4], edx
0x8ECD43: mov     eax, [eax+7Ch]
0x8ECD46: mov     dword ptr [esp+74h+var_5C+4], eax
0x8ECD4A: js      short loc_8ECDC6
0x8ECD4C: lea     esp, [esp+0]
0x8ECD50: mov     ecx, [esi+120h]
0x8ECD56: mov     edx, [ecx+edi*4]
0x8ECD59: lea     eax, [ecx+edi*4]
0x8ECD5C: mov     ecx, [edx]
0x8ECD5E: mov     dword ptr [esp+74h+var_5C], eax
0x8ECD62: mov     eax, [ecx]
0x8ECD64: call    dword ptr [eax+8]
0x8ECD67: cmp     eax, 18h
0x8ECD6A: mov     dword ptr [esp+74h+var_6C+0Ch], eax
0x8ECD6E: jnz     short loc_8ECD86
0x8ECD70: mov     ecx, dword ptr [esp+74h+var_5C]
0x8ECD74: mov     edx, [ecx]
0x8ECD76: mov     eax, [edx+1Ch]
0x8ECD79: test    ah, 20h
0x8ECD7C: jz      short loc_8ECD86
0x8ECD7E: mov     dword ptr [esp+74h+var_6C+0Ch], 3
0x8ECD86: mov     ecx, [ebx]
0x8ECD88: mov     eax, [ecx]
0x8ECD8A: call    dword ptr [eax+8]
0x8ECD8D: mov     ecx, dword ptr [esp+74h+var_6C+0Ch]
0x8ECD91: shl     eax, 5
0x8ECD94: add     eax, ecx
0x8ECD96: mov     ecx, dword ptr [esp+74h+var_5C+4]
0x8ECD9A: movzx   eax, byte ptr [eax+ecx+190h]
0x8ECDA2: add     eax, 7Bh ; '{'
0x8ECDA5: lea     edx, [eax+eax*4]
0x8ECDA8: mov     eax, [ebp+arg_C]
0x8ECDAB: push    eax
0x8ECDAC: mov     eax, [ebp+arg_8]
0x8ECDAF: push    eax
0x8ECDB0: lea     eax, [esp+7Ch+var_24]
0x8ECDB4: push    eax
0x8ECDB5: mov     eax, dword ptr [esp+80h+var_5C]
0x8ECDB9: mov     eax, [eax]
0x8ECDBB: push    eax
0x8ECDBC: push    ebx
0x8ECDBD: call    dword ptr [ecx+edx*4]
0x8ECDC0: add     esp, 14h
0x8ECDC3: dec     edi
0x8ECDC4: jns     short loc_8ECD50
0x8ECDC6: pop     edi
0x8ECDC7: pop     esi
0x8ECDC8: pop     ebx
0x8ECDC9: mov     esp, ebp
0x8ECDCB: pop     ebp
0x8ECDCC: retn    10h
