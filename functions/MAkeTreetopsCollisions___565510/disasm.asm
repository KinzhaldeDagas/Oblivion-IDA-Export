0x565510: push    ebp
0x565511: mov     ebp, esp
0x565513: and     esp, 0FFFFFFF0h
0x565516: push    0FFFFFFFFh
0x565518: push    offset SEH_565510
0x56551D: mov     eax, large fs:0
0x565523: push    eax
0x565524: sub     esp, 118h
0x56552A: mov     eax, ds:0B30AACh
0x56552F: xor     eax, esp
0x565531: mov     [esp+124h+var_14], eax
0x565538: push    ebx
0x565539: push    esi
0x56553A: push    edi
0x56553B: mov     eax, ds:0B30AACh
0x565540: xor     eax, esp
0x565542: push    eax; ArgList
0x565543: lea     eax, [esp+134h+var_C]
0x56554A: mov     large fs:0, eax
0x565550: cmp     byte ptr ds:0B1274Ch, 1
0x565557: mov     ebx, [ebp+arg_0]
0x56555A: mov     esi, ecx
0x56555C: jnz     loc_565BB0
0x565562: mov     ecx, ebx
0x565564: call    sub_787D90
0x565569: mov     edi, eax
0x56556B: test    edi, edi
0x56556D: jz      loc_565BB0
0x565573: fld     dword ptr ds:0B39E18h
0x565579: mov     eax, [esi]
0x56557B: fmul    [ebp+arg_4]
0x56557E: mov     edx, [eax+0A4h]
0x565584: mov     ecx, esi
0x565586: fstp    [esp+134h+var_F8]
0x56558A: call    edx
0x56558C: lea     ecx, [esp+134h+var_A0]
0x565593: mov     [esp+134h+var_F4], eax
0x565597: call    sub_532250
0x56559C: xor     esi, esi
0x56559E: cmp     edi, 1
0x5655A1: mov     [esp+134h+var_4], esi
0x5655A8: jnz     loc_565902
0x5655AE: lea     eax, [esp+134h+var_114]
0x5655B2: push    eax
0x5655B3: lea     ecx, [esp+138h+var_108]
0x5655B7: push    ecx
0x5655B8: lea     edx, [esp+13Ch+var_FC]
0x5655BC: push    edx
0x5655BD: push    esi
0x5655BE: mov     ecx, ebx
0x5655C0: call    sub_789D40
0x5655C5: fld     [esp+134h+var_108]
0x5655C9: fld     qword ptr ds:0A39088h
0x5655CF: mov     eax, [esp+134h+var_FC]
0x5655D3: sub     eax, esi
0x5655D5: fmul    st(1), st
0x5655D7: fxch    st(1)
0x5655D9: fstp    [esp+134h+var_118]
0x5655DD: fld     [esp+134h+var_118]
0x5655E1: fld     [esp+134h+var_F8]
0x5655E5: fld     st
0x5655E7: fmulp   st(2), st
0x5655E9: fxch    st(1)
0x5655EB: fstp    [esp+134h+var_108]
0x5655EF: fld     [esp+134h+var_104]
0x5655F3: fmul    st, st(2)
0x5655F5: fstp    [esp+134h+var_118]
0x5655F9: fld     [esp+134h+var_118]
0x5655FD: fmul    st, st(1)
0x5655FF: fstp    [esp+134h+var_104]
0x565603: fld     [esp+134h+var_100]
0x565607: fmul    st, st(2)
0x565609: fstp    [esp+134h+var_118]
0x56560D: fld     [esp+134h+var_118]
0x565611: fmul    st, st(1)
0x565613: fstp    [esp+134h+var_100]
0x565617: fld     [esp+134h+var_114]
0x56561B: fmul    st, st(2)
0x56561D: fstp    [esp+134h+var_118]
0x565621: fld     [esp+134h+var_118]
0x565625: fmul    st, st(1)
0x565627: fstp    [esp+134h+var_114]
0x56562B: fld     [esp+134h+var_110]
0x56562F: fmul    st, st(2)
0x565631: fstp    [esp+134h+var_118]
0x565635: fld     [esp+134h+var_118]
0x565639: fmul    st, st(1)
0x56563B: fstp    [esp+134h+var_110]
0x56563F: fld     [esp+134h+var_10C]
0x565643: fmulp   st(2), st
0x565645: fxch    st(1)
0x565647: fstp    [esp+134h+var_118]
0x56564B: fmul    [esp+134h+var_118]
0x56564F: fstp    [esp+134h+var_10C]
0x565653: jz      loc_565823
0x565659: sub     eax, edi
0x56565B: jz      loc_56578F
0x565661: sub     eax, edi
0x565663: jnz     loc_565ADB
0x565669: lea     ecx, [esp+134h+var_F0]
0x56566D: call    sub_564B70
0x565672: fld     qword ptr ds:0A2FAA0h
0x565678: xor     eax, eax
0x56567A: fld     [esp+eax*4+134h+var_114]
0x56567E: add     eax, 1
0x565681: cmp     eax, 3
0x565684: fmul    st, st(1)
0x565686: fstp    [esp+eax*4+134h+var_118]
0x56568A: jl      short loc_56567A
0x56568C: fstp    st
0x56568E: lea     eax, [esp+134h+var_40]
0x565695: fld     [esp+134h+var_10C]
0x565699: push    eax
0x56569A: fld     st
0x56569C: lea     ecx, [esp+138h+var_B0]
0x5656A3: fadd    [esp+138h+var_100]
0x5656A7: fstp    [esp+138h+var_118]
0x5656AB: fld     [esp+138h+var_108]
0x5656AF: fstp    [esp+138h+var_40]
0x5656B6: fld     [esp+138h+var_104]
0x5656BA: fstp    [esp+138h+var_3C]
0x5656C1: fld     [esp+138h+var_118]
0x5656C5: fstp    [esp+138h+var_38]
0x5656CC: fldz
0x5656CE: fst     [esp+138h+var_34]
0x5656D5: fld     [esp+138h+var_114]
0x5656D9: fstp    dword ptr [esp+138h+var_30]
0x5656E0: fld     [esp+138h+var_110]
0x5656E4: fstp    dword ptr [esp+138h+var_30+4]
0x5656EB: fxch    st(1)
0x5656ED: fstp    dword ptr [esp+138h+var_30+8]
0x5656F4: fstp    dword ptr [esp+138h+var_30+0Ch]
0x5656FB: call    sub_47DCD0
0x565700: push    14h; Size
0x565702: call    FormHeapAlloc
0x565707: add     esp, 4
0x56570A: mov     [esp+134h+var_118], eax
0x56570E: cmp     eax, esi
0x565710: mov     byte ptr [esp+134h+var_4], 4
0x565718: jz      short loc_56572B
0x56571A: lea     ecx, [esp+134h+var_30]
0x565721: push    ecx
0x565722: mov     ecx, eax
0x565724: call    sub_564BF0
0x565729: jmp     short loc_56572D
0x56572B: xor     eax, eax
0x56572D: cmp     eax, esi
0x56572F: mov     byte ptr [esp+134h+var_4], 0
0x565737: jz      short loc_565742
0x565739: mov     edx, [eax+8]
0x56573C: mov     [esp+134h+var_EC], edx
0x565740: jmp     short loc_565746
0x565742: mov     [esp+134h+var_EC], esi
0x565746: push    14h; Size
0x565748: call    FormHeapAlloc
0x56574D: add     esp, 4
0x565750: mov     [esp+134h+var_118], eax
0x565754: cmp     eax, esi
0x565756: mov     byte ptr [esp+134h+var_4], 5
0x56575E: jz      short loc_56576E
0x565760: lea     ecx, [esp+134h+var_F0]
0x565764: push    ecx
0x565765: mov     ecx, eax
0x565767: call    sub_563AF0
0x56576C: jmp     short loc_565770
0x56576E: xor     eax, eax
0x565770: cmp     eax, esi
0x565772: mov     byte ptr [esp+134h+var_4], 0
0x56577A: jz      loc_5658F6
0x565780: mov     edx, [eax+8]
0x565783: mov     [esp+134h+var_9C], edx
0x56578A: jmp     loc_565ADB
0x56578F: lea     ecx, [esp+134h+var_F0]
0x565793: call    sub_564030
0x565798: fld     [esp+134h+var_114]
0x56579C: fld     st
0x56579E: push    14h; Size
0x5657A0: fld     [esp+138h+var_100]
0x5657A4: fld     st
0x5657A6: faddp   st(2), st
0x5657A8: fxch    st(1)
0x5657AA: fstp    [esp+138h+var_118]
0x5657AE: fld     [esp+138h+var_108]
0x5657B2: fst     [esp+138h+var_E0]
0x5657B6: fld     [esp+138h+var_104]
0x5657BA: fst     [esp+138h+var_DC]
0x5657BE: fld     [esp+138h+var_118]
0x5657C2: fstp    [esp+138h+var_D8]
0x5657C6: fldz
0x5657C8: fst     [esp+138h+var_D4]
0x5657CC: fld     [esp+138h+var_110]
0x5657D0: faddp   st(4), st
0x5657D2: fld     st(4)
0x5657D4: fsubp   st(4), st
0x5657D6: fxch    st(3)
0x5657D8: fstp    [esp+138h+var_118]
0x5657DC: fxch    st(1)
0x5657DE: fstp    [esp+138h+var_D0]
0x5657E2: fstp    [esp+138h+var_CC]
0x5657E6: fld     [esp+138h+var_118]
0x5657EA: fstp    [esp+138h+var_C8]
0x5657EE: fstp    [esp+138h+var_C4]
0x5657F2: fstp    [esp+138h+var_EC]
0x5657F6: call    FormHeapAlloc
0x5657FB: add     esp, 4
0x5657FE: mov     [esp+134h+var_118], eax
0x565802: cmp     eax, esi
0x565804: mov     byte ptr [esp+134h+var_4], 3
0x56580C: jz      loc_56576E
0x565812: lea     ecx, [esp+134h+var_F0]
0x565816: push    ecx
0x565817: mov     ecx, eax
0x565819: call    sub_563BB0
0x56581E: jmp     loc_565770
0x565823: lea     ecx, [esp+134h+var_F0]
0x565827: call    sub_564B70
0x56582C: fld     [esp+134h+var_108]
0x565830: fstp    dword ptr [esp+134h+var_30]
0x565837: lea     eax, [esp+134h+var_30]
0x56583E: fld     [esp+134h+var_104]
0x565842: push    eax
0x565843: fstp    dword ptr [esp+138h+var_30+4]
0x56584A: lea     ecx, [esp+138h+var_B0]
0x565851: fld     [esp+138h+var_100]
0x565855: fstp    dword ptr [esp+138h+var_30+8]
0x56585C: fldz
0x56585E: fstp    dword ptr [esp+138h+var_30+0Ch]
0x565865: call    sub_47DCD0
0x56586A: push    14h; Size
0x56586C: call    FormHeapAlloc
0x565871: add     esp, 4
0x565874: mov     [esp+134h+var_118], eax
0x565878: cmp     eax, esi
0x56587A: mov     byte ptr [esp+134h+var_4], 1
0x565882: jz      short loc_565896
0x565884: fld     [esp+134h+var_114]
0x565888: push    esi; float
0x565889: push    ecx
0x56588A: mov     ecx, eax
0x56588C: fstp    [esp+13Ch+var_13C]; float
0x56588F: call    sub_532090
0x565894: jmp     short loc_565898
0x565896: xor     eax, eax
0x565898: cmp     eax, esi
0x56589A: mov     byte ptr [esp+134h+var_4], 0
0x5658A2: jz      short loc_5658AD
0x5658A4: mov     ecx, [eax+8]
0x5658A7: mov     [esp+134h+var_EC], ecx
0x5658AB: jmp     short loc_5658B1
0x5658AD: mov     [esp+134h+var_EC], esi
0x5658B1: push    14h; Size
0x5658B3: call    FormHeapAlloc
0x5658B8: add     esp, 4
0x5658BB: mov     [esp+134h+var_118], eax
0x5658BF: cmp     eax, esi
0x5658C1: mov     byte ptr [esp+134h+var_4], 2
0x5658C9: jz      short loc_5658D9
0x5658CB: lea     edx, [esp+134h+var_F0]
0x5658CF: push    edx
0x5658D0: mov     ecx, eax
0x5658D2: call    sub_563AF0
0x5658D7: jmp     short loc_5658DB
0x5658D9: xor     eax, eax
0x5658DB: cmp     eax, esi
0x5658DD: mov     byte ptr [esp+134h+var_4], 0
0x5658E5: jz      short loc_5658F6
0x5658E7: mov     eax, [eax+8]
0x5658EA: mov     [esp+134h+var_9C], eax
0x5658F1: jmp     loc_565ADB
0x5658F6: mov     [esp+134h+var_9C], esi
0x5658FD: jmp     loc_565ADB
0x565902: mov     [esp+134h+var_40], esi
0x565909: mov     [esp+134h+var_3C], esi
0x565910: mov     [esp+134h+var_38], esi
0x565917: mov     [esp+134h+var_34], 80000000h
0x565922: test    edi, edi
0x565924: mov     byte ptr [esp+134h+var_4], 6
0x56592C: jbe     loc_565A4A
0x565932: lea     ecx, [esp+134h+var_108]
0x565936: push    ecx
0x565937: lea     edx, [esp+138h+var_114]
0x56593B: push    edx
0x56593C: lea     eax, [esp+13Ch+var_FC]
0x565940: push    eax
0x565941: push    esi
0x565942: mov     ecx, ebx
0x565944: call    sub_789D40
0x565949: cmp     [esp+134h+var_FC], 0
0x56594E: jnz     loc_565A32
0x565954: fld     [esp+134h+var_114]
0x565958: mov     ecx, [esp+134h+var_34]
0x56595F: fld     qword ptr ds:0A39088h
0x565965: and     ecx, 3FFFFFFFh
0x56596B: cmp     [esp+134h+var_38], ecx
0x565972: fmul    st(1), st
0x565974: fxch    st(1)
0x565976: fstp    [esp+134h+var_118]
0x56597A: fld     [esp+134h+var_118]
0x56597E: fld     [esp+134h+var_F8]
0x565982: fld     st
0x565984: fmulp   st(2), st
0x565986: fxch    st(1)
0x565988: fstp    [esp+134h+var_114]
0x56598C: fld     [esp+134h+var_110]
0x565990: fmul    st, st(2)
0x565992: fstp    [esp+134h+var_118]
0x565996: fld     [esp+134h+var_118]
0x56599A: fmul    st, st(1)
0x56599C: fstp    [esp+134h+var_110]
0x5659A0: fld     [esp+134h+var_10C]
0x5659A4: fmul    st, st(2)
0x5659A6: fstp    [esp+134h+var_118]
0x5659AA: fld     [esp+134h+var_118]
0x5659AE: fmul    st, st(1)
0x5659B0: fstp    [esp+134h+var_10C]
0x5659B4: fld     [esp+134h+var_108]
0x5659B8: fmulp   st(2), st
0x5659BA: fxch    st(1)
0x5659BC: fstp    [esp+134h+var_118]
0x5659C0: fmul    [esp+134h+var_118]
0x5659C4: fstp    [esp+134h+var_108]
0x5659C8: fld     [esp+134h+var_114]
0x5659CC: fstp    dword ptr [esp+134h+var_30]
0x5659D3: fld     [esp+134h+var_110]
0x5659D7: fstp    dword ptr [esp+134h+var_30+4]
0x5659DE: fld     [esp+134h+var_10C]
0x5659E2: fstp    dword ptr [esp+134h+var_30+8]
0x5659E9: fld     [esp+134h+var_108]
0x5659ED: fstp    dword ptr [esp+134h+var_30+0Ch]
0x5659F4: jnz     short loc_565A08
0x5659F6: lea     edx, [esp+134h+var_3C]
0x5659FD: push    10h
0x5659FF: push    edx
0x565A00: call    sub_8A6EE0
0x565A05: add     esp, 8
0x565A08: mov     ecx, [esp+134h+var_38]
0x565A0F: movaps  xmm0, [esp+134h+var_30]
0x565A17: mov     eax, ecx
0x565A19: shl     eax, 4
0x565A1C: add     eax, [esp+134h+var_3C]
0x565A23: add     ecx, 1
0x565A26: mov     [esp+134h+var_38], ecx
0x565A2D: movaps  xmmword ptr [eax], xmm0
0x565A30: jmp     short loc_565A3F
0x565A32: push    offset aMultipleBoundi; "Multiple bounding volumes around a tree"...
0x565A37: call    PrintError
0x565A3C: add     esp, 4
0x565A3F: add     esi, 1
0x565A42: cmp     esi, edi
0x565A44: jb      loc_565932
0x565A4A: push    14h; Size
0x565A4C: call    FormHeapAlloc
0x565A51: add     esp, 4
0x565A54: mov     [esp+134h+var_118], eax
0x565A58: test    eax, eax
0x565A5A: mov     byte ptr [esp+134h+var_4], 7
0x565A62: jz      short loc_565A83
0x565A64: lea     ecx, [esp+134h+var_40]
0x565A6B: push    ecx
0x565A6C: mov     ecx, eax
0x565A6E: call    sub_563A30
0x565A73: test    eax, eax
0x565A75: jz      short loc_565A83
0x565A77: mov     edx, [eax+8]
0x565A7A: mov     [esp+134h+var_9C], edx
0x565A81: jmp     short loc_565A8E
0x565A83: mov     [esp+134h+var_9C], 0
0x565A8E: mov     eax, [esp+134h+var_34]
0x565A95: test    eax, eax
0x565A97: mov     byte ptr [esp+134h+var_4], 0
0x565A9F: js      short loc_565AD9
0x565AA1: mov     ecx, ds:0BA9DE4h
0x565AA7: mov     edx, large fs:2Ch
0x565AAE: mov     ecx, [edx+ecx*4]
0x565AB1: mov     ecx, [ecx+19Ch]
0x565AB7: test    ecx, ecx
0x565AB9: jnz     short loc_565AC1
0x565ABB: mov     ecx, ds:0BA7D9Ch
0x565AC1: mov     edx, [esp+134h+var_3C]
0x565AC8: and     eax, 3FFFFFFFh
0x565ACD: push    14h
0x565ACF: shl     eax, 4
0x565AD2: push    eax
0x565AD3: push    edx
0x565AD4: call    sub_8A75D0
0x565AD9: xor     esi, esi
0x565ADB: push    14h; Size
0x565ADD: mov     [esp+138h+var_A0], 40009h
0x565AE8: call    FormHeapAlloc
0x565AED: add     esp, 4
0x565AF0: mov     [esp+134h+var_118], eax
0x565AF4: cmp     eax, esi
0x565AF6: mov     byte ptr [esp+134h+var_4], 8
0x565AFE: jz      short loc_565B13
0x565B00: lea     ecx, [esp+134h+var_A0]
0x565B07: push    ecx
0x565B08: mov     ecx, eax
0x565B0A: call    sub_531FC0
0x565B0F: mov     edi, eax
0x565B11: jmp     short loc_565B15
0x565B13: xor     edi, edi
0x565B15: push    14h; Size
0x565B17: mov     byte ptr [esp+138h+var_4], 0
0x565B1F: call    FormHeapAlloc
0x565B24: mov     esi, eax
0x565B26: add     esp, 4
0x565B29: mov     [esp+134h+var_118], esi
0x565B2D: test    esi, esi
0x565B2F: mov     byte ptr [esp+134h+var_4], 9
0x565B37: jz      short loc_565B4F
0x565B39: mov     edx, [esp+134h+var_F4]
0x565B3D: push    edx
0x565B3E: mov     ecx, esi
0x565B40: call    sub_897640
0x565B45: mov     dword ptr [esi], offset ??_7bhkSPCollisionObject@@6B@; const bhkSPCollisionObject::`vftable'
0x565B4B: mov     ecx, esi
0x565B4D: jmp     short loc_565B51
0x565B4F: xor     ecx, ecx
0x565B51: push    edi
0x565B52: mov     byte ptr [esp+138h+var_4], 0
0x565B5A: call    sub_897670
0x565B5F: mov     eax, [esp+134h+var_8C]
0x565B66: test    eax, eax
0x565B68: mov     [esp+134h+var_4], 0FFFFFFFFh
0x565B73: js      short loc_565BB0
0x565B75: mov     ecx, large fs:2Ch
0x565B7C: mov     edx, ds:0BA9DE4h
0x565B82: mov     ecx, [ecx+edx*4]
0x565B85: mov     ecx, [ecx+19Ch]
0x565B8B: test    ecx, ecx
0x565B8D: jnz     short loc_565B95
0x565B8F: mov     ecx, ds:0BA7D9Ch
0x565B95: mov     edx, [esp+134h+var_94]
0x565B9C: and     eax, 3FFFFFFFh
0x565BA1: add     eax, eax
0x565BA3: add     eax, eax
0x565BA5: push    14h
0x565BA7: add     eax, eax
0x565BA9: push    eax
0x565BAA: push    edx
0x565BAB: call    sub_8A75D0
0x565BB0: mov     ecx, [esp+134h+var_C]
0x565BB7: mov     large fs:0, ecx
0x565BBE: pop     ecx
0x565BBF: pop     edi
0x565BC0: pop     esi
0x565BC1: pop     ebx
0x565BC2: mov     ecx, [esp+124h+var_14]
0x565BC9: xor     ecx, esp
0x565BCB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x565BD0: mov     esp, ebp
0x565BD2: pop     ebp
0x565BD3: retn    8
