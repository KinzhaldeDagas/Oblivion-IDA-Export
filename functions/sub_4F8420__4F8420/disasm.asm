0x4F8420: push    esi
0x4F8421: mov     esi, [esp+4+arg_0]
0x4F8425: test    esi, esi
0x4F8427: jz      short loc_4F8479
0x4F8429: mov     eax, [esi]
0x4F842B: mov     edx, [eax+190h]
0x4F8431: mov     ecx, esi
0x4F8433: call    edx
0x4F8435: test    al, al
0x4F8437: jz      short loc_4F8479
0x4F8439: lea     ecx, [esi+44h]
0x4F843C: call    sub_41E980
0x4F8441: mov     [esp+4+arg_0], eax
0x4F8445: fild    [esp+4+arg_0]
0x4F8449: mov     eax, [esp+4+arg_C]
0x4F844D: fst     qword ptr [eax]
0x4F844F: cmp     byte ptr ds:0B361ACh, 0
0x4F8456: jz      short loc_4F8477
0x4F8458: sub     esp, 8
0x4F845B: mov     ecx, esi; this
0x4F845D: fstp    [esp+0Ch+var_C]
0x4F8460: call    TESObjectREFR_GetName
0x4F8465: push    eax
0x4F8466: push    offset aSHas0_2fInvestmentGoldCurrently; "%s  has %0.2f investment  gold currentl"...
0x4F846B: call    Interface_ConsolePrint
0x4F8470: add     esp, 10h
0x4F8473: mov     al, 1
0x4F8475: pop     esi
0x4F8476: retn
0x4F8477: fstp    st
0x4F8479: mov     al, 1
0x4F847B: pop     esi
0x4F847C: retn
