0x618590: sub     esp, 1Ch
0x618593: push    esi
0x618594: mov     esi, [esp+20h+arg_0]
0x618598: mov     eax, [esi]
0x61859A: mov     edx, [eax+330h]
0x6185A0: mov     ecx, esi
0x6185A2: call    edx
0x6185A4: test    eax, eax
0x6185A6: jz      loc_6189BB
0x6185AC: mov     eax, [esi]
0x6185AE: mov     edx, [eax+338h]
0x6185B4: push    edi
0x6185B5: mov     ecx, esi
0x6185B7: call    edx
0x6185B9: mov     edi, eax
0x6185BB: test    edi, edi
0x6185BD: jz      loc_6189C0
0x6185C3: mov     eax, [edi]
0x6185C5: mov     edx, [eax+198h]
0x6185CB: push    0
0x6185CD: mov     ecx, edi
0x6185CF: call    edx
0x6185D1: test    al, al
0x6185D3: jnz     loc_6189C0
0x6185D9: cmp     edi, ds:0B333C4h
0x6185DF: jz      loc_6189BA
0x6185E5: mov     eax, [esi]
0x6185E7: mov     edx, [eax+284h]
0x6185ED: push    7
0x6185EF: mov     ecx, esi
0x6185F1: call    edx
0x6185F3: mov     [esp+24h+var_10], eax
0x6185F7: fild    [esp+24h+var_10]
0x6185FB: push    0; Seed
0x6185FD: fsubr   qword ptr ds:0A309F0h
0x618603: fdiv    dword ptr ds:0B36C78h
0x618609: fstp    [esp+28h+var_10]
0x61860D: call    GetRandomLargeInteger?
0x618612: fld     [esp+28h+var_10]
0x618616: mov     ecx, eax
0x618618: mov     eax, 51EB851Fh
0x61861D: imul    ecx
0x61861F: sar     edx, 5
0x618622: mov     eax, edx
0x618624: shr     eax, 1Fh
0x618627: add     eax, edx
0x618629: imul    eax, 64h ; 'd'
0x61862C: sub     ecx, eax
0x61862E: mov     [esp+28h+var_10], ecx
0x618632: add     esp, 4
0x618635: fild    [esp+24h+var_10]
0x618639: fcompp
0x61863B: fnstsw  ax
0x61863D: test    ah, 41h
0x618640: jnp     loc_6189BA
0x618646: mov     edx, [edi]
0x618648: mov     eax, [edx+284h]
0x61864E: push    41h ; 'A'
0x618650: mov     ecx, edi
0x618652: call    eax
0x618654: mov     edx, [edi]
0x618656: mov     [esp+20h+var_C], eax
0x61865A: fild    [esp+20h+var_C]
0x61865E: mov     eax, [edx+348h]
0x618664: mov     ecx, edi
0x618666: fstp    qword ptr [esp+20h+var_4]
0x61866A: call    eax
0x61866C: fdiv    qword ptr ds:0A309F0h
0x618672: mov     edx, [edi]
0x618674: mov     eax, [edx+284h]
0x61867A: push    2
0x61867C: mov     ecx, edi
0x61867E: fmul    qword ptr [esp+24h+var_4]
0x618682: fstp    [esp+24h+var_8]
0x618686: call    eax
0x618688: mov     edx, [edi]
0x61868A: mov     [esp+20h+var_C], eax
0x61868E: fild    [esp+20h+var_C]
0x618692: mov     eax, [edx+284h]
0x618698: push    40h ; '@'
0x61869A: fmul    qword ptr ds:0A70398h
0x6186A0: mov     ecx, edi
0x6186A2: fstp    qword ptr [esp+24h+var_4]
0x6186A6: call    eax
0x6186A8: mov     ecx, [esi+58h]
0x6186AB: mov     [esp+20h+arg_4], eax
0x6186AF: fild    [esp+20h+arg_4]
0x6186B3: push    1
0x6186B5: fadd    qword ptr [esp+24h+var_4]
0x6186B9: fstp    [esp+24h+var_4]
0x6186BD: fldz
0x6186BF: fst     [esp+24h+arg_4]
0x6186C3: mov     edx, [ecx]
0x6186C5: fstp    dword ptr [esp+24h+var_1C+4]
0x6186C9: mov     eax, [edx+0ECh]
0x6186CF: call    eax
0x6186D1: test    eax, eax
0x6186D3: jnz     short loc_61872C
0x6186D5: fldz
0x6186D7: lea     ecx, [esp+20h+var_C]
0x6186DB: push    ecx; int
0x6186DC: fstp    [esp+24h+var_C]
0x6186E0: lea     edx, [esp+24h+arg_4]
0x6186E4: push    edx; int
0x6186E5: push    1
0x6186E7: mov     ecx, esi; this
0x6186E9: call    Actor_GetFatigueFraction
0x6186EE: mov     eax, [esi]
0x6186F0: mov     edx, [eax+284h]
0x6186F6: push    ecx
0x6186F7: fstp    [esp+30h+var_30]
0x6186FA: push    0
0x6186FC: mov     ecx, esi
0x6186FE: call    edx
0x618700: push    eax; char
0x618701: mov     eax, [esi]
0x618703: mov     edx, [eax+284h]
0x618709: push    7; float
0x61870B: mov     ecx, esi
0x61870D: call    edx
0x61870F: push    eax; int
0x618710: mov     eax, [esi]
0x618712: mov     edx, [eax+284h]
0x618718: push    11h; int
0x61871A: mov     ecx, esi
0x61871C: call    edx
0x61871E: push    eax; int
0x61871F: call    Calc_HandToHandDamage
0x618724: add     esp, 1Ch
0x618727: jmp     loc_6187AD
0x61872C: mov     ecx, [esi+58h]
0x61872F: mov     eax, [ecx]
0x618731: mov     edx, [eax+0ECh]
0x618737: push    1
0x618739: call    edx
0x61873B: test    eax, eax
0x61873D: jz      short loc_6187AD
0x61873F: mov     eax, [eax+8]
0x618742: push    0; int
0x618744: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x618749: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61874E: push    0; int
0x618750: push    eax; void *
0x618751: call    OblivionDynamicCast
0x618756: add     esp, 14h
0x618759: test    eax, eax
0x61875B: jz      short loc_6187AD
0x61875D: mov     ecx, [esi+58h]
0x618760: mov     eax, [ecx]
0x618762: mov     edx, [eax+324h]
0x618768: call    edx
0x61876A: fstp    [esp+20h+arg_4]
0x61876E: fldz
0x618770: fcomp   [esp+20h+arg_4]
0x618774: fnstsw  ax
0x618776: test    ah, 1
0x618779: jnz     short loc_6187AD
0x61877B: mov     ecx, [esi+58h]
0x61877E: mov     eax, [ecx]
0x618780: mov     edx, [eax+0ECh]
0x618786: push    1
0x618788: call    edx
0x61878A: push    eax
0x61878B: push    esi
0x61878C: call    sub_612A90
0x618791: fstp    [esp+28h+arg_4]
0x618795: mov     ecx, [esi+58h]
0x618798: fld     [esp+28h+arg_4]
0x61879C: mov     eax, [ecx]
0x61879E: fstp    [esp+28h+var_24]
0x6187A2: mov     edx, [eax+328h]
0x6187A8: add     esp, 4
0x6187AB: call    edx
0x6187AD: fld     [esp+20h+arg_4]
0x6187B1: mov     eax, [esi]
0x6187B3: fdiv    qword ptr ds:0A309F0h
0x6187B9: mov     edx, [eax+330h]
0x6187BF: push    ebx
0x6187C0: mov     ecx, esi
0x6187C2: fstp    [esp+24h+var_10]
0x6187C6: fldz
0x6187C8: fst     [esp+24h+var_C]
0x6187CC: fstp    dword ptr [esp+24h+var_14]
0x6187D0: call    edx
0x6187D2: movzx   eax, byte ptr [eax+17Ch]
0x6187D9: mov     edx, [esi]
0x6187DB: push    eax
0x6187DC: mov     eax, [edx+330h]
0x6187E2: push    3
0x6187E4: lea     ecx, [esp+2Ch+var_1C+4]
0x6187E8: push    ecx
0x6187E9: mov     ecx, esi
0x6187EB: call    eax
0x6187ED: mov     ecx, eax
0x6187EF: call    sub_616980
0x6187F4: mov     edx, [esi]
0x6187F6: mov     ebx, eax
0x6187F8: mov     eax, [edx+330h]
0x6187FE: mov     ecx, esi
0x618800: call    eax
0x618802: mov     [eax+7Ch], ebx
0x618805: mov     edx, [esi]
0x618807: mov     eax, [edx+330h]
0x61880D: mov     ecx, esi
0x61880F: call    eax
0x618811: movzx   ecx, byte ptr [eax+17Ch]
0x618818: mov     eax, [esi]
0x61881A: push    ecx
0x61881B: push    4
0x61881D: lea     edx, [esp+2Ch+var_14]
0x618821: push    edx
0x618822: mov     edx, [eax+330h]
0x618828: mov     ecx, esi
0x61882A: call    edx
0x61882C: mov     ecx, eax
0x61882E: call    sub_616980
0x618833: mov     ebx, eax
0x618835: mov     eax, [esi]
0x618837: mov     edx, [eax+330h]
0x61883D: mov     ecx, esi
0x61883F: call    edx
0x618841: mov     [eax+80h], ebx
0x618847: mov     eax, [esi]
0x618849: mov     edx, [eax+330h]
0x61884F: mov     ecx, esi
0x618851: call    edx
0x618853: cmp     dword ptr [eax+7Ch], 0
0x618857: pop     ebx
0x618858: jz      short loc_618885
0x61885A: mov     eax, [esi]
0x61885C: mov     edx, [eax+330h]
0x618862: mov     ecx, esi
0x618864: call    edx
0x618866: cmp     dword ptr [eax+80h], 0
0x61886D: jnz     short loc_618885
0x61886F: mov     eax, [esi]
0x618871: mov     edx, [eax+330h]
0x618877: mov     ecx, esi
0x618879: call    edx
0x61887B: mov     eax, [eax+7Ch]
0x61887E: mov     ecx, [eax]
0x618880: jmp     loc_61891D
0x618885: mov     edx, [esi]
0x618887: mov     eax, [edx+330h]
0x61888D: mov     ecx, esi
0x61888F: call    eax
0x618891: cmp     dword ptr [eax+7Ch], 0
0x618895: jnz     short loc_6188B8
0x618897: mov     edx, [esi]
0x618899: mov     eax, [edx+330h]
0x61889F: mov     ecx, esi
0x6188A1: call    eax
0x6188A3: cmp     dword ptr [eax+80h], 0
0x6188AA: jz      short loc_6188B8
0x6188AC: mov     edx, [esi]
0x6188AE: mov     eax, [edx+330h]
0x6188B4: mov     ecx, esi
0x6188B6: jmp     short loc_6188FA
0x6188B8: mov     edx, [esi]
0x6188BA: mov     eax, [edx+330h]
0x6188C0: mov     ecx, esi
0x6188C2: call    eax
0x6188C4: cmp     dword ptr [eax+7Ch], 0
0x6188C8: jz      short loc_618948
0x6188CA: mov     edx, [esi]
0x6188CC: mov     eax, [edx+330h]
0x6188D2: mov     ecx, esi
0x6188D4: call    eax
0x6188D6: cmp     dword ptr [eax+80h], 0
0x6188DD: jz      short loc_618948
0x6188DF: fld     dword ptr [esp+20h+var_14]
0x6188E3: mov     edx, [esi]
0x6188E5: fld     dword ptr [esp+20h+var_1C+4]
0x6188E9: mov     ecx, esi
0x6188EB: fcompp
0x6188ED: fnstsw  ax
0x6188EF: test    ah, 5
0x6188F2: mov     eax, [edx+330h]
0x6188F8: jp      short loc_618916
0x6188FA: call    eax
0x6188FC: mov     ecx, [eax+80h]
0x618902: mov     ecx, [ecx]
0x618904: add     ecx, 0Ch
0x618907: call    EffectItemList_GetSchoolAV
0x61890C: fld     dword ptr [esp+20h+var_14]
0x618910: fstp    dword ptr [esp+20h+var_1C+4]
0x618914: jmp     short loc_618925
0x618916: call    eax
0x618918: mov     ecx, [eax+7Ch]
0x61891B: mov     ecx, [ecx]
0x61891D: add     ecx, 0Ch
0x618920: call    EffectItemList_GetSchoolAV
0x618925: mov     edx, [esi]
0x618927: push    eax
0x618928: mov     eax, [edx+284h]
0x61892E: mov     ecx, esi
0x618930: call    eax
0x618932: mov     [esp+20h+var_C], eax
0x618936: fild    [esp+20h+var_C]
0x61893A: fmul    dword ptr [esp+20h+var_1C+4]
0x61893E: fdiv    qword ptr ds:0A309F0h
0x618944: fstp    [esp+20h+var_C]
0x618948: fld     [esp+20h+var_10]
0x61894C: mov     edx, [edi]
0x61894E: fsub    [esp+20h+var_8]
0x618952: push    esi
0x618953: sub     esp, 8
0x618956: mov     ecx, edi
0x618958: fstp    [esp+2Ch+var_8]
0x61895C: fld     [esp+2Ch+var_8]
0x618960: fld     [esp+2Ch+var_C]
0x618964: fsub    [esp+2Ch+var_4]
0x618968: fstp    [esp+2Ch+var_4]
0x61896C: fld     [esp+2Ch+var_4]
0x618970: fcompp
0x618972: fnstsw  ax
0x618974: fldz
0x618976: test    ah, 5
0x618979: fstp    [esp+2Ch+var_28]
0x61897D: mov     eax, [edx+220h]
0x618983: jp      short loc_61898B
0x618985: fld     [esp+2Ch+arg_4]
0x618989: jmp     short loc_61898F
0x61898B: fld     dword ptr [esp+2Ch+var_1C+4]
0x61898F: fstp    [esp+2Ch+var_2C]
0x618992: call    eax
0x618994: mov     edx, [edi]
0x618996: mov     eax, [edx+198h]
0x61899C: push    0
0x61899E: mov     ecx, edi
0x6189A0: call    eax
0x6189A2: test    al, al
0x6189A4: jz      short loc_6189BA
0x6189A6: mov     edx, [esi]
0x6189A8: mov     eax, [edx+330h]
0x6189AE: push    edi
0x6189AF: mov     ecx, esi
0x6189B1: call    eax
0x6189B3: mov     ecx, eax
0x6189B5: call    sub_6162D0
0x6189BA: pop     edi
0x6189BB: pop     esi
0x6189BC: add     esp, 1Ch
0x6189BF: retn
0x6189C0: mov     edx, [esi]
0x6189C2: mov     eax, [edx+340h]
0x6189C8: push    edi
0x6189C9: mov     ecx, esi
0x6189CB: call    eax
0x6189CD: pop     edi
0x6189CE: mov     ecx, esi; int
0x6189D0: pop     esi
0x6189D1: add     esp, 1Ch
0x6189D4: jmp     sub_5EAE70
