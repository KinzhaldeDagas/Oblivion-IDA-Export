0x66E0D0: push    ebp
0x66E0D1: mov     ebp, esp
0x66E0D3: and     esp, 0FFFFFFF0h
0x66E0D6: push    0FFFFFFFFh
0x66E0D8: push    offset SEH_66E0D0
0x66E0DD: mov     eax, large fs:0
0x66E0E3: push    eax
0x66E0E4: sub     esp, 4C8h
0x66E0EA: mov     eax, ds:0B30AACh
0x66E0EF: xor     eax, esp
0x66E0F1: mov     [esp+4D4h+var_14], eax
0x66E0F8: push    ebx
0x66E0F9: push    esi
0x66E0FA: push    edi
0x66E0FB: mov     eax, ds:0B30AACh
0x66E100: xor     eax, esp
0x66E102: push    eax
0x66E103: lea     eax, [esp+4E4h+var_C]
0x66E10A: mov     large fs:0, eax
0x66E110: mov     eax, [ebp+arg_0]
0x66E113: mov     esi, ecx
0x66E115: mov     ecx, [ebp+arg_4]
0x66E118: push    eax
0x66E119: mov     [esp+4E8h+var_4B0], esi
0x66E11D: mov     [esp+4E8h+var_4AC], ecx
0x66E121: call    sub_46D5C0
0x66E126: fadd    st, st
0x66E128: mov     ecx, ds:0B333C4h; this
0x66E12E: add     esp, 4
0x66E131: fstp    [esp+4E4h+var_4B4]
0x66E135: call    MobileObject_GetCharProxy
0x66E13A: mov     ecx, eax
0x66E13C: call    sub_8913C0
0x66E141: fstp    [esp+4E4h+var_4CC]
0x66E145: fld     [esp+4E4h+var_4CC]
0x66E149: mov     edx, [esi]
0x66E14B: fmul    qword ptr ds:0A372E0h
0x66E151: mov     eax, [edx+0ECh]
0x66E157: mov     ecx, esi
0x66E159: fstp    [esp+4E4h+var_4A4]
0x66E15D: call    eax
0x66E15F: fmul    dword ptr ds:0B37D28h
0x66E165: lea     ecx, [esp+4E4h+var_3E8]
0x66E16C: push    ecx
0x66E16D: lea     edx, [esp+4E8h+var_49C]
0x66E171: push    edx
0x66E172: fstp    [esp+4ECh+var_4A8]
0x66E176: mov     ecx, esi
0x66E178: call    sub_5F11F0
0x66E17D: xor     ebx, ebx
0x66E17F: cmp     [ebp+arg_C], bl
0x66E182: jz      loc_66E248
0x66E188: fldz
0x66E18A: fcomp   dword ptr [esi+7FCh]
0x66E190: fnstsw  ax
0x66E192: test    ah, 44h
0x66E195: jnp     short loc_66E1CE
0x66E197: fld     [esp+4E4h+var_4B4]
0x66E19B: fmul    qword ptr ds:0A2FAA0h
0x66E1A1: fdiv    [esp+4E4h+var_4A8]
0x66E1A5: fstp    [esp+4E4h+var_4CC]
0x66E1A9: fld     [esp+4E4h+var_4CC]
0x66E1AD: call    __CIasin
0x66E1B2: fstp    [esp+4E4h+var_4CC]
0x66E1B6: fld     [esp+4E4h+var_4CC]
0x66E1BA: fstp    [esp+4E4h+var_4CC]
0x66E1BE: fld     dword ptr [esi+7FCh]
0x66E1C4: fadd    [esp+4E4h+var_4CC]
0x66E1C8: fstp    dword ptr [esi+7FCh]
0x66E1CE: fld     dword ptr [esi+7FCh]
0x66E1D4: push    ecx
0x66E1D5: lea     ecx, [esp+4E8h+var_3D0]
0x66E1DC: fstp    [esp+4E8h+var_4E8]; float
0x66E1DF: call    NiMatrix33_InitRotationTransform
0x66E1E4: fld     dword ptr [esi+7FCh]
0x66E1EA: fstp    dword ptr [esi+800h]
0x66E1F0: fld     [esp+4E4h+var_4B4]
0x66E1F4: fmul    qword ptr ds:0A2FAA0h
0x66E1FA: fdiv    [esp+4E4h+var_4A8]
0x66E1FE: fstp    [esp+4E4h+var_4CC]
0x66E202: fld     [esp+4E4h+var_4CC]
0x66E206: call    __CIasin
0x66E20B: fstp    [esp+4E4h+var_4CC]
0x66E20F: fld     [esp+4E4h+var_4CC]
0x66E213: fstp    [esp+4E4h+var_4CC]
0x66E217: fld     dword ptr [esi+7FCh]
0x66E21D: fadd    [esp+4E4h+var_4CC]
0x66E221: fstp    [esp+4E4h+var_4CC]
0x66E225: fld     [esp+4E4h+var_4CC]
0x66E229: fst     dword ptr [esi+7FCh]
0x66E22F: fld     qword ptr ds:0A3D5B0h
0x66E235: fcom    st(1)
0x66E237: fnstsw  ax
0x66E239: test    ah, 5
0x66E23C: jp      short loc_66E260
0x66E23E: fsubp   st(1), st
0x66E240: fstp    dword ptr [esi+7FCh]
0x66E246: jmp     short loc_66E264
0x66E248: fld     dword ptr [esi+800h]
0x66E24E: push    ecx
0x66E24F: lea     ecx, [esp+4E8h+var_3D0]
0x66E256: fstp    [esp+4E8h+var_4E8]; float
0x66E259: call    NiMatrix33_InitRotationTransform
0x66E25E: jmp     short loc_66E264
0x66E260: fstp    st(1)
0x66E262: fstp    st
0x66E264: mov     al, [ebp+arg_8]
0x66E267: neg     al
0x66E269: mov     [esp+4E4h+var_4CD], bl
0x66E26D: sbb     eax, eax
0x66E26F: and     eax, 0Ah
0x66E272: xor     edi, edi
0x66E274: mov     [esp+4E4h+var_4CC], eax
0x66E278: mov     [esp+4E4h+var_4A0], edi
0x66E27C: jmp     short loc_66E284
0x66E27E: align 10h
0x66E280: mov     esi, [esp+4E4h+var_4B0]
0x66E284: cmp     edi, [esp+4E4h+var_4CC]
0x66E288: jg      loc_66E8EF
0x66E28E: lea     ecx, [esp+4E4h+var_3E8]
0x66E295: push    ecx
0x66E296: lea     edx, [esp+4E8h+var_4C4]
0x66E29A: push    edx
0x66E29B: lea     ecx, [esp+4ECh+var_3D0]
0x66E2A2: call    sub_7101F0
0x66E2A7: cmp     edi, ebx
0x66E2A9: jz      short loc_66E316
0x66E2AB: fldz
0x66E2AD: lea     ecx, [esp+4E4h+var_4C4]
0x66E2B1: fstp    [esp+4E4h+var_4BC]
0x66E2B5: call    sub_43F350
0x66E2BA: fstp    st
0x66E2BC: fild    [esp+4E4h+var_4CC]
0x66E2C0: lea     eax, [edi-1]
0x66E2C3: mov     [esp+4E4h+var_4C8], eax
0x66E2C7: push    ecx
0x66E2C8: lea     ecx, [esp+4E8h+var_3AC]
0x66E2CF: fdivr   qword ptr ds:0A3D5B0h
0x66E2D5: fimul   [esp+4E8h+var_4C8]
0x66E2D9: fstp    [esp+4E8h+var_4C8]
0x66E2DD: fld     [esp+4E8h+var_4C8]
0x66E2E1: fstp    [esp+4E8h+var_4E8]; float
0x66E2E4: call    NiMatrix33_InitRotationTransform
0x66E2E9: lea     ecx, [esp+4E4h+var_4C4]
0x66E2ED: push    ecx
0x66E2EE: lea     edx, [esp+4E8h+var_3DC]
0x66E2F5: push    edx
0x66E2F6: lea     ecx, [esp+4ECh+var_3AC]
0x66E2FD: call    sub_7101F0
0x66E302: mov     ecx, [eax]
0x66E304: mov     [esp+4E4h+var_4C4], ecx
0x66E308: mov     edx, [eax+4]
0x66E30B: mov     [esp+4E4h+var_4C0], edx
0x66E30F: mov     eax, [eax+8]
0x66E312: mov     [esp+4E4h+var_4BC], eax
0x66E316: fld1
0x66E318: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x66E31F: lea     ecx, [esp+4E4h+var_454]
0x66E326: fstp    [esp+4E4h+var_1FC]
0x66E32D: push    ecx
0x66E32E: mov     ecx, ds:0B333C4h
0x66E334: mov     [esp+4E8h+var_220], bl
0x66E33B: mov     [esp+4E8h+var_21C], ebx
0x66E342: mov     [esp+4E8h+var_1F0], ebx
0x66E349: mov     [esp+4E8h+var_1D0], ebx
0x66E350: mov     [esp+4E8h+var_1CC], ebx
0x66E357: mov     [esp+4E8h+var_1C8], ebx
0x66E35E: movaps  [esp+4E8h+var_1E0], xmm0
0x66E366: call    sub_65ABE0
0x66E36B: fld     [esp+4E4h+var_49C]
0x66E36F: fld     qword ptr ds:0A39088h
0x66E375: movzx   eax, word ptr [eax+2]
0x66E379: fmul    st(1), st
0x66E37B: shl     eax, 10h
0x66E37E: fxch    st(1)
0x66E380: or      eax, 1Fh
0x66E383: lea     ecx, [esp+4E4h+var_1C0]
0x66E38A: fstp    dword ptr [esp+4E4h+var_250]
0x66E391: mov     [esp+4E4h+var_21C], eax
0x66E398: fld     [esp+4E4h+var_498]
0x66E39C: fmul    st, st(1)
0x66E39E: fstp    dword ptr [esp+4E4h+var_250+4]
0x66E3A5: fld     dword ptr [esp+4E4h+var_494]
0x66E3A9: fmul    st, st(1)
0x66E3AB: fstp    dword ptr [esp+4E4h+var_250+8]
0x66E3B2: movaps  xmm0, [esp+4E4h+var_250]
0x66E3BA: fld     [esp+4E4h+var_4A8]
0x66E3BE: movaps  [esp+4E4h+var_240], xmm0
0x66E3C6: fadd    [esp+4E4h+var_4B4]
0x66E3CA: fst     [esp+4E4h+var_494+4]
0x66E3CE: fstp    [esp+4E4h+var_4C8]
0x66E3D2: fld     [esp+4E4h+var_4C8]
0x66E3D6: fld     st
0x66E3D8: fmul    [esp+4E4h+var_4C4]
0x66E3DC: fstp    [esp+4E4h+var_4C8]
0x66E3E0: fld     st
0x66E3E2: fmul    [esp+4E4h+var_4C0]
0x66E3E6: fstp    [esp+4E4h+var_4B8]
0x66E3EA: fmul    [esp+4E4h+var_4BC]
0x66E3EE: fstp    [esp+4E4h+var_4D4]
0x66E3F2: fld     [esp+4E4h+var_4C8]
0x66E3F6: fmul    st, st(1)
0x66E3F8: fstp    dword ptr [esp+4E4h+var_260]
0x66E3FF: fld     [esp+4E4h+var_4B8]
0x66E403: fmul    st, st(1)
0x66E405: fstp    dword ptr [esp+4E4h+var_260+4]
0x66E40C: fmul    [esp+4E4h+var_4D4]
0x66E410: fstp    dword ptr [esp+4E4h+var_260+8]
0x66E417: movaps  xmm0, [esp+4E4h+var_260]
0x66E41F: movaps  [esp+4E4h+var_1E0], xmm0
0x66E427: call    sub_538C00
0x66E42C: mov     ecx, ds:0B333C4h; this
0x66E432: lea     edx, [esp+4E4h+var_1C0]
0x66E439: mov     [esp+4E4h+var_4], ebx
0x66E440: mov     [esp+4E4h+var_1C8], edx
0x66E447: mov     [esp+4E4h+var_1CC], ebx
0x66E44E: call    TESObjectREFR_GetParentCell
0x66E453: mov     esi, eax
0x66E455: mov     ecx, esi; this
0x66E457: call    TESObjectCELL_IsInterior
0x66E45C: test    al, al
0x66E45E: jz      short loc_66E46A
0x66E460: lea     ecx, [esi+28h]
0x66E463: call    sub_424180
0x66E468: jmp     short loc_66E46F
0x66E46A: mov     eax, ds:0B35C24h
0x66E46F: mov     edx, [eax]
0x66E471: mov     edx, [edx+88h]
0x66E477: lea     ecx, [esp+4E4h+var_240]
0x66E47E: push    ecx
0x66E47F: mov     ecx, eax
0x66E481: call    edx
0x66E483: test    al, al
0x66E485: jz      loc_66E580
0x66E48B: mov     eax, [esp+4E4h+var_1B0]
0x66E492: fld     dword ptr [eax+14h]
0x66E495: mov     eax, [esp+4E4h+var_4AC]
0x66E499: fmul    [esp+4E4h+var_494+4]
0x66E49D: fstp    [esp+4E4h+var_4D4]
0x66E4A1: fld     [esp+4E4h+var_4B4]
0x66E4A5: fmul    qword ptr ds:0A2FAA0h
0x66E4AB: fst     [esp+4E4h+var_494+4]
0x66E4AF: fsubr   [esp+4E4h+var_4D4]
0x66E4B3: fstp    [esp+4E4h+var_4D4]
0x66E4B7: fld     [esp+4E4h+var_4C4]
0x66E4BB: fld     [esp+4E4h+var_4D4]
0x66E4BF: fld     st
0x66E4C1: fmulp   st(2), st
0x66E4C3: fxch    st(1)
0x66E4C5: fstp    [esp+4E4h+var_4C4]
0x66E4C9: fld     [esp+4E4h+var_4C0]
0x66E4CD: fmul    st, st(1)
0x66E4CF: fstp    [esp+4E4h+var_4C0]
0x66E4D3: fmul    [esp+4E4h+var_4BC]
0x66E4D7: fstp    [esp+4E4h+var_4BC]
0x66E4DB: fld     [esp+4E4h+var_49C]
0x66E4DF: fld     [esp+4E4h+var_4C4]
0x66E4E3: fld     st
0x66E4E5: faddp   st(2), st
0x66E4E7: fxch    st(1)
0x66E4E9: fstp    [esp+4E4h+var_4D4]
0x66E4ED: fld     [esp+4E4h+var_498]
0x66E4F1: fld     [esp+4E4h+var_4C0]
0x66E4F5: fld     st
0x66E4F7: faddp   st(2), st
0x66E4F9: fxch    st(1)
0x66E4FB: fstp    [esp+4E4h+var_4B8]
0x66E4FF: fld     dword ptr [esp+4E4h+var_494]
0x66E503: fadd    [esp+4E4h+var_4BC]
0x66E507: fstp    [esp+4E4h+var_4C8]
0x66E50B: fld     [esp+4E4h+var_4D4]
0x66E50F: fstp    [esp+4E4h+var_478]
0x66E513: mov     ecx, [esp+4E4h+var_478]
0x66E517: fld     [esp+4E4h+var_4B8]
0x66E51B: mov     [eax], ecx
0x66E51D: fstp    [esp+4E4h+var_474]
0x66E521: mov     edx, [esp+4E4h+var_474]
0x66E525: fld     [esp+4E4h+var_4C8]
0x66E529: mov     [eax+4], edx
0x66E52C: fstp    [esp+4E4h+var_470]
0x66E530: mov     ecx, [esp+4E4h+var_470]
0x66E534: mov     [eax+8], ecx
0x66E537: fmul    st, st
0x66E539: fld     st(1)
0x66E53B: fmulp   st(2), st
0x66E53D: faddp   st(1), st
0x66E53F: fldz
0x66E541: fmul    st, st
0x66E543: faddp   st(1), st
0x66E545: fstp    [esp+4E4h+var_4D4]
0x66E549: fld     [esp+4E4h+var_4D4]
0x66E54D: call    __CIsqrt
0x66E552: fstp    [esp+4E4h+var_4D4]
0x66E556: fld     [esp+4E4h+var_4D4]
0x66E55A: fsub    [esp+4E4h+var_494+4]
0x66E55E: fstp    [esp+4E4h+var_4D4]
0x66E562: fld     [esp+4E4h+var_4D4]
0x66E566: fsub    [esp+4E4h+var_4A4]
0x66E56A: fcomp   qword ptr ds:0A2FC68h
0x66E570: fnstsw  ax
0x66E572: test    ah, 41h
0x66E575: jnz     loc_66E89D
0x66E57B: jmp     loc_66E60A
0x66E580: fld     [esp+4E4h+var_4B4]
0x66E584: mov     eax, [esp+4E4h+var_4AC]
0x66E588: fmul    qword ptr ds:0A2FAA0h
0x66E58E: fst     [esp+4E4h+var_494+4]
0x66E592: fadd    [esp+4E4h+var_4A8]
0x66E596: fstp    [esp+4E4h+var_4D4]
0x66E59A: fld     [esp+4E4h+var_4D4]
0x66E59E: fld     st
0x66E5A0: fmul    [esp+4E4h+var_4C4]
0x66E5A4: fstp    [esp+4E4h+var_4C4]
0x66E5A8: fld     st
0x66E5AA: fmul    [esp+4E4h+var_4C0]
0x66E5AE: fstp    [esp+4E4h+var_4C0]
0x66E5B2: fmul    [esp+4E4h+var_4BC]
0x66E5B6: fstp    [esp+4E4h+var_4BC]
0x66E5BA: fld     [esp+4E4h+var_49C]
0x66E5BE: fadd    [esp+4E4h+var_4C4]
0x66E5C2: fstp    [esp+4E4h+var_4D4]
0x66E5C6: fld     [esp+4E4h+var_498]
0x66E5CA: fadd    [esp+4E4h+var_4C0]
0x66E5CE: fstp    [esp+4E4h+var_4B8]
0x66E5D2: fld     dword ptr [esp+4E4h+var_494]
0x66E5D6: fadd    [esp+4E4h+var_4BC]
0x66E5DA: fstp    [esp+4E4h+var_4C8]
0x66E5DE: fld     [esp+4E4h+var_4D4]
0x66E5E2: fstp    [esp+4E4h+var_484]
0x66E5E6: mov     edx, [esp+4E4h+var_484]
0x66E5EA: fld     [esp+4E4h+var_4B8]
0x66E5EE: mov     [eax], edx
0x66E5F0: fstp    [esp+4E4h+var_480]
0x66E5F4: mov     ecx, [esp+4E4h+var_480]
0x66E5F8: fld     [esp+4E4h+var_4C8]
0x66E5FC: mov     [eax+4], ecx
0x66E5FF: fstp    [esp+4E4h+var_47C]
0x66E603: mov     edx, [esp+4E4h+var_47C]
0x66E607: mov     [eax+8], edx
0x66E60A: push    14h; Size
0x66E60C: call    FormHeapAlloc
0x66E611: add     esp, 4
0x66E614: mov     [esp+4E4h+var_4B8], eax
0x66E618: cmp     eax, ebx
0x66E61A: mov     byte ptr [esp+4E4h+var_4], 1
0x66E622: jz      short loc_66E641
0x66E624: fld     [esp+4E4h+var_494+4]
0x66E628: push    1; float
0x66E62A: fstp    [esp+4E8h+var_4D4]
0x66E62E: push    ecx
0x66E62F: fld     [esp+4ECh+var_4D4]
0x66E633: mov     ecx, eax
0x66E635: fstp    [esp+4ECh+var_4EC]; float
0x66E638: call    sub_532090
0x66E63D: mov     edi, eax
0x66E63F: jmp     short loc_66E643
0x66E641: xor     edi, edi
0x66E643: mov     ecx, ds:0B333C4h
0x66E649: lea     eax, [esp+4E4h+var_458]
0x66E650: push    eax
0x66E651: mov     byte ptr [esp+4E8h+var_4], bl
0x66E658: call    sub_65ABE0
0x66E65D: movzx   eax, word ptr [eax+2]
0x66E661: shl     eax, 10h
0x66E664: or      eax, 1Fh
0x66E667: lea     ecx, [esp+4E4h+var_450]
0x66E66E: mov     esi, eax
0x66E670: call    sub_532250
0x66E675: cmp     edi, ebx
0x66E677: mov     byte ptr [esp+4E4h+var_4], 2
0x66E67F: mov     [esp+4E4h+var_450], esi
0x66E686: jz      short loc_66E694
0x66E688: mov     ecx, [edi+8]
0x66E68B: mov     [esp+4E4h+var_44C], ecx
0x66E692: jmp     short loc_66E69B
0x66E694: mov     [esp+4E4h+var_44C], ebx
0x66E69B: fldz
0x66E69D: mov     eax, [esp+4E4h+var_4AC]
0x66E6A1: fst     [esp+4E4h+var_42C]
0x66E6A8: lea     edx, [esp+4E4h+var_270]
0x66E6AF: fst     [esp+4E4h+var_428]
0x66E6B6: push    edx
0x66E6B7: fst     [esp+4E8h+var_424]
0x66E6BE: lea     ecx, [esp+4E8h+var_400]
0x66E6C5: fst     [esp+4E8h+var_420]
0x66E6CC: fst     [esp+4E8h+var_418]
0x66E6D3: fst     [esp+4E8h+var_414]
0x66E6DA: fst     [esp+4E8h+var_410]
0x66E6E1: fst     [esp+4E8h+var_40C]
0x66E6E8: fst     [esp+4E8h+var_404]
0x66E6EF: fld1
0x66E6F1: fst     [esp+4E8h+var_430]
0x66E6F8: fst     [esp+4E8h+var_41C]
0x66E6FF: fstp    [esp+4E8h+var_408]
0x66E706: fst     [esp+4E8h+var_400]
0x66E70D: fst     [esp+4E8h+var_3FC]
0x66E714: fst     [esp+4E8h+var_3F8]
0x66E71B: fstp    [esp+4E8h+var_3F4]
0x66E722: fld     dword ptr [eax]
0x66E724: fld     qword ptr ds:0A39088h
0x66E72A: fmul    st(1), st
0x66E72C: fxch    st(1)
0x66E72E: fstp    [esp+4E8h+var_270]
0x66E735: fld     dword ptr [eax+4]
0x66E738: fmul    st, st(1)
0x66E73A: fstp    [esp+4E8h+var_26C]
0x66E741: fmul    dword ptr [eax+8]
0x66E744: fstp    [esp+4E8h+var_268]
0x66E74B: call    sub_47DCD0
0x66E750: lea     eax, [esp+4E4h+var_450]
0x66E757: push    eax
0x66E758: lea     ecx, [esp+4E8h+var_46C]
0x66E75C: call    sub_531FC0
0x66E761: mov     ecx, [esp+4E4h+var_4B0]; this
0x66E765: mov     byte ptr [esp+4E4h+var_4], 3
0x66E76D: call    TESObjectREFR_GetParentCell
0x66E772: mov     esi, eax
0x66E774: mov     ecx, esi; this
0x66E776: call    TESObjectCELL_IsInterior
0x66E77B: test    al, al
0x66E77D: jz      short loc_66E789
0x66E77F: lea     ecx, [esi+28h]
0x66E782: call    sub_424180
0x66E787: jmp     short loc_66E78E
0x66E789: mov     eax, ds:0B35C24h
0x66E78E: push    eax
0x66E78F: lea     ecx, [esp+4E8h+var_46C]
0x66E793: call    sub_89F470
0x66E798: lea     ecx, [esp+4E4h+var_374]
0x66E79F: mov     [esp+4E4h+var_388], offset ??_7hkAllCdBodyPairCollector@@6B@; const hkAllCdBodyPairCollector::`vftable'
0x66E7AA: mov     [esp+4E4h+var_380], ecx
0x66E7B1: mov     [esp+4E4h+var_378], 80000010h
0x66E7BC: mov     eax, [esp+4E4h+var_464]
0x66E7C3: cmp     eax, ebx
0x66E7C5: mov     byte ptr [esp+4E4h+var_4], 4
0x66E7CD: mov     [esp+4E4h+var_37C], ebx
0x66E7D4: mov     byte ptr [esp+4E4h+var_384], bl
0x66E7DB: mov     esi, eax
0x66E7DD: jz      short loc_66E802
0x66E7DF: lea     ecx, [esp+4E4h+var_46C]
0x66E7E3: call    sub_89F570
0x66E7E8: mov     edx, [esi]
0x66E7EA: mov     edx, [edx+38h]
0x66E7ED: lea     eax, [esp+4E4h+var_388]
0x66E7F4: push    eax
0x66E7F5: mov     ecx, esi
0x66E7F7: call    edx
0x66E7F9: lea     ecx, [esp+4E4h+var_46C]
0x66E7FD: call    sub_89F570
0x66E802: lea     ecx, [esp+4E4h+var_46C]
0x66E806: call    sub_8AECA0
0x66E80B: cmp     edi, ebx
0x66E80D: jz      short loc_66E819
0x66E80F: mov     eax, [edi]
0x66E811: mov     edx, [eax]
0x66E813: push    1
0x66E815: mov     ecx, edi
0x66E817: call    edx
0x66E819: cmp     [esp+4E4h+var_37C], ebx
0x66E820: jnz     short loc_66E827
0x66E822: mov     [esp+4E4h+var_4CD], 1
0x66E827: lea     ecx, [esp+4E4h+var_388]; this
0x66E82E: mov     byte ptr [esp+4E4h+var_4], 3
0x66E836: call    ??1hkAllCdBodyPairCollector@@UAE@XZ; hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector(void)
0x66E83B: lea     ecx, [esp+4E4h+var_46C]; this
0x66E83F: mov     byte ptr [esp+4E4h+var_4], 2
0x66E847: call    ??1bhkSimpleShapePhantom@@UAE@XZ; bhkSimpleShapePhantom::~bhkSimpleShapePhantom(void)
0x66E84C: mov     eax, [esp+4E4h+var_43C]
0x66E853: test    eax, eax
0x66E855: mov     byte ptr [esp+4E4h+var_4], bl
0x66E85C: js      short loc_66E899
0x66E85E: mov     ecx, large fs:2Ch
0x66E865: mov     edx, ds:0BA9DE4h
0x66E86B: mov     ecx, [ecx+edx*4]
0x66E86E: mov     ecx, [ecx+19Ch]
0x66E874: cmp     ecx, ebx
0x66E876: jnz     short loc_66E87E
0x66E878: mov     ecx, ds:0BA7D9Ch
0x66E87E: mov     edx, [esp+4E4h+var_444]
0x66E885: and     eax, 3FFFFFFFh
0x66E88A: add     eax, eax
0x66E88C: add     eax, eax
0x66E88E: push    14h
0x66E890: add     eax, eax
0x66E892: push    eax
0x66E893: push    edx
0x66E894: call    sub_8A75D0
0x66E899: mov     edi, [esp+4E4h+var_4A0]
0x66E89D: lea     ecx, [esp+4E4h+var_1C0]
0x66E8A4: mov     [esp+4E4h+var_4], 0FFFFFFFFh
0x66E8AF: call    sub_538C80
0x66E8B4: add     edi, 1
0x66E8B7: cmp     [esp+4E4h+var_4CD], bl
0x66E8BB: mov     [esp+4E4h+var_4A0], edi
0x66E8BF: jz      loc_66E280
0x66E8C5: mov     al, [esp+4E4h+var_4CD]
0x66E8C9: mov     ecx, dword ptr [esp+4E4h+var_C]
0x66E8D0: mov     large fs:0, ecx
0x66E8D7: pop     ecx
0x66E8D8: pop     edi
0x66E8D9: pop     esi
0x66E8DA: pop     ebx
0x66E8DB: mov     ecx, [esp+4D4h+var_14]
0x66E8E2: xor     ecx, esp
0x66E8E4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x66E8E9: mov     esp, ebp
0x66E8EB: pop     ebp
0x66E8EC: retn    10h
0x66E8EF: cmp     [esp+4E4h+var_4CD], bl
0x66E8F3: jnz     short loc_66E8C5
0x66E8F5: cmp     [ebp+arg_8], bl
0x66E8F8: jz      short loc_66E8C5
0x66E8FA: fld     [esp+4E4h+var_4B4]
0x66E8FE: fmul    qword ptr ds:0A2FAA0h
0x66E904: fstp    [esp+4E4h+var_4A4]
0x66E908: fld     [esp+4E4h+var_4A4]
0x66E90C: fcom    qword ptr ds:0A4D910h
0x66E912: fnstsw  ax
0x66E914: test    ah, 41h
0x66E917: jnz     short loc_66E921
0x66E919: fstp    st
0x66E91B: fld     dword ptr ds:0A56670h
0x66E921: mov     eax, [esp+4E4h+var_4AC]
0x66E925: fstp    [esp+4E4h+var_4B0]
0x66E929: mov     ecx, [esi+2Ch]
0x66E92C: mov     [eax], ecx
0x66E92E: mov     edx, [esi+30h]
0x66E931: mov     [eax+4], edx
0x66E934: mov     ecx, [esi+34h]
0x66E937: mov     [eax+8], ecx
0x66E93A: fld     dword ptr [eax+8]
0x66E93D: fadd    [esp+4E4h+var_4B0]
0x66E941: fstp    dword ptr [eax+8]
0x66E944: mov     al, 1
0x66E946: jmp     short loc_66E8C9
