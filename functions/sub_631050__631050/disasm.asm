0x631050: sub     esp, 178h
0x631056: mov     eax, ds:0B30AACh
0x63105B: xor     eax, esp
0x63105D: mov     [esp+178h+var_4], eax
0x631064: push    ebx
0x631065: push    ebp
0x631066: push    esi
0x631067: mov     esi, [esp+184h+arg_0]
0x63106E: mov     ebp, ecx
0x631070: push    edi
0x631071: mov     ecx, esi; this
0x631073: call    TESObjectREFR_GetParentCell
0x631078: test    eax, eax
0x63107A: jz      loc_6316DC
0x631080: mov     eax, [ebp+0]
0x631083: mov     edx, [eax+184h]
0x631089: mov     ecx, ebp
0x63108B: call    edx
0x63108D: mov     edi, eax
0x63108F: test    edi, edi
0x631091: jz      loc_6316DC
0x631097: cmp     dword ptr [edi+18h], 1
0x63109B: jz      short loc_6310AD
0x63109D: mov     eax, [ebp+0]
0x6310A0: mov     edx, [eax+188h]
0x6310A6: push    0FFFFFFFFh
0x6310A8: push    esi
0x6310A9: mov     ecx, ebp
0x6310AB: call    edx
0x6310AD: mov     ecx, esi; this
0x6310AF: call    TESObjectREFR_GetParentCell
0x6310B4: mov     ecx, eax; this
0x6310B6: call    TESObjectCELL_IsInterior
0x6310BB: test    al, al
0x6310BD: jnz     loc_6316DC
0x6310C3: mov     eax, [esi]
0x6310C5: mov     edx, [eax+174h]
0x6310CB: mov     ecx, esi
0x6310CD: call    edx
0x6310CF: mov     ecx, [eax]
0x6310D1: mov     [esp+188h+a2], ecx
0x6310D5: mov     edx, [eax+4]
0x6310D8: mov     [esp+188h+var_170], edx
0x6310DC: mov     eax, [eax+8]
0x6310DF: push    0; int
0x6310E1: mov     ecx, esi; this
0x6310E3: mov     [esp+18Ch+var_16C], eax
0x6310E7: call    TESObjectREFR_GetWorldSpace
0x6310EC: fld     [esp+18Ch+var_170]
0x6310F0: mov     ecx, ds:0B33A98h
0x6310F6: push    eax; int
0x6310F7: sub     esp, 8
0x6310FA: fstp    [esp+198h+a5]; float
0x6310FE: fld     [esp+198h+a2]
0x631102: fstp    [esp+198h+var_198]; float
0x631105: call    sub_44A270
0x63110A: mov     edx, [esi]
0x63110C: mov     [esp+188h+a1], eax
0x631110: mov     eax, [edx+174h]
0x631116: mov     ecx, esi
0x631118: call    eax
0x63111A: mov     ecx, edi
0x63111C: mov     ebx, eax
0x63111E: call    sub_566DB0
0x631123: shr     eax, 2
0x631126: test    eax, eax
0x631128: mov     [esp+188h+var_178], eax
0x63112C: fild    [esp+188h+var_178]
0x631130: jge     short loc_631138
0x631132: fadd    dword ptr ds:0A2FC78h
0x631138: push    ecx
0x631139: mov     ecx, edi
0x63113B: fstp    [esp+18Ch+var_190+4]; float
0x63113E: call    sub_566DB0
0x631143: mov     ecx, eax
0x631145: mov     eax, 0AAAAAAABh
0x63114A: mul     ecx
0x63114C: shr     edx, 1
0x63114E: add     edx, edx
0x631150: test    edx, edx
0x631152: mov     [esp+18Ch+var_178], edx
0x631156: fild    [esp+18Ch+var_178]
0x63115A: jge     short loc_631162
0x63115C: fadd    dword ptr ds:0A2FC78h
0x631162: mov     edx, [ebx]
0x631164: mov     ecx, [ebx+4]
0x631167: sub     esp, 10h
0x63116A: mov     eax, esp
0x63116C: fstp    [esp+19Ch+var_190]; float
0x631170: mov     [eax], edx
0x631172: mov     edx, [ebx+8]
0x631175: mov     [eax+4], ecx
0x631178: mov     [eax+8], edx
0x63117B: lea     eax, [esp+19Ch+var_168]
0x63117F: push    eax; int
0x631180: call    sub_62E790
0x631185: mov     ecx, [eax]
0x631187: add     esp, 18h
0x63118A: mov     [esp+188h+a2], ecx
0x63118E: mov     edx, [eax+4]
0x631191: push    0; int
0x631193: mov     [esp+18Ch+var_170], edx
0x631197: mov     edx, [esp+18Ch+a1]
0x63119B: mov     ecx, [eax+8]
0x63119E: push    0; float
0x6311A0: push    1; float
0x6311A2: push    edx; int
0x6311A3: mov     [esp+198h+var_16C], ecx
0x6311A7: mov     edx, [eax]
0x6311A9: sub     esp, 0Ch
0x6311AC: mov     ecx, esp
0x6311AE: mov     [ecx], edx
0x6311B0: mov     edx, [eax+4]
0x6311B3: mov     eax, [eax+8]
0x6311B6: mov     [ecx+4], edx
0x6311B9: mov     [ecx+8], eax
0x6311BC: lea     ecx, [esp+1A4h+var_168]
0x6311C0: push    ecx; int
0x6311C1: mov     ecx, esi
0x6311C3: call    sub_5E2E20
0x6311C8: cmp     dword ptr ds:0B3B928h, 0
0x6311CF: mov     edx, [eax]
0x6311D1: mov     [esp+188h+a2], edx
0x6311D5: mov     ecx, [eax+4]
0x6311D8: mov     [esp+188h+var_170], ecx
0x6311DC: mov     edx, [eax+8]
0x6311DF: mov     [esp+188h+var_16C], edx
0x6311E3: jnz     loc_631287
0x6311E9: mov     ecx, offset unk_B3B94C
0x6311EE: call    BSSimpleList_Clear
0x6311F3: lea     eax, [ebp+1BCh]
0x6311F9: xor     ebx, ebx
0x6311FB: mov     [esp+188h+var_178], eax
0x6311FF: nop
0x631200: mov     ecx, [esp+188h+var_178]
0x631204: mov     eax, [ecx]
0x631206: test    eax, eax
0x631208: jz      short loc_631222
0x63120A: push    eax
0x63120B: mov     ecx, offset unk_B3B94C
0x631210: call    BSSimpleList_PushFront
0x631215: add     [esp+188h+var_178], 4
0x63121A: add     ebx, 1
0x63121D: cmp     ebx, 4
0x631220: jl      short loc_631200
0x631222: push    esi; a7
0x631223: push    offset sub_62EAA0; a6
0x631228: mov     ecx, edi
0x63122A: call    sub_566DB0
0x63122F: test    eax, eax
0x631231: mov     [esp+190h+var_178], eax
0x631235: fild    [esp+190h+var_178]
0x631239: jge     short loc_631241
0x63123B: fadd    dword ptr ds:0A2FC78h
0x631241: push    ecx
0x631242: fstp    [esp+194h+a5]; a5
0x631245: push    esi
0x631246: lea     edx, [esp+198h+var_168]
0x63124A: push    edx
0x63124B: mov     ecx, edi
0x63124D: call    sub_566B30
0x631252: push    eax; a4
0x631253: mov     ecx, edi
0x631255: call    sub_566DB0
0x63125A: shr     eax, 1
0x63125C: test    eax, eax
0x63125E: mov     [esp+198h+var_178], eax
0x631262: fild    [esp+198h+var_178]
0x631266: jge     short loc_63126E
0x631268: fadd    dword ptr ds:0A2FC78h
0x63126E: push    ecx
0x63126F: mov     ecx, [esp+19Ch+a1]
0x631273: fstp    [esp+19Ch+a3]; a3
0x631276: lea     eax, [esp+19Ch+a2]
0x63127A: push    eax; a2
0x63127B: push    ecx; a1
0x63127C: mov     ecx, ds:0B33A98h
0x631282: call    sub_446B90
0x631287: mov     ebx, ds:0B3B928h
0x63128D: xor     edx, edx
0x63128F: cmp     ebx, edx
0x631291: mov     ds:0B3B928h, edx
0x631297: jz      loc_631401
0x63129D: cmp     [ebp+1C8h], edx
0x6312A3: jz      short loc_6312CA
0x6312A5: mov     eax, [ebp+200h]
0x6312AB: mov     [ebp+eax*4+1BCh], ebx
0x6312B2: add     dword ptr [ebp+200h], 1
0x6312B9: cmp     dword ptr [ebp+200h], 3
0x6312C0: jle     short loc_6312EA
0x6312C2: mov     [ebp+200h], edx
0x6312C8: jmp     short loc_6312EA
0x6312CA: xor     eax, eax
0x6312CC: lea     ecx, [ebp+1BCh]
0x6312D2: cmp     [ecx], edx
0x6312D4: jz      short loc_6312E3
0x6312D6: add     eax, 1
0x6312D9: add     ecx, 4
0x6312DC: cmp     eax, 4
0x6312DF: jl      short loc_6312D2
0x6312E1: jmp     short loc_6312EA
0x6312E3: mov     [ebp+eax*4+1BCh], ebx
0x6312EA: mov     edx, [ebx]
0x6312EC: mov     eax, [edx+170h]
0x6312F2: mov     ecx, ebx
0x6312F4: call    eax
0x6312F6: push    eax
0x6312F7: call    sub_46D5C0
0x6312FC: add     esp, 4
0x6312FF: call    Double_To_SInt32
0x631304: test    eax, eax
0x631306: mov     [esp+188h+var_178], eax
0x63130A: jnz     short loc_631316
0x63130C: mov     ecx, ds:0B36B28h
0x631312: mov     [esp+188h+var_178], ecx
0x631316: fild    [esp+188h+var_178]
0x63131A: push    0
0x63131C: push    ebx
0x63131D: mov     ecx, esi
0x63131F: fstp    [esp+190h+var_178]
0x631323: call    TesObjectREF_GetDistance
0x631328: fld     [esp+188h+var_178]
0x63132C: fcompp
0x63132E: fnstsw  ax
0x631330: test    ah, 5
0x631333: jp      loc_6316DC
0x631339: mov     edx, [ebp+0]
0x63133C: mov     eax, [edx+36Ch]
0x631342: mov     ecx, ebp
0x631344: call    eax
0x631346: test    eax, eax
0x631348: jz      short loc_631358
0x63134A: mov     edx, [ebp+0]
0x63134D: mov     eax, [edx+1B0h]
0x631353: push    esi
0x631354: mov     ecx, ebp
0x631356: call    eax
0x631358: fld     [esp+188h+var_178]
0x63135C: mov     edi, [ebp+0]
0x63135F: sub     esp, 8
0x631362: fstp    [esp+190h+var_190+4]
0x631366: mov     ecx, ebx; this
0x631368: fld     [esp+190h+arg_4]
0x63136F: add     edi, 418h
0x631375: fstp    [esp+190h+var_190]
0x631378: call    TESObjectREFR_GetWorldSpace
0x63137D: push    eax
0x63137E: mov     ecx, ebx; this
0x631380: call    TESObjectREFR_GetParentCell
0x631385: mov     edx, [ebx]
0x631387: push    eax
0x631388: mov     eax, [edx+174h]
0x63138E: mov     ecx, ebx
0x631390: call    eax
0x631392: mov     edx, [edi]
0x631394: push    eax
0x631395: push    esi
0x631396: mov     ecx, ebp
0x631398: call    edx
0x63139A: call    sub_579440
0x63139F: cmp     eax, esi
0x6313A1: jnz     loc_6316DC
0x6313A7: mov     eax, [ebx]
0x6313A9: mov     edx, [eax+174h]
0x6313AF: mov     ecx, ebx
0x6313B1: call    edx
0x6313B3: mov     edi, eax
0x6313B5: mov     eax, [ebx]
0x6313B7: mov     edx, [eax+174h]
0x6313BD: mov     ecx, ebx
0x6313BF: call    edx
0x6313C1: fld     dword ptr [eax+4]
0x6313C4: sub     esp, 10h
0x6313C7: fstp    qword ptr [esp+198h+var_190]
0x6313CB: mov     ecx, ebx; this
0x6313CD: fld     dword ptr [edi]
0x6313CF: fstp    qword ptr [esp+198h+var_198]
0x6313D2: call    TESObjectREFR_GetName
0x6313D7: push    eax
0x6313D8: mov     ecx, esi; this
0x6313DA: call    TESObjectREFR_GetName
0x6313DF: push    eax
0x6313E0: lea     eax, [esp+1A0h+Format]
0x6313E4: push    offset aSIsWanderingTo; "%s is wandering to object %s at x %.02f"...
0x6313E9: push    eax
0x6313EA: call    __sprintf
0x6313EF: lea     ecx, [esp+1A8h+Format]
0x6313F3: push    ecx; Format
0x6313F4: call    Interface_ConsolePrint
0x6313F9: add     esp, 24h
0x6313FC: jmp     loc_6316DC
0x631401: push    esi
0x631402: lea     edx, [esp+18Ch+var_154]
0x631406: push    edx
0x631407: mov     ecx, edi
0x631409: call    sub_566B30
0x63140E: fld     [esp+188h+a2]
0x631412: fsub    dword ptr [eax]
0x631414: fstp    [esp+188h+var_168]
0x631418: fld     [esp+188h+var_170]
0x63141C: fsub    dword ptr [eax+4]
0x63141F: fstp    [esp+188h+var_164]
0x631423: fld     [esp+188h+var_16C]
0x631427: fsub    dword ptr [eax+8]
0x63142A: fstp    [esp+188h+var_160]
0x63142E: fld     [esp+188h+var_164]
0x631432: fld     [esp+188h+var_168]
0x631436: fld     [esp+188h+var_160]
0x63143A: fld     st(1)
0x63143C: fmulp   st(2), st
0x63143E: fld     st(2)
0x631440: fmulp   st(3), st
0x631442: fxch    st(1)
0x631444: faddp   st(2), st
0x631446: fmul    st, st
0x631448: faddp   st(1), st
0x63144A: fstp    [esp+188h+var_178]
0x63144E: fld     [esp+188h+var_178]
0x631452: call    __CIsqrt
0x631457: fstp    [esp+188h+var_178]
0x63145B: fld     [esp+188h+var_178]
0x63145F: mov     ecx, edi
0x631461: fstp    [esp+188h+var_178]
0x631465: call    sub_566DB0
0x63146A: test    eax, eax
0x63146C: mov     [esp+188h+var_158], eax
0x631470: fild    [esp+188h+var_158]
0x631474: jge     short loc_63147C
0x631476: fadd    dword ptr ds:0A2FC78h
0x63147C: fld     [esp+188h+var_178]
0x631480: fcompp
0x631482: fnstsw  ax
0x631484: test    ah, 41h
0x631487: jnz     loc_6315C8
0x63148D: lea     ecx, [ecx+0]
0x631490: push    esi
0x631491: lea     eax, [esp+18Ch+var_154]
0x631495: push    eax
0x631496: mov     ecx, edi
0x631498: call    sub_566B30
0x63149D: mov     ecx, edi
0x63149F: mov     ebx, eax
0x6314A1: call    sub_566DB0
0x6314A6: shr     eax, 1
0x6314A8: test    eax, eax
0x6314AA: mov     [esp+188h+var_158], eax
0x6314AE: fild    [esp+188h+var_158]
0x6314B2: jge     short loc_6314BA
0x6314B4: fadd    dword ptr ds:0A2FC78h
0x6314BA: push    ecx
0x6314BB: mov     ecx, edi
0x6314BD: fstp    [esp+18Ch+var_190+4]; float
0x6314C0: call    sub_566DB0
0x6314C5: test    eax, eax
0x6314C7: mov     [esp+18Ch+var_158], eax
0x6314CB: fild    [esp+18Ch+var_158]
0x6314CF: jge     short loc_6314D7
0x6314D1: fadd    dword ptr ds:0A2FC78h
0x6314D7: mov     ecx, [ebx]
0x6314D9: mov     edx, [ebx+4]
0x6314DC: sub     esp, 10h
0x6314DF: mov     eax, esp
0x6314E1: fstp    [esp+19Ch+var_190]; float
0x6314E5: mov     [eax], ecx
0x6314E7: mov     ecx, [ebx+8]
0x6314EA: mov     [eax+4], edx
0x6314ED: lea     edx, [esp+19Ch+var_13C]
0x6314F1: push    edx; int
0x6314F2: mov     [eax+8], ecx
0x6314F5: call    sub_62E790
0x6314FA: mov     ecx, [eax]
0x6314FC: mov     [esp+1A0h+a2], ecx
0x631500: mov     edx, [eax+4]
0x631503: add     esp, 18h
0x631506: push    esi
0x631507: lea     ecx, [esp+18Ch+var_148]
0x63150B: mov     [esp+18Ch+var_170], edx
0x63150F: mov     eax, [eax+8]
0x631512: push    ecx
0x631513: mov     ecx, edi
0x631515: mov     [esp+190h+var_16C], eax
0x631519: call    sub_566B30
0x63151E: fld     [esp+188h+a2]
0x631522: fsub    dword ptr [eax]
0x631524: push    0; int
0x631526: mov     ecx, esi; this
0x631528: fstp    [esp+18Ch+var_168]
0x63152C: fld     [esp+18Ch+var_170]
0x631530: fsub    dword ptr [eax+4]
0x631533: fstp    [esp+18Ch+var_164]
0x631537: fld     [esp+18Ch+var_16C]
0x63153B: fsub    dword ptr [eax+8]
0x63153E: fstp    [esp+18Ch+var_160]
0x631542: call    TESObjectREFR_GetWorldSpace
0x631547: fld     [esp+18Ch+var_170]
0x63154B: mov     ecx, ds:0B33A98h
0x631551: push    eax; int
0x631552: sub     esp, 8
0x631555: fstp    [esp+198h+a5]; float
0x631559: fld     [esp+198h+a2]
0x63155D: fstp    [esp+198h+var_198]; float
0x631560: call    sub_44A270
0x631565: fld     [esp+188h+var_164]
0x631569: mov     [esp+188h+a1], eax
0x63156D: fld     [esp+188h+var_168]
0x631571: fld     [esp+188h+var_160]
0x631575: fld     st(1)
0x631577: fmulp   st(2), st
0x631579: fld     st(2)
0x63157B: fmulp   st(3), st
0x63157D: fxch    st(1)
0x63157F: faddp   st(2), st
0x631581: fmul    st, st
0x631583: faddp   st(1), st
0x631585: fstp    [esp+188h+var_178]
0x631589: fld     [esp+188h+var_178]
0x63158D: call    __CIsqrt
0x631592: fstp    [esp+188h+var_178]
0x631596: fld     [esp+188h+var_178]
0x63159A: mov     ecx, edi
0x63159C: fstp    [esp+188h+var_178]
0x6315A0: call    sub_566DB0
0x6315A5: test    eax, eax
0x6315A7: mov     [esp+188h+var_158], eax
0x6315AB: fild    [esp+188h+var_158]
0x6315AF: jge     short loc_6315B7
0x6315B1: fadd    dword ptr ds:0A2FC78h
0x6315B7: fld     [esp+188h+var_178]
0x6315BB: fcompp
0x6315BD: fnstsw  ax
0x6315BF: test    ah, 41h
0x6315C2: jz      loc_631490
0x6315C8: mov     edx, [esp+188h+a1]
0x6315CC: mov     ecx, [esp+188h+a2]
0x6315D0: push    0; int
0x6315D2: push    0; float
0x6315D4: push    1; float
0x6315D6: push    edx; int
0x6315D7: mov     edx, [esp+198h+var_170]
0x6315DB: sub     esp, 0Ch
0x6315DE: mov     eax, esp
0x6315E0: mov     [eax], ecx
0x6315E2: mov     ecx, [esp+1A4h+var_16C]
0x6315E6: mov     [eax+4], edx
0x6315E9: lea     edx, [esp+1A4h+var_148]
0x6315ED: mov     [eax+8], ecx
0x6315F0: push    edx; int
0x6315F1: mov     ecx, esi
0x6315F3: call    sub_5E2E20
0x6315F8: cmp     dword ptr [ebp+1C8h], 0
0x6315FF: mov     ecx, [eax]
0x631601: mov     [esp+188h+a2], ecx
0x631605: mov     edx, [eax+4]
0x631608: mov     [esp+188h+var_170], edx
0x63160C: mov     eax, [eax+8]
0x63160F: mov     [esp+188h+var_16C], eax
0x631613: jz      short loc_631643
0x631615: mov     ecx, [ebp+1C0h]
0x63161B: mov     edx, [ebp+1C4h]
0x631621: mov     eax, [ebp+1C8h]
0x631627: mov     [ebp+1BCh], ecx
0x63162D: mov     [ebp+1C0h], edx
0x631633: mov     [ebp+1C4h], eax
0x631639: mov     dword ptr [ebp+1C8h], 0
0x631643: mov     edx, [ebp+0]
0x631646: mov     eax, [edx+36Ch]
0x63164C: mov     ecx, ebp
0x63164E: call    eax
0x631650: test    eax, eax
0x631652: jz      short loc_631662
0x631654: mov     edx, [ebp+0]
0x631657: mov     eax, [edx+1B0h]
0x63165D: push    esi
0x63165E: mov     ecx, ebp
0x631660: call    eax
0x631662: fld     dword ptr ds:0A30634h
0x631668: mov     edi, [ebp+0]
0x63166B: sub     esp, 8
0x63166E: fstp    [esp+190h+var_190+4]
0x631672: mov     ecx, esi; this
0x631674: fld     dword ptr ds:0A2FE7Ch
0x63167A: add     edi, 418h
0x631680: fstp    [esp+190h+var_190]
0x631683: call    TESObjectREFR_GetWorldSpace
0x631688: push    eax
0x631689: mov     ecx, esi; this
0x63168B: call    TESObjectREFR_GetParentCell
0x631690: mov     edx, [edi]
0x631692: push    eax
0x631693: lea     ecx, [esp+198h+a2]
0x631697: push    ecx
0x631698: push    esi
0x631699: mov     ecx, ebp
0x63169B: call    edx
0x63169D: call    sub_579440
0x6316A2: cmp     eax, esi
0x6316A4: jnz     short loc_6316DC
0x6316A6: fld     [esp+188h+var_170]
0x6316AA: sub     esp, 10h
0x6316AD: fstp    qword ptr [esp+198h+var_190]
0x6316B1: mov     ecx, esi; this
0x6316B3: fld     [esp+198h+a2]
0x6316B7: fstp    qword ptr [esp+198h+var_198]
0x6316BA: call    TESObjectREFR_GetName
0x6316BF: push    eax
0x6316C0: lea     eax, [esp+19Ch+Format]
0x6316C4: push    offset aSIsWandering_0; "%s is wandering to point x %.02f and y "...
0x6316C9: push    eax
0x6316CA: call    __sprintf
0x6316CF: lea     ecx, [esp+1A4h+Format]
0x6316D3: push    ecx; Format
0x6316D4: call    Interface_ConsolePrint
0x6316D9: add     esp, 20h
0x6316DC: mov     ecx, [esp+188h+var_4]
0x6316E3: pop     edi
0x6316E4: pop     esi
0x6316E5: pop     ebp
0x6316E6: pop     ebx
0x6316E7: xor     ecx, esp
0x6316E9: xor     al, al
0x6316EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6316F0: add     esp, 178h
0x6316F6: retn    8
