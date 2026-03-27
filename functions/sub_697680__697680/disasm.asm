0x697680: mov     eax, [esp+arg_4]
0x697684: sub     esp, 44h
0x697687: push    ebx
0x697688: push    ebp
0x697689: push    esi
0x69768A: push    edi
0x69768B: mov     ebx, ecx
0x69768D: mov     ecx, [esp+54h+arg_0]
0x697691: push    eax; int
0x697692: push    ecx; int
0x697693: mov     ecx, ebx; int
0x697695: call    MobilObject_PostLinkModifiedForm
0x69769A: mov     ecx, ebx; this
0x69769C: call    MobileObject_GetCharProxy
0x6976A1: mov     edi, eax
0x6976A3: test    edi, edi
0x6976A5: jz      loc_6977C8
0x6976AB: mov     ecx, [ebx+68h]
0x6976AE: test    ecx, ecx
0x6976B0: jz      short loc_69772B
0x6976B2: mov     edx, [ecx]
0x6976B4: mov     eax, [edx+20h]
0x6976B7: call    eax
0x6976B9: test    eax, eax
0x6976BB: jz      short loc_69772B
0x6976BD: mov     ecx, [ebx+68h]
0x6976C0: mov     edx, [ecx]
0x6976C2: mov     eax, [edx+20h]
0x6976C5: call    eax
0x6976C7: mov     esi, eax
0x6976C9: mov     edx, [esi]
0x6976CB: mov     eax, [edx+190h]
0x6976D1: mov     ecx, esi
0x6976D3: call    eax
0x6976D5: neg     al
0x6976D7: sbb     eax, eax
0x6976D9: and     eax, esi
0x6976DB: mov     ecx, eax
0x6976DD: jz      short loc_6976F2
0x6976DF: lea     edx, [esp+54h+arg_4]
0x6976E3: push    edx
0x6976E4: call    sub_65ABE0
0x6976E9: movzx   esi, word ptr [eax+2]
0x6976ED: jmp     loc_697788
0x6976F2: mov     eax, [esi]
0x6976F4: mov     edx, [eax+154h]
0x6976FA: mov     ecx, esi
0x6976FC: call    edx
0x6976FE: push    eax
0x6976FF: call    sub_480340
0x697704: add     esp, 4
0x697707: test    eax, eax
0x697709: jz      short loc_697722
0x69770B: mov     ecx, [eax+10h]
0x69770E: test    ecx, ecx
0x697710: jz      short loc_697722
0x697712: lea     eax, [esp+54h+arg_4]
0x697716: push    eax
0x697717: call    sub_497340
0x69771C: movzx   esi, word ptr [eax+2]
0x697720: jmp     short loc_697788
0x697722: call    sub_531D80
0x697727: mov     esi, eax
0x697729: jmp     short loc_697788
0x69772B: mov     edx, [ebx]
0x69772D: mov     eax, [edx+154h]
0x697733: mov     ecx, ebx
0x697735: call    eax
0x697737: push    eax
0x697738: call    sub_480340
0x69773D: add     esp, 4
0x697740: test    eax, eax
0x697742: jz      short loc_697766
0x697744: mov     eax, [eax+10h]
0x697747: test    eax, eax
0x697749: jz      short loc_697766
0x69774B: mov     eax, [eax+8]
0x69774E: test    eax, eax
0x697750: jz      short loc_69775F
0x697752: add     eax, 14h
0x697755: jz      short loc_69775F
0x697757: mov     esi, [eax+1Ch]
0x69775A: shr     esi, 10h
0x69775D: jmp     short loc_697788
0x69775F: xor     esi, esi
0x697761: shr     esi, 10h
0x697764: jmp     short loc_697788
0x697766: mov     esi, ds:0B2EB3Ch
0x69776C: add     esi, 1
0x69776F: and     esi, 0FFFFh
0x697775: mov     ds:0B2EB3Ch, esi
0x69777B: jnz     short loc_697788
0x69777D: mov     esi, 0Ah
0x697782: mov     ds:0B2EB3Ch, esi
0x697788: lea     ecx, [esp+54h+arg_4]
0x69778C: push    ecx
0x69778D: mov     ecx, edi
0x69778F: call    sub_57E270
0x697794: mov     eax, [esp+54h+arg_4]
0x697798: mov     ecx, [edi+364h]
0x69779E: and     eax, 0FFC0h
0x6977A3: or      eax, 7
0x6977A6: shl     esi, 10h
0x6977A9: or      esi, eax
0x6977AB: test    ecx, ecx
0x6977AD: jz      short loc_6977C8
0x6977AF: mov     eax, [ecx+8]
0x6977B2: test    eax, eax
0x6977B4: jz      short loc_6977BE
0x6977B6: add     eax, 14h
0x6977B9: jz      short loc_6977BE
0x6977BB: mov     [eax+1Ch], esi
0x6977BE: mov     edx, [ecx]
0x6977C0: mov     eax, [edx+80h]
0x6977C6: call    eax
0x6977C8: mov     ecx, [ebx+68h]
0x6977CB: test    ecx, ecx
0x6977CD: jz      short loc_6977D8
0x6977CF: mov     edx, [ecx]
0x6977D1: mov     eax, [edx+20h]
0x6977D4: call    eax
0x6977D6: jmp     short loc_6977DA
0x6977D8: xor     eax, eax
0x6977DA: cmp     eax, ds:0B333C4h
0x6977E0: jz      short loc_6977F4
0x6977E2: fld     dword ptr ds:0B38110h
0x6977E8: fadd    dword ptr ds:0B3C0D0h
0x6977EE: fstp    dword ptr ds:0B3C0D0h
0x6977F4: mov     ebp, [ebx+84h]
0x6977FA: test    ebp, ebp
0x6977FC: jz      loc_697A73
0x697802: mov     eax, [ebx+88h]
0x697808: test    eax, eax
0x69780A: jz      loc_697A25
0x697810: mov     ecx, [ebp+0]
0x697813: mov     [eax+54h], ecx
0x697816: mov     edx, [ebp+4]
0x697819: mov     [eax+58h], edx
0x69781C: mov     ecx, [ebp+8]
0x69781F: mov     [eax+5Ch], ecx
0x697822: mov     edx, [ebx+88h]
0x697828: add     edx, 30h ; '0'
0x69782B: push    edx
0x69782C: lea     ecx, [ebp+0Ch]
0x69782F: call    sub_47C600
0x697834: cmp     dword ptr [ebx+80h], 0
0x69783B: setnz   al
0x69783E: mov     byte ptr [esp+54h+arg_4], al
0x697842: mov     eax, [ebx+90h]
0x697848: test    eax, eax
0x69784A: jz      loc_697948
0x697850: fld     dword ptr [eax+88h]
0x697856: mov     ecx, [esp+54h+arg_4]
0x69785A: fsub    dword ptr [ebp+0]
0x69785D: push    ecx; float
0x69785E: push    ecx
0x69785F: fstp    [esp+5Ch+var_30]
0x697863: fld     dword ptr [eax+8Ch]
0x697869: fsub    dword ptr [ebp+4]
0x69786C: fstp    [esp+5Ch+var_2C]
0x697870: fld     dword ptr [eax+90h]
0x697876: fsub    dword ptr [ebp+8]
0x697879: fstp    [esp+5Ch+var_28]
0x69787D: fld     [esp+5Ch+var_30]
0x697881: fld     [esp+5Ch+var_2C]
0x697885: fmul    st, st
0x697887: fld     st(1)
0x697889: fmulp   st(2), st
0x69788B: faddp   st(1), st
0x69788D: fst     [esp+5Ch+var_44]
0x697891: fld     [esp+5Ch+var_28]
0x697895: fld     dword ptr [ebx+5Ch]
0x697898: fstp    [esp+5Ch+var_5C]; float
0x69789B: fmul    st, st
0x69789D: faddp   st(1), st
0x69789F: fstp    [esp+5Ch+arg_4]
0x6978A3: fld     [esp+5Ch+arg_4]
0x6978A7: call    __CIsqrt
0x6978AC: fstp    [esp+5Ch+arg_4]
0x6978B0: fld     [esp+5Ch+arg_4]
0x6978B4: mov     ecx, [ebx+7Ch]
0x6978B7: sub     esp, 8
0x6978BA: fstp    [esp+64h+var_60]; float
0x6978BE: fld     dword ptr [ebp+1Ch]
0x6978C1: fstp    [esp+64h+var_64]; float
0x6978C4: call    sub_7F3530
0x6978C9: fld     [esp+54h+var_28]
0x6978CD: fstp    [esp+54h+var_3C]
0x6978D1: fldz
0x6978D3: fmul    st, st
0x6978D5: fadd    [esp+54h+var_44]
0x6978D9: fstp    [esp+54h+arg_4]
0x6978DD: fld     [esp+54h+arg_4]
0x6978E1: call    __CIsqrt
0x6978E6: fstp    [esp+54h+arg_4]
0x6978EA: fld     [esp+54h+var_3C]
0x6978EE: fld     [esp+54h+arg_4]
0x6978F2: call    sub_98598A
0x6978F7: fstp    [esp+54h+arg_4]
0x6978FB: fld     [esp+54h+arg_4]
0x6978FF: sub     esp, 8
0x697902: fchs
0x697904: fstp    [esp+5Ch+var_58]; float
0x697908: fldz
0x69790A: fstp    [esp+5Ch+var_5C]; float
0x69790D: fld     [esp+5Ch+var_30]
0x697911: fld     [esp+5Ch+var_2C]
0x697915: call    sub_98598A
0x69791A: fstp    [esp+5Ch+arg_4]
0x69791E: fld     [esp+5Ch+arg_4]
0x697922: push    ecx
0x697923: lea     ecx, [esp+60h+var_24]
0x697927: fstp    [esp+60h+var_60]; float
0x69792A: call    sub_7118E0
0x69792F: mov     edi, [ebx+88h]
0x697935: add     edi, 30h ; '0'
0x697938: mov     ecx, 9
0x69793D: lea     esi, [esp+54h+var_24]
0x697941: rep movsd
0x697943: jmp     loc_697A25
0x697948: mov     edx, [ebx]
0x69794A: mov     eax, [edx+174h]
0x697950: mov     ecx, ebx
0x697952: call    eax
0x697954: fld     dword ptr [ebp+0]
0x697957: mov     ecx, [eax]
0x697959: mov     edx, [eax+4]
0x69795C: mov     eax, [eax+8]
0x69795F: mov     [esp+54h+var_30], ecx
0x697963: fsub    [esp+54h+var_30]
0x697967: mov     ecx, [esp+54h+arg_4]
0x69796B: mov     [esp+54h+var_2C], edx
0x69796F: fstp    dword ptr [esp+54h+var_3C]
0x697973: mov     [esp+54h+var_28], eax
0x697977: fld     dword ptr [ebp+4]
0x69797A: push    ecx; float
0x69797B: fsub    [esp+58h+var_2C]
0x69797F: push    ecx
0x697980: fstp    dword ptr [esp+5Ch+var_3C+4]
0x697984: fld     dword ptr [ebp+8]
0x697987: fsub    [esp+5Ch+var_28]
0x69798B: fstp    [esp+5Ch+var_34]
0x69798F: fld     dword ptr [esp+5Ch+var_3C+4]
0x697993: fld     dword ptr [esp+5Ch+var_3C]
0x697997: fld     [esp+5Ch+var_34]
0x69799B: fld     dword ptr [ebx+5Ch]
0x69799E: fstp    [esp+5Ch+var_5C]; float
0x6979A1: fld     st(1)
0x6979A3: fmulp   st(2), st
0x6979A5: fld     st(2)
0x6979A7: fmulp   st(3), st
0x6979A9: fxch    st(1)
0x6979AB: faddp   st(2), st
0x6979AD: fmul    st, st
0x6979AF: faddp   st(1), st
0x6979B1: fstp    [esp+5Ch+arg_4]
0x6979B5: fld     [esp+5Ch+arg_4]
0x6979B9: call    __CIsqrt
0x6979BE: fstp    [esp+5Ch+arg_4]
0x6979C2: fld     [esp+5Ch+arg_4]
0x6979C6: mov     ecx, [ebx+7Ch]
0x6979C9: sub     esp, 8
0x6979CC: fstp    [esp+64h+var_60]; float
0x6979D0: fld     dword ptr [ebp+1Ch]
0x6979D3: fstp    [esp+64h+var_64]; float
0x6979D6: call    sub_7F3530
0x6979DB: mov     ecx, [ebx+7Ch]
0x6979DE: call    nullsub_returnFalse_0arg
0x6979E3: test    al, al
0x6979E5: mov     ecx, 2
0x6979EA: jnz     short loc_6979F4
0x6979EC: cmp     [ebx+80h], ecx
0x6979F2: jnz     short loc_697A25
0x6979F4: lea     edx, [esp+54h+arg_4]
0x6979F8: mov     [ebx+80h], ecx
0x6979FE: push    edx
0x6979FF: mov     ecx, ebx; this
0x697A01: call    MobileObject_GetCharProxy
0x697A06: mov     ecx, eax
0x697A08: call    sub_57E270
0x697A0D: mov     eax, [esp+54h+arg_4]
0x697A11: or      eax, 4000h
0x697A16: push    eax
0x697A17: mov     ecx, ebx; this
0x697A19: call    MobileObject_GetCharProxy
0x697A1E: mov     ecx, eax
0x697A20: call    sub_694FC0
0x697A25: xor     esi, esi
0x697A27: mov     [ebx+84h], esi
0x697A2D: mov     eax, [ebp+20h]
0x697A30: cmp     eax, esi
0x697A32: jz      short loc_697A6A
0x697A34: movzx   eax, word ptr [eax]
0x697A37: movzx   edi, ax
0x697A3A: test    edi, edi
0x697A3C: jbe     short loc_697A6A
0x697A3E: mov     edi, edi
0x697A40: mov     eax, [ebp+20h]
0x697A43: mov     eax, [eax+esi*4+4]
0x697A47: push    eax
0x697A48: call    MagicTarget_LookupByFormID
0x697A4D: add     esp, 4
0x697A50: test    eax, eax
0x697A52: jz      short loc_697A63
0x697A54: mov     edx, [ebx]
0x697A56: push    0
0x697A58: push    eax
0x697A59: mov     eax, [edx+20Ch]
0x697A5F: mov     ecx, ebx
0x697A61: call    eax
0x697A63: add     esi, 1
0x697A66: cmp     esi, edi
0x697A68: jb      short loc_697A40
0x697A6A: push    ebp
0x697A6B: call    FormHeapFree
0x697A70: add     esp, 4
0x697A73: pop     edi
0x697A74: pop     esi
0x697A75: pop     ebp
0x697A76: pop     ebx
0x697A77: add     esp, 44h
0x697A7A: retn    8
