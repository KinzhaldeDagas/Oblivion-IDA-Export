0x4774BD: add     ebx, 1; jumptable 004770CD default case
0x4774C0: cmp     ebx, 5
0x4774C3: jl      loc_476FA6
0x4774C9: cmp     dword ptr [esi+8], 0
0x4774CD: mov     edi, [ebp+8]
0x4774D0: jz      loc_477946
0x4774D6: xor     ebx, ebx
0x4774D8: test    edi, edi
0x4774DA: mov     [esp+arg_10], ebx
0x4774DE: jz      short loc_47752F
0x4774E0: mov     edx, [edi]
0x4774E2: mov     eax, [edx+190h]
0x4774E8: mov     ecx, edi
0x4774EA: call    eax
0x4774EC: test    al, al
0x4774EE: jz      short loc_47752F
0x4774F0: mov     edx, [edi]
0x4774F2: mov     eax, [edx+380h]
0x4774F8: mov     ebx, edi
0x4774FA: mov     ecx, edi
0x4774FC: mov     [esp+arg_10], ebx
0x477500: call    eax
0x477502: test    eax, eax
0x477504: jz      short loc_47752F
0x477506: mov     edx, [edi]
0x477508: mov     eax, [edx+18Ch]
0x47750E: mov     ecx, edi
0x477510: call    eax
0x477512: cmp     eax, 2
0x477515: jl      short loc_47752F
0x477517: mov     edx, [edi]
0x477519: mov     eax, [edx+18Ch]
0x47751F: mov     ecx, edi
0x477521: call    eax
0x477523: cmp     eax, 5
0x477526: jg      short loc_47752F
0x477528: mov     ecx, esi
0x47752A: call    sub_4728C0
0x47752F: mov     eax, [esi+20h]
0x477532: mov     ecx, [esi+18h]
0x477535: mov     edx, [esi+1Ch]
0x477538: mov     [esp+arg_58], eax
0x47753C: mov     eax, [esi+8]
0x47753F: cmp     word ptr [eax+0B6h], 0
0x477547: mov     [esp+arg_50], ecx
0x47754B: mov     [esp+arg_54], edx
0x47754F: ja      short loc_477555
0x477551: xor     eax, eax
0x477553: jmp     short loc_47755D
0x477555: mov     ecx, [eax+0B0h]
0x47755B: mov     eax, [ecx]
0x47755D: mov     ecx, ds:0B3F9B0h
0x477563: fld     dword ptr [eax+5Ch]
0x477566: mov     edx, ds:0B3F9A8h
0x47756C: fstp    [esp+arg_18]
0x477570: mov     eax, ds:0B3F9ACh
0x477575: mov     [esp+arg_34], ecx
0x477579: mov     ecx, ebx
0x47757B: mov     [esp+arg_F], 0
0x477580: mov     [esp+arg_2C], edx
0x477584: mov     [esp+arg_30], eax
0x477588: call    sub_5E05B0
0x47758D: test    al, al
0x47758F: jz      loc_477837
0x477595: mov     ecx, [esp+arg_10]
0x477599: mov     edx, [ecx]
0x47759B: mov     eax, [edx+25Ch]
0x4775A1: call    eax
0x4775A3: test    al, al
0x4775A5: jnz     loc_477837
0x4775AB: mov     ecx, [esp+arg_10]
0x4775AF: mov     ecx, [ecx+58h]
0x4775B2: mov     edx, [ecx]
0x4775B4: mov     eax, [edx+2C0h]
0x4775BA: call    eax
0x4775BC: movzx   ebx, ax
0x4775BF: mov     eax, [esi+0A0h]
0x4775C5: test    eax, eax
0x4775C7: jz      loc_477837
0x4775CD: test    bl, 0Fh
0x4775D0: jz      loc_477837
0x4775D6: mov     ecx, [eax+68h]
0x4775D9: xor     edi, edi
0x4775DB: call    TESAnimGroup_GetAnimationGroup
0x4775E0: add     eax, 0FFFFFFD8h
0x4775E3: cmp     eax, 1
0x4775E6: jbe     short loc_47760F
0x4775E8: mov     ecx, [esi+0A0h]
0x4775EE: mov     eax, [ecx+44h]
0x4775F1: sub     eax, 2
0x4775F4: jz      short loc_4775FF
0x4775F6: sub     eax, 3
0x4775F9: jnz     loc_477837
0x4775FF: mov     edx, [esp+arg_10]
0x477603: cmp     edx, ds:0B333C4h
0x477609: jnz     loc_477837
0x47760F: test    ebx, 200h
0x477615: mov     [esp+arg_F], 1
0x47761A: jz      short loc_47764C
0x47761C: test    bl, 1
0x47761F: jz      short loc_477628
0x477621: mov     edi, 7
0x477626: jmp     short loc_477682
0x477628: test    bl, 2
0x47762B: jz      short loc_477634
0x47762D: mov     edi, 8
0x477632: jmp     short loc_477682
0x477634: test    bl, 4
0x477637: jz      short loc_477640
0x477639: mov     edi, 9
0x47763E: jmp     short loc_477682
0x477640: test    bl, 8
0x477643: jz      short loc_477682
0x477645: mov     edi, 0Ah
0x47764A: jmp     short loc_477682
0x47764C: test    ebx, 0FF00h
0x477652: jz      short loc_477682
0x477654: test    bl, 1
0x477657: jz      short loc_477660
0x477659: mov     edi, 3
0x47765E: jmp     short loc_477682
0x477660: test    bl, 2
0x477663: jz      short loc_47766C
0x477665: mov     edi, 4
0x47766A: jmp     short loc_477682
0x47766C: test    bl, 4
0x47766F: jz      short loc_477678
0x477671: mov     edi, 5
0x477676: jmp     short loc_477682
0x477678: test    bl, 8
0x47767B: jz      short loc_477682
0x47767D: mov     edi, 6
0x477682: mov     eax, [esi+0A0h]
0x477688: mov     ecx, [eax+68h]
0x47768B: call    TESAnimGroup_GetAnimationGroup
0x477690: cmp     edi, eax
0x477692: jnz     loc_477746
0x477698: mov     ecx, [esi+0A0h]
0x47769E: fld     dword ptr ds:0B33E9Ch
0x4776A4: mov     ecx, [ecx+68h]
0x4776A7: fstp    [esp+arg_1C]
0x4776AB: lea     edx, [esp+arg_44]
0x4776AF: push    edx
0x4776B0: call    sub_51AAB0
0x4776B5: fld     dword ptr [eax]
0x4776B7: fld     [esp+arg_1C]
0x4776BB: fld     st
0x4776BD: fmulp   st(2), st
0x4776BF: fxch    st(1)
0x4776C1: fstp    [esp+arg_1C]
0x4776C5: fld     dword ptr [eax+4]
0x4776C8: fmul    st, st(1)
0x4776CA: fstp    [esp+arg_20]
0x4776CE: fmul    dword ptr [eax+8]
0x4776D1: fstp    [esp+arg_24]
0x4776D5: fld     [esp+arg_1C]
0x4776D9: fld     dword ptr ds:0B06530h
0x4776DF: fld     st
0x4776E1: fmulp   st(2), st
0x4776E3: fxch    st(1)
0x4776E5: fstp    [esp+arg_38]
0x4776E9: fld     [esp+arg_20]
0x4776ED: fmul    st, st(1)
0x4776EF: fstp    [esp+arg_3C]
0x4776F3: fmul    [esp+arg_24]
0x4776F7: fstp    [esp+arg_40]
0x4776FB: fld     dword ptr [esi+0BCh]
0x477701: fstp    [esp+arg_1C]
0x477705: fld     [esp+arg_38]
0x477709: fld     [esp+arg_1C]
0x47770D: fld     st
0x47770F: fmulp   st(2), st
0x477711: fxch    st(1)
0x477713: fstp    [esp+arg_1C]
0x477717: mov     eax, [esp+arg_1C]
0x47771B: fld     [esp+arg_3C]
0x47771F: mov     [esp+arg_2C], eax
0x477723: fmul    st, st(1)
0x477725: fstp    [esp+arg_20]
0x477729: mov     ecx, [esp+arg_20]
0x47772D: mov     [esp+arg_30], ecx
0x477731: fmul    [esp+arg_40]
0x477735: fstp    [esp+arg_24]
0x477739: mov     edx, [esp+arg_24]
0x47773D: mov     [esp+arg_34], edx
0x477741: jmp     loc_477837
0x477746: mov     ecx, [esp+arg_10]
0x47774A: push    0
0x47774C: push    0
0x47774E: push    edi
0x47774F: call    Actor_LoadAnimGroup?
0x477754: movzx   edi, ax
0x477757: push    edi
0x477758: call    sub_51AA00
0x47775D: add     esp, 4
0x477760: test    eax, eax
0x477762: jz      loc_477837
0x477768: mov     ecx, [esi+9Ch]
0x47776E: lea     eax, [esp+arg_1C]
0x477772: push    eax
0x477773: push    edi
0x477774: call    sub_470960
0x477779: test    al, al
0x47777B: jz      loc_477837
0x477781: mov     ecx, [esp+arg_1C]
0x477785: mov     edx, [ecx]
0x477787: mov     eax, [edx+10h]
0x47778A: push    0FFFFFFFFh
0x47778C: call    eax
0x47778E: test    eax, eax
0x477790: jz      loc_477837
0x477796: mov     eax, [eax+68h]
0x477799: fld     dword ptr ds:0B33E9Ch
0x47779F: lea     ecx, [esp+4+arg_40]
0x4777A3: fstp    [esp+4+arg_18]
0x4777A7: push    ecx
0x4777A8: mov     ecx, eax
0x4777AA: call    sub_51AAB0
0x4777AF: fld     [esp+4+arg_18]
0x4777B3: fld     st
0x4777B5: fmul    dword ptr [eax]
0x4777B7: fstp    [esp+4+arg_34]
0x4777BB: fld     dword ptr [eax+4]
0x4777BE: fmul    st, st(1)
0x4777C0: fstp    [esp+4+arg_38]
0x4777C4: fmul    dword ptr [eax+8]
0x4777C7: fstp    [esp+4+arg_3C]
0x4777CB: fld     [esp+4+arg_34]
0x4777CF: fld     dword ptr ds:0B06530h
0x4777D5: fld     st
0x4777D7: fmulp   st(2), st
0x4777D9: fxch    st(1)
0x4777DB: fstp    [esp+4+arg_40]
0x4777DF: fld     [esp+4+arg_38]
0x4777E3: fmul    st, st(1)
0x4777E5: fstp    [esp+4+arg_44]
0x4777E9: fmul    [esp+4+arg_3C]
0x4777ED: fstp    [esp+4+arg_48]
0x4777F1: fld     dword ptr [esi+0BCh]
0x4777F7: fstp    [esp+4+arg_18]
0x4777FB: fld     [esp+4+arg_40]
0x4777FF: fld     [esp+4+arg_18]
0x477803: fld     st
0x477805: fmulp   st(2), st
0x477807: fxch    st(1)
0x477809: fstp    [esp+4+arg_34]
0x47780D: mov     edx, [esp+4+arg_34]
0x477811: fld     [esp+4+arg_44]
0x477815: mov     [esp+4+arg_28], edx
0x477819: fmul    st, st(1)
0x47781B: fstp    [esp+4+arg_38]
0x47781F: mov     eax, [esp+4+arg_38]
0x477823: mov     [esp+4+arg_2C], eax
0x477827: fmul    [esp+4+arg_48]
0x47782B: fstp    [esp+4+arg_3C]
0x47782F: mov     ecx, [esp+4+arg_3C]
0x477833: mov     [esp+4+arg_30], ecx
0x477837: mov     eax, [esi+8]
0x47783A: fld     dword ptr [esi+94h]
0x477840: test    eax, eax
0x477842: fstp    [esp+arg_1C]
0x477846: jz      short loc_47785A
0x477848: mov     edx, [esi+18h]
0x47784B: mov     [eax+54h], edx
0x47784E: mov     ecx, [esi+1Ch]
0x477851: mov     [eax+58h], ecx
0x477854: mov     edx, [esi+20h]
0x477857: mov     [eax+5Ch], edx
0x47785A: mov     eax, [esi+8]
0x47785D: fld     [esp+arg_1C]
0x477861: push    eax; int
0x477862: push    ecx
0x477863: mov     ecx, [esi+4]
0x477866: fstp    [esp+8+var_8]; float
0x477869: call    sub_47C990
0x47786E: mov     ecx, [esi+8]
0x477871: test    ecx, ecx
0x477873: jz      short loc_4778AD
0x477875: lea     eax, [esi+18h]
0x477878: test    eax, eax
0x47787A: jz      short loc_47788D
0x47787C: mov     edx, [ecx+54h]
0x47787F: mov     [eax], edx
0x477881: mov     edx, [ecx+58h]
0x477884: mov     [eax+4], edx
0x477887: mov     ecx, [ecx+5Ch]
0x47788A: mov     [eax+8], ecx
0x47788D: mov     eax, [esi+8]
0x477890: mov     edx, ds:0B3F9A8h
0x477896: add     eax, 54h ; 'T'
0x477899: mov     [eax], edx
0x47789B: mov     ecx, ds:0B3F9ACh
0x4778A1: mov     [eax+4], ecx
0x4778A4: mov     edx, ds:0B3F9B0h
0x4778AA: mov     [eax+8], edx
0x4778AD: cmp     [esp+arg_F], 0
0x4778B2: jz      short loc_4778C2
0x4778B4: mov     eax, [esp+arg_2C]
0x4778B8: mov     ecx, [esp+arg_30]
0x4778BC: mov     edx, [esp+arg_34]
0x4778C0: jmp     short loc_4778EF
0x4778C2: fld     dword ptr [esi+18h]
0x4778C5: fsub    [esp+arg_50]
0x4778C9: fstp    [esp+arg_44]
0x4778CD: mov     eax, [esp+arg_44]
0x4778D1: fld     dword ptr [esi+1Ch]
0x4778D4: fsub    [esp+arg_54]
0x4778D8: fstp    [esp+arg_48]
0x4778DC: mov     ecx, [esp+arg_48]
0x4778E0: fld     dword ptr [esi+20h]
0x4778E3: fsub    [esp+arg_58]
0x4778E7: fstp    [esp+arg_4C]
0x4778EB: mov     edx, [esp+arg_4C]
0x4778EF: mov     [esi+0Ch], eax
0x4778F2: mov     [esi+10h], ecx
0x4778F5: mov     ecx, [ebp+8]
0x4778F8: mov     [esi+14h], edx
0x4778FB: mov     eax, [ecx]
0x4778FD: mov     edx, [eax+0ECh]
0x477903: call    edx
0x477905: fstp    [esp+arg_1C]
0x477909: fld     [esp+arg_1C]
0x47790D: fld     st
0x47790F: fmul    dword ptr [esi+0Ch]
0x477912: fstp    dword ptr [esi+0Ch]
0x477915: fld     dword ptr [esi+10h]
0x477918: fmul    st, st(1)
0x47791A: fstp    dword ptr [esi+10h]
0x47791D: fmul    dword ptr [esi+14h]
0x477920: fstp    dword ptr [esi+14h]
0x477923: mov     eax, [esi+8]
0x477926: cmp     word ptr [eax+0B6h], 0
0x47792E: ja      short loc_477934
0x477930: xor     eax, eax
0x477932: jmp     short loc_47793C
0x477934: mov     eax, [eax+0B0h]
0x47793A: mov     eax, [eax]
0x47793C: fld     dword ptr [eax+5Ch]
0x47793F: fsub    [esp+arg_18]
0x477943: fstp    dword ptr [esi+14h]
0x477946: mov     ecx, [esi+4]
0x477949: test    byte ptr [ecx+18h], 1
0x47794D: jnz     loc_477AD0
0x477953: mov     [esp+arg_10], 0
0x47795B: mov     edx, [esp+arg_10]
0x47795F: movsx   ecx, byte ptr [esi+90h]
0x477966: mov     eax, ecx
0x477968: sub     eax, 5
0x47796B: jz      loc_477ABC
0x477971: sub     eax, 1
0x477974: jz      short loc_477980
0x477976: cmp     edx, ecx
0x477978: jz      loc_477ABC
0x47797E: jmp     short loc_47798D
0x477980: test    edx, edx
0x477982: jle     short loc_47798D
0x477984: cmp     edx, 3
0x477987: jle     loc_477ABC
0x47798D: mov     eax, edx
0x47798F: sub     eax, 5
0x477992: mov     ecx, edx
0x477994: jz      short loc_4779A2
0x477996: sub     eax, 1
0x477999: jnz     short loc_4779A4
0x47799B: mov     ecx, 3
0x4779A0: jmp     short loc_4779A4
0x4779A2: xor     ecx, ecx
0x4779A4: mov     ecx, [esi+ecx*4+0A0h]
0x4779AB: test    ecx, ecx
0x4779AD: mov     [esp+arg_14], ecx
0x4779B1: jz      loc_477ABC
0x4779B7: cmp     [esp+edx*4+arg_70], ecx
0x4779BB: jnz     loc_477ABC
0x4779C1: mov     eax, [ecx+44h]
0x4779C4: cmp     eax, 1
0x4779C7: jz      short loc_4779D7
0x4779C9: cmp     eax, 2
0x4779CC: jz      short loc_4779D7
0x4779CE: cmp     eax, 5
0x4779D1: jnz     loc_477ABC
0x4779D7: cmp     dword ptr [esi+edx*4+24h], 0
0x4779DC: jz      short loc_477A3D
0x4779DE: mov     [esp+arg_1C], 0
0x4779E6: xor     bl, bl
0x4779E8: lea     edi, [esi+0A0h]
0x4779EE: mov     [esp+arg_18], 5
0x4779F6: mov     ecx, [edi]
0x4779F8: test    ecx, ecx
0x4779FA: jz      short loc_477A21
0x4779FC: mov     eax, [esi+edx*4+24h]
0x477A00: test    eax, eax
0x477A02: jz      short loc_477A21
0x477A04: mov     eax, [eax+8]
0x477A07: test    eax, eax
0x477A09: jz      short loc_477A21
0x477A0B: push    eax
0x477A0C: call    sub_49FD20
0x477A11: cmp     al, bl
0x477A13: jbe     short loc_477A1D
0x477A15: mov     edx, [edi]
0x477A17: mov     [esp+arg_1C], edx
0x477A1B: mov     bl, al
0x477A1D: mov     edx, [esp+arg_10]
0x477A21: add     edi, 4
0x477A24: sub     [esp+arg_18], 1
0x477A29: jnz     short loc_4779F6
0x477A2B: mov     eax, [esp+arg_1C]
0x477A2F: test    eax, eax
0x477A31: jz      loc_477ABC
0x477A37: cmp     eax, [esp+arg_14]
0x477A3B: jnz     short loc_477ABC
0x477A3D: fld     dword ptr [esi+94h]
0x477A43: push    ecx
0x477A44: mov     ecx, [esp+4+arg_14]
0x477A48: fstp    [esp+4+var_4]; float
0x477A4B: call    sub_49F4A0
0x477A50: fstp    [esp+arg_1C]
0x477A54: fld     dword ptr ds:0A7DEB4h
0x477A5A: fchs
0x477A5C: fstp    [esp+arg_18]
0x477A60: fld     [esp+arg_1C]
0x477A64: fld     st
0x477A66: fld     [esp+arg_18]
0x477A6A: fld     st
0x477A6C: fucomp  st(2)
0x477A6E: fnstsw  ax
0x477A70: fstp    st(1)
0x477A72: test    ah, 44h
0x477A75: jnp     short loc_477AB8
0x477A77: mov     ecx, [esp+arg_10]
0x477A7B: fld     [esp+ecx*4+arg_5C]
0x477A7F: lea     ecx, [esp+ecx*4+arg_5C]
0x477A83: fucompp
0x477A85: fnstsw  ax
0x477A87: test    ah, 44h
0x477A8A: jnp     short loc_477ABA
0x477A8C: fld     st
0x477A8E: fld     dword ptr [ecx]
0x477A90: fucompp
0x477A92: fnstsw  ax
0x477A94: test    ah, 44h
0x477A97: jnp     short loc_477ABA
0x477A99: mov     eax, [esp+arg_14]
0x477A9D: push    eax; int
0x477A9E: sub     esp, 8
0x477AA1: fstp    [esp+0Ch+var_8]; float
0x477AA5: fld     dword ptr [ecx]
0x477AA7: mov     ecx, [ebp+8]
0x477AAA: fstp    [esp+0Ch+var_C]; float
0x477AAD: push    ecx; int
0x477AAE: mov     ecx, [eax+68h]
0x477AB1: call    sub_51AF70
0x477AB6: jmp     short loc_477ABC
0x477AB8: fstp    st(1)
0x477ABA: fstp    st
0x477ABC: mov     edx, [esp+arg_10]
0x477AC0: add     edx, 1
0x477AC3: cmp     edx, 5
0x477AC6: mov     [esp+arg_10], edx
0x477ACA: jl      loc_47795F
0x477AD0: mov     edi, [esi+0CCh]
0x477AD6: test    edi, edi
0x477AD8: jz      short loc_477B27
0x477ADA: cmp     dword ptr [edi], 2
0x477ADD: jnz     short loc_477B27
0x477ADF: mov     eax, [edi+10h]
0x477AE2: test    eax, eax
0x477AE4: jz      short loc_477AEC
0x477AE6: cmp     dword ptr [eax+44h], 0
0x477AEA: jnz     short loc_477B27
0x477AEC: mov     ecx, [edi+28h]
0x477AEF: test    ecx, ecx
0x477AF1: mov     dword ptr [edi], 3
0x477AF7: jz      short loc_477B0F
0x477AF9: call    Actor_GetCurrentAction
0x477AFE: cmp     eax, 0Bh
0x477B01: jnz     short loc_477B0F
0x477B03: mov     ecx, [edi+28h]
0x477B06: push    0
0x477B08: push    0FFFFFFFFh
0x477B0A: call    HighPRocess_DoAction?????
0x477B0F: mov     edi, [edi+4]
0x477B12: cmp     edi, 2
0x477B15: jz      short loc_477B1C
0x477B17: cmp     edi, 3
0x477B1A: jnz     short loc_477B27
0x477B1C: push    0
0x477B1E: push    1
0x477B20: mov     ecx, esi
0x477B22: call    sub_475440
0x477B27: mov     byte ptr [esi+90h], 0FFh
0x477B2E: pop     edi
0x477B2F: pop     esi
0x477B30: pop     ebx
0x477B31: mov     esp, ebp
0x477B33: pop     ebp
0x477B34: retn    0Ch
