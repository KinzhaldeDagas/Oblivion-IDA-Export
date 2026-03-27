0x616530: push    0FFFFFFFFh
0x616532: push    offset SEH_616530
0x616537: mov     eax, large fs:0
0x61653D: push    eax
0x61653E: sub     esp, 0Ch
0x616541: push    ebx
0x616542: push    ebp
0x616543: push    esi
0x616544: push    edi
0x616545: mov     eax, ds:0B30AACh
0x61654A: xor     eax, esp
0x61654C: push    eax
0x61654D: lea     eax, [esp+2Ch+var_C]
0x616551: mov     large fs:0, eax
0x616557: mov     ebp, [esp+2Ch+arg_0]
0x61655B: test    ebp, ebp
0x61655D: jz      loc_6167D5
0x616563: mov     eax, ds:0B3B914h
0x616568: cmp     eax, ds:0B14B94h
0x61656E: mov     esi, [esp+2Ch+arg_4]
0x616572: jle     loc_616606
0x616578: test    esi, esi
0x61657A: jz      loc_616606
0x616580: mov     ecx, [esp+2Ch+arg_8]
0x616584: test    ecx, ecx
0x616586: jz      short loc_616591
0x616588: call    Actor_IsPlayer
0x61658D: test    al, al
0x61658F: jnz     short loc_616606
0x616591: mov     ecx, ds:0B333C4h
0x616597: mov     edx, [ecx]
0x616599: mov     eax, [edx+174h]
0x61659F: call    eax
0x6165A1: mov     edx, [esi]
0x6165A3: mov     edi, eax
0x6165A5: mov     eax, [edx+174h]
0x6165AB: mov     ecx, esi
0x6165AD: call    eax
0x6165AF: fld     dword ptr [eax]
0x6165B1: fsub    dword ptr [edi]
0x6165B3: fstp    [esp+2Ch+var_18]
0x6165B7: fld     dword ptr [eax+4]
0x6165BA: fsub    dword ptr [edi+4]
0x6165BD: fstp    [esp+2Ch+arg_0]
0x6165C1: fld     dword ptr [eax+8]
0x6165C4: fsub    dword ptr [edi+8]
0x6165C7: fstp    dword ptr [esp+2Ch+var_14]
0x6165CB: fld     [esp+2Ch+arg_0]
0x6165CF: fld     [esp+2Ch+var_18]
0x6165D3: fld     dword ptr [esp+2Ch+var_14]
0x6165D7: fld     st(1)
0x6165D9: fmulp   st(2), st
0x6165DB: fld     st(2)
0x6165DD: fmulp   st(3), st
0x6165DF: fxch    st(1)
0x6165E1: faddp   st(2), st
0x6165E3: fmul    st, st
0x6165E5: faddp   st(1), st
0x6165E7: fstp    [esp+2Ch+arg_0]
0x6165EB: fld     dword ptr ds:0B14BACh
0x6165F1: fld     [esp+2Ch+arg_0]
0x6165F5: fld     st(1)
0x6165F7: fmulp   st(2), st
0x6165F9: fcompp
0x6165FB: fnstsw  ax
0x6165FD: test    ah, 41h
0x616600: jz      loc_6167D5
0x616606: mov     ecx, [esp+2Ch+arg_C]
0x61660A: push    ecx
0x61660B: push    2
0x61660D: call    TESTopic__GEtTopic
0x616612: mov     ebx, eax
0x616614: add     esp, 8
0x616617: test    ebx, ebx
0x616619: jz      loc_6167D5
0x61661F: mov     ecx, [ebp+0]
0x616622: test    ecx, ecx
0x616624: jz      short loc_61668A
0x616626: call    sub_6B7260
0x61662B: test    al, al
0x61662D: jz      short loc_61663A
0x61662F: cmp     [esp+2Ch+arg_10], 0
0x616634: jz      loc_6167D5
0x61663A: mov     ecx, [esi+58h]
0x61663D: mov     edx, [ecx]
0x61663F: mov     eax, [edx+33Ch]
0x616645: mov     edi, [ebp+0]
0x616648: push    0
0x61664A: call    eax
0x61664C: cmp     edi, eax
0x61664E: jnz     short loc_616661
0x616650: mov     ecx, [esi+58h]
0x616653: mov     edx, [ecx]
0x616655: mov     eax, [edx+344h]
0x61665B: push    0
0x61665D: call    eax
0x61665F: jmp     short loc_61668A
0x616661: mov     ecx, edi
0x616663: call    sub_6B73A0
0x616668: test    al, al
0x61666A: jnz     short loc_61668A
0x61666C: mov     edi, [ebp+0]
0x61666F: test    edi, edi
0x616671: jz      short loc_616683
0x616673: mov     ecx, edi; this
0x616675: call    sub_6B73E0
0x61667A: push    edi
0x61667B: call    FormHeapFree
0x616680: add     esp, 4
0x616683: mov     dword ptr [ebp+0], 0
0x61668A: mov     ecx, esi; this
0x61668C: call    Actor_IsCreature
0x616691: test    al, al
0x616693: push    0; int
0x616695: jz      loc_61676C
0x61669B: mov     edx, [esi]
0x61669D: mov     eax, [edx+170h]
0x6166A3: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x6166A8: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6166AD: push    0; int
0x6166AF: mov     ecx, esi
0x6166B1: call    eax
0x6166B3: push    eax; void *
0x6166B4: call    OblivionDynamicCast
0x6166B9: mov     edi, eax
0x6166BB: mov     eax, [esp+40h+arg_C]
0x6166BF: add     esp, 14h
0x6166C2: sub     eax, 1
0x6166C5: jz      short loc_6166DC
0x6166C7: sub     eax, 1
0x6166CA: jz      short loc_6166D5
0x6166CC: sub     eax, 3
0x6166CF: jnz     loc_6167D5
0x6166D5: mov     eax, 7
0x6166DA: jmp     short loc_616708
0x6166DC: mov     edx, [esi]
0x6166DE: mov     eax, [edx+198h]
0x6166E4: push    0
0x6166E6: mov     ecx, esi
0x6166E8: call    eax
0x6166EA: test    al, al
0x6166EC: jnz     short loc_616703
0x6166EE: mov     edx, [esi]
0x6166F0: mov     eax, [edx+1F8h]
0x6166F6: mov     ecx, esi
0x6166F8: call    eax
0x6166FA: test    al, al
0x6166FC: mov     eax, 7
0x616701: jz      short loc_616708
0x616703: mov     eax, 8
0x616708: push    eax
0x616709: mov     ecx, edi
0x61670B: call    sub_51CE70
0x616710: test    eax, eax
0x616712: jz      loc_6167D5
0x616718: push    eax
0x616719: lea     ecx, [esp+30h+var_14]
0x61671D: call    BSStringT_constr_str
0x616722: mov     ecx, dword ptr [esp+2Ch+var_14]
0x616726: push    0
0x616728: push    0
0x61672A: push    0
0x61672C: push    0
0x61672E: push    0
0x616730: push    0
0x616732: push    0
0x616734: push    ebp
0x616735: push    ecx
0x616736: mov     ecx, esi
0x616738: mov     [esp+50h+var_4], 0
0x616740: call    Actor__InitDialogue
0x616745: fstp    st
0x616747: lea     ecx, [esp+2Ch+var_14]; void *
0x61674B: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x616753: call    BSStringT_Clear
0x616758: mov     ecx, [esp+2Ch+var_C]
0x61675C: mov     large fs:0, ecx
0x616763: pop     ecx
0x616764: pop     edi
0x616765: pop     esi
0x616766: pop     ebp
0x616767: pop     ebx
0x616768: add     esp, 18h
0x61676B: retn
0x61676C: mov     edx, [esp+30h+arg_8]
0x616770: push    ebx
0x616771: push    edx
0x616772: push    esi
0x616773: mov     ecx, ebx
0x616775: call    TESTopic__CreateDialogueInfo
0x61677A: mov     ebx, eax
0x61677C: test    ebx, ebx
0x61677E: jz      short loc_6167D5
0x616780: mov     ecx, ebx
0x616782: call    sub_6B7BA0
0x616787: test    al, al
0x616789: jz      short loc_6167C5
0x61678B: mov     ecx, ebx
0x61678D: call    sub_6B7C20
0x616792: mov     edi, eax
0x616794: test    edi, edi
0x616796: jz      short loc_6167C5
0x616798: push    0
0x61679A: push    0
0x61679C: push    0
0x61679E: push    0
0x6167A0: mov     ecx, edi
0x6167A2: call    BSStringT_GetLen
0x6167A7: mov     ecx, [edi+8]
0x6167AA: mov     edx, [edi+10h]
0x6167AD: push    eax
0x6167AE: mov     eax, [edi+0Ch]
0x6167B1: push    eax
0x6167B2: push    ecx
0x6167B3: push    ebp
0x6167B4: push    edx
0x6167B5: mov     ecx, esi
0x6167B7: call    Actor__InitDialogue
0x6167BC: fstp    st
0x6167BE: mov     ecx, ebx; int
0x6167C0: call    sub_6B7C30
0x6167C5: mov     ecx, ebx
0x6167C7: call    sub_6B81D0
0x6167CC: push    ebx
0x6167CD: call    FormHeapFree
0x6167D2: add     esp, 4
0x6167D5: mov     ecx, [esp+2Ch+var_C]
0x6167D9: mov     large fs:0, ecx
0x6167E0: pop     ecx
0x6167E1: pop     edi
0x6167E2: pop     esi
0x6167E3: pop     ebp
0x6167E4: pop     ebx
0x6167E5: add     esp, 18h
0x6167E8: retn
