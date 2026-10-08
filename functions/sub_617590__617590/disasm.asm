0x617590: push    0FFFFFFFFh
0x617592: push    offset SEH_617590
0x617597: mov     eax, large fs:0
0x61759D: push    eax
0x61759E: sub     esp, 30h
0x6175A1: push    ebx
0x6175A2: push    ebp
0x6175A3: push    esi
0x6175A4: push    edi
0x6175A5: mov     eax, ds:0B30AACh
0x6175AA: xor     eax, esp
0x6175AC: push    eax
0x6175AD: lea     eax, [esp+50h+var_C]
0x6175B1: mov     large fs:0, eax
0x6175B7: mov     esi, [esp+50h+actor]
0x6175BB: test    esi, esi
0x6175BD: mov     [esp+50h+var_39], 0
0x6175C2: jz      loc_6176A5
0x6175C8: mov     ebx, [esp+50h+arg_4]
0x6175CC: test    ebx, ebx
0x6175CE: jz      loc_6176A5
0x6175D4: mov     ecx, esi
0x6175D6: call    sub_5E34B0
0x6175DB: test    al, al
0x6175DD: jz      short loc_6175FA
0x6175DF: mov     eax, [esi]
0x6175E1: mov     edx, [eax+330h]
0x6175E7: mov     ecx, esi
0x6175E9: call    edx
0x6175EB: test    eax, eax
0x6175ED: jz      short loc_6175FA
0x6175EF: cmp     [esp+50h+arg_8], 0
0x6175F4: jnz     loc_6176A0
0x6175FA: lea     edi, [ebx+2Ch]
0x6175FD: push    edi
0x6175FE: lea     ebp, [esi+2Ch]
0x617601: push    ebp
0x617602: push    esi
0x617603: call    sub_689230
0x617608: add     esp, 0Ch
0x61760B: test    al, al
0x61760D: jnz     loc_6176A0
0x617613: lea     ecx, [esp+50h+segmentQuery]
0x617617: call    sub_67D760
0x61761C: push    0; extraCost
0x61761E: push    esi; actor
0x61761F: push    edi; end
0x617620: push    ebp; start
0x617621: lea     ecx, [esp+60h+segmentQuery]; segmentQuery
0x617625: mov     [esp+60h+var_4], 0
0x61762D: call    ConnectedPointGraph_CanTraverseSegment; Verified shared graph route test used from actor package, combat, PathGrid selection, and fast-travel surface construction. It accepts a valid direct segment; if straight-segment validation fails, it invokes actor-aware connected-point A*.
0x617632: test    al, al
0x617634: jz      short loc_617649
0x617636: push    esi; int
0x617637: lea     ecx, [esp+54h+segmentQuery]; int
0x61763B: call    sub_67D650
0x617640: test    al, al
0x617642: jz      short loc_617649
0x617644: mov     [esp+50h+var_39], 1
0x617649: lea     ecx, [esp+50h+segmentQuery]; this
0x61764D: mov     [esp+50h+var_4], 0FFFFFFFFh
0x617655: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x61765A: cmp     [esp+50h+var_39], 0
0x61765F: jnz     short loc_6176A5
0x617661: cmp     ebx, ds:0B333C4h
0x617667: jz      short loc_6176A5
0x617669: mov     eax, [ebx]
0x61766B: fld     dword ptr ds:0A57A64h
0x617671: mov     edx, [eax+174h]
0x617677: push    ecx
0x617678: mov     ecx, ebx
0x61767A: fstp    [esp+54h+var_54]; float
0x61767D: call    edx
0x61767F: push    eax; int
0x617680: mov     eax, [esi]
0x617682: mov     edx, [eax+174h]
0x617688: mov     ecx, esi
0x61768A: call    edx
0x61768C: push    eax; int
0x61768D: call    sub_480520
0x617692: add     esp, 0Ch
0x617695: test    eax, eax
0x617697: jge     short loc_6176A5
0x617699: cmp     [esp+50h+arg_8], 0
0x61769E: jz      short loc_6176A5
0x6176A0: mov     [esp+50h+var_39], 1
0x6176A5: mov     al, [esp+50h+var_39]
0x6176A9: mov     ecx, [esp+50h+var_C]
0x6176AD: mov     large fs:0, ecx
0x6176B4: pop     ecx
0x6176B5: pop     edi
0x6176B6: pop     esi
0x6176B7: pop     ebp
0x6176B8: pop     ebx
0x6176B9: add     esp, 3Ch
0x6176BC: retn
0x9C3310: lea     ecx, [ebp-38h]; this
0x9C3313: jmp     Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x9C3318: mov     edx, [esp+arg_4]
0x9C331C: lea     eax, [edx-40h]
0x9C331F: mov     ecx, [edx-44h]
0x9C3322: xor     ecx, eax
0x9C3324: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3329: mov     eax, offset stru_AEBF40
0x9C332E: jmp     ___CxxFrameHandler3
