0x952050: push    ebp
0x952051: mov     ebp, esp
0x952053: and     esp, 0FFFFFFF0h
0x952056: sub     esp, 98h
0x95205C: push    esi
0x95205D: push    edi
0x95205E: mov     esi, ecx
0x952060: mov     edi, [esi+68h]
0x952063: lea     eax, [esp+0A0h+var_80]
0x952067: push    eax
0x952068: push    edi
0x952069: call    sub_951D00
0x95206E: mov     ecx, [esi+68h]
0x952071: movaps  xmm1, xmmword ptr [ecx]
0x952074: movaps  xmm0, [esp+0A0h+var_80]
0x952079: subps   xmm0, xmm1
0x95207C: mulps   xmm0, xmm0
0x95207F: movaps  xmm1, xmm0
0x952082: shufps  xmm1, xmm0, 55h ; 'U'
0x952086: addss   xmm1, xmm0
0x95208A: movaps  xmm2, xmm0
0x95208D: lea     eax, [esp+0A0h+var_40]
0x952091: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x952095: movaps  xmm0, xmmword ptr ds:0A965C0h
0x95209C: addss   xmm2, xmm1
0x9520A0: movaps  xmm1, xmmword ptr [edi]
0x9520A3: push    eax
0x9520A4: lea     ecx, [esp+0A4h+var_90]
0x9520A8: lea     edx, [esp+0A4h+var_98]
0x9520AC: push    ecx
0x9520AD: xorps   xmm1, xmm0
0x9520B0: mov     ecx, esi
0x9520B2: movss   dword ptr [edx], xmm2
0x9520B6: movaps  [esp+0A8h+var_90], xmm1
0x9520BB: call    sub_951D00
0x9520C0: fld     [esp+0A0h+var_98]
0x9520C4: mov     ecx, [esi+68h]
0x9520C7: movaps  xmm2, xmmword ptr [ecx]
0x9520CA: movaps  xmm1, [esp+0A0h+var_40]
0x9520CF: movaps  xmm0, xmm1
0x9520D2: subps   xmm0, xmm2
0x9520D5: mulps   xmm0, xmm0
0x9520D8: movaps  xmm2, xmm0
0x9520DB: shufps  xmm2, xmm0, 55h ; 'U'
0x9520DF: movaps  xmm3, xmm0
0x9520E2: addss   xmm2, xmm0
0x9520E6: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x9520EA: lea     edx, [esp+0A0h+var_94]
0x9520EE: addss   xmm3, xmm2
0x9520F2: movss   dword ptr [edx], xmm3
0x9520F6: fcomp   [esp+0A0h+var_94]
0x9520FA: fnstsw  ax
0x9520FC: test    ah, 1
0x9520FF: jnz     short loc_952148
0x952101: mov     eax, [esi+6Ch]
0x952104: mov     edx, [eax]
0x952106: movaps  xmm0, [esp+0A0h+var_80]
0x95210B: shl     edx, 4
0x95210E: movaps  xmmword ptr [edx+ecx], xmm0
0x952112: mov     eax, [esi+6Ch]
0x952115: mov     ecx, [eax]
0x952117: mov     edi, [esi+60h]
0x95211A: movaps  xmm0, [esp+0A0h+var_70]
0x95211F: shl     ecx, 4
0x952122: movaps  xmmword ptr [ecx+edi], xmm0
0x952126: mov     edx, [esi+6Ch]
0x952129: mov     eax, [edx]
0x95212B: movaps  xmm0, [esp+0A0h+var_60]
0x952130: add     ecx, edi
0x952132: mov     ecx, [esi+64h]
0x952135: shl     eax, 4
0x952138: add     eax, ecx
0x95213A: movaps  xmmword ptr [eax], xmm0
0x95213D: mov     esi, [esi+6Ch]
0x952140: inc     dword ptr [esi]
0x952142: pop     edi
0x952143: pop     esi
0x952144: mov     esp, ebp
0x952146: pop     ebp
0x952147: retn
0x952148: mov     edx, [esi+6Ch]
0x95214B: mov     eax, [edx]
0x95214D: shl     eax, 4
0x952150: movaps  xmmword ptr [eax+ecx], xmm1
0x952154: mov     ecx, [esi+6Ch]
0x952157: mov     edx, [ecx]
0x952159: mov     eax, [esi+60h]
0x95215C: movaps  xmm0, [esp+0A0h+var_30]
0x952161: shl     edx, 4
0x952164: movaps  xmmword ptr [edx+eax], xmm0
0x952168: movaps  xmm0, [esp+0A0h+var_20]
0x952170: add     edx, eax
0x952172: mov     eax, [esi+6Ch]
0x952175: mov     ecx, [eax]
0x952177: mov     edx, [esi+64h]
0x95217A: shl     ecx, 4
0x95217D: add     ecx, edx
0x95217F: movaps  xmmword ptr [ecx], xmm0
0x952182: mov     esi, [esi+6Ch]
0x952185: mov     eax, [esi]
0x952187: inc     eax
0x952188: pop     edi
0x952189: mov     [esi], eax
0x95218B: pop     esi
0x95218C: mov     esp, ebp
0x95218E: pop     ebp
0x95218F: retn
