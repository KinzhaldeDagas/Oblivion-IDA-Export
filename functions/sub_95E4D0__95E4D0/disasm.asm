0x95E4D0: sub     esp, 2Ch
0x95E4D3: mov     ecx, [esp+2Ch+arg_C]
0x95E4D7: push    esi
0x95E4D8: mov     esi, [esp+30h+arg_4]
0x95E4DC: fld     dword ptr [esi+8]
0x95E4DF: fld     dword ptr [esi+4]
0x95E4E2: fld     dword ptr [esi+0Ch]
0x95E4E5: fld     dword ptr [ecx+14h]
0x95E4E8: fmul    st, st(3)
0x95E4EA: fld     dword ptr [ecx+10h]
0x95E4ED: fmul    st, st(3)
0x95E4EF: faddp   st(1), st
0x95E4F1: fld     dword ptr [ecx+18h]
0x95E4F4: fmul    st, st(2)
0x95E4F6: faddp   st(1), st
0x95E4F8: fstp    [esp+30h+arg_4]
0x95E4FC: fld     [esp+30h+arg_4]
0x95E500: fmul    dword ptr [ecx+34h]
0x95E503: fstp    [esp+30h+var_C]
0x95E507: fld     dword ptr [ecx+20h]
0x95E50A: fmul    st, st(3)
0x95E50C: fld     dword ptr [ecx+1Ch]
0x95E50F: fmul    st, st(3)
0x95E511: faddp   st(1), st
0x95E513: fld     dword ptr [ecx+24h]
0x95E516: fmul    st, st(2)
0x95E518: faddp   st(1), st
0x95E51A: fstp    [esp+30h+arg_4]
0x95E51E: fld     [esp+30h+arg_4]
0x95E522: fmul    dword ptr [ecx+38h]
0x95E525: fstp    [esp+30h+var_8]
0x95E529: fld     dword ptr [ecx+2Ch]
0x95E52C: fmulp   st(3), st
0x95E52E: fld     dword ptr [ecx+28h]
0x95E531: fmul    st, st(2)
0x95E533: faddp   st(3), st
0x95E535: fmul    dword ptr [ecx+30h]
0x95E538: faddp   st(2), st
0x95E53A: fxch    st(1)
0x95E53C: fstp    [esp+30h+arg_4]
0x95E540: fld     [esp+30h+arg_4]
0x95E544: fmul    dword ptr [ecx+3Ch]
0x95E547: fstp    [esp+30h+var_4]
0x95E54B: fld     [esp+30h+var_8]
0x95E54F: fabs
0x95E551: fstp    [esp+30h+arg_C]
0x95E555: fld     [esp+30h+var_C]
0x95E559: fabs
0x95E55B: fstp    [esp+30h+arg_4]
0x95E55F: fld     [esp+30h+var_4]
0x95E563: fabs
0x95E565: fstp    [esp+30h+var_2C]
0x95E569: fld     [esp+30h+arg_4]
0x95E56D: fld     st
0x95E56F: fadd    [esp+30h+arg_C]
0x95E573: fadd    [esp+30h+var_2C]
0x95E577: fstp    [esp+30h+arg_4]
0x95E57B: fld     dword ptr [esi+8]
0x95E57E: fld     dword ptr [esi+0Ch]
0x95E581: fld     dword ptr [ecx+8]
0x95E584: fmul    st, st(2)
0x95E586: fld     dword ptr [ecx+4]
0x95E589: fmul    st, st(5)
0x95E58B: faddp   st(1), st
0x95E58D: fld     dword ptr [ecx+0Ch]
0x95E590: fmul    st, st(2)
0x95E592: faddp   st(1), st
0x95E594: fstp    [esp+30h+var_28]
0x95E598: fld     [esp+30h+var_28]
0x95E59C: fsub    dword ptr [esi+10h]
0x95E59F: fstp    [esp+30h+var_28]
0x95E5A3: fld     [esp+30h+var_28]
0x95E5A7: fld     [esp+30h+arg_4]
0x95E5AB: fchs
0x95E5AD: fcom    st(1)
0x95E5AF: fnstsw  ax
0x95E5B1: test    ah, 41h
0x95E5B4: jp      loc_95E673
0x95E5BA: cmp     [esp+30h+arg_1C], 0
0x95E5BF: fstp    st(5)
0x95E5C1: mov     eax, [esp+30h+arg_14]
0x95E5C5: fstp    st(2)
0x95E5C7: fstp    st
0x95E5C9: fstp    st(2)
0x95E5CB: fstp    st
0x95E5CD: fldz
0x95E5CF: fstp    dword ptr [eax]
0x95E5D1: fld     dword ptr [esi+4]
0x95E5D4: mov     eax, [esp+30h+arg_18]
0x95E5D8: fmul    st, st(1)
0x95E5DA: fstp    [esp+30h+var_C]
0x95E5DE: fld     dword ptr [esi+8]
0x95E5E1: fmul    st, st(1)
0x95E5E3: fstp    [esp+30h+var_8]
0x95E5E7: fmul    dword ptr [esi+0Ch]
0x95E5EA: fstp    [esp+30h+var_4]
0x95E5EE: fld     dword ptr [ecx+4]
0x95E5F1: fsub    [esp+30h+var_C]
0x95E5F5: fstp    [esp+30h+var_18]
0x95E5F9: fld     dword ptr [ecx+8]
0x95E5FC: fsub    [esp+30h+var_8]
0x95E600: fstp    [esp+30h+var_14]
0x95E604: mov     edx, [esp+30h+var_14]
0x95E608: fld     dword ptr [ecx+0Ch]
0x95E60B: mov     ecx, [esp+30h+var_18]
0x95E60F: fsub    [esp+30h+var_4]
0x95E613: mov     [eax], ecx
0x95E615: mov     [eax+4], edx
0x95E618: fstp    [esp+30h+var_10]
0x95E61C: mov     ecx, [esp+30h+var_10]
0x95E620: mov     [eax+8], ecx
0x95E623: jz      short loc_95E66C
0x95E625: mov     eax, [esp+30h+arg_24]
0x95E629: mov     edx, [esi+4]
0x95E62C: mov     [eax], edx
0x95E62E: mov     ecx, [esi+8]
0x95E631: mov     [eax+4], ecx
0x95E634: mov     edx, [esi+0Ch]
0x95E637: mov     [eax+8], edx
0x95E63A: fld     dword ptr [eax]
0x95E63C: fchs
0x95E63E: fstp    [esp+30h+var_C]
0x95E642: fld     dword ptr [eax+4]
0x95E645: fchs
0x95E647: fstp    [esp+30h+var_8]
0x95E64B: fld     dword ptr [eax+8]
0x95E64E: mov     eax, [esp+30h+arg_20]
0x95E652: fchs
0x95E654: mov     ecx, [esp+30h+var_C]
0x95E658: fstp    [esp+30h+var_4]
0x95E65C: mov     edx, [esp+30h+var_8]
0x95E660: mov     [eax], ecx
0x95E662: mov     ecx, [esp+30h+var_4]
0x95E666: mov     [eax+4], edx
0x95E669: mov     [eax+8], ecx
0x95E66C: mov     al, 1
0x95E66E: pop     esi
0x95E66F: add     esp, 2Ch
0x95E672: retn
0x95E673: mov     edx, [esp+30h+arg_10]
0x95E677: mov     eax, [esp+30h+arg_8]
0x95E67B: fld     dword ptr [edx]
0x95E67D: fsub    dword ptr [eax]
0x95E67F: fstp    [esp+30h+var_18]
0x95E683: fld     dword ptr [edx+4]
0x95E686: fsub    dword ptr [eax+4]
0x95E689: fstp    [esp+30h+var_14]
0x95E68D: fld     dword ptr [edx+8]
0x95E690: fsub    dword ptr [eax+8]
0x95E693: fstp    [esp+30h+var_10]
0x95E697: fld     [esp+30h+var_18]
0x95E69B: fmulp   st(6), st
0x95E69D: fld     [esp+30h+var_14]
0x95E6A1: fmulp   st(4), st
0x95E6A3: fxch    st(5)
0x95E6A5: faddp   st(3), st
0x95E6A7: fld     [esp+30h+var_10]
0x95E6AB: fmulp   st(2), st
0x95E6AD: fxch    st(2)
0x95E6AF: faddp   st(1), st
0x95E6B1: fstp    [esp+30h+var_28]
0x95E6B5: fldz
0x95E6B7: fld     [esp+30h+var_28]
0x95E6BB: fcom    st(1)
0x95E6BD: fnstsw  ax
0x95E6BF: test    ah, 41h
0x95E6C2: jp      short loc_95E6D5
0x95E6C4: fstp    st(2)
0x95E6C6: xor     al, al
0x95E6C8: fstp    st(1)
0x95E6CA: pop     esi
0x95E6CB: fstp    st
0x95E6CD: fstp    st(1)
0x95E6CF: fstp    st
0x95E6D1: add     esp, 2Ch
0x95E6D4: retn
0x95E6D5: fld     [esp+30h+arg_0]
0x95E6D9: fmul    st, st(1)
0x95E6DB: fadd    st, st(3)
0x95E6DD: fcomp   st(5)
0x95E6DF: fnstsw  ax
0x95E6E1: fstp    st(4)
0x95E6E3: test    ah, 1
0x95E6E6: jnz     loc_95E965
0x95E6EC: fld     [esp+30h+arg_4]
0x95E6F0: mov     eax, [esp+30h+arg_14]
0x95E6F4: faddp   st(2), st
0x95E6F6: fxch    st(1)
0x95E6F8: fdivrp  st(3), st
0x95E6FA: fxch    st(2)
0x95E6FC: fchs
0x95E6FE: fstp    [esp+30h+arg_4]
0x95E702: fld     [esp+30h+arg_4]
0x95E706: fst     dword ptr [eax]
0x95E708: fstp    [esp+30h+arg_4]
0x95E70C: fld     [esp+30h+arg_4]
0x95E710: fld     dword ptr [edx]
0x95E712: fmul    st, st(1)
0x95E714: fstp    [esp+30h+var_18]
0x95E718: fld     dword ptr [edx+4]
0x95E71B: fmul    st, st(1)
0x95E71D: fstp    [esp+30h+var_14]
0x95E721: fmul    dword ptr [edx+8]
0x95E724: mov     edx, [esp+30h+arg_18]
0x95E728: fstp    [esp+30h+var_10]
0x95E72C: fld     dword ptr [ecx+4]
0x95E72F: fadd    [esp+30h+var_18]
0x95E733: fstp    [esp+30h+var_24]
0x95E737: mov     eax, [esp+30h+var_24]
0x95E73B: fld     [esp+30h+var_14]
0x95E73F: fadd    dword ptr [ecx+8]
0x95E742: fstp    [esp+30h+var_20]
0x95E746: fld     [esp+30h+var_10]
0x95E74A: fadd    dword ptr [ecx+0Ch]
0x95E74D: mov     [edx], eax
0x95E74F: mov     eax, [esp+30h+var_20]
0x95E753: mov     [edx+4], eax
0x95E756: fstp    [esp+30h+var_1C]
0x95E75A: mov     eax, [esp+30h+var_1C]
0x95E75E: fld     dword ptr ds:0A37080h
0x95E764: mov     [edx+8], eax
0x95E767: fcom    st(1)
0x95E769: fnstsw  ax
0x95E76B: fstp    st(1)
0x95E76D: test    ah, 5
0x95E770: jp      short loc_95E7F0
0x95E772: fxch    st(1)
0x95E774: fcom    [esp+30h+var_C]
0x95E778: fnstsw  ax
0x95E77A: fld     dword ptr [ecx+34h]
0x95E77D: test    ah, 5
0x95E780: fstp    [esp+30h+arg_4]
0x95E784: fld     [esp+30h+arg_4]
0x95E788: fld     dword ptr [ecx+10h]
0x95E78B: fmul    st, st(1)
0x95E78D: jp      short loc_95E7BE
0x95E78F: fstp    [esp+30h+var_24]
0x95E793: fld     dword ptr [ecx+14h]
0x95E796: fmul    st, st(1)
0x95E798: fstp    [esp+30h+var_20]
0x95E79C: fmul    dword ptr [ecx+18h]
0x95E79F: fstp    [esp+30h+var_1C]
0x95E7A3: fld     dword ptr [edx]
0x95E7A5: fadd    [esp+30h+var_24]
0x95E7A9: fstp    dword ptr [edx]
0x95E7AB: fld     dword ptr [edx+4]
0x95E7AE: fadd    [esp+30h+var_20]
0x95E7B2: fstp    dword ptr [edx+4]
0x95E7B5: fld     [esp+30h+var_1C]
0x95E7B9: fadd    dword ptr [edx+8]
0x95E7BC: jmp     short loc_95E7EB
0x95E7BE: fstp    [esp+30h+var_18]
0x95E7C2: fld     dword ptr [ecx+14h]
0x95E7C5: fmul    st, st(1)
0x95E7C7: fstp    [esp+30h+var_14]
0x95E7CB: fmul    dword ptr [ecx+18h]
0x95E7CE: fstp    [esp+30h+var_10]
0x95E7D2: fld     dword ptr [edx]
0x95E7D4: fsub    [esp+30h+var_18]
0x95E7D8: fstp    dword ptr [edx]
0x95E7DA: fld     dword ptr [edx+4]
0x95E7DD: fsub    [esp+30h+var_14]
0x95E7E1: fstp    dword ptr [edx+4]
0x95E7E4: fld     dword ptr [edx+8]
0x95E7E7: fsub    [esp+30h+var_10]
0x95E7EB: fstp    dword ptr [edx+8]
0x95E7EE: fxch    st(1)
0x95E7F0: fcom    [esp+30h+arg_C]
0x95E7F4: fnstsw  ax
0x95E7F6: test    ah, 5
0x95E7F9: jp      short loc_95E879
0x95E7FB: fxch    st(1)
0x95E7FD: fcom    [esp+30h+var_8]
0x95E801: fnstsw  ax
0x95E803: fld     dword ptr [ecx+38h]
0x95E806: test    ah, 5
0x95E809: fstp    [esp+30h+arg_4]
0x95E80D: fld     [esp+30h+arg_4]
0x95E811: fld     dword ptr [ecx+1Ch]
0x95E814: fmul    st, st(1)
0x95E816: jp      short loc_95E847
0x95E818: fstp    [esp+30h+var_24]
0x95E81C: fld     dword ptr [ecx+20h]
0x95E81F: fmul    st, st(1)
0x95E821: fstp    [esp+30h+var_20]
0x95E825: fmul    dword ptr [ecx+24h]
0x95E828: fstp    [esp+30h+var_1C]
0x95E82C: fld     dword ptr [edx]
0x95E82E: fadd    [esp+30h+var_24]
0x95E832: fstp    dword ptr [edx]
0x95E834: fld     dword ptr [edx+4]
0x95E837: fadd    [esp+30h+var_20]
0x95E83B: fstp    dword ptr [edx+4]
0x95E83E: fld     [esp+30h+var_1C]
0x95E842: fadd    dword ptr [edx+8]
0x95E845: jmp     short loc_95E874
0x95E847: fstp    [esp+30h+var_18]
0x95E84B: fld     dword ptr [ecx+20h]
0x95E84E: fmul    st, st(1)
0x95E850: fstp    [esp+30h+var_14]
0x95E854: fmul    dword ptr [ecx+24h]
0x95E857: fstp    [esp+30h+var_10]
0x95E85B: fld     dword ptr [edx]
0x95E85D: fsub    [esp+30h+var_18]
0x95E861: fstp    dword ptr [edx]
0x95E863: fld     dword ptr [edx+4]
0x95E866: fsub    [esp+30h+var_14]
0x95E86A: fstp    dword ptr [edx+4]
0x95E86D: fld     dword ptr [edx+8]
0x95E870: fsub    [esp+30h+var_10]
0x95E874: fstp    dword ptr [edx+8]
0x95E877: fxch    st(1)
0x95E879: fcomp   [esp+30h+var_2C]
0x95E87D: fnstsw  ax
0x95E87F: test    ah, 5
0x95E882: jp      short loc_95E903
0x95E884: fcomp   [esp+30h+var_4]
0x95E888: fnstsw  ax
0x95E88A: fld     dword ptr [ecx+3Ch]
0x95E88D: test    ah, 5
0x95E890: fstp    [esp+30h+arg_4]
0x95E894: fld     [esp+30h+arg_4]
0x95E898: fld     dword ptr [ecx+28h]
0x95E89B: fmul    st, st(1)
0x95E89D: jp      short loc_95E8D1
0x95E89F: fstp    [esp+30h+var_24]
0x95E8A3: fld     dword ptr [ecx+2Ch]
0x95E8A6: fmul    st, st(1)
0x95E8A8: fstp    [esp+30h+var_20]
0x95E8AC: fmul    dword ptr [ecx+30h]
0x95E8AF: fstp    [esp+30h+var_1C]
0x95E8B3: fld     dword ptr [edx]
0x95E8B5: fadd    [esp+30h+var_24]
0x95E8B9: fstp    dword ptr [edx]
0x95E8BB: fld     dword ptr [edx+4]
0x95E8BE: fadd    [esp+30h+var_20]
0x95E8C2: fstp    dword ptr [edx+4]
0x95E8C5: fld     [esp+30h+var_1C]
0x95E8C9: fadd    dword ptr [edx+8]
0x95E8CC: fstp    dword ptr [edx+8]
0x95E8CF: jmp     short loc_95E905
0x95E8D1: fstp    [esp+30h+var_18]
0x95E8D5: fld     dword ptr [ecx+2Ch]
0x95E8D8: fmul    st, st(1)
0x95E8DA: fstp    [esp+30h+var_14]
0x95E8DE: fmul    dword ptr [ecx+30h]
0x95E8E1: fstp    [esp+30h+var_10]
0x95E8E5: fld     dword ptr [edx]
0x95E8E7: fsub    [esp+30h+var_18]
0x95E8EB: fstp    dword ptr [edx]
0x95E8ED: fld     dword ptr [edx+4]
0x95E8F0: fsub    [esp+30h+var_14]
0x95E8F4: fstp    dword ptr [edx+4]
0x95E8F7: fld     dword ptr [edx+8]
0x95E8FA: fsub    [esp+30h+var_10]
0x95E8FE: fstp    dword ptr [edx+8]
0x95E901: jmp     short loc_95E905
0x95E903: fstp    st
0x95E905: cmp     [esp+30h+arg_1C], 0
0x95E90A: jz      loc_95E66C
0x95E910: fld     dword ptr [esi+4]
0x95E913: mov     eax, [esp+30h+arg_20]
0x95E917: fchs
0x95E919: fstp    [esp+30h+var_C]
0x95E91D: fld     dword ptr [esi+8]
0x95E920: fchs
0x95E922: fstp    [esp+30h+var_8]
0x95E926: fld     dword ptr [esi+0Ch]
0x95E929: mov     esi, [esp+30h+var_C]
0x95E92D: mov     [eax], esi
0x95E92F: fchs
0x95E931: mov     esi, [esp+30h+var_8]
0x95E935: fstp    [esp+30h+var_4]
0x95E939: mov     [eax+4], esi
0x95E93C: mov     esi, [esp+30h+var_4]
0x95E940: mov     [eax+8], esi
0x95E943: fld     dword ptr [edx]
0x95E945: fsub    dword ptr [ecx+4]
0x95E948: mov     eax, [esp+30h+arg_24]
0x95E94C: fstp    [esp+30h+var_C]
0x95E950: fld     dword ptr [edx+4]
0x95E953: fsub    dword ptr [ecx+8]
0x95E956: fstp    [esp+30h+var_8]
0x95E95A: fld     dword ptr [edx+8]
0x95E95D: fsub    dword ptr [ecx+0Ch]
0x95E960: jmp     loc_95E654
0x95E965: fstp    st(1)
0x95E967: xor     al, al
0x95E969: fstp    st(2)
0x95E96B: pop     esi
0x95E96C: fstp    st(1)
0x95E96E: fstp    st
0x95E970: add     esp, 2Ch
0x95E973: retn
