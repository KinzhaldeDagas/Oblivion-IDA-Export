0x8E8CF0: push    ebp
0x8E8CF1: mov     ebp, esp
0x8E8CF3: and     esp, 0FFFFFFF0h
0x8E8CF6: sub     esp, 54h
0x8E8CF9: mov     edx, ds:0BA9DE4h
0x8E8CFF: push    ebx
0x8E8D00: mov     ebx, ecx
0x8E8D02: mov     ecx, large fs:2Ch
0x8E8D09: mov     eax, [ecx+edx*4]
0x8E8D0C: push    esi
0x8E8D0D: mov     esi, [eax+1A4h]
0x8E8D13: push    edi
0x8E8D14: cmp     esi, [eax+1A8h]
0x8E8D1A: jnb     short loc_8E8D40
0x8E8D1C: mov     esi, eax
0x8E8D1E: mov     ecx, [esi+1A4h]
0x8E8D24: mov     dword ptr [ecx], offset aTtrctransform; "TtrcTransform"
0x8E8D2A: rdtsc
0x8E8D2C: mov     [esp+60h+var_44], eax
0x8E8D30: mov     eax, [esp+60h+var_44]
0x8E8D34: mov     [ecx+4], eax
0x8E8D37: add     ecx, 0Ch
0x8E8D3A: mov     [esi+1A4h], ecx
0x8E8D40: mov     eax, [ebp+arg_4]
0x8E8D43: movaps  xmm3, xmmword ptr [ebx+40h]
0x8E8D47: movaps  xmm0, xmmword ptr [eax]
0x8E8D4A: movaps  xmm1, xmmword ptr [ebx+50h]
0x8E8D4E: movaps  xmm2, xmmword ptr [ebx+20h]
0x8E8D52: movaps  xmm5, xmmword ptr [ebx+30h]
0x8E8D56: subps   xmm0, xmm1
0x8E8D59: mov     esi, eax
0x8E8D5B: movaps  xmm4, xmm3
0x8E8D5E: shufps  xmm4, xmm3, 44h ; 'D'
0x8E8D62: movaps  xmm7, xmm3
0x8E8D65: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8E8D69: movaps  xmm1, xmm2
0x8E8D6C: shufps  xmm1, xmm5, 44h ; 'D'
0x8E8D70: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8E8D74: movaps  xmm5, xmm1
0x8E8D77: mov     ecx, 0Ch
0x8E8D7C: lea     edi, [esp+60h+var_30]
0x8E8D80: rep movsd
0x8E8D82: mov     edi, [ebp+arg_8]
0x8E8D85: lea     esi, [ebx+20h]
0x8E8D88: mov     ecx, [ebx+0Ch]
0x8E8D8B: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x8E8D8F: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8E8D93: movaps  xmm3, xmm0
0x8E8D96: shufps  xmm3, xmm0, 55h ; 'U'
0x8E8D9A: mulps   xmm5, xmm3
0x8E8D9D: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8E8DA1: movaps  xmm3, xmm0
0x8E8DA4: shufps  xmm3, xmm0, 0
0x8E8DA8: mulps   xmm1, xmm3
0x8E8DAB: movaps  xmm3, xmmword ptr [esi+20h]
0x8E8DAF: addps   xmm1, xmm5
0x8E8DB2: movaps  xmm5, xmmword ptr [esi+10h]
0x8E8DB6: movaps  xmm6, xmm0
0x8E8DB9: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8E8DBD: movaps  xmm0, xmmword ptr [eax+10h]
0x8E8DC1: mulps   xmm2, xmm6
0x8E8DC4: addps   xmm1, xmm2
0x8E8DC7: movaps  xmm2, xmmword ptr [esi]
0x8E8DCA: movaps  [esp+60h+var_30], xmm1
0x8E8DCF: movaps  xmm1, xmmword ptr [esi+30h]
0x8E8DD3: subps   xmm0, xmm1
0x8E8DD6: movaps  xmm4, xmm3
0x8E8DD9: shufps  xmm4, xmm3, 44h ; 'D'
0x8E8DDD: movaps  xmm7, xmm3
0x8E8DE0: movaps  xmm1, xmm2
0x8E8DE3: shufps  xmm1, xmm5, 44h ; 'D'
0x8E8DE7: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8E8DEB: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8E8DEF: movaps  xmm5, xmm1
0x8E8DF2: movaps  xmm3, xmm0
0x8E8DF5: shufps  xmm3, xmm0, 55h ; 'U'
0x8E8DF9: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8E8DFD: mulps   xmm5, xmm3
0x8E8E00: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x8E8E04: movaps  xmm3, xmm0
0x8E8E07: push    edi
0x8E8E08: movaps  xmm6, xmm0
0x8E8E0B: shufps  xmm3, xmm0, 0
0x8E8E0F: mulps   xmm1, xmm3
0x8E8E12: lea     eax, [esp+64h+var_30]
0x8E8E16: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8E8E1A: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8E8E1E: push    eax
0x8E8E1F: mulps   xmm2, xmm6
0x8E8E22: addps   xmm1, xmm5
0x8E8E25: addps   xmm1, xmm2
0x8E8E28: lea     eax, [esp+68h+var_48]
0x8E8E2C: movaps  [esp+68h+var_20], xmm1
0x8E8E31: mov     edx, [ecx]
0x8E8E33: push    eax
0x8E8E34: call    dword ptr [edx+14h]
0x8E8E37: mov     al, byte ptr [esp+60h+var_48]
0x8E8E3B: test    al, al
0x8E8E3D: jz      short loc_8E8E69
0x8E8E3F: mov     ecx, edi
0x8E8E41: mov     edx, [ecx]
0x8E8E43: mov     eax, [ecx+4]
0x8E8E46: mov     [esp+60h+var_40], edx
0x8E8E4A: mov     edx, [ecx+8]
0x8E8E4D: mov     [esp+60h+var_3C], eax
0x8E8E51: mov     eax, [ecx+0Ch]
0x8E8E54: lea     ecx, [esp+60h+var_40]
0x8E8E58: push    ecx
0x8E8E59: push    esi
0x8E8E5A: mov     ecx, edi
0x8E8E5C: mov     [esp+68h+var_38], edx
0x8E8E60: mov     [esp+68h+var_34], eax
0x8E8E64: call    sub_88FE00
0x8E8E69: mov     ecx, large fs:2Ch
0x8E8E70: mov     edx, ds:0BA9DE4h
0x8E8E76: mov     eax, [ecx+edx*4]
0x8E8E79: mov     esi, [eax+1A4h]
0x8E8E7F: cmp     esi, [eax+1A8h]
0x8E8E85: jnb     short loc_8E8EBD
0x8E8E87: mov     esi, eax
0x8E8E89: mov     ecx, [esi+1A4h]
0x8E8E8F: mov     dword ptr [ecx], offset aEt; "Et"
0x8E8E95: rdtsc
0x8E8E97: mov     [esp+60h+var_44], eax
0x8E8E9B: mov     edx, [esp+60h+var_44]
0x8E8E9F: mov     eax, [ebp+arg_0]
0x8E8EA2: mov     [ecx+4], edx
0x8E8EA5: add     ecx, 0Ch
0x8E8EA8: mov     [esi+1A4h], ecx
0x8E8EAE: mov     cl, byte ptr [esp+60h+var_48]
0x8E8EB2: mov     [eax], cl
0x8E8EB4: pop     edi
0x8E8EB5: pop     esi
0x8E8EB6: pop     ebx
0x8E8EB7: mov     esp, ebp
0x8E8EB9: pop     ebp
0x8E8EBA: retn    0Ch
0x8E8EBD: mov     eax, [ebp+arg_0]
0x8E8EC0: mov     dl, byte ptr [esp+60h+var_48]
0x8E8EC4: pop     edi
0x8E8EC5: pop     esi
0x8E8EC6: mov     [eax], dl
0x8E8EC8: pop     ebx
0x8E8EC9: mov     esp, ebp
0x8E8ECB: pop     ebp
0x8E8ECC: retn    0Ch
