0x8F06F0: push    ebp
0x8F06F1: mov     ebp, esp
0x8F06F3: and     esp, 0FFFFFFF0h
0x8F06F6: sub     esp, 74h
0x8F06F9: mov     eax, ds:0B30AACh
0x8F06FE: movaps  xmm4, xmmword ptr ds:0A97DD0h
0x8F0705: mov     [esp+74h+var_4], eax
0x8F0709: mov     eax, [ecx+0Ch]
0x8F070C: fld     dword ptr [eax+14h]
0x8F070F: push    ebx
0x8F0710: mov     [esp+78h+var_48], ecx
0x8F0714: fchs
0x8F0716: mov     ecx, [eax+14h]
0x8F0719: push    esi
0x8F071A: mov     [esp+7Ch+var_68], ecx
0x8F071E: movss   xmm0, [esp+7Ch+var_68]
0x8F0724: fstp    [esp+7Ch+var_68]
0x8F0728: movss   xmm1, [esp+7Ch+var_68]
0x8F072E: push    edi
0x8F072F: mov     edi, [eax+10h]
0x8F0732: mov     eax, [ebp+arg_0]
0x8F0735: movaps  xmm2, xmmword ptr [eax+10h]
0x8F0739: movaps  xmm3, xmmword ptr [edi+40h]
0x8F073D: shufps  xmm0, xmm0, 0
0x8F0741: addps   xmm0, xmm2
0x8F0744: movaps  xmm2, xmmword ptr [eax]
0x8F0747: shufps  xmm1, xmm1, 0
0x8F074B: addps   xmm1, xmm2
0x8F074E: movaps  xmm2, xmmword ptr [edi+30h]
0x8F0752: movaps  [esp+80h+var_30], xmm1
0x8F0757: addps   xmm1, xmm3
0x8F075A: mulps   xmm1, xmm2
0x8F075D: movaps  [esp+80h+var_20], xmm0
0x8F0762: addps   xmm1, xmm4
0x8F0765: movaps  [esp+80h+var_40], xmm1
0x8F076A: mov     edx, dword ptr [esp+80h+var_40+8]
0x8F076E: mov     eax, dword ptr [esp+80h+var_40]
0x8F0772: shr     edx, 6
0x8F0775: movzx   ebx, dx
0x8F0778: addps   xmm0, xmm3
0x8F077B: mulps   xmm0, xmm2
0x8F077E: addps   xmm0, xmm4
0x8F0781: movaps  [esp+80h+var_40], xmm0
0x8F0786: mov     edx, dword ptr [esp+80h+var_40+8]
0x8F078A: shr     eax, 6
0x8F078D: shr     edx, 6
0x8F0790: movzx   ecx, ax
0x8F0793: mov     eax, dword ptr [esp+80h+var_40]
0x8F0797: movzx   edx, dx
0x8F079A: shr     eax, 6
0x8F079D: mov     [esp+80h+var_5C], edx
0x8F07A1: mov     edx, [edi+0Ch]
0x8F07A4: movzx   eax, ax
0x8F07A7: dec     edx
0x8F07A8: cmp     ecx, edx
0x8F07AA: mov     [esp+80h+var_60], edi
0x8F07AE: mov     [esp+80h+var_64], ecx
0x8F07B2: mov     [esp+80h+var_50], ebx
0x8F07B6: mov     [esp+80h+var_44], eax
0x8F07BA: jb      short loc_8F07C4
0x8F07BC: cmp     eax, edx
0x8F07BE: jnb     loc_8F0B02
0x8F07C4: mov     esi, [edi+10h]
0x8F07C7: dec     esi
0x8F07C8: cmp     ebx, esi
0x8F07CA: jb      short loc_8F07D6
0x8F07CC: cmp     [esp+80h+var_5C], esi
0x8F07D0: jnb     loc_8F0B02
0x8F07D6: cmp     ecx, edx
0x8F07D8: jb      short loc_8F07E6
0x8F07DA: mov     [esp+80h+var_64], 0
0x8F07E2: mov     ecx, [esp+80h+var_64]
0x8F07E6: cmp     ebx, esi
0x8F07E8: jb      short loc_8F07F6
0x8F07EA: mov     [esp+80h+var_50], 0
0x8F07F2: mov     ebx, [esp+80h+var_50]
0x8F07F6: cmp     eax, edx
0x8F07F8: jb      short loc_8F0804
0x8F07FA: mov     eax, [edi+0Ch]
0x8F07FD: add     eax, 0FFFFFFFEh
0x8F0800: mov     [esp+80h+var_44], eax
0x8F0804: cmp     [esp+80h+var_5C], esi
0x8F0808: jb      short loc_8F0814
0x8F080A: mov     edx, [edi+10h]
0x8F080D: add     edx, 0FFFFFFFEh
0x8F0810: mov     [esp+80h+var_5C], edx
0x8F0814: mov     esi, [ebp+arg_4]
0x8F0817: mov     edx, [esi+4]
0x8F081A: mov     [esp+80h+var_68], edx
0x8F081E: mov     edx, [esp+80h+var_48]
0x8F0822: cmp     byte ptr [edx+10h], 0
0x8F0826: jz      loc_8F0A50
0x8F082C: cmp     ecx, eax
0x8F082E: mov     byte ptr [esp+80h+var_54], 1
0x8F0833: mov     byte ptr [esp+80h+var_58], 1
0x8F0838: mov     [esp+80h+var_4C], ecx
0x8F083C: ja      loc_8F0955
0x8F0842: cmp     ebx, [esp+80h+var_5C]
0x8F0846: mov     [esp+80h+var_48], ebx
0x8F084A: ja      loc_8F0930
0x8F0850: mov     ecx, [esp+80h+var_4C]
0x8F0854: shl     ebx, 0Fh
0x8F0857: add     ebx, ecx
0x8F0859: shl     ebx, 1
0x8F085B: jmp     short loc_8F0860
0x8F085D: align 10h
0x8F0860: mov     eax, [esi+8]
0x8F0863: mov     ecx, [esi+4]
0x8F0866: and     eax, 3FFFFFFFh
0x8F086B: cmp     ecx, eax
0x8F086D: jnz     short loc_8F087A
0x8F086F: push    4
0x8F0871: push    esi
0x8F0872: call    sub_8A6EE0
0x8F0877: add     esp, 8
0x8F087A: mov     ecx, [esi+4]
0x8F087D: mov     edx, [esi]
0x8F087F: mov     [edx+ecx*4], ebx
0x8F0882: mov     edx, [esi+4]
0x8F0885: mov     ecx, [esi+8]
0x8F0888: inc     edx
0x8F0889: mov     edi, ebx
0x8F088B: mov     eax, edx
0x8F088D: and     ecx, 3FFFFFFFh
0x8F0893: or      edi, 1
0x8F0896: cmp     eax, ecx
0x8F0898: mov     [esi+4], edx
0x8F089B: jnz     short loc_8F08A8
0x8F089D: push    4
0x8F089F: push    esi
0x8F08A0: call    sub_8A6EE0
0x8F08A5: add     esp, 8
0x8F08A8: mov     edx, [esi+4]
0x8F08AB: mov     eax, [esi]
0x8F08AD: mov     [eax+edx*4], edi
0x8F08B0: mov     ecx, [esi+4]
0x8F08B3: mov     al, byte ptr [esp+80h+var_54]
0x8F08B7: inc     ecx
0x8F08B8: test    al, al
0x8F08BA: mov     [esi+4], ecx
0x8F08BD: jnz     short loc_8F08C7
0x8F08BF: mov     al, byte ptr [esp+80h+var_58]
0x8F08C3: test    al, al
0x8F08C5: jz      short loc_8F0905
0x8F08C7: mov     eax, [esp+80h+var_48]
0x8F08CB: mov     ecx, [esp+80h+var_4C]
0x8F08CF: mov     edi, [esp+80h+var_60]
0x8F08D3: mov     edx, [edi]
0x8F08D5: push    eax
0x8F08D6: push    ecx
0x8F08D7: mov     ecx, edi
0x8F08D9: call    dword ptr [edx+24h]
0x8F08DC: fmul    dword ptr [edi+24h]
0x8F08DF: fld     dword ptr [esp+80h+var_30+4]
0x8F08E3: fcomp   st(1)
0x8F08E5: fnstsw  ax
0x8F08E7: test    ah, 5
0x8F08EA: jp      short loc_8F08F1
0x8F08EC: mov     byte ptr [esp+80h+var_54], 0
0x8F08F1: fld     dword ptr [esp+80h+var_20+4]
0x8F08F5: fcomp   st(1)
0x8F08F7: fnstsw  ax
0x8F08F9: fstp    st
0x8F08FB: test    ah, 41h
0x8F08FE: jnz     short loc_8F0905
0x8F0900: mov     byte ptr [esp+80h+var_58], 0
0x8F0905: mov     eax, [esp+80h+var_48]
0x8F0909: mov     ecx, [esp+80h+var_5C]
0x8F090D: inc     eax
0x8F090E: add     ebx, 10000h
0x8F0914: cmp     eax, ecx
0x8F0916: mov     [esp+80h+var_48], eax
0x8F091A: jbe     loc_8F0860
0x8F0920: mov     ecx, [esp+80h+var_64]
0x8F0924: mov     edi, [esp+80h+var_60]
0x8F0928: mov     eax, [esp+80h+var_44]
0x8F092C: mov     ebx, [esp+80h+var_50]
0x8F0930: mov     edx, [esp+80h+var_4C]
0x8F0934: inc     edx
0x8F0935: cmp     edx, eax
0x8F0937: mov     [esp+80h+var_4C], edx
0x8F093B: jbe     loc_8F0842
0x8F0941: mov     dl, byte ptr [esp+80h+var_54]
0x8F0945: test    dl, dl
0x8F0947: jnz     short loc_8F0955
0x8F0949: mov     dl, byte ptr [esp+80h+var_58]
0x8F094D: test    dl, dl
0x8F094F: jz      loc_8F0B02
0x8F0955: inc     eax
0x8F0956: cmp     ecx, eax
0x8F0958: mov     [esp+80h+var_64], ecx
0x8F095C: mov     [esp+80h+var_60], eax
0x8F0960: ja      short loc_8F09B2
0x8F0962: mov     ebx, [esp+80h+var_5C]
0x8F0966: inc     ebx
0x8F0967: mov     eax, [esp+80h+var_64]
0x8F096B: mov     edx, [edi]
0x8F096D: push    ebx
0x8F096E: push    eax
0x8F096F: mov     ecx, edi
0x8F0971: call    dword ptr [edx+24h]
0x8F0974: fmul    dword ptr [edi+24h]
0x8F0977: fld     dword ptr [esp+80h+var_30+4]
0x8F097B: fcomp   st(1)
0x8F097D: fnstsw  ax
0x8F097F: test    ah, 5
0x8F0982: jp      short loc_8F0989
0x8F0984: mov     byte ptr [esp+80h+var_54], 0
0x8F0989: fld     dword ptr [esp+80h+var_20+4]
0x8F098D: fcomp   st(1)
0x8F098F: fnstsw  ax
0x8F0991: fstp    st
0x8F0993: test    ah, 41h
0x8F0996: jnz     short loc_8F099D
0x8F0998: mov     byte ptr [esp+80h+var_58], 0
0x8F099D: mov     eax, [esp+80h+var_64]
0x8F09A1: mov     ecx, [esp+80h+var_60]
0x8F09A5: inc     eax
0x8F09A6: cmp     eax, ecx
0x8F09A8: mov     [esp+80h+var_64], eax
0x8F09AC: jbe     short loc_8F0967
0x8F09AE: mov     ebx, [esp+80h+var_50]
0x8F09B2: mov     eax, [esp+80h+var_5C]
0x8F09B6: inc     eax
0x8F09B7: cmp     ebx, eax
0x8F09B9: mov     [esp+80h+var_64], eax
0x8F09BD: ja      short loc_8F09FF
0x8F09BF: nop
0x8F09C0: mov     eax, [esp+80h+var_60]
0x8F09C4: mov     edx, [edi]
0x8F09C6: push    ebx
0x8F09C7: push    eax
0x8F09C8: mov     ecx, edi
0x8F09CA: call    dword ptr [edx+24h]
0x8F09CD: fmul    dword ptr [edi+24h]
0x8F09D0: fld     dword ptr [esp+80h+var_30+4]
0x8F09D4: fcomp   st(1)
0x8F09D6: fnstsw  ax
0x8F09D8: test    ah, 5
0x8F09DB: jp      short loc_8F09E2
0x8F09DD: mov     byte ptr [esp+80h+var_54], 0
0x8F09E2: fld     dword ptr [esp+80h+var_20+4]
0x8F09E6: fcomp   st(1)
0x8F09E8: fnstsw  ax
0x8F09EA: fstp    st
0x8F09EC: test    ah, 41h
0x8F09EF: jnz     short loc_8F09F6
0x8F09F1: mov     byte ptr [esp+80h+var_58], 0
0x8F09F6: mov     eax, [esp+80h+var_64]
0x8F09FA: inc     ebx
0x8F09FB: cmp     ebx, eax
0x8F09FD: jbe     short loc_8F09C0
0x8F09FF: mov     al, byte ptr [esp+80h+var_54]
0x8F0A03: test    al, al
0x8F0A05: jnz     short loc_8F0A13
0x8F0A07: mov     al, byte ptr [esp+80h+var_58]
0x8F0A0B: test    al, al
0x8F0A0D: jz      loc_8F0B02
0x8F0A13: mov     eax, [esi+8]
0x8F0A16: mov     ecx, [esp+80h+var_68]
0x8F0A1A: and     eax, 3FFFFFFFh
0x8F0A1F: cmp     eax, ecx
0x8F0A21: jge     short loc_8F0A37
0x8F0A23: add     eax, eax
0x8F0A25: cmp     ecx, eax
0x8F0A27: jl      short loc_8F0A2B
0x8F0A29: mov     eax, ecx
0x8F0A2B: push    4
0x8F0A2D: push    eax
0x8F0A2E: push    esi
0x8F0A2F: call    sub_8A6E40
0x8F0A34: add     esp, 0Ch
0x8F0A37: mov     ecx, [esp+80h+var_68]
0x8F0A3B: mov     [esi+4], ecx
0x8F0A3E: mov     ecx, [esp+80h+var_4]
0x8F0A42: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8F0A47: pop     edi
0x8F0A48: pop     esi
0x8F0A49: pop     ebx
0x8F0A4A: mov     esp, ebp
0x8F0A4C: pop     ebp
0x8F0A4D: retn    8
0x8F0A50: cmp     ecx, eax
0x8F0A52: mov     [esp+80h+var_60], ecx
0x8F0A56: ja      loc_8F0B02
0x8F0A5C: lea     esp, [esp+0]
0x8F0A60: mov     edx, [esp+80h+var_5C]
0x8F0A64: cmp     ebx, edx
0x8F0A66: ja      loc_8F0AF5
0x8F0A6C: mov     edi, ebx
0x8F0A6E: shl     edi, 0Fh
0x8F0A71: add     edi, ecx
0x8F0A73: mov     eax, edx
0x8F0A75: sub     eax, ebx
0x8F0A77: shl     edi, 1
0x8F0A79: inc     eax
0x8F0A7A: mov     [esp+80h+var_68], eax
0x8F0A7E: mov     edi, edi
0x8F0A80: mov     edx, [esi+8]
0x8F0A83: mov     eax, [esi+4]
0x8F0A86: and     edx, 3FFFFFFFh
0x8F0A8C: cmp     eax, edx
0x8F0A8E: jnz     short loc_8F0A9B
0x8F0A90: push    4
0x8F0A92: push    esi
0x8F0A93: call    sub_8A6EE0
0x8F0A98: add     esp, 8
0x8F0A9B: mov     eax, [esi+4]
0x8F0A9E: mov     ecx, [esi]
0x8F0AA0: mov     [ecx+eax*4], edi
0x8F0AA3: mov     ebx, [esi+4]
0x8F0AA6: mov     edx, [esi+8]
0x8F0AA9: inc     ebx
0x8F0AAA: mov     eax, ebx
0x8F0AAC: mov     [esi+4], ebx
0x8F0AAF: mov     ebx, edi
0x8F0AB1: and     edx, 3FFFFFFFh
0x8F0AB7: or      ebx, 1
0x8F0ABA: cmp     eax, edx
0x8F0ABC: jnz     short loc_8F0AC9
0x8F0ABE: push    4
0x8F0AC0: push    esi
0x8F0AC1: call    sub_8A6EE0
0x8F0AC6: add     esp, 8
0x8F0AC9: mov     eax, [esi+4]
0x8F0ACC: mov     ecx, [esi]
0x8F0ACE: mov     [ecx+eax*4], ebx
0x8F0AD1: mov     edx, [esi+4]
0x8F0AD4: mov     eax, [esp+80h+var_68]
0x8F0AD8: inc     edx
0x8F0AD9: add     edi, 10000h
0x8F0ADF: dec     eax
0x8F0AE0: mov     [esi+4], edx
0x8F0AE3: mov     [esp+80h+var_68], eax
0x8F0AE7: jnz     short loc_8F0A80
0x8F0AE9: mov     ecx, [esp+80h+var_60]
0x8F0AED: mov     eax, [esp+80h+var_44]
0x8F0AF1: mov     ebx, [esp+80h+var_50]
0x8F0AF5: inc     ecx
0x8F0AF6: cmp     ecx, eax
0x8F0AF8: mov     [esp+80h+var_60], ecx
0x8F0AFC: jbe     loc_8F0A60
0x8F0B02: mov     ecx, [esp+80h+var_4]
0x8F0B06: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8F0B0B: pop     edi
0x8F0B0C: pop     esi
0x8F0B0D: pop     ebx
0x8F0B0E: mov     esp, ebp
0x8F0B10: pop     ebp
0x8F0B11: retn    8
