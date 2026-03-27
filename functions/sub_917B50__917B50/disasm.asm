0x917B50: push    ebp
0x917B51: mov     ebp, esp
0x917B53: and     esp, 0FFFFFFF0h
0x917B56: sub     esp, 54h
0x917B59: mov     edx, ds:0BA9DE4h
0x917B5F: push    ebx
0x917B60: mov     ebx, ecx
0x917B62: mov     ecx, large fs:2Ch
0x917B69: mov     eax, [ecx+edx*4]
0x917B6C: push    esi
0x917B6D: mov     esi, [eax+1A4h]
0x917B73: push    edi
0x917B74: cmp     esi, [eax+1A8h]
0x917B7A: jnb     short loc_917BA0
0x917B7C: mov     esi, eax
0x917B7E: mov     ecx, [esi+1A4h]
0x917B84: mov     dword ptr [ecx], offset aTtrcconvtransl; "TtrcConvTransl"
0x917B8A: rdtsc
0x917B8C: mov     [esp+60h+var_44], eax
0x917B90: mov     eax, [esp+60h+var_44]
0x917B94: mov     [ecx+4], eax
0x917B97: add     ecx, 0Ch
0x917B9A: mov     [esi+1A4h], ecx
0x917BA0: mov     eax, [ebp+arg_4]
0x917BA3: movaps  xmm3, xmmword ptr [ebx+40h]
0x917BA7: movaps  xmm0, xmmword ptr [eax]
0x917BAA: movaps  xmm1, xmmword ptr [ebx+50h]
0x917BAE: movaps  xmm2, xmmword ptr [ebx+20h]
0x917BB2: movaps  xmm5, xmmword ptr [ebx+30h]
0x917BB6: subps   xmm0, xmm1
0x917BB9: mov     esi, eax
0x917BBB: movaps  xmm4, xmm3
0x917BBE: shufps  xmm4, xmm3, 44h ; 'D'
0x917BC2: movaps  xmm7, xmm3
0x917BC5: shufps  xmm7, xmm3, 0EEh ; 'î'
0x917BC9: movaps  xmm1, xmm2
0x917BCC: shufps  xmm1, xmm5, 44h ; 'D'
0x917BD0: shufps  xmm2, xmm5, 0EEh ; 'î'
0x917BD4: movaps  xmm5, xmm1
0x917BD7: mov     ecx, 0Ch
0x917BDC: lea     edi, [esp+60h+var_30]
0x917BE0: rep movsd
0x917BE2: mov     edi, [ebp+arg_8]
0x917BE5: lea     esi, [ebx+20h]
0x917BE8: mov     ecx, [ebx+10h]
0x917BEB: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x917BEF: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x917BF3: movaps  xmm3, xmm0
0x917BF6: shufps  xmm3, xmm0, 55h ; 'U'
0x917BFA: mulps   xmm5, xmm3
0x917BFD: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x917C01: movaps  xmm3, xmm0
0x917C04: shufps  xmm3, xmm0, 0
0x917C08: mulps   xmm1, xmm3
0x917C0B: movaps  xmm3, xmmword ptr [esi+20h]
0x917C0F: addps   xmm1, xmm5
0x917C12: movaps  xmm5, xmmword ptr [esi+10h]
0x917C16: movaps  xmm6, xmm0
0x917C19: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x917C1D: movaps  xmm0, xmmword ptr [eax+10h]
0x917C21: mulps   xmm2, xmm6
0x917C24: addps   xmm1, xmm2
0x917C27: movaps  xmm2, xmmword ptr [esi]
0x917C2A: movaps  [esp+60h+var_30], xmm1
0x917C2F: movaps  xmm1, xmmword ptr [esi+30h]
0x917C33: subps   xmm0, xmm1
0x917C36: movaps  xmm4, xmm3
0x917C39: shufps  xmm4, xmm3, 44h ; 'D'
0x917C3D: movaps  xmm7, xmm3
0x917C40: movaps  xmm1, xmm2
0x917C43: shufps  xmm1, xmm5, 44h ; 'D'
0x917C47: shufps  xmm7, xmm3, 0EEh ; 'î'
0x917C4B: shufps  xmm2, xmm5, 0EEh ; 'î'
0x917C4F: movaps  xmm5, xmm1
0x917C52: movaps  xmm3, xmm0
0x917C55: shufps  xmm3, xmm0, 55h ; 'U'
0x917C59: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x917C5D: mulps   xmm5, xmm3
0x917C60: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x917C64: movaps  xmm3, xmm0
0x917C67: push    edi
0x917C68: movaps  xmm6, xmm0
0x917C6B: shufps  xmm3, xmm0, 0
0x917C6F: mulps   xmm1, xmm3
0x917C72: lea     eax, [esp+64h+var_30]
0x917C76: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x917C7A: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x917C7E: push    eax
0x917C7F: mulps   xmm2, xmm6
0x917C82: addps   xmm1, xmm5
0x917C85: addps   xmm1, xmm2
0x917C88: lea     eax, [esp+68h+var_48]
0x917C8C: movaps  [esp+68h+var_20], xmm1
0x917C91: mov     edx, [ecx]
0x917C93: push    eax
0x917C94: call    dword ptr [edx+14h]
0x917C97: mov     al, byte ptr [esp+60h+var_48]
0x917C9B: test    al, al
0x917C9D: jz      short loc_917CC9
0x917C9F: mov     ecx, edi
0x917CA1: mov     edx, [ecx]
0x917CA3: mov     eax, [ecx+4]
0x917CA6: mov     [esp+60h+var_40], edx
0x917CAA: mov     edx, [ecx+8]
0x917CAD: mov     [esp+60h+var_3C], eax
0x917CB1: mov     eax, [ecx+0Ch]
0x917CB4: lea     ecx, [esp+60h+var_40]
0x917CB8: push    ecx
0x917CB9: push    esi
0x917CBA: mov     ecx, edi
0x917CBC: mov     [esp+68h+var_38], edx
0x917CC0: mov     [esp+68h+var_34], eax
0x917CC4: call    sub_88FE00
0x917CC9: mov     ecx, large fs:2Ch
0x917CD0: mov     edx, ds:0BA9DE4h
0x917CD6: mov     eax, [ecx+edx*4]
0x917CD9: mov     esi, [eax+1A4h]
0x917CDF: cmp     esi, [eax+1A8h]
0x917CE5: jnb     short loc_917D1D
0x917CE7: mov     esi, eax
0x917CE9: mov     ecx, [esi+1A4h]
0x917CEF: mov     dword ptr [ecx], offset aEt; "Et"
0x917CF5: rdtsc
0x917CF7: mov     [esp+60h+var_44], eax
0x917CFB: mov     edx, [esp+60h+var_44]
0x917CFF: mov     eax, [ebp+arg_0]
0x917D02: mov     [ecx+4], edx
0x917D05: add     ecx, 0Ch
0x917D08: mov     [esi+1A4h], ecx
0x917D0E: mov     cl, byte ptr [esp+60h+var_48]
0x917D12: mov     [eax], cl
0x917D14: pop     edi
0x917D15: pop     esi
0x917D16: pop     ebx
0x917D17: mov     esp, ebp
0x917D19: pop     ebp
0x917D1A: retn    0Ch
0x917D1D: mov     eax, [ebp+arg_0]
0x917D20: mov     dl, byte ptr [esp+60h+var_48]
0x917D24: pop     edi
0x917D25: pop     esi
0x917D26: mov     [eax], dl
0x917D28: pop     ebx
0x917D29: mov     esp, ebp
0x917D2B: pop     ebp
0x917D2C: retn    0Ch
