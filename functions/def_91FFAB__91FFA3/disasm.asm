0x91FFA3: movsx   eax, byte ptr [edx]; jumptable 0091FFAB default case
0x91FFA6: cmp     eax, 10h; switch 17 cases
0x91FFA9: ja      short def_91FFAB
0x91FFAB: jmp     ds:jpt_91FFAB[eax*4]; switch jump
0x91FFB2: movzx   ebx, byte ptr [edx+1]; jumptable 0091FFAB cases 4,9,10
0x91FFB6: add     edx, ebx
0x91FFB8: movsx   ebx, byte ptr [edx]
0x91FFBB: add     ecx, 20h ; ' '
0x91FFBE: cmp     ebx, eax
0x91FFC0: jz      short loc_91FFB2; jumptable 0091FFAB cases 4,9,10
0x91FFC2: jmp     short def_91FFAB
0x91FFC4: movzx   ebx, byte ptr [edx+1]; jumptable 0091FFAB cases 5,6,11
0x91FFC8: add     edx, ebx
0x91FFCA: movsx   ebx, byte ptr [edx]
0x91FFCD: add     ecx, 30h ; '0'
0x91FFD0: cmp     ebx, eax
0x91FFD2: jz      short loc_91FFC4; jumptable 0091FFAB cases 5,6,11
0x91FFD4: jmp     short def_91FFAB
0x91FFD6: mov     eax, [esp+arg_14]; jumptable 0091FFAB case 2
0x91FFDA: cmp     eax, [ebp+10h]
0x91FFDD: jg      loc_920248; jumptable 0091FFAB cases 0,1,7,8
0x91FFE3: movaps  xmm1, xmmword ptr [edi+10h]
0x91FFE7: fld     dword ptr ds:0A2FAA8h
0x91FFED: movaps  xmm0, xmmword ptr [ecx]
0x91FFF0: movaps  xmm2, xmmword ptr [esi+10h]
0x91FFF4: mov     eax, [esp+arg_10]
0x91FFF8: mov     ebx, [esp+arg_18]
0x91FFFC: movaps  xmm3, xmmword ptr [esi+20h]
0x920000: subps   xmm2, xmm1
0x920003: movaps  xmm1, xmmword ptr [edi+20h]
0x920007: mulps   xmm2, xmm0
0x92000A: movaps  xmm0, xmmword ptr [ecx+20h]
0x92000E: inc     eax
0x92000F: mulps   xmm1, xmm0
0x920012: movaps  xmm0, xmmword ptr [ecx+10h]
0x920016: mov     [esp+arg_10], eax; int
0x92001A: mov     eax, [esp+arg_14]
0x92001E: mulps   xmm3, xmm0
0x920021: inc     ebx
0x920022: inc     eax
0x920023: movaps  xmm0, xmm3
0x920026: addps   xmm0, xmm1
0x920029: addps   xmm0, xmm2
0x92002C: mov     [esp+arg_14], eax; int
0x920030: movaps  xmm1, xmm0
0x920033: shufps  xmm1, xmm0, 55h ; 'U'
0x920037: movaps  xmm2, xmm0
0x92003A: lea     eax, [esp+arg_1C]
0x92003E: addss   xmm1, xmm0
0x920042: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x920046: addss   xmm2, xmm1
0x92004A: movss   dword ptr [eax], xmm2
0x92004E: fcomp   [esp+arg_1C]
0x920052: mov     [esp+arg_18], ebx; int
0x920056: fnstsw  ax
0x920058: test    ah, 5
0x92005B: jp      short loc_920065
0x92005D: fld     dword ptr ds:0A2FAA8h
0x920063: jmp     short loc_920069
0x920065: fld     [esp+arg_1C]
0x920069: mov     eax, [ebp+14h]
0x92006C: fstp    dword ptr [eax]
0x92006E: add     eax, 4
0x920071: mov     [ebp+14h], eax
0x920074: movzx   eax, byte ptr [edx+1]
0x920078: add     ecx, 30h ; '0'
0x92007B: add     edx, eax
0x92007D: jmp     def_91FFAB
0x920082: mov     eax, [esp+arg_18]; jumptable 0091FFAB case 3
0x920086: cmp     eax, [ebp+10h]
0x920089: jg      loc_920248; jumptable 0091FFAB cases 0,1,7,8
0x92008F: mov     ebx, [esp+arg_10]
0x920093: fld     dword ptr ds:0A2FAA8h
0x920099: movaps  xmm1, xmmword ptr [edi+10h]
0x92009D: movaps  xmm0, xmmword ptr [ecx]
0x9200A0: movaps  xmm2, xmmword ptr [esi+10h]
0x9200A4: movaps  xmm3, xmmword ptr [esi+20h]
0x9200A8: subps   xmm2, xmm1
0x9200AB: movaps  xmm1, xmmword ptr [edi+20h]
0x9200AF: mulps   xmm2, xmm0
0x9200B2: movaps  xmm0, xmmword ptr [ecx+20h]
0x9200B6: mov     eax, 2
0x9200BB: add     ebx, eax
0x9200BD: mulps   xmm1, xmm0
0x9200C0: movaps  xmm0, xmmword ptr [ecx+10h]
0x9200C4: mov     [esp+arg_10], ebx; int
0x9200C8: mov     ebx, [esp+arg_18]
0x9200CC: add     ebx, eax
0x9200CE: mulps   xmm3, xmm0
0x9200D1: mov     [esp+arg_18], ebx; int
0x9200D5: mov     ebx, [esp+arg_14]
0x9200D9: movaps  xmm0, xmm3
0x9200DC: addps   xmm0, xmm1
0x9200DF: addps   xmm0, xmm2
0x9200E2: add     ebx, eax
0x9200E4: movaps  xmm1, xmm0
0x9200E7: shufps  xmm1, xmm0, 55h ; 'U'
0x9200EB: movaps  xmm2, xmm0
0x9200EE: lea     eax, [esp+arg_20]
0x9200F2: addss   xmm1, xmm0
0x9200F6: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9200FA: addss   xmm2, xmm1
0x9200FE: movss   dword ptr [eax], xmm2
0x920102: fcomp   [esp+arg_20]
0x920106: mov     [esp+arg_14], ebx; int
0x92010A: fnstsw  ax
0x92010C: test    ah, 5
0x92010F: jp      short loc_920119
0x920111: fld     dword ptr ds:0A2FAA8h
0x920117: jmp     short loc_92011D
0x920119: fld     [esp+arg_20]
0x92011D: mov     ebx, [ebp+14h]
0x920120: fstp    dword ptr [ebx]
0x920122: movaps  xmm1, xmmword ptr [edi+10h]
0x920126: movaps  xmm0, xmmword ptr [ecx+30h]
0x92012A: fld     dword ptr ds:0A2FAA8h
0x920130: movaps  xmm2, xmmword ptr [esi+10h]
0x920134: movaps  xmm3, xmmword ptr [esi+20h]
0x920138: subps   xmm2, xmm1
0x92013B: movaps  xmm1, xmmword ptr [edi+20h]
0x92013F: mulps   xmm2, xmm0
0x920142: movaps  xmm0, xmmword ptr [ecx+50h]
0x920146: mulps   xmm1, xmm0
0x920149: movaps  xmm0, xmmword ptr [ecx+40h]
0x92014D: mulps   xmm3, xmm0
0x920150: movaps  xmm0, xmm3
0x920153: addps   xmm0, xmm1
0x920156: addps   xmm0, xmm2
0x920159: movaps  xmm1, xmm0
0x92015C: shufps  xmm1, xmm0, 55h ; 'U'
0x920160: movaps  xmm2, xmm0
0x920163: lea     eax, [esp+arg_24]
0x920167: addss   xmm1, xmm0
0x92016B: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92016F: addss   xmm2, xmm1
0x920173: movss   dword ptr [eax], xmm2
0x920177: fcomp   [esp+arg_24]
0x92017B: add     ebx, 4
0x92017E: fnstsw  ax
0x920180: test    ah, 5
0x920183: jp      short loc_92018D
0x920185: fld     dword ptr ds:0A2FAA8h
0x92018B: jmp     short loc_920191
0x92018D: fld     [esp+arg_24]
0x920191: fstp    dword ptr [ebx]
0x920193: movzx   eax, byte ptr [edx+1]
0x920197: add     ebx, 4
0x92019A: add     ecx, 60h ; '`'
0x92019D: mov     [ebp+14h], ebx
0x9201A0: add     edx, eax
0x9201A2: jmp     def_91FFAB
0x9201A7: movzx   eax, byte ptr [edx+1]; jumptable 0091FFAB case 12
0x9201AB: add     ecx, 20h ; ' '
0x9201AE: add     edx, eax
0x9201B0: jmp     def_91FFAB
0x9201B5: mov     eax, [esp+arg_14]; jumptable 0091FFAB case 13
0x9201B9: cmp     eax, [ebp+10h]
0x9201BC: jg      loc_920248; jumptable 0091FFAB cases 0,1,7,8
0x9201C2: movaps  xmm0, xmmword ptr [ecx]
0x9201C5: movaps  xmm1, xmmword ptr [edi+10h]
0x9201C9: movaps  xmm2, xmmword ptr [esi+10h]
0x9201CD: mov     eax, [esp+arg_10]
0x9201D1: movaps  xmm3, xmmword ptr [esi+20h]
0x9201D5: mov     ebx, [esp+arg_18]
0x9201D9: subps   xmm2, xmm1
0x9201DC: movaps  xmm1, xmmword ptr [edi+20h]
0x9201E0: mulps   xmm2, xmm0
0x9201E3: movaps  xmm0, xmmword ptr [ecx+20h]
0x9201E7: inc     eax
0x9201E8: mulps   xmm1, xmm0
0x9201EB: movaps  xmm0, xmmword ptr [ecx+10h]
0x9201EF: mov     [esp+arg_10], eax; int
0x9201F3: mov     eax, [esp+arg_14]
0x9201F7: mulps   xmm3, xmm0
0x9201FA: inc     ebx
0x9201FB: inc     eax
0x9201FC: movaps  xmm0, xmm3
0x9201FF: addps   xmm0, xmm1
0x920202: addps   xmm0, xmm2
0x920205: mov     [esp+arg_14], eax; int
0x920209: movaps  xmm1, xmm0
0x92020C: shufps  xmm1, xmm0, 55h ; 'U'
0x920210: movaps  xmm2, xmm0
0x920213: lea     eax, [esp+arg_28]
0x920217: addss   xmm1, xmm0
0x92021B: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92021F: addss   xmm2, xmm1
0x920223: movss   dword ptr [eax], xmm2
0x920227: mov     eax, [ebp+14h]
0x92022A: mov     [esp+arg_18], ebx; int
0x92022E: mov     ebx, [esp+arg_28]
0x920232: mov     [eax], ebx
0x920234: add     eax, 4
0x920237: mov     [ebp+14h], eax
0x92023A: add     ecx, 30h ; '0'
0x92023D: movzx   eax, byte ptr [edx+1]; jumptable 0091FFAB cases 14-16
0x920241: add     edx, eax
0x920243: jmp     def_91FFAB
0x920248: mov     eax, [esp+arg_10]; jumptable 0091FFAB cases 0,1,7,8
0x92024C: pop     edi
0x92024D: pop     esi
0x92024E: pop     ebx
0x92024F: mov     esp, ebp
0x920251: pop     ebp
0x920252: retn
