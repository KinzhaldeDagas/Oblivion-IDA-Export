0x7C9230: push    ebp
0x7C9231: mov     ebp, esp
0x7C9233: and     esp, 0FFFFFFF0h
0x7C9236: sub     esp, 234h
0x7C923C: mov     eax, [ebp+arg_10]
0x7C923F: mov     eax, [eax+18h]
0x7C9242: test    eax, eax
0x7C9244: push    ebx
0x7C9245: push    esi
0x7C9246: mov     ebx, ecx
0x7C9248: push    edi
0x7C9249: mov     [esp+240h+var_224], ebx
0x7C924D: mov     byte ptr [esp+240h+var_22C+3], 0
0x7C9252: jz      short loc_7C929E
0x7C9254: test    byte ptr [eax+1Ch], 2
0x7C9258: setnbe  al
0x7C925B: test    al, al
0x7C925D: mov     byte ptr [esp+240h+var_22C+3], al
0x7C9261: jz      short loc_7C929E
0x7C9263: mov     edi, [ebp+arg_8]
0x7C9266: test    edi, edi
0x7C9268: jz      loc_7C9F1D
0x7C926E: cmp     dword ptr [ebx+34h], 0
0x7C9272: mov     esi, [ebp+arg_18]
0x7C9275: jnz     short loc_7C928D
0x7C9277: mov     ecx, [ebp+arg_4]
0x7C927A: push    1
0x7C927C: push    3
0x7C927E: push    0
0x7C9280: push    esi
0x7C9281: push    ecx
0x7C9282: mov     ecx, ds:0B43104h
0x7C9288: call    NiDX9Renderer__CalculateBoneMatrixes
0x7C928D: mov     ecx, [ebx+18h]
0x7C9290: movzx   eax, word ptr [edi+24h]
0x7C9294: mov     edx, [ecx]
0x7C9296: mov     edx, [edx+30h]
0x7C9299: push    eax
0x7C929A: call    edx
0x7C929C: jmp     short loc_7C92A1
0x7C929E: mov     esi, [ebp+arg_18]
0x7C92A1: mov     ecx, [ebx+14h]
0x7C92A4: push    0
0x7C92A6: push    esi
0x7C92A7: call    sub_765480
0x7C92AC: fld     dword ptr ds:0B44EE4h
0x7C92B2: cmp     word ptr ds:0B42EACh, 5
0x7C92BA: fldz
0x7C92BC: mov     edi, ds:0B42E90h
0x7C92C2: mov     [esp+240h+var_228], edi
0x7C92C6: jnz     loc_7C9353
0x7C92CC: fld     st
0x7C92CE: fucomp  st(2)
0x7C92D0: fnstsw  ax
0x7C92D2: test    ah, 44h
0x7C92D5: jp      short loc_7C9353
0x7C92D7: mov     eax, ds:0B42EB8h
0x7C92DC: fstp    st
0x7C92DE: mov     ecx, [eax+0Ch]
0x7C92E1: fstp    st
0x7C92E3: cmp     dword ptr [ecx], 0
0x7C92E6: jz      loc_7C9F1D
0x7C92EC: lea     edx, [esp+240h+var_228]
0x7C92F0: mov     eax, ecx
0x7C92F2: mov     ecx, [eax]
0x7C92F4: push    edx
0x7C92F5: call    sub_405AD0
0x7C92FA: mov     ecx, [eax]
0x7C92FC: mov     esi, [esp+240h+var_228]
0x7C9300: fld     dword ptr [ecx+0F8h]
0x7C9306: test    esi, esi
0x7C9308: fstp    [esp+240h+var_224]
0x7C930C: jz      short loc_7C932A
0x7C930E: lea     edx, [esi+4]
0x7C9311: push    edx; lpAddend
0x7C9312: call    dword ptr ds:0A2807Ch
0x7C9318: test    eax, eax
0x7C931A: jnz     short loc_7C932A
0x7C931C: test    esi, esi
0x7C931E: jz      short loc_7C932A
0x7C9320: mov     eax, [esi]
0x7C9322: mov     edx, [eax]
0x7C9324: push    1
0x7C9326: mov     ecx, esi
0x7C9328: call    edx
0x7C932A: cmp     [ebp+arg_4], 0
0x7C932E: jnz     short loc_7C933E
0x7C9330: fld     [esp+240h+var_224]
0x7C9334: mov     eax, [ebp+arg_18]
0x7C9337: fdiv    dword ptr [eax+30h]
0x7C933A: fstp    [esp+240h+var_224]
0x7C933E: fld     [esp+240h+var_224]
0x7C9342: xor     eax, eax
0x7C9344: fstp    dword ptr ds:0B44FE4h
0x7C934A: pop     edi
0x7C934B: pop     esi
0x7C934C: pop     ebx
0x7C934D: mov     esp, ebp
0x7C934F: pop     ebp
0x7C9350: retn    20h ; ' '
0x7C9353: lea     ecx, [edi-6]
0x7C9356: cmp     ecx, 3
0x7C9359: ja      loc_7C949E
0x7C935F: fcom    st(1)
0x7C9361: fnstsw  ax
0x7C9363: fstp    st(1)
0x7C9365: test    ah, 5
0x7C9368: jp      loc_7C9456
0x7C936E: mov     edx, [ebp+arg_10]
0x7C9371: mov     esi, [edx+18h]
0x7C9374: test    esi, esi
0x7C9376: jz      short loc_7C93A1
0x7C9378: mov     eax, [esi]
0x7C937A: fstp    st
0x7C937C: mov     edx, [eax+54h]
0x7C937F: mov     ecx, esi
0x7C9381: call    edx
0x7C9383: cmp     eax, 1
0x7C9386: jl      short loc_7C939F
0x7C9388: mov     eax, [esi]
0x7C938A: mov     edx, [eax+54h]
0x7C938D: mov     ecx, esi
0x7C938F: call    edx
0x7C9391: cmp     eax, 0Ah
0x7C9394: jg      short loc_7C939F
0x7C9396: fldz
0x7C9398: mov     eax, 1
0x7C939D: jmp     short loc_7C93A3
0x7C939F: fldz
0x7C93A1: xor     eax, eax
0x7C93A3: xor     ecx, ecx
0x7C93A5: neg     eax
0x7C93A7: sbb     eax, eax
0x7C93A9: test    esi, eax
0x7C93AB: jz      short loc_7C93E4
0x7C93AD: test    esi, esi
0x7C93AF: jz      short loc_7C93DA
0x7C93B1: mov     eax, [esi]
0x7C93B3: fstp    st
0x7C93B5: mov     edx, [eax+54h]
0x7C93B8: mov     ecx, esi
0x7C93BA: call    edx
0x7C93BC: cmp     eax, 5
0x7C93BF: jl      short loc_7C93D8
0x7C93C1: mov     eax, [esi]
0x7C93C3: mov     edx, [eax+54h]
0x7C93C6: mov     ecx, esi
0x7C93C8: call    edx
0x7C93CA: cmp     eax, 0Ah
0x7C93CD: jg      short loc_7C93D8
0x7C93CF: fldz
0x7C93D1: mov     eax, 1
0x7C93D6: jmp     short loc_7C93DC
0x7C93D8: fldz
0x7C93DA: xor     eax, eax
0x7C93DC: neg     eax
0x7C93DE: sbb     eax, eax
0x7C93E0: and     eax, esi
0x7C93E2: mov     ecx, eax
0x7C93E4: cmp     [ebp+arg_4], 0
0x7C93E8: fld     dword ptr [ecx+0A0h]
0x7C93EE: fstp    [esp+240h+var_228]
0x7C93F2: fld     dword ptr ds:0B44EE4h
0x7C93F8: fstp    [esp+240h+var_224]
0x7C93FC: jnz     short loc_7C940C
0x7C93FE: fld     [esp+240h+var_224]
0x7C9402: mov     eax, [ebp+arg_18]
0x7C9405: fdiv    dword ptr [eax+30h]
0x7C9408: fstp    [esp+240h+var_224]
0x7C940C: fst     [esp+240h+var_220]
0x7C9410: mov     ecx, [esp+240h+var_220]
0x7C9414: fstp    [esp+240h+var_21C]
0x7C9418: mov     edx, [esp+240h+var_21C]
0x7C941C: fld     [esp+240h+var_228]
0x7C9420: mov     ds:0B44FD8h, ecx
0x7C9426: fstp    [esp+240h+var_218]
0x7C942A: mov     eax, [esp+240h+var_218]
0x7C942E: fld     [esp+240h+var_224]
0x7C9432: mov     ds:0B44FE0h, eax
0x7C9437: fstp    [esp+240h+var_214]
0x7C943B: mov     ecx, [esp+240h+var_214]
0x7C943F: mov     ds:0B44FDCh, edx
0x7C9445: mov     ds:0B44FE4h, ecx
0x7C944B: xor     eax, eax
0x7C944D: pop     edi
0x7C944E: pop     esi
0x7C944F: pop     ebx
0x7C9450: mov     esp, ebp
0x7C9452: pop     ebp
0x7C9453: retn    20h ; ' '
0x7C9456: fst     [esp+240h+var_220]
0x7C945A: mov     edx, [esp+240h+var_220]
0x7C945E: fst     [esp+240h+var_21C]
0x7C9462: mov     eax, [esp+240h+var_21C]
0x7C9466: fstp    [esp+240h+var_218]
0x7C946A: mov     ecx, [esp+240h+var_218]
0x7C946E: fld     dword ptr ds:0B465A8h
0x7C9474: mov     ds:0B44FD8h, edx
0x7C947A: fstp    [esp+240h+var_214]
0x7C947E: mov     edx, [esp+240h+var_214]
0x7C9482: mov     ds:0B44FDCh, eax
0x7C9487: mov     ds:0B44FE0h, ecx
0x7C948D: mov     ds:0B44FE4h, edx
0x7C9493: xor     eax, eax
0x7C9495: pop     edi
0x7C9496: pop     esi
0x7C9497: pop     ebx
0x7C9498: mov     esp, ebp
0x7C949A: pop     ebp
0x7C949B: retn    20h ; ' '
0x7C949E: cmp     byte ptr [esp+240h+var_22C+3], 0
0x7C94A3: fstp    st(1)
0x7C94A5: fst     [esp+240h+var_108]
0x7C94AC: fst     [esp+240h+var_10C]
0x7C94B3: fst     [esp+240h+var_110]
0x7C94BA: fst     [esp+240h+var_114]
0x7C94C1: fst     [esp+240h+var_11C]
0x7C94C8: fst     [esp+240h+var_120]
0x7C94CF: fst     [esp+240h+var_124]
0x7C94D6: fst     [esp+240h+var_128]
0x7C94DD: fst     [esp+240h+var_130]
0x7C94E4: fst     [esp+240h+var_134]
0x7C94EB: fst     [esp+240h+var_138]
0x7C94F2: fst     [esp+240h+var_13C]
0x7C94F9: fld1
0x7C94FB: fst     [esp+240h+var_104]
0x7C9502: fst     [esp+240h+var_118]
0x7C9509: fst     [esp+240h+var_12C]
0x7C9510: fst     [esp+240h+var_140]
0x7C9517: fst     [esp+240h+var_144]
0x7C951E: fst     [esp+240h+var_158]
0x7C9525: fst     [esp+240h+var_16C]
0x7C952C: fstp    [esp+240h+var_180]
0x7C9533: fst     [esp+240h+var_148]
0x7C953A: fst     [esp+240h+var_14C]
0x7C9541: fst     [esp+240h+var_150]
0x7C9548: fst     [esp+240h+var_154]
0x7C954F: fst     [esp+240h+var_15C]
0x7C9556: fst     [esp+240h+var_160]
0x7C955D: fst     [esp+240h+var_164]
0x7C9564: fst     [esp+240h+var_168]
0x7C956B: fst     [esp+240h+var_170]
0x7C9572: fst     [esp+240h+var_174]
0x7C9579: fst     [esp+240h+var_178]
0x7C9580: fstp    [esp+240h+var_17C]
0x7C9587: jz      loc_7C9668
0x7C958D: mov     eax, [ebp+arg_4]
0x7C9590: test    eax, eax
0x7C9592: jz      loc_7C9668
0x7C9598: mov     eax, [eax+28h]
0x7C959B: fld     dword ptr [eax]
0x7C959D: lea     ecx, [esp+240h+var_140]
0x7C95A4: fstp    [esp+240h+var_180]
0x7C95AB: fld     dword ptr [eax+4]
0x7C95AE: fstp    [esp+240h+var_17C]
0x7C95B5: fld     dword ptr [eax+8]
0x7C95B8: fstp    [esp+240h+var_178]
0x7C95BF: fld     dword ptr [eax+10h]
0x7C95C2: fstp    [esp+240h+var_170]
0x7C95C9: fld     dword ptr [eax+14h]
0x7C95CC: fstp    [esp+240h+var_16C]
0x7C95D3: fld     dword ptr [eax+18h]
0x7C95D6: fstp    [esp+240h+var_168]
0x7C95DD: fld     dword ptr [eax+20h]
0x7C95E0: fstp    [esp+240h+var_160]
0x7C95E7: fld     dword ptr [eax+24h]
0x7C95EA: fstp    [esp+240h+var_15C]
0x7C95F1: fld     dword ptr [eax+28h]
0x7C95F4: fstp    [esp+240h+var_158]
0x7C95FB: fld     dword ptr [eax+30h]
0x7C95FE: fadd    dword ptr ds:0B3F92Ch
0x7C9604: fstp    [esp+240h+var_150]
0x7C960B: fld     dword ptr [eax+34h]
0x7C960E: fadd    dword ptr ds:0B3F930h
0x7C9614: fstp    [esp+240h+var_14C]
0x7C961B: fld     dword ptr [eax+38h]
0x7C961E: fadd    dword ptr ds:0B3F934h
0x7C9624: fstp    [esp+240h+var_148]
0x7C962B: fld     dword ptr [eax+0Ch]
0x7C962E: fstp    [esp+240h+var_174]
0x7C9635: fld     dword ptr [eax+1Ch]
0x7C9638: fstp    [esp+240h+var_164]
0x7C963F: fld     dword ptr [eax+2Ch]
0x7C9642: fstp    [esp+240h+var_154]
0x7C9649: fld     dword ptr [eax+3Ch]
0x7C964C: lea     eax, [esp+240h+var_180]
0x7C9653: push    eax
0x7C9654: fstp    [esp+244h+var_144]
0x7C965B: push    0
0x7C965D: push    ecx
0x7C965E: call    D3DXMatrixInverse_0
0x7C9663: jmp     loc_7C9743
0x7C9668: lea     edx, [esp+240h+var_1C0]
0x7C966F: push    edx
0x7C9670: mov     ecx, esi
0x7C9672: call    sub_718A80
0x7C9677: fld     [esp+240h+var_1C0]
0x7C967E: fld     [esp+240h+var_190]
0x7C9685: fld     st
0x7C9687: fmulp   st(2), st
0x7C9689: fxch    st(1)
0x7C968B: fstp    [esp+240h+var_140]
0x7C9692: fld     [esp+240h+var_1B4]
0x7C9699: fmul    st, st(1)
0x7C969B: fstp    [esp+240h+var_13C]
0x7C96A2: fld     [esp+240h+var_1A8]
0x7C96A9: fmul    st, st(1)
0x7C96AB: fstp    [esp+240h+var_138]
0x7C96B2: fld     [esp+240h+var_1BC]
0x7C96B9: fmul    st, st(1)
0x7C96BB: fstp    [esp+240h+var_130]
0x7C96C2: fld     [esp+240h+var_1B0]
0x7C96C9: fmul    st, st(1)
0x7C96CB: fstp    [esp+240h+var_12C]
0x7C96D2: fld     [esp+240h+var_1A4]
0x7C96D9: fmul    st, st(1)
0x7C96DB: fstp    [esp+240h+var_128]
0x7C96E2: fld     [esp+240h+var_1B8]
0x7C96E9: fmul    st, st(1)
0x7C96EB: fstp    [esp+240h+var_120]
0x7C96F2: fld     [esp+240h+var_1AC]
0x7C96F9: fmul    st, st(1)
0x7C96FB: fstp    [esp+240h+var_11C]
0x7C9702: fmul    [esp+240h+var_1A0]
0x7C9709: fstp    [esp+240h+var_118]
0x7C9710: fld     [esp+240h+var_19C]
0x7C9717: fstp    [esp+240h+var_110]
0x7C971E: fld     [esp+240h+var_198]
0x7C9725: fstp    [esp+240h+var_10C]
0x7C972C: fld     [esp+240h+var_194]
0x7C9733: fstp    [esp+240h+var_108]
0x7C973A: fld1
0x7C973C: fstp    [esp+240h+var_104]
0x7C9743: mov     eax, ds:0B45030h
0x7C9748: cmp     byte ptr [eax+8], 0
0x7C974C: jz      short loc_7C97CB
0x7C974E: xor     esi, esi
0x7C9750: fld     dword ptr [esi+0B465A8h]
0x7C9756: lea     ecx, [esp+240h+var_140]
0x7C975D: fchs
0x7C975F: push    ecx
0x7C9760: fstp    [esp+244h+var_210]
0x7C9764: lea     edx, [esp+244h+var_210]
0x7C9768: fld     dword ptr [esi+0B465ACh]
0x7C976E: push    edx
0x7C976F: fchs
0x7C9771: lea     eax, [esp+248h+var_220]
0x7C9775: fstp    [esp+248h+var_20C]
0x7C9779: push    eax
0x7C977A: fld     dword ptr [esi+0B465B0h]
0x7C9780: fchs
0x7C9782: fstp    [esp+24Ch+var_208]
0x7C9786: call    D3DXVec3TransformNormal_0
0x7C978B: lea     ecx, [esp+240h+var_220]
0x7C978F: push    ecx
0x7C9790: lea     edx, [esp+244h+var_210]
0x7C9794: push    edx
0x7C9795: call    D3DXVec3Normalize_0
0x7C979A: fld     [esp+240h+var_210]
0x7C979E: fstp    dword ptr [esi+0B454D8h]
0x7C97A4: add     esi, 10h
0x7C97A7: cmp     esi, 20h ; ' '
0x7C97AA: fld     [esp+240h+var_20C]
0x7C97AE: fstp    dword ptr [esi+0B454CCh]
0x7C97B4: fld     [esp+240h+var_208]
0x7C97B8: fstp    dword ptr [esi+0B454D0h]
0x7C97BE: fldz
0x7C97C0: fstp    dword ptr [esi+0B454D4h]
0x7C97C6: jl      short loc_7C9750
0x7C97C8: mov     esi, [ebp+arg_18]
0x7C97CB: mov     eax, [ebp+arg_4]
0x7C97CE: fld     dword ptr [esi+30h]
0x7C97D1: push    eax; int
0x7C97D2: push    edi; int
0x7C97D3: push    ecx
0x7C97D4: lea     ecx, [esp+24Ch+var_140]
0x7C97DB: fstp    [esp+24Ch+var_24C]; float
0x7C97DE: push    ecx; int
0x7C97DF: mov     ecx, ebx
0x7C97E1: call    sub_7C9140
0x7C97E6: cmp     edi, 180h
0x7C97EC: jl      loc_7C98C0
0x7C97F2: cmp     edi, 187h
0x7C97F8: jg      loc_7C98C0
0x7C97FE: fld     dword ptr ds:0B46658h
0x7C9804: lea     ecx, [esp+240h+var_220]
0x7C9808: fstp    [esp+240h+var_210]
0x7C980C: fld     dword ptr ds:0B4665Ch
0x7C9812: fstp    [esp+240h+var_20C]
0x7C9816: fld     dword ptr ds:0B46660h
0x7C981C: fstp    [esp+240h+var_208]
0x7C9820: fld     [esp+240h+var_210]
0x7C9824: fsub    dword ptr [esi+24h]
0x7C9827: fstp    [esp+240h+var_220]
0x7C982B: fld     [esp+240h+var_20C]
0x7C982F: fsub    dword ptr [esi+28h]
0x7C9832: fstp    [esp+240h+var_21C]
0x7C9836: fld     [esp+240h+var_208]
0x7C983A: fsub    dword ptr [esi+2Ch]
0x7C983D: fstp    [esp+240h+var_218]
0x7C9841: call    sub_43F350
0x7C9846: fstp    st
0x7C9848: fld     [esp+240h+var_220]
0x7C984C: fstp    dword ptr ds:0B44F18h
0x7C9852: fld     [esp+240h+var_21C]
0x7C9856: fstp    dword ptr ds:0B44F1Ch
0x7C985C: fld     [esp+240h+var_218]
0x7C9860: fstp    dword ptr ds:0B44F20h
0x7C9866: fldz
0x7C9868: fst     dword ptr ds:0B44F24h
0x7C986E: fld     [esp+240h+var_210]
0x7C9872: fsub    dword ptr ds:0B3F92Ch
0x7C9878: fstp    [esp+240h+var_220]
0x7C987C: fld     [esp+240h+var_20C]
0x7C9880: fsub    dword ptr ds:0B3F930h
0x7C9886: fstp    [esp+240h+var_21C]
0x7C988A: fld     [esp+240h+var_208]
0x7C988E: fsub    dword ptr ds:0B3F934h
0x7C9894: fstp    [esp+240h+var_218]
0x7C9898: fld     [esp+240h+var_220]
0x7C989C: fstp    dword ptr ds:0B44F08h
0x7C98A2: fld     [esp+240h+var_21C]
0x7C98A6: fstp    dword ptr ds:0B44F0Ch
0x7C98AC: fld     [esp+240h+var_218]
0x7C98B0: fstp    dword ptr ds:0B44F10h
0x7C98B6: fld1
0x7C98B8: fst     dword ptr ds:0B44F14h
0x7C98BE: jmp     short loc_7C991F
0x7C98C0: fld     dword ptr ds:0B46658h
0x7C98C6: lea     edx, [esp+240h+var_140]
0x7C98CD: fstp    [esp+240h+var_220]
0x7C98D1: push    edx
0x7C98D2: fld     dword ptr ds:0B4665Ch
0x7C98D8: lea     eax, [esp+244h+var_220]
0x7C98DC: fstp    [esp+244h+var_21C]
0x7C98E0: push    eax
0x7C98E1: fld     dword ptr ds:0B46660h
0x7C98E7: lea     ecx, [esp+248h+var_210]
0x7C98EB: push    ecx
0x7C98EC: fstp    [esp+24Ch+var_218]
0x7C98F0: call    D3DXVec3TransformCoord_0
0x7C98F5: fld     [esp+240h+var_210]
0x7C98F9: fstp    dword ptr ds:0B44F08h
0x7C98FF: fld     [esp+240h+var_20C]
0x7C9903: fstp    dword ptr ds:0B44F0Ch
0x7C9909: fld     [esp+240h+var_208]
0x7C990D: fstp    dword ptr ds:0B44F10h
0x7C9913: fld1
0x7C9915: fst     dword ptr ds:0B44F14h
0x7C991B: fldz
0x7C991D: fxch    st(1)
0x7C991F: mov     edx, ds:0B4501Ch
0x7C9925: cmp     byte ptr [edx+8], 0
0x7C9929: jz      loc_7C9B13
0x7C992F: mov     eax, ds:0B42EB8h
0x7C9934: mov     eax, [eax+0Ch]
0x7C9937: test    eax, eax
0x7C9939: jz      loc_7C9AE4
0x7C993F: mov     ecx, [eax]
0x7C9941: cmp     byte ptr [ecx+0F5h], 0
0x7C9948: jnz     loc_7C9AE4
0x7C994E: cmp     edi, 180h
0x7C9954: jl      short loc_7C9962
0x7C9956: cmp     edi, 187h
0x7C995C: jle     loc_7C9AE4
0x7C9962: cmp     edi, 77h ; 'w'
0x7C9965: jz      loc_7C9AE4
0x7C996B: cmp     edi, 85h ; '…'
0x7C9971: jz      loc_7C9AE4
0x7C9977: fxch    st(1)
0x7C9979: mov     eax, [ebp+arg_4]
0x7C997C: test    eax, eax
0x7C997E: fst     [esp+240h+var_188]
0x7C9985: fst     [esp+240h+var_18C]
0x7C998C: fst     [esp+240h+var_190]
0x7C9993: fst     [esp+240h+var_194]
0x7C999A: fst     [esp+240h+var_19C]
0x7C99A1: fst     [esp+240h+var_1A0]
0x7C99A8: fst     [esp+240h+var_1A4]
0x7C99AF: fst     [esp+240h+var_1A8]
0x7C99B6: fst     [esp+240h+var_1B0]
0x7C99BD: fst     [esp+240h+var_1B4]
0x7C99C4: fst     [esp+240h+var_1B8]
0x7C99CB: fst     [esp+240h+var_1BC]
0x7C99D2: fst     [esp+240h+var_1C8]
0x7C99D6: fst     [esp+240h+var_1CC]
0x7C99DA: fst     [esp+240h+var_1D0]
0x7C99DE: fst     [esp+240h+var_1D4]
0x7C99E2: fst     [esp+240h+var_1DC]
0x7C99E6: fst     [esp+240h+var_1E0]
0x7C99EA: fst     [esp+240h+var_1E4]
0x7C99EE: fst     [esp+240h+var_1E8]
0x7C99F2: fst     [esp+240h+var_1F0]
0x7C99F6: fst     [esp+240h+var_1F4]
0x7C99FA: fst     [esp+240h+var_1F8]
0x7C99FE: fstp    [esp+240h+var_1FC]
0x7C9A02: fst     [esp+240h+var_184]
0x7C9A09: fst     [esp+240h+var_198]
0x7C9A10: fst     [esp+240h+var_1AC]
0x7C9A17: fst     [esp+240h+var_1C0]
0x7C9A1E: fst     [esp+240h+var_1C4]
0x7C9A22: fst     [esp+240h+var_1D8]
0x7C9A26: fst     [esp+240h+var_1EC]
0x7C9A2A: fstp    [esp+240h+var_200]
0x7C9A2E: jz      short loc_7C9A43
0x7C9A30: mov     esi, [eax+28h]
0x7C9A33: mov     ecx, 10h
0x7C9A38: lea     edi, [esp+240h+var_1C0]
0x7C9A3F: rep movsd
0x7C9A41: jmp     short loc_7C9A54
0x7C9A43: lea     edx, [esp+240h+var_1C0]
0x7C9A4A: push    esi
0x7C9A4B: push    edx
0x7C9A4C: call    sub_7640A0
0x7C9A51: add     esp, 8
0x7C9A54: fld     dword ptr ds:0B3F92Ch
0x7C9A5A: mov     eax, ds:0B42EB8h
0x7C9A5F: fadd    [esp+240h+var_190]
0x7C9A66: fstp    [esp+240h+var_190]
0x7C9A6D: fld     dword ptr ds:0B3F930h
0x7C9A73: fadd    [esp+240h+var_18C]
0x7C9A7A: fstp    [esp+240h+var_18C]
0x7C9A81: fld     dword ptr ds:0B3F934h
0x7C9A87: fadd    [esp+240h+var_188]
0x7C9A8E: fstp    [esp+240h+var_188]
0x7C9A95: mov     ecx, [eax+0Ch]
0x7C9A98: mov     edx, [ecx]
0x7C9A9A: add     edx, 10h
0x7C9A9D: push    edx
0x7C9A9E: lea     eax, [esp+244h+var_1C0]
0x7C9AA5: push    eax
0x7C9AA6: lea     ecx, [esp+248h+var_E0]
0x7C9AAD: push    ecx
0x7C9AAE: call    D3DXMatrixMultiply_0
0x7C9AB3: lea     edx, [esp+240h+var_200]
0x7C9AB7: push    edx
0x7C9AB8: mov     eax, edx
0x7C9ABA: mov     ecx, 10h
0x7C9ABF: lea     esi, [esp+244h+var_E0]
0x7C9AC6: lea     edi, [esp+244h+var_200]
0x7C9ACA: push    eax
0x7C9ACB: rep movsd
0x7C9ACD: call    D3DXMatrixTranspose_0
0x7C9AD2: mov     ecx, 10h
0x7C9AD7: lea     esi, [esp+240h+var_200]
0x7C9ADB: mov     edi, offset unk_B45498
0x7C9AE0: rep movsd
0x7C9AE2: jmp     short loc_7C9B17
0x7C9AE4: mov     esi, [ebx+14h]
0x7C9AE7: fstp    st(1)
0x7C9AE9: add     esi, 940h
0x7C9AEF: fstp    st
0x7C9AF1: mov     ecx, 10h
0x7C9AF6: lea     edi, [esp+240h+var_E0]
0x7C9AFD: rep movsd
0x7C9AFF: lea     ecx, [esp+240h+var_E0]
0x7C9B06: push    ecx
0x7C9B07: push    offset unk_B45498
0x7C9B0C: call    D3DXMatrixTranspose_0
0x7C9B11: jmp     short loc_7C9B17
0x7C9B13: fstp    st(1)
0x7C9B15: fstp    st
0x7C9B17: mov     edx, ds:0B45024h
0x7C9B1D: cmp     byte ptr [edx+8], 0
0x7C9B21: jz      loc_7C9C5C
0x7C9B27: mov     eax, [ebp+arg_10]
0x7C9B2A: mov     esi, [eax+18h]
0x7C9B2D: test    esi, esi
0x7C9B2F: jz      loc_7C9C5C
0x7C9B35: mov     edx, [esi]
0x7C9B37: mov     eax, [edx+54h]
0x7C9B3A: mov     ecx, esi
0x7C9B3C: call    eax
0x7C9B3E: cmp     eax, 0FFFFFFFFh
0x7C9B41: jz      loc_7C9C5C
0x7C9B47: mov     eax, [esi+1Ch]
0x7C9B4A: shr     eax, 1Ch
0x7C9B4D: movzx   ecx, al
0x7C9B50: push    ecx
0x7C9B51: call    GetShadowSceneNode
0x7C9B56: add     esp, 4
0x7C9B59: test    eax, eax
0x7C9B5B: jz      loc_7C9C5C
0x7C9B61: cmp     byte ptr [esp+240h+var_22C+3], 0
0x7C9B66: jz      short loc_7C9BE1
0x7C9B68: cmp     [ebp+arg_4], 0
0x7C9B6C: jz      short loc_7C9BE1
0x7C9B6E: fld1
0x7C9B70: mov     edx, ds:0B3F92Ch
0x7C9B76: mov     eax, ds:0B3F930h
0x7C9B7B: fst     [esp+240h+var_200]
0x7C9B7F: fldz
0x7C9B81: mov     ecx, ds:0B3F934h
0x7C9B87: fst     [esp+240h+var_1FC]
0x7C9B8B: mov     [esp+240h+var_220], edx
0x7C9B8F: fst     [esp+240h+var_1F8]
0x7C9B93: mov     [esp+240h+var_21C], eax
0x7C9B97: fld     [esp+240h+var_220]
0x7C9B9B: mov     [esp+240h+var_218], ecx
0x7C9B9F: fstp    [esp+240h+var_1F4]
0x7C9BA3: fst     [esp+240h+var_1F0]
0x7C9BA7: fst     [esp+240h+var_1E8]
0x7C9BAB: fxch    st(1)
0x7C9BAD: fst     [esp+240h+var_1EC]
0x7C9BB1: fld     [esp+240h+var_21C]
0x7C9BB5: fstp    [esp+240h+var_1E4]
0x7C9BB9: fxch    st(1)
0x7C9BBB: fst     [esp+240h+var_1E0]
0x7C9BBF: fst     [esp+240h+var_1DC]
0x7C9BC3: fxch    st(1)
0x7C9BC5: fst     [esp+240h+var_1D8]
0x7C9BC9: fld     [esp+240h+var_218]
0x7C9BCD: fstp    [esp+240h+var_1D4]
0x7C9BD1: fxch    st(1)
0x7C9BD3: fst     [esp+240h+var_1D0]
0x7C9BD7: fst     [esp+240h+var_1CC]
0x7C9BDB: fstp    [esp+240h+var_1C8]
0x7C9BDF: jmp     short loc_7C9C48
0x7C9BE1: mov     eax, [ebp+arg_18]
0x7C9BE4: fld     dword ptr [eax]
0x7C9BE6: fstp    [esp+240h+var_200]
0x7C9BEA: fld     dword ptr [eax+4]
0x7C9BED: fstp    [esp+240h+var_1FC]
0x7C9BF1: fld     dword ptr [eax+8]
0x7C9BF4: fstp    [esp+240h+var_1F8]
0x7C9BF8: fld     dword ptr [eax+24h]
0x7C9BFB: fstp    [esp+240h+var_1F4]
0x7C9BFF: fld     dword ptr [eax+0Ch]
0x7C9C02: fstp    [esp+240h+var_1F0]
0x7C9C06: fld     dword ptr [eax+10h]
0x7C9C09: fstp    [esp+240h+var_1EC]
0x7C9C0D: fld     dword ptr [eax+14h]
0x7C9C10: fstp    [esp+240h+var_1E8]
0x7C9C14: fld     dword ptr [eax+28h]
0x7C9C17: fstp    [esp+240h+var_1E4]
0x7C9C1B: fld     dword ptr [eax+18h]
0x7C9C1E: fstp    [esp+240h+var_1E0]
0x7C9C22: fld     dword ptr [eax+1Ch]
0x7C9C25: fstp    [esp+240h+var_1DC]
0x7C9C29: fld     dword ptr [eax+20h]
0x7C9C2C: fstp    [esp+240h+var_1D8]
0x7C9C30: fld     dword ptr [eax+2Ch]
0x7C9C33: fstp    [esp+240h+var_1D4]
0x7C9C37: fldz
0x7C9C39: fst     [esp+240h+var_1D0]
0x7C9C3D: fst     [esp+240h+var_1CC]
0x7C9C41: fstp    [esp+240h+var_1C8]
0x7C9C45: fld     dword ptr [eax+30h]
0x7C9C48: mov     ecx, 10h
0x7C9C4D: fstp    [esp+240h+var_1C4]
0x7C9C51: mov     edi, offset unk_B45560
0x7C9C56: lea     esi, [esp+240h+var_200]
0x7C9C5A: rep movsd
0x7C9C5C: mov     edx, ds:0B45068h
0x7C9C62: cmp     byte ptr [edx+8], 0
0x7C9C66: jz      short loc_7C9C9A
0x7C9C68: mov     eax, [ebp+arg_4]
0x7C9C6B: test    eax, eax
0x7C9C6D: jz      short loc_7C9C9A
0x7C9C6F: mov     esi, [eax+28h]
0x7C9C72: lea     eax, [esp+240h+var_200]
0x7C9C76: mov     ecx, 10h
0x7C9C7B: lea     edi, [esp+240h+var_200]
0x7C9C7F: rep movsd
0x7C9C81: push    eax
0x7C9C82: mov     ecx, eax
0x7C9C84: push    ecx
0x7C9C85: call    D3DXMatrixTranspose_0
0x7C9C8A: mov     ecx, 10h
0x7C9C8F: lea     esi, [esp+240h+var_200]
0x7C9C93: mov     edi, offset unk_B44F98
0x7C9C98: rep movsd
0x7C9C9A: mov     eax, [esp+240h+var_228]
0x7C9C9E: mov     edx, ds:0B43104h
0x7C9CA4: mov     ebx, [edx+280h]
0x7C9CAA: add     eax, 0FFFFFE89h
0x7C9CAF: cmp     eax, 3
0x7C9CB2: mov     [esp+240h+var_F4], ebx
0x7C9CB9: ja      loc_7C9F1D
0x7C9CBF: mov     ecx, ds:0B42EB8h
0x7C9CC5: mov     edx, [ecx+0Ch]
0x7C9CC8: mov     eax, [edx]
0x7C9CCA: cmp     byte ptr [eax+214h], 0
0x7C9CD1: mov     [esp+240h+var_FC], eax
0x7C9CD8: jnz     loc_7C9EFD
0x7C9CDE: fld     dword ptr ds:0B3F930h
0x7C9CE4: lea     ebx, [eax+150h]
0x7C9CEA: mov     eax, [esp+240h+var_224]
0x7C9CEE: fld     st
0x7C9CF0: mov     eax, [eax+14h]
0x7C9CF3: lea     esi, [eax+980h]
0x7C9CF9: mov     ecx, 10h
0x7C9CFE: lea     edi, [esp+240h+var_200]
0x7C9D02: rep movsd
0x7C9D04: fmul    [esp+240h+var_1F0]
0x7C9D08: fld     dword ptr ds:0B3F92Ch
0x7C9D0E: fld     st
0x7C9D10: fmul    [esp+240h+var_200]
0x7C9D14: faddp   st(2), st
0x7C9D16: fld     dword ptr ds:0B3F934h
0x7C9D1C: fld     st
0x7C9D1E: fmul    [esp+240h+var_1E0]
0x7C9D22: lea     esi, [eax+9C0h]
0x7C9D28: faddp   st(3), st
0x7C9D2A: mov     ecx, 10h
0x7C9D2F: fxch    st(2)
0x7C9D31: lea     edi, [esp+240h+var_E0]
0x7C9D38: lea     edx, [esp+240h+var_200]
0x7C9D3C: fstp    [esp+240h+var_228]
0x7C9D40: lea     eax, [esp+240h+var_1C0]
0x7C9D47: fld     [esp+240h+var_228]
0x7C9D4B: fchs
0x7C9D4D: fstp    [esp+240h+var_1D0]
0x7C9D51: fld     st
0x7C9D53: fmul    [esp+240h+var_1FC]
0x7C9D57: fld     st(3)
0x7C9D59: fmul    [esp+240h+var_1EC]
0x7C9D5D: faddp   st(1), st
0x7C9D5F: fld     st(2)
0x7C9D61: fmul    [esp+240h+var_1DC]
0x7C9D65: faddp   st(1), st
0x7C9D67: fstp    [esp+240h+var_228]
0x7C9D6B: fld     [esp+240h+var_228]
0x7C9D6F: fchs
0x7C9D71: fstp    [esp+240h+var_1CC]
0x7C9D75: fmul    [esp+240h+var_1F8]
0x7C9D79: fld     [esp+240h+var_1E8]
0x7C9D7D: fmulp   st(3), st
0x7C9D7F: faddp   st(2), st
0x7C9D81: fmul    [esp+240h+var_1D8]
0x7C9D85: faddp   st(1), st
0x7C9D87: fstp    [esp+240h+var_228]
0x7C9D8B: fld     [esp+240h+var_228]
0x7C9D8F: fchs
0x7C9D91: fstp    [esp+240h+var_1C8]
0x7C9D95: rep movsd
0x7C9D97: lea     ecx, [esp+240h+var_E0]
0x7C9D9E: push    ecx
0x7C9D9F: push    edx
0x7C9DA0: push    eax
0x7C9DA1: call    D3DXMatrixMultiply_0
0x7C9DA6: lea     ecx, [esp+240h+var_1C0]
0x7C9DAD: push    ecx
0x7C9DAE: push    0
0x7C9DB0: lea     edx, [esp+248h+var_40]
0x7C9DB7: push    edx
0x7C9DB8: call    D3DXMatrixInverse_0
0x7C9DBD: lea     eax, [esp+240h+var_40]
0x7C9DC4: push    eax
0x7C9DC5: lea     ecx, [esp+244h+var_1C0]
0x7C9DCC: push    ecx
0x7C9DCD: call    D3DXMatrixTranspose_0
0x7C9DD2: lea     eax, [esp+240h+var_9C]
0x7C9DD9: sub     eax, ebx
0x7C9DDB: mov     [esp+240h+var_224], eax
0x7C9DDF: lea     eax, [esp+240h+var_98]
0x7C9DE6: sub     eax, ebx
0x7C9DE8: mov     [esp+240h+var_100], eax
0x7C9DEF: lea     eax, [esp+240h+var_94]
0x7C9DF6: sub     eax, ebx
0x7C9DF8: mov     [esp+240h+var_F8], eax
0x7C9DFF: lea     eax, [esp+240h+var_A0]
0x7C9E06: xor     edi, edi
0x7C9E08: sub     eax, ebx
0x7C9E0A: mov     esi, ebx
0x7C9E0C: mov     [esp+240h+var_228], eax
0x7C9E10: mov     edx, [esi]
0x7C9E12: mov     eax, [esi+4]
0x7C9E15: mov     ecx, [esi+8]
0x7C9E18: mov     [esp+240h+var_220], edx
0x7C9E1C: fld     [esp+240h+var_220]
0x7C9E20: fstp    [esp+240h+var_210]
0x7C9E24: mov     [esp+240h+var_21C], eax
0x7C9E28: fld     [esp+240h+var_21C]
0x7C9E2C: mov     [esp+240h+var_218], ecx
0x7C9E30: fstp    [esp+240h+var_20C]
0x7C9E34: lea     edx, [esp+240h+var_210]
0x7C9E38: fld     [esp+240h+var_218]
0x7C9E3C: push    edx
0x7C9E3D: fstp    [esp+244h+var_208]
0x7C9E41: mov     eax, edx
0x7C9E43: fld     dword ptr [esi+0Ch]
0x7C9E46: push    eax
0x7C9E47: fchs
0x7C9E49: fstp    [esp+248h+var_204]
0x7C9E4D: call    D3DXPlaneNormalize_0
0x7C9E52: lea     ecx, [esp+240h+var_1C0]
0x7C9E59: push    ecx
0x7C9E5A: lea     edx, [esp+244h+var_210]
0x7C9E5E: push    edx
0x7C9E5F: lea     eax, [esp+248h+var_F0]
0x7C9E66: push    eax
0x7C9E67: call    D3DXPlaneTransform_0
0x7C9E6C: fld     [esp+240h+var_F0]
0x7C9E73: mov     ecx, [esp+240h+var_228]
0x7C9E77: mov     edx, [esp+240h+var_224]
0x7C9E7B: fstp    dword ptr [ecx+esi]
0x7C9E7E: fld     [esp+240h+var_EC]
0x7C9E85: lea     eax, [ecx+esi]
0x7C9E88: mov     ecx, [esp+240h+var_100]
0x7C9E8F: fstp    dword ptr [edx+esi]
0x7C9E92: fld     [esp+240h+var_E8]
0x7C9E99: mov     edx, [esp+240h+var_F8]
0x7C9EA0: fstp    dword ptr [ecx+esi]
0x7C9EA3: mov     ecx, [esp+240h+var_F4]
0x7C9EAA: fld     [esp+240h+var_E4]
0x7C9EB1: push    eax
0x7C9EB2: fstp    dword ptr [edx+esi]
0x7C9EB5: mov     edx, [ecx]
0x7C9EB7: mov     eax, [edx+0DCh]
0x7C9EBD: push    edi
0x7C9EBE: push    ecx
0x7C9EBF: call    eax
0x7C9EC1: add     edi, 1
0x7C9EC4: add     esi, 10h
0x7C9EC7: cmp     edi, 6
0x7C9ECA: jl      loc_7C9E10
0x7C9ED0: mov     eax, [esp+240h+var_FC]
0x7C9ED7: lea     edi, [eax+1B4h]
0x7C9EDD: mov     ecx, 18h
0x7C9EE2: lea     esi, [esp+240h+var_A0]
0x7C9EE9: mov     byte ptr [eax+214h], 1
0x7C9EF0: rep movsd
0x7C9EF2: xor     eax, eax
0x7C9EF4: pop     edi
0x7C9EF5: pop     esi
0x7C9EF6: pop     ebx
0x7C9EF7: mov     esp, ebp
0x7C9EF9: pop     ebp
0x7C9EFA: retn    20h ; ' '
0x7C9EFD: lea     edi, [eax+1B4h]
0x7C9F03: xor     esi, esi
0x7C9F05: mov     ecx, [ebx]
0x7C9F07: mov     edx, [ecx+0DCh]
0x7C9F0D: push    edi
0x7C9F0E: push    esi
0x7C9F0F: push    ebx
0x7C9F10: call    edx
0x7C9F12: add     esi, 1
0x7C9F15: add     edi, 10h
0x7C9F18: cmp     esi, 6
0x7C9F1B: jl      short loc_7C9F05
0x7C9F1D: pop     edi
0x7C9F1E: pop     esi
0x7C9F1F: xor     eax, eax
0x7C9F21: pop     ebx
0x7C9F22: mov     esp, ebp
0x7C9F24: pop     ebp
0x7C9F25: retn    20h ; ' '
