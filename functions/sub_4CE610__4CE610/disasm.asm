0x4CE610: sub     esp, 0C0h
0x4CE616: push    esi
0x4CE617: mov     esi, ecx
0x4CE619: test    byte ptr [esi+24h], 1
0x4CE61D: jnz     loc_4CEABA
0x4CE623: push    ebx
0x4CE624: push    edi
0x4CE625: call    sub_55FDF0
0x4CE62A: xor     ebx, ebx
0x4CE62C: lea     eax, [esp+0CCh+var_B0]
0x4CE630: push    eax
0x4CE631: lea     ecx, [esp+0D0h+var_BC]
0x4CE635: push    ecx
0x4CE636: lea     ecx, [esi+28h]
0x4CE639: mov     [esp+0D4h+var_BC], ebx
0x4CE63D: mov     [esp+0D4h+var_B0], ebx
0x4CE641: mov     dword ptr [esp+0D4h+var_74], ebx
0x4CE645: mov     [esp+0D4h+var_78], ebx
0x4CE649: mov     [esp+0D4h+var_90], ebx
0x4CE64D: mov     [esp+0D4h+var_8C], ebx
0x4CE651: mov     [esp+0D4h+var_94], ebx
0x4CE655: mov     dword ptr [esp+0D4h+var_6C], ebx
0x4CE659: mov     [esp+0D4h+var_80], ebx
0x4CE65D: mov     dword ptr [esp+0D4h+var_74+4], ebx
0x4CE661: call    sub_41F9F0
0x4CE666: mov     edi, [esp+0CCh+arg_C]
0x4CE66D: cmp     edi, ebx
0x4CE66F: jz      short loc_4CE679
0x4CE671: cmp     edi, 400h
0x4CE677: jbe     short loc_4CE67E
0x4CE679: mov     edi, 12Ch
0x4CE67E: cmp     [esp+0CCh+var_BC], ebx
0x4CE682: jnz     short loc_4CE697
0x4CE684: lea     edx, [esp+0CCh+var_B0]
0x4CE688: push    edx
0x4CE689: lea     eax, [esp+0D0h+var_BC]
0x4CE68D: push    eax
0x4CE68E: push    esi
0x4CE68F: call    TESObjectCELL__CreateCanopyShadowMaskForCell
0x4CE694: add     esp, 0Ch
0x4CE697: mov     ecx, esi; this
0x4CE699: call    sub_4CE3C0
0x4CE69E: test    eax, eax
0x4CE6A0: jz      loc_4CEAB8
0x4CE6A6: push    ebx
0x4CE6A7: lea     ecx, [esp+0D0h+arg_0]
0x4CE6AE: push    ecx
0x4CE6AF: lea     edx, [esp+0D4h+var_50]
0x4CE6B6: push    edx
0x4CE6B7: mov     ecx, esi; this
0x4CE6B9: call    sub_4CE3C0
0x4CE6BE: mov     ecx, eax
0x4CE6C0: call    sub_4C3030
0x4CE6C5: test    al, al
0x4CE6C7: jz      loc_4CEAB8
0x4CE6CD: fld     [esp+0CCh+var_50]
0x4CE6D1: mov     eax, [esp+0CCh+var_50]
0x4CE6D5: fld     qword ptr ds:0A40358h
0x4CE6DB: mov     ecx, [esp+0CCh+var_4C]
0x4CE6E2: fmul    st(1), st
0x4CE6E4: mov     [esp+0CCh+var_A4], eax
0x4CE6E8: fxch    st(1)
0x4CE6EA: mov     [esp+0CCh+var_A0], ecx
0x4CE6EE: mov     ecx, [esp+0CCh+var_BC]
0x4CE6F2: fstp    [esp+0CCh+var_A4]
0x4CE6F6: shr     edi, 6
0x4CE6F9: cmp     ecx, ebx
0x4CE6FB: fmul    [esp+0CCh+var_A0]
0x4CE6FF: fstp    [esp+0CCh+var_A0]
0x4CE703: jz      loc_4CEAB8
0x4CE709: mov     edx, [esp+0CCh+var_B0]
0x4CE70D: cmp     [edx+4], ebx
0x4CE710: jnz     short loc_4CE748
0x4CE712: push    3
0x4CE714: call    nullsub_returnTrue_0arg
0x4CE719: mov     eax, [esp+0D0h+var_BC]
0x4CE71D: mov     ecx, [eax+24h]
0x4CE720: mov     edx, [ecx]
0x4CE722: mov     eax, [edx+14h]
0x4CE725: add     esp, 4
0x4CE728: call    eax
0x4CE72A: mov     edx, [esp+0CCh+var_B0]
0x4CE72E: mov     ecx, [eax]
0x4CE730: push    ebx
0x4CE731: push    ebx
0x4CE732: push    edx
0x4CE733: push    ebx
0x4CE734: push    eax
0x4CE735: mov     eax, [ecx+4Ch]
0x4CE738: call    eax
0x4CE73A: push    2
0x4CE73C: call    nullsub_returnTrue_0arg
0x4CE741: mov     ecx, [esp+0D0h+var_BC]
0x4CE745: add     esp, 4
0x4CE748: mov     edx, [esp+0CCh+var_B0]
0x4CE74C: mov     eax, [edx+4]
0x4CE74F: mov     edx, [ecx]
0x4CE751: mov     [esp+0CCh+var_7C], eax
0x4CE755: mov     eax, [edx+50h]
0x4CE758: push    ebp
0x4CE759: call    eax
0x4CE75B: test    edi, edi
0x4CE75D: mov     ebp, eax
0x4CE75F: mov     [esp+0D0h+var_A8], edi
0x4CE763: fild    [esp+0D0h+var_A8]
0x4CE767: mov     [esp+0D0h+var_84], ebp
0x4CE76B: jge     short loc_4CE773
0x4CE76D: fadd    dword ptr ds:0A2FC78h
0x4CE773: fstp    [esp+0D0h+var_9C]
0x4CE777: fld     [esp+0D0h+var_A0]
0x4CE77B: fld     st
0x4CE77D: fld     [esp+0D0h+var_9C]
0x4CE781: fld     st
0x4CE783: fsubp   st(2), st
0x4CE785: fxch    st(1)
0x4CE787: call    Double_To_SInt32
0x4CE78C: mov     edi, eax
0x4CE78E: mov     [esp+0D0h+var_B4], edi
0x4CE792: fild    [esp+0D0h+var_B4]
0x4CE796: fld     st(2)
0x4CE798: fld     st(2)
0x4CE79A: fadd    st, st(1)
0x4CE79C: fst     [esp+0D0h+var_60]
0x4CE7A0: fcom    st(2)
0x4CE7A2: fnstsw  ax
0x4CE7A4: test    ah, 41h
0x4CE7A7: jnz     loc_4CEAAD
0x4CE7AD: fld     [esp+0D0h+var_A4]
0x4CE7B1: fld     st
0x4CE7B3: fsub    st, st(5)
0x4CE7B5: call    Double_To_SInt32
0x4CE7BA: faddp   st(4), st
0x4CE7BC: mov     ebx, edi
0x4CE7BE: fxch    st(3)
0x4CE7C0: lea     edx, [edi+40h]
0x4CE7C3: imul    ebx, ebp
0x4CE7C6: fst     [esp+0D0h+var_58]
0x4CE7CA: imul    edx, ebp
0x4CE7CD: lea     ecx, [edi-40h]
0x4CE7D0: imul    ecx, ebp
0x4CE7D3: sub     edx, 40h ; '@'
0x4CE7D6: add     ebx, 40h ; '@'
0x4CE7D9: sub     ecx, 40h ; '@'
0x4CE7DC: mov     [esp+0D0h+var_88], eax
0x4CE7E0: mov     [esp+0D0h+var_B8], edx
0x4CE7E4: mov     [esp+0D0h+var_AC], ecx
0x4CE7E8: jmp     short loc_4CE7EC
0x4CE7EA: fxch    st(2)
0x4CE7EC: mov     edi, [esp+0D0h+var_88]
0x4CE7F0: mov     [esp+0D0h+var_C0], edi
0x4CE7F4: fild    [esp+0D0h+var_C0]
0x4CE7F8: fstp    [esp+0D0h+var_C0]
0x4CE7FC: fld     [esp+0D0h+var_C0]
0x4CE800: fcom    st(1)
0x4CE802: fnstsw  ax
0x4CE804: test    ah, 5
0x4CE807: jp      loc_4CEAA5
0x4CE80D: fstp    st(1)
0x4CE80F: mov     [esp+0D0h+var_98], edi
0x4CE813: fstp    st(4)
0x4CE815: fstp    st(2)
0x4CE817: fsubp   st(1), st
0x4CE819: fmul    st, st
0x4CE81B: fstp    [esp+0D0h+var_6C+4]
0x4CE81F: jmp     short loc_4CE823
0x4CE821: fstp    st
0x4CE823: fsubr   [esp+0D0h+var_A4]
0x4CE827: fmul    st, st
0x4CE829: fadd    [esp+0D0h+var_6C+4]
0x4CE82D: fstp    [esp+0D0h+var_C0]
0x4CE831: fld     [esp+0D0h+var_C0]
0x4CE835: call    __CIsqrt
0x4CE83A: fstp    [esp+0D0h+var_C0]
0x4CE83E: fld     [esp+0D0h+var_C0]
0x4CE842: fstp    [esp+0D0h+var_C0]
0x4CE846: fld     [esp+0D0h+var_C0]
0x4CE84A: fld     [esp+0D0h+var_9C]
0x4CE84E: fcompp
0x4CE850: fnstsw  ax
0x4CE852: test    ah, 1
0x4CE855: jnz     loc_4CEA23
0x4CE85B: fld     dword ptr ds:0A468E8h
0x4CE861: push    ecx
0x4CE862: fstp    [esp+0D4h+var_D4]; float
0x4CE865: lea     ebp, [ebx+edi-40h]
0x4CE869: call    Rand5
0x4CE86E: fsubr   qword ptr ds:0A3DDD8h
0x4CE874: fld     [esp+0D4h+var_C0]
0x4CE878: mov     ecx, [esp+0D4h+var_B4]
0x4CE87C: fdiv    [esp+0D4h+var_9C]
0x4CE880: add     esp, 4
0x4CE883: fmul    qword ptr ds:0A2FCC8h
0x4CE889: fnstcw  word ptr [esp+0D0h+var_C0]
0x4CE88D: fsubp   st(1), st
0x4CE88F: movzx   eax, word ptr [esp+0D0h+var_C0]
0x4CE894: or      eax, 0C00h
0x4CE899: cmp     ecx, 40h ; '@'
0x4CE89C: mov     [esp+0D0h+var_A8], eax
0x4CE8A0: fldcw   word ptr [esp+0D0h+var_A8]
0x4CE8A4: fistp   [esp+0D0h+var_A8]
0x4CE8A8: mov     al, byte ptr [esp+0D0h+var_A8]
0x4CE8AC: fldcw   word ptr [esp+0D0h+var_C0]
0x4CE8B0: jge     short loc_4CE8D8
0x4CE8B2: test    ecx, ecx
0x4CE8B4: jl      short loc_4CE931
0x4CE8B6: cmp     [esp+0D0h+var_98], 3Fh ; '?'
0x4CE8BB: ja      short loc_4CE92D
0x4CE8BD: mov     ecx, [esp+0D0h+var_7C]
0x4CE8C1: cmp     byte ptr [ecx+ebp], 0
0x4CE8C5: jz      short loc_4CE8D0
0x4CE8C7: mov     byte ptr [ecx+ebp], 0FFh
0x4CE8CB: jmp     loc_4CEA23
0x4CE8D0: mov     [ecx+ebp], al
0x4CE8D3: jmp     loc_4CEA23
0x4CE8D8: test    edi, edi
0x4CE8DA: jge     short loc_4CE900
0x4CE8DC: mov     edx, [esp+0D0h+var_AC]
0x4CE8E0: movzx   ecx, al
0x4CE8E3: push    ecx
0x4CE8E4: lea     eax, [edx+edi+80h]
0x4CE8EB: push    eax
0x4CE8EC: lea     ecx, [esp+0D8h+var_6C]
0x4CE8F0: push    ecx
0x4CE8F1: mov     ecx, esi; this
0x4CE8F3: call    TESObjectCELL_GetYCoordinate
0x4CE8F8: add     eax, 1
0x4CE8FB: jmp     loc_4CEA14
0x4CE900: cmp     edi, 40h ; '@'
0x4CE903: jl      short loc_4CE92D
0x4CE905: movzx   edx, al
0x4CE908: mov     eax, [esp+0D0h+var_AC]
0x4CE90C: push    edx
0x4CE90D: add     eax, edi
0x4CE90F: push    eax
0x4CE910: lea     ecx, [esp+0D8h+var_94]
0x4CE914: push    ecx
0x4CE915: mov     ecx, esi; this
0x4CE917: call    TESObjectCELL_GetYCoordinate
0x4CE91C: add     eax, 1
0x4CE91F: push    eax
0x4CE920: call    TESObjectCELL_GetXCoordinate
0x4CE925: add     eax, 1
0x4CE928: jmp     loc_4CEA1D
0x4CE92D: test    ecx, ecx
0x4CE92F: jge     short loc_4CE986
0x4CE931: test    edi, edi
0x4CE933: jge     short loc_4CE959
0x4CE935: movzx   edx, al
0x4CE938: mov     eax, [esp+0D0h+var_B8]
0x4CE93C: push    edx
0x4CE93D: lea     ecx, [eax+edi+80h]
0x4CE944: push    ecx
0x4CE945: lea     edx, [esp+0D8h+var_74+4]
0x4CE949: push    edx
0x4CE94A: mov     ecx, esi; this
0x4CE94C: call    TESObjectCELL_GetYCoordinate
0x4CE951: sub     eax, 1
0x4CE954: jmp     loc_4CEA14
0x4CE959: cmp     edi, 40h ; '@'
0x4CE95C: jl      short loc_4CE986
0x4CE95E: mov     ecx, [esp+0D0h+var_B8]
0x4CE962: movzx   eax, al
0x4CE965: push    eax
0x4CE966: add     ecx, edi
0x4CE968: push    ecx
0x4CE969: lea     edx, [esp+0D8h+var_80]
0x4CE96D: push    edx
0x4CE96E: mov     ecx, esi; this
0x4CE970: call    TESObjectCELL_GetYCoordinate
0x4CE975: sub     eax, 1
0x4CE978: push    eax
0x4CE979: call    TESObjectCELL_GetXCoordinate
0x4CE97E: add     eax, 1
0x4CE981: jmp     loc_4CEA1D
0x4CE986: cmp     ecx, 40h ; '@'
0x4CE989: jl      short loc_4CE9AF
0x4CE98B: mov     ecx, [esp+0D0h+var_AC]
0x4CE98F: movzx   eax, al
0x4CE992: push    eax
0x4CE993: lea     edx, [ecx+edi+40h]
0x4CE997: push    edx
0x4CE998: lea     eax, [esp+0D8h+var_74]
0x4CE99C: push    eax
0x4CE99D: mov     ecx, esi; this
0x4CE99F: call    TESObjectCELL_GetYCoordinate
0x4CE9A4: add     eax, 1
0x4CE9A7: push    eax
0x4CE9A8: call    TESObjectCELL_GetXCoordinate
0x4CE9AD: jmp     short loc_4CEA1D
0x4CE9AF: test    ecx, ecx
0x4CE9B1: jge     short loc_4CE9D7
0x4CE9B3: mov     edx, [esp+0D0h+var_B8]
0x4CE9B7: movzx   ecx, al
0x4CE9BA: push    ecx
0x4CE9BB: lea     eax, [edx+edi+40h]
0x4CE9BF: push    eax
0x4CE9C0: lea     ecx, [esp+0D8h+var_78]
0x4CE9C4: push    ecx
0x4CE9C5: mov     ecx, esi; this
0x4CE9C7: call    TESObjectCELL_GetYCoordinate
0x4CE9CC: sub     eax, 1
0x4CE9CF: push    eax
0x4CE9D0: call    TESObjectCELL_GetXCoordinate
0x4CE9D5: jmp     short loc_4CEA1D
0x4CE9D7: cmp     edi, 40h ; '@'
0x4CE9DA: jl      short loc_4CE9FC
0x4CE9DC: movzx   edx, al
0x4CE9DF: push    edx
0x4CE9E0: lea     eax, [ebx+edi-80h]
0x4CE9E4: push    eax
0x4CE9E5: lea     ecx, [esp+0D8h+var_90]
0x4CE9E9: push    ecx
0x4CE9EA: mov     ecx, esi; this
0x4CE9EC: call    TESObjectCELL_GetYCoordinate
0x4CE9F1: push    eax
0x4CE9F2: call    TESObjectCELL_GetXCoordinate
0x4CE9F7: add     eax, 1
0x4CE9FA: jmp     short loc_4CEA1D
0x4CE9FC: test    edi, edi
0x4CE9FE: jge     short loc_4CEA23
0x4CEA00: movzx   edx, al
0x4CEA03: push    edx
0x4CEA04: lea     eax, [ebx+edi]
0x4CEA07: push    eax
0x4CEA08: lea     ecx, [esp+0D8h+var_8C]
0x4CEA0C: push    ecx
0x4CEA0D: mov     ecx, esi; this
0x4CEA0F: call    TESObjectCELL_GetYCoordinate
0x4CEA14: push    eax
0x4CEA15: call    TESObjectCELL_GetXCoordinate
0x4CEA1A: sub     eax, 1
0x4CEA1D: push    eax
0x4CEA1E: call    sub_4CE540
0x4CEA23: add     [esp+0D0h+var_98], 1
0x4CEA28: add     edi, 1
0x4CEA2B: mov     [esp+0D0h+var_C0], edi
0x4CEA2F: fild    [esp+0D0h+var_C0]
0x4CEA33: fstp    [esp+0D0h+var_C0]
0x4CEA37: fld     [esp+0D0h+var_C0]
0x4CEA3B: fld     [esp+0D0h+var_58]
0x4CEA3F: fcom    st(1)
0x4CEA41: fnstsw  ax
0x4CEA43: test    ah, 41h
0x4CEA46: jz      loc_4CE821
0x4CEA4C: mov     edx, [esp+0D0h+var_B8]
0x4CEA50: fstp    st(1)
0x4CEA52: fld     [esp+0D0h+var_A0]
0x4CEA56: mov     ecx, [esp+0D0h+var_AC]
0x4CEA5A: fld     [esp+0D0h+var_60]
0x4CEA5E: mov     ebp, [esp+0D0h+var_84]
0x4CEA62: fxch    st(1)
0x4CEA64: fxch    st(2)
0x4CEA66: add     [esp+0D0h+var_B4], 1
0x4CEA6B: fild    [esp+0D0h+var_B4]
0x4CEA6F: add     ecx, ebp
0x4CEA71: fld     st(3)
0x4CEA73: add     edx, ebp
0x4CEA75: fxch    st(1)
0x4CEA77: add     ebx, ebp
0x4CEA79: fcom    st(3)
0x4CEA7B: mov     [esp+0D0h+var_AC], ecx
0x4CEA7F: mov     [esp+0D0h+var_B8], edx
0x4CEA83: fnstsw  ax
0x4CEA85: test    ah, 5
0x4CEA88: jnp     loc_4CE7EA
0x4CEA8E: fstp    st(2)
0x4CEA90: pop     ebp
0x4CEA91: fstp    st(1)
0x4CEA93: pop     edi
0x4CEA94: fstp    st
0x4CEA96: pop     ebx
0x4CEA97: fstp    st(1)
0x4CEA99: pop     esi
0x4CEA9A: fstp    st
0x4CEA9C: add     esp, 0C0h
0x4CEAA2: retn    14h
0x4CEAA5: fstp    st
0x4CEAA7: fstp    st(2)
0x4CEAA9: fstp    st
0x4CEAAB: jmp     short loc_4CEA66
0x4CEAAD: fstp    st(2)
0x4CEAAF: pop     ebp
0x4CEAB0: fstp    st
0x4CEAB2: fstp    st(1)
0x4CEAB4: fstp    st(1)
0x4CEAB6: fstp    st
0x4CEAB8: pop     edi
0x4CEAB9: pop     ebx
0x4CEABA: pop     esi
0x4CEABB: add     esp, 0C0h
0x4CEAC1: retn    14h
