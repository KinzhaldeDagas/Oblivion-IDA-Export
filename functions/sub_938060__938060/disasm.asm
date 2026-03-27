0x938060: push    ebp
0x938061: mov     ebp, esp
0x938063: and     esp, 0FFFFFFF0h
0x938066: sub     esp, 2Ch
0x938069: mov     edx, [ebp+arg_0]
0x93806C: mov     eax, [edx+3Ch]
0x93806F: add     eax, 2
0x938072: shl     eax, 4
0x938075: xorps   xmm0, xmm0
0x938078: movaps  [esp+2Ch+var_10], xmm0
0x93807D: add     eax, ecx
0x93807F: push    esi
0x938080: mov     esi, [edx+38h]
0x938083: mov     dword ptr [esp+esi*4+30h+var_10], 3F800000h
0x93808B: mov     esi, [eax]
0x93808D: mov     dword ptr [esp+30h+var_20], esi
0x938091: mov     esi, [eax+4]
0x938094: mov     dword ptr [esp+30h+var_20+4], esi
0x938098: mov     esi, [eax+8]
0x93809B: mov     eax, [eax+0Ch]
0x93809E: mov     dword ptr [esp+30h+var_20+0Ch], eax
0x9380A2: mov     dword ptr [esp+30h+var_20+8], esi
0x9380A6: movaps  xmm0, [esp+30h+var_20]
0x9380AB: movaps  xmm1, xmm0
0x9380AE: shufps  xmm1, xmm0, 0C9h ; 'É'
0x9380B2: movaps  xmm2, xmm1
0x9380B5: movaps  xmm1, [esp+30h+var_10]
0x9380BA: movaps  xmm3, xmm1
0x9380BD: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x9380C1: mulps   xmm3, xmm2
0x9380C4: movaps  xmm2, xmm0
0x9380C7: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x9380CB: movaps  xmm0, xmm1
0x9380CE: shufps  xmm0, xmm1, 0C9h ; 'É'
0x9380D2: mulps   xmm0, xmm2
0x9380D5: movaps  xmm2, xmmword ptr [ecx+0C0h]
0x9380DC: subps   xmm0, xmm3
0x9380DF: movaps  xmm1, xmm0
0x9380E2: mulps   xmm1, xmm2
0x9380E5: movaps  xmm2, xmm1
0x9380E8: shufps  xmm2, xmm1, 55h ; 'U'
0x9380EC: movaps  xmm3, xmm1
0x9380EF: lea     eax, [esp+30h+var_24]
0x9380F3: addss   xmm2, xmm1
0x9380F7: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x9380FB: addss   xmm3, xmm2
0x9380FF: movss   dword ptr [eax], xmm3
0x938103: fld     [esp+30h+var_24]
0x938107: fcomp   dword ptr ds:0A2FAA8h
0x93810D: fnstsw  ax
0x93810F: test    ah, 5
0x938112: jp      short loc_93811E
0x938114: movaps  xmm1, xmmword ptr ds:0A965C0h
0x93811B: xorps   xmm0, xmm1
0x93811E: movaps  xmm3, xmmword ptr [ecx+40h]
0x938122: movaps  xmm2, xmmword ptr [ecx+20h]
0x938126: movaps  xmm5, xmmword ptr [ecx+30h]
0x93812A: movaps  xmm4, xmm3
0x93812D: shufps  xmm4, xmm3, 44h ; 'D'
0x938131: movaps  xmm7, xmm3
0x938134: movaps  xmm1, xmm2
0x938137: shufps  xmm1, xmm5, 44h ; 'D'
0x93813B: shufps  xmm7, xmm3, 0EEh ; 'î'
0x93813F: shufps  xmm2, xmm5, 0EEh ; 'î'
0x938143: movaps  xmm5, xmm1
0x938146: movaps  xmm3, xmm0
0x938149: shufps  xmm3, xmm0, 55h ; 'U'
0x93814D: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x938151: mulps   xmm5, xmm3
0x938154: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x938158: movaps  xmm3, xmm0
0x93815B: movaps  xmm6, xmm0
0x93815E: shufps  xmm3, xmm0, 0
0x938162: mulps   xmm1, xmm3
0x938165: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x938169: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x93816D: mulps   xmm2, xmm6
0x938170: addps   xmm1, xmm5
0x938173: addps   xmm1, xmm2
0x938176: movaps  xmmword ptr [edx], xmm0
0x938179: movaps  xmmword ptr [edx+10h], xmm1
0x93817D: pop     esi
0x93817E: mov     esp, ebp
0x938180: pop     ebp
0x938181: retn    4
