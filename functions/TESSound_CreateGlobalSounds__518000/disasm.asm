0x518000: push    0FFFFFFFFh
0x518002: push    offset TESSound_CreateGlobalSounds_SEH
0x518007: mov     eax, large fs:0
0x51800D: push    eax
0x51800E: push    ecx
0x51800F: push    esi
0x518010: mov     eax, ds:0B30AACh
0x518015: xor     eax, esp
0x518017: push    eax
0x518018: lea     eax, [esp+18h+var_C]
0x51801C: mov     large fs:0, eax
0x518022: mov     ecx, ds:0B33A98h
0x518028: push    0; int
0x51802A: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x51802F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518034: push    0; int
0x518036: push    212h
0x51803B: call    TESDataHandler_LookupFormByID
0x518040: push    eax; void *
0x518041: call    OblivionDynamicCast
0x518046: add     esp, 14h
0x518049: or      esi, 0FFFFFFFFh
0x51804C: test    eax, eax
0x51804E: mov     ds:0B36218h, eax
0x518053: jnz     loc_5180E6
0x518059: push    44h ; 'D'; Size
0x51805B: call    FormHeapAlloc
0x518060: add     esp, 4
0x518063: mov     [esp+18h+var_10], eax
0x518067: test    eax, eax
0x518069: mov     [esp+18h+var_4], 0
0x518071: jz      short loc_51807C
0x518073: mov     ecx, eax; this
0x518075: call    ??0TESSound@@QAE@XZ
0x51807A: jmp     short loc_51807E
0x51807C: xor     eax, eax
0x51807E: push    1; a3
0x518080: push    212h; a2
0x518085: mov     ecx, eax; this
0x518087: mov     [esp+20h+var_4], esi
0x51808B: mov     ds:0B36218h, eax
0x518090: call    TESForm_SetFormID
0x518095: mov     ecx, ds:0B36218h
0x51809B: mov     eax, [ecx]
0x51809D: mov     edx, [eax+0D8h]
0x5180A3: push    offset aFootsounddirt
0x5180A8: call    edx
0x5180AA: mov     ecx, ds:0B36218h
0x5180B0: mov     eax, [ecx]
0x5180B2: mov     edx, [eax+90h]
0x5180B8: push    0
0x5180BA: call    edx
0x5180BC: mov     eax, ds:0B36218h
0x5180C1: mov     ecx, ds:0B33A98h
0x5180C7: push    eax
0x5180C8: add     ecx, 6Ch ; 'l'
0x5180CB: call    BSSimpleList_PushFront
0x5180D0: mov     ecx, ds:0B36218h
0x5180D6: push    ecx
0x5180D7: push    offset aFootsounddirt
0x5180DC: mov     ecx, offset off_B06164
0x5180E1: call    sub_412D30
0x5180E6: mov     ecx, ds:0B33A98h
0x5180EC: push    0; int
0x5180EE: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x5180F3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5180F8: push    0; int
0x5180FA: push    22Bh
0x5180FF: call    TESDataHandler_LookupFormByID
0x518104: push    eax; void *
0x518105: call    OblivionDynamicCast
0x51810A: add     esp, 14h
0x51810D: test    eax, eax
0x51810F: mov     ds:0B36220h, eax
0x518114: jnz     loc_5181A8
0x51811A: push    44h ; 'D'; Size
0x51811C: call    FormHeapAlloc
0x518121: add     esp, 4
0x518124: mov     [esp+18h+var_10], eax
0x518128: test    eax, eax
0x51812A: mov     [esp+18h+var_4], 1
0x518132: jz      short loc_51813D
0x518134: mov     ecx, eax; this
0x518136: call    ??0TESSound@@QAE@XZ
0x51813B: jmp     short loc_51813F
0x51813D: xor     eax, eax
0x51813F: push    1; a3
0x518141: push    22Bh; a2
0x518146: mov     ecx, eax; this
0x518148: mov     [esp+20h+var_4], esi
0x51814C: mov     ds:0B36220h, eax
0x518151: call    TESForm_SetFormID
0x518156: mov     ecx, ds:0B36220h
0x51815C: mov     edx, [ecx]
0x51815E: mov     eax, [edx+0D8h]
0x518164: push    offset aFstmetal
0x518169: call    eax
0x51816B: mov     ecx, ds:0B36220h
0x518171: mov     edx, [ecx]
0x518173: mov     eax, [edx+90h]
0x518179: push    0
0x51817B: call    eax
0x51817D: mov     ecx, ds:0B36220h
0x518183: push    ecx
0x518184: mov     ecx, ds:0B33A98h
0x51818A: add     ecx, 6Ch ; 'l'
0x51818D: call    BSSimpleList_PushFront
0x518192: mov     edx, ds:0B36220h
0x518198: push    edx
0x518199: push    offset aFstmetal
0x51819E: mov     ecx, offset off_B06164
0x5181A3: call    sub_412D30
0x5181A8: mov     ecx, ds:0B33A98h
0x5181AE: push    0; int
0x5181B0: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x5181B5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5181BA: push    0; int
0x5181BC: push    213h
0x5181C1: call    TESDataHandler_LookupFormByID
0x5181C6: push    eax; void *
0x5181C7: call    OblivionDynamicCast
0x5181CC: add     esp, 14h
0x5181CF: test    eax, eax
0x5181D1: mov     ds:0B3621Ch, eax
0x5181D6: jnz     loc_518269
0x5181DC: push    44h ; 'D'; Size
0x5181DE: call    FormHeapAlloc
0x5181E3: add     esp, 4
0x5181E6: mov     [esp+18h+var_10], eax
0x5181EA: test    eax, eax
0x5181EC: mov     [esp+18h+var_4], 2
0x5181F4: jz      short loc_5181FF
0x5181F6: mov     ecx, eax; this
0x5181F8: call    ??0TESSound@@QAE@XZ
0x5181FD: jmp     short loc_518201
0x5181FF: xor     eax, eax
0x518201: push    1; a3
0x518203: push    213h; a2
0x518208: mov     ecx, eax; this
0x51820A: mov     [esp+20h+var_4], esi
0x51820E: mov     ds:0B3621Ch, eax
0x518213: call    TESForm_SetFormID
0x518218: mov     ecx, ds:0B3621Ch
0x51821E: mov     eax, [ecx]
0x518220: mov     edx, [eax+0D8h]
0x518226: push    offset aFootsoundgrass
0x51822B: call    edx
0x51822D: mov     ecx, ds:0B3621Ch
0x518233: mov     eax, [ecx]
0x518235: mov     edx, [eax+90h]
0x51823B: push    0
0x51823D: call    edx
0x51823F: mov     eax, ds:0B3621Ch
0x518244: mov     ecx, ds:0B33A98h
0x51824A: push    eax
0x51824B: add     ecx, 6Ch ; 'l'
0x51824E: call    BSSimpleList_PushFront
0x518253: mov     ecx, ds:0B3621Ch
0x518259: push    ecx
0x51825A: push    offset aFootsoundgrass
0x51825F: mov     ecx, offset off_B06164
0x518264: call    sub_412D30
0x518269: mov     ecx, ds:0B33A98h
0x51826F: push    0; int
0x518271: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x518276: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51827B: push    0; int
0x51827D: push    214h
0x518282: call    TESDataHandler_LookupFormByID
0x518287: push    eax; void *
0x518288: call    OblivionDynamicCast
0x51828D: add     esp, 14h
0x518290: test    eax, eax
0x518292: mov     ds:0B36224h, eax
0x518297: jnz     loc_51832B
0x51829D: push    44h ; 'D'; Size
0x51829F: call    FormHeapAlloc
0x5182A4: add     esp, 4
0x5182A7: mov     [esp+18h+var_10], eax
0x5182AB: test    eax, eax
0x5182AD: mov     [esp+18h+var_4], 3
0x5182B5: jz      short loc_5182C0
0x5182B7: mov     ecx, eax; this
0x5182B9: call    ??0TESSound@@QAE@XZ
0x5182BE: jmp     short loc_5182C2
0x5182C0: xor     eax, eax
0x5182C2: push    1; a3
0x5182C4: push    214h; a2
0x5182C9: mov     ecx, eax; this
0x5182CB: mov     [esp+20h+var_4], esi
0x5182CF: mov     ds:0B36224h, eax
0x5182D4: call    TESForm_SetFormID
0x5182D9: mov     ecx, ds:0B36224h
0x5182DF: mov     edx, [ecx]
0x5182E1: mov     eax, [edx+0D8h]
0x5182E7: push    offset aFootsoundstone
0x5182EC: call    eax
0x5182EE: mov     ecx, ds:0B36224h
0x5182F4: mov     edx, [ecx]
0x5182F6: mov     eax, [edx+90h]
0x5182FC: push    0
0x5182FE: call    eax
0x518300: mov     ecx, ds:0B36224h
0x518306: push    ecx
0x518307: mov     ecx, ds:0B33A98h
0x51830D: add     ecx, 6Ch ; 'l'
0x518310: call    BSSimpleList_PushFront
0x518315: mov     edx, ds:0B36224h
0x51831B: push    edx
0x51831C: push    offset aFootsoundstone
0x518321: mov     ecx, offset off_B06164
0x518326: call    sub_412D30
0x51832B: mov     ecx, ds:0B33A98h
0x518331: push    0; int
0x518333: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x518338: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51833D: push    0; int
0x51833F: push    215h
0x518344: call    TESDataHandler_LookupFormByID
0x518349: push    eax; void *
0x51834A: call    OblivionDynamicCast
0x51834F: add     esp, 14h
0x518352: test    eax, eax
0x518354: mov     ds:0B36228h, eax
0x518359: jnz     loc_5183EC
0x51835F: push    44h ; 'D'; Size
0x518361: call    FormHeapAlloc
0x518366: add     esp, 4
0x518369: mov     [esp+18h+var_10], eax
0x51836D: test    eax, eax
0x51836F: mov     [esp+18h+var_4], 4
0x518377: jz      short loc_518382
0x518379: mov     ecx, eax; this
0x51837B: call    ??0TESSound@@QAE@XZ
0x518380: jmp     short loc_518384
0x518382: xor     eax, eax
0x518384: push    1; a3
0x518386: push    215h; a2
0x51838B: mov     ecx, eax; this
0x51838D: mov     [esp+20h+var_4], esi
0x518391: mov     ds:0B36228h, eax
0x518396: call    TESForm_SetFormID
0x51839B: mov     ecx, ds:0B36228h
0x5183A1: mov     eax, [ecx]
0x5183A3: mov     edx, [eax+0D8h]
0x5183A9: push    offset aFootsoundwater
0x5183AE: call    edx
0x5183B0: mov     ecx, ds:0B36228h
0x5183B6: mov     eax, [ecx]
0x5183B8: mov     edx, [eax+90h]
0x5183BE: push    0
0x5183C0: call    edx
0x5183C2: mov     eax, ds:0B36228h
0x5183C7: mov     ecx, ds:0B33A98h
0x5183CD: push    eax
0x5183CE: add     ecx, 6Ch ; 'l'
0x5183D1: call    BSSimpleList_PushFront
0x5183D6: mov     ecx, ds:0B36228h
0x5183DC: push    ecx
0x5183DD: push    offset aFootsoundwater
0x5183E2: mov     ecx, offset off_B06164
0x5183E7: call    sub_412D30
0x5183EC: mov     ecx, ds:0B33A98h
0x5183F2: push    0; int
0x5183F4: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x5183F9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5183FE: push    0; int
0x518400: push    216h
0x518405: call    TESDataHandler_LookupFormByID
0x51840A: push    eax; void *
0x51840B: call    OblivionDynamicCast
0x518410: add     esp, 14h
0x518413: test    eax, eax
0x518415: mov     ds:0B3622Ch, eax
0x51841A: jnz     loc_5184AE
0x518420: push    44h ; 'D'; Size
0x518422: call    FormHeapAlloc
0x518427: add     esp, 4
0x51842A: mov     [esp+18h+var_10], eax
0x51842E: test    eax, eax
0x518430: mov     [esp+18h+var_4], 5
0x518438: jz      short loc_518443
0x51843A: mov     ecx, eax; this
0x51843C: call    ??0TESSound@@QAE@XZ
0x518441: jmp     short loc_518445
0x518443: xor     eax, eax
0x518445: push    1; a3
0x518447: push    216h; a2
0x51844C: mov     ecx, eax; this
0x51844E: mov     [esp+20h+var_4], esi
0x518452: mov     ds:0B3622Ch, eax
0x518457: call    TESForm_SetFormID
0x51845C: mov     ecx, ds:0B3622Ch
0x518462: mov     edx, [ecx]
0x518464: mov     eax, [edx+0D8h]
0x51846A: push    offset aFootsoundwood
0x51846F: call    eax
0x518471: mov     ecx, ds:0B3622Ch
0x518477: mov     edx, [ecx]
0x518479: mov     eax, [edx+90h]
0x51847F: push    0
0x518481: call    eax
0x518483: mov     ecx, ds:0B3622Ch
0x518489: push    ecx
0x51848A: mov     ecx, ds:0B33A98h
0x518490: add     ecx, 6Ch ; 'l'
0x518493: call    BSSimpleList_PushFront
0x518498: mov     edx, ds:0B3622Ch
0x51849E: push    edx
0x51849F: push    offset aFootsoundwood
0x5184A4: mov     ecx, offset off_B06164
0x5184A9: call    sub_412D30
0x5184AE: mov     ecx, ds:0B33A98h
0x5184B4: push    0; int
0x5184B6: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x5184BB: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5184C0: push    0; int
0x5184C2: push    21Fh
0x5184C7: call    TESDataHandler_LookupFormByID
0x5184CC: push    eax; void *
0x5184CD: call    OblivionDynamicCast
0x5184D2: add     esp, 14h
0x5184D5: test    eax, eax
0x5184D7: mov     ds:0B36230h, eax
0x5184DC: jnz     loc_51856F
0x5184E2: push    44h ; 'D'; Size
0x5184E4: call    FormHeapAlloc
0x5184E9: add     esp, 4
0x5184EC: mov     [esp+18h+var_10], eax
0x5184F0: test    eax, eax
0x5184F2: mov     [esp+18h+var_4], 6
0x5184FA: jz      short loc_518505
0x5184FC: mov     ecx, eax; this
0x5184FE: call    ??0TESSound@@QAE@XZ
0x518503: jmp     short loc_518507
0x518505: xor     eax, eax
0x518507: push    1; a3
0x518509: push    21Fh; a2
0x51850E: mov     ecx, eax; this
0x518510: mov     [esp+20h+var_4], esi
0x518514: mov     ds:0B36230h, eax
0x518519: call    TESForm_SetFormID
0x51851E: mov     ecx, ds:0B36230h
0x518524: mov     eax, [ecx]
0x518526: mov     edx, [eax+0D8h]
0x51852C: push    offset aFstsnow
0x518531: call    edx
0x518533: mov     ecx, ds:0B36230h
0x518539: mov     eax, [ecx]
0x51853B: mov     edx, [eax+90h]
0x518541: push    0
0x518543: call    edx
0x518545: mov     eax, ds:0B36230h
0x51854A: mov     ecx, ds:0B33A98h
0x518550: push    eax
0x518551: add     ecx, 6Ch ; 'l'
0x518554: call    BSSimpleList_PushFront
0x518559: mov     ecx, ds:0B36230h
0x51855F: push    ecx
0x518560: push    offset aFstsnow
0x518565: mov     ecx, offset off_B06164
0x51856A: call    sub_412D30
0x51856F: mov     ecx, ds:0B33A98h
0x518575: push    0; int
0x518577: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x51857C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518581: push    0; int
0x518583: push    217h
0x518588: call    TESDataHandler_LookupFormByID
0x51858D: push    eax; void *
0x51858E: call    OblivionDynamicCast
0x518593: add     esp, 14h
0x518596: test    eax, eax
0x518598: mov     ds:0B36234h, eax
0x51859D: jnz     loc_518631
0x5185A3: push    44h ; 'D'; Size
0x5185A5: call    FormHeapAlloc
0x5185AA: add     esp, 4
0x5185AD: mov     [esp+18h+var_10], eax
0x5185B1: test    eax, eax
0x5185B3: mov     [esp+18h+var_4], 7
0x5185BB: jz      short loc_5185C6
0x5185BD: mov     ecx, eax; this
0x5185BF: call    ??0TESSound@@QAE@XZ
0x5185C4: jmp     short loc_5185C8
0x5185C6: xor     eax, eax
0x5185C8: push    1; a3
0x5185CA: push    217h; a2
0x5185CF: mov     ecx, eax; this
0x5185D1: mov     [esp+20h+var_4], esi
0x5185D5: mov     ds:0B36234h, eax
0x5185DA: call    TESForm_SetFormID
0x5185DF: mov     ecx, ds:0B36234h
0x5185E5: mov     edx, [ecx]
0x5185E7: mov     eax, [edx+0D8h]
0x5185ED: push    offset aFootsoundheavy
0x5185F2: call    eax
0x5185F4: mov     ecx, ds:0B36234h
0x5185FA: mov     edx, [ecx]
0x5185FC: mov     eax, [edx+90h]
0x518602: push    0
0x518604: call    eax
0x518606: mov     ecx, ds:0B36234h
0x51860C: push    ecx
0x51860D: mov     ecx, ds:0B33A98h
0x518613: add     ecx, 6Ch ; 'l'
0x518616: call    BSSimpleList_PushFront
0x51861B: mov     edx, ds:0B36234h
0x518621: push    edx
0x518622: push    offset aFootsoundheavy
0x518627: mov     ecx, offset off_B06164
0x51862C: call    sub_412D30
0x518631: mov     ecx, ds:0B33A98h
0x518637: push    0; int
0x518639: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x51863E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518643: push    0; int
0x518645: push    218h
0x51864A: call    TESDataHandler_LookupFormByID
0x51864F: push    eax; void *
0x518650: call    OblivionDynamicCast
0x518655: add     esp, 14h
0x518658: test    eax, eax
0x51865A: mov     ds:0B36238h, eax
0x51865F: jnz     loc_5186F2
0x518665: push    44h ; 'D'; Size
0x518667: call    FormHeapAlloc
0x51866C: add     esp, 4
0x51866F: mov     [esp+18h+var_10], eax
0x518673: test    eax, eax
0x518675: mov     [esp+18h+var_4], 8
0x51867D: jz      short loc_518688
0x51867F: mov     ecx, eax; this
0x518681: call    ??0TESSound@@QAE@XZ
0x518686: jmp     short loc_51868A
0x518688: xor     eax, eax
0x51868A: push    1; a3
0x51868C: push    218h; a2
0x518691: mov     ecx, eax; this
0x518693: mov     [esp+20h+var_4], esi
0x518697: mov     ds:0B36238h, eax
0x51869C: call    TESForm_SetFormID
0x5186A1: mov     ecx, ds:0B36238h
0x5186A7: mov     eax, [ecx]
0x5186A9: mov     edx, [eax+0D8h]
0x5186AF: push    offset aFootsoundlight
0x5186B4: call    edx
0x5186B6: mov     ecx, ds:0B36238h
0x5186BC: mov     eax, [ecx]
0x5186BE: mov     edx, [eax+90h]
0x5186C4: push    0
0x5186C6: call    edx
0x5186C8: mov     eax, ds:0B36238h
0x5186CD: mov     ecx, ds:0B33A98h
0x5186D3: push    eax
0x5186D4: add     ecx, 6Ch ; 'l'
0x5186D7: call    BSSimpleList_PushFront
0x5186DC: mov     ecx, ds:0B36238h
0x5186E2: push    ecx
0x5186E3: push    offset aFootsoundlight
0x5186E8: mov     ecx, offset off_B06164
0x5186ED: call    sub_412D30
0x5186F2: mov     ecx, ds:0B33A98h
0x5186F8: push    0; int
0x5186FA: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x5186FF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518704: push    0; int
0x518706: push    229h
0x51870B: call    TESDataHandler_LookupFormByID
0x518710: push    eax; void *
0x518711: call    OblivionDynamicCast
0x518716: add     esp, 14h
0x518719: test    eax, eax
0x51871B: mov     ds:0B36274h, eax
0x518720: jnz     loc_5187B4
0x518726: push    44h ; 'D'; Size
0x518728: call    FormHeapAlloc
0x51872D: add     esp, 4
0x518730: mov     [esp+18h+var_10], eax
0x518734: test    eax, eax
0x518736: mov     [esp+18h+var_4], 9
0x51873E: jz      short loc_518749
0x518740: mov     ecx, eax; this
0x518742: call    ??0TESSound@@QAE@XZ
0x518747: jmp     short loc_51874B
0x518749: xor     eax, eax
0x51874B: push    1; a3
0x51874D: push    229h; a2
0x518752: mov     ecx, eax; this
0x518754: mov     [esp+20h+var_4], esi
0x518758: mov     ds:0B36274h, eax
0x51875D: call    TESForm_SetFormID
0x518762: mov     ecx, ds:0B36274h
0x518768: mov     edx, [ecx]
0x51876A: mov     eax, [edx+0D8h]
0x518770: push    offset aFstarmorheavys
0x518775: call    eax
0x518777: mov     ecx, ds:0B36274h
0x51877D: mov     edx, [ecx]
0x51877F: mov     eax, [edx+90h]
0x518785: push    0
0x518787: call    eax
0x518789: mov     ecx, ds:0B36274h
0x51878F: push    ecx
0x518790: mov     ecx, ds:0B33A98h
0x518796: add     ecx, 6Ch ; 'l'
0x518799: call    BSSimpleList_PushFront
0x51879E: mov     edx, ds:0B36274h
0x5187A4: push    edx
0x5187A5: push    offset aFstarmorheavys
0x5187AA: mov     ecx, offset off_B06164
0x5187AF: call    sub_412D30
0x5187B4: mov     ecx, ds:0B33A98h
0x5187BA: push    0; int
0x5187BC: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x5187C1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5187C6: push    0; int
0x5187C8: push    228h
0x5187CD: call    TESDataHandler_LookupFormByID
0x5187D2: push    eax; void *
0x5187D3: call    OblivionDynamicCast
0x5187D8: add     esp, 14h
0x5187DB: test    eax, eax
0x5187DD: mov     ds:0B36278h, eax
0x5187E2: jnz     loc_518875
0x5187E8: push    44h ; 'D'; Size
0x5187EA: call    FormHeapAlloc
0x5187EF: add     esp, 4
0x5187F2: mov     [esp+18h+var_10], eax
0x5187F6: test    eax, eax
0x5187F8: mov     [esp+18h+var_4], 0Ah
0x518800: jz      short loc_51880B
0x518802: mov     ecx, eax; this
0x518804: call    ??0TESSound@@QAE@XZ
0x518809: jmp     short loc_51880D
0x51880B: xor     eax, eax
0x51880D: push    1; a3
0x51880F: push    228h; a2
0x518814: mov     ecx, eax; this
0x518816: mov     [esp+20h+var_4], esi
0x51881A: mov     ds:0B36278h, eax
0x51881F: call    TESForm_SetFormID
0x518824: mov     ecx, ds:0B36278h
0x51882A: mov     eax, [ecx]
0x51882C: mov     edx, [eax+0D8h]
0x518832: push    offset aFstarmorlights
0x518837: call    edx
0x518839: mov     ecx, ds:0B36278h
0x51883F: mov     eax, [ecx]
0x518841: mov     edx, [eax+90h]
0x518847: push    0
0x518849: call    edx
0x51884B: mov     eax, ds:0B36278h
0x518850: mov     ecx, ds:0B33A98h
0x518856: push    eax
0x518857: add     ecx, 6Ch ; 'l'
0x51885A: call    BSSimpleList_PushFront
0x51885F: mov     ecx, ds:0B36278h
0x518865: push    ecx
0x518866: push    offset aFstarmorlights
0x51886B: mov     ecx, offset off_B06164
0x518870: call    sub_412D30
0x518875: mov     ecx, ds:0B33A98h
0x51887B: push    0; int
0x51887D: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x518882: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518887: push    0; int
0x518889: push    219h
0x51888E: call    TESDataHandler_LookupFormByID
0x518893: push    eax; void *
0x518894: call    OblivionDynamicCast
0x518899: add     esp, 14h
0x51889C: test    eax, eax
0x51889E: mov     ds:0B3623Ch, eax
0x5188A3: jnz     loc_518937
0x5188A9: push    44h ; 'D'; Size
0x5188AB: call    FormHeapAlloc
0x5188B0: add     esp, 4
0x5188B3: mov     [esp+18h+var_10], eax
0x5188B7: test    eax, eax
0x5188B9: mov     [esp+18h+var_4], 0Bh
0x5188C1: jz      short loc_5188CC
0x5188C3: mov     ecx, eax; this
0x5188C5: call    ??0TESSound@@QAE@XZ
0x5188CA: jmp     short loc_5188CE
0x5188CC: xor     eax, eax
0x5188CE: push    1; a3
0x5188D0: push    219h; a2
0x5188D5: mov     ecx, eax; this
0x5188D7: mov     [esp+20h+var_4], esi
0x5188DB: mov     ds:0B3623Ch, eax
0x5188E0: call    TESForm_SetFormID
0x5188E5: mov     ecx, ds:0B3623Ch
0x5188EB: mov     edx, [ecx]
0x5188ED: mov     eax, [edx+0D8h]
0x5188F3: push    offset aFootsoundearth
0x5188F8: call    eax
0x5188FA: mov     ecx, ds:0B3623Ch
0x518900: mov     edx, [ecx]
0x518902: mov     eax, [edx+90h]
0x518908: push    0
0x51890A: call    eax
0x51890C: mov     ecx, ds:0B3623Ch
0x518912: push    ecx
0x518913: mov     ecx, ds:0B33A98h
0x518919: add     ecx, 6Ch ; 'l'
0x51891C: call    BSSimpleList_PushFront
0x518921: mov     edx, ds:0B3623Ch
0x518927: push    edx
0x518928: push    offset aFootsoundearth
0x51892D: mov     ecx, offset off_B06164
0x518932: call    sub_412D30
0x518937: mov     ecx, ds:0B33A98h
0x51893D: push    0; int
0x51893F: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x518944: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518949: push    0; int
0x51894B: push    21Ah
0x518950: call    TESDataHandler_LookupFormByID
0x518955: push    eax; void *
0x518956: call    OblivionDynamicCast
0x51895B: add     esp, 14h
0x51895E: test    eax, eax
0x518960: mov     ds:0B36240h, eax
0x518965: jnz     loc_5189F8
0x51896B: push    44h ; 'D'; Size
0x51896D: call    FormHeapAlloc
0x518972: add     esp, 4
0x518975: mov     [esp+18h+var_10], eax
0x518979: test    eax, eax
0x51897B: mov     [esp+18h+var_4], 0Ch
0x518983: jz      short loc_51898E
0x518985: mov     ecx, eax; this
0x518987: call    ??0TESSound@@QAE@XZ
0x51898C: jmp     short loc_518990
0x51898E: xor     eax, eax
0x518990: push    1; a3
0x518992: push    21Ah; a2
0x518997: mov     ecx, eax; this
0x518999: mov     [esp+20h+var_4], esi
0x51899D: mov     ds:0B36240h, eax
0x5189A2: call    TESForm_SetFormID
0x5189A7: mov     ecx, ds:0B36240h
0x5189AD: mov     eax, [ecx]
0x5189AF: mov     edx, [eax+0D8h]
0x5189B5: push    offset aFootsoundgra_0
0x5189BA: call    edx
0x5189BC: mov     ecx, ds:0B36240h
0x5189C2: mov     eax, [ecx]
0x5189C4: mov     edx, [eax+90h]
0x5189CA: push    0
0x5189CC: call    edx
0x5189CE: mov     eax, ds:0B36240h
0x5189D3: mov     ecx, ds:0B33A98h
0x5189D9: push    eax
0x5189DA: add     ecx, 6Ch ; 'l'
0x5189DD: call    BSSimpleList_PushFront
0x5189E2: mov     ecx, ds:0B36240h
0x5189E8: push    ecx
0x5189E9: push    offset aFootsoundgra_0
0x5189EE: mov     ecx, offset off_B06164
0x5189F3: call    sub_412D30
0x5189F8: mov     ecx, ds:0B33A98h
0x5189FE: push    0; int
0x518A00: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x518A05: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518A0A: push    0; int
0x518A0C: push    21Bh
0x518A11: call    TESDataHandler_LookupFormByID
0x518A16: push    eax; void *
0x518A17: call    OblivionDynamicCast
0x518A1C: add     esp, 14h
0x518A1F: test    eax, eax
0x518A21: mov     ds:0B36244h, eax
0x518A26: jnz     loc_518ABA
0x518A2C: push    44h ; 'D'; Size
0x518A2E: call    FormHeapAlloc
0x518A33: add     esp, 4
0x518A36: mov     [esp+18h+var_10], eax
0x518A3A: test    eax, eax
0x518A3C: mov     [esp+18h+var_4], 0Dh
0x518A44: jz      short loc_518A4F
0x518A46: mov     ecx, eax; this
0x518A48: call    ??0TESSound@@QAE@XZ
0x518A4D: jmp     short loc_518A51
0x518A4F: xor     eax, eax
0x518A51: push    1; a3
0x518A53: push    21Bh; a2
0x518A58: mov     ecx, eax; this
0x518A5A: mov     [esp+20h+var_4], esi
0x518A5E: mov     ds:0B36244h, eax
0x518A63: call    TESForm_SetFormID
0x518A68: mov     ecx, ds:0B36244h
0x518A6E: mov     edx, [ecx]
0x518A70: mov     eax, [edx+0D8h]
0x518A76: push    offset aFootsoundmetal
0x518A7B: call    eax
0x518A7D: mov     ecx, ds:0B36244h
0x518A83: mov     edx, [ecx]
0x518A85: mov     eax, [edx+90h]
0x518A8B: push    0
0x518A8D: call    eax
0x518A8F: mov     ecx, ds:0B36244h
0x518A95: push    ecx
0x518A96: mov     ecx, ds:0B33A98h
0x518A9C: add     ecx, 6Ch ; 'l'
0x518A9F: call    BSSimpleList_PushFront
0x518AA4: mov     edx, ds:0B36244h
0x518AAA: push    edx
0x518AAB: push    offset aFootsoundmetal
0x518AB0: mov     ecx, offset off_B06164
0x518AB5: call    sub_412D30
0x518ABA: mov     ecx, ds:0B33A98h
0x518AC0: push    0; int
0x518AC2: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x518AC7: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518ACC: push    0; int
0x518ACE: push    21Ch
0x518AD3: call    TESDataHandler_LookupFormByID
0x518AD8: push    eax; void *
0x518AD9: call    OblivionDynamicCast
0x518ADE: add     esp, 14h
0x518AE1: test    eax, eax
0x518AE3: mov     ds:0B36248h, eax
0x518AE8: jnz     loc_518B7B
0x518AEE: push    44h ; 'D'; Size
0x518AF0: call    FormHeapAlloc
0x518AF5: add     esp, 4
0x518AF8: mov     [esp+18h+var_10], eax
0x518AFC: test    eax, eax
0x518AFE: mov     [esp+18h+var_4], 0Eh
0x518B06: jz      short loc_518B11
0x518B08: mov     ecx, eax; this
0x518B0A: call    ??0TESSound@@QAE@XZ
0x518B0F: jmp     short loc_518B13
0x518B11: xor     eax, eax
0x518B13: push    1; a3
0x518B15: push    21Ch; a2
0x518B1A: mov     ecx, eax; this
0x518B1C: mov     [esp+20h+var_4], esi
0x518B20: mov     ds:0B36248h, eax
0x518B25: call    TESForm_SetFormID
0x518B2A: mov     ecx, ds:0B36248h
0x518B30: mov     eax, [ecx]
0x518B32: mov     edx, [eax+0D8h]
0x518B38: push    offset aFootsoundsto_0
0x518B3D: call    edx
0x518B3F: mov     ecx, ds:0B36248h
0x518B45: mov     eax, [ecx]
0x518B47: mov     edx, [eax+90h]
0x518B4D: push    0
0x518B4F: call    edx
0x518B51: mov     eax, ds:0B36248h
0x518B56: mov     ecx, ds:0B33A98h
0x518B5C: push    eax
0x518B5D: add     ecx, 6Ch ; 'l'
0x518B60: call    BSSimpleList_PushFront
0x518B65: mov     ecx, ds:0B36248h
0x518B6B: push    ecx
0x518B6C: push    offset aFootsoundsto_0
0x518B71: mov     ecx, offset off_B06164
0x518B76: call    sub_412D30
0x518B7B: mov     ecx, ds:0B33A98h
0x518B81: push    0; int
0x518B83: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x518B88: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518B8D: push    0; int
0x518B8F: push    21Dh
0x518B94: call    TESDataHandler_LookupFormByID
0x518B99: push    eax; void *
0x518B9A: call    OblivionDynamicCast
0x518B9F: add     esp, 14h
0x518BA2: test    eax, eax
0x518BA4: mov     ds:0B3624Ch, eax
0x518BA9: jnz     loc_518C3D
0x518BAF: push    44h ; 'D'; Size
0x518BB1: call    FormHeapAlloc
0x518BB6: add     esp, 4
0x518BB9: mov     [esp+18h+var_10], eax
0x518BBD: test    eax, eax
0x518BBF: mov     [esp+18h+var_4], 0Fh
0x518BC7: jz      short loc_518BD2
0x518BC9: mov     ecx, eax; this
0x518BCB: call    ??0TESSound@@QAE@XZ
0x518BD0: jmp     short loc_518BD4
0x518BD2: xor     eax, eax
0x518BD4: push    1; a3
0x518BD6: push    21Dh; a2
0x518BDB: mov     ecx, eax; this
0x518BDD: mov     [esp+20h+var_4], esi
0x518BE1: mov     ds:0B3624Ch, eax
0x518BE6: call    TESForm_SetFormID
0x518BEB: mov     ecx, ds:0B3624Ch
0x518BF1: mov     edx, [ecx]
0x518BF3: mov     eax, [edx+0D8h]
0x518BF9: push    offset aFootsoundwat_0
0x518BFE: call    eax
0x518C00: mov     ecx, ds:0B3624Ch
0x518C06: mov     edx, [ecx]
0x518C08: mov     eax, [edx+90h]
0x518C0E: push    0
0x518C10: call    eax
0x518C12: mov     ecx, ds:0B3624Ch
0x518C18: push    ecx
0x518C19: mov     ecx, ds:0B33A98h
0x518C1F: add     ecx, 6Ch ; 'l'
0x518C22: call    BSSimpleList_PushFront
0x518C27: mov     edx, ds:0B3624Ch
0x518C2D: push    edx
0x518C2E: push    offset aFootsoundwat_0
0x518C33: mov     ecx, offset off_B06164
0x518C38: call    sub_412D30
0x518C3D: mov     ecx, ds:0B33A98h
0x518C43: push    0; int
0x518C45: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x518C4A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518C4F: push    0; int
0x518C51: push    21Eh
0x518C56: call    TESDataHandler_LookupFormByID
0x518C5B: push    eax; void *
0x518C5C: call    OblivionDynamicCast
0x518C61: add     esp, 14h
0x518C64: test    eax, eax
0x518C66: mov     ds:0B36250h, eax
0x518C6B: jnz     loc_518CFE
0x518C71: push    44h ; 'D'; Size
0x518C73: call    FormHeapAlloc
0x518C78: add     esp, 4
0x518C7B: mov     [esp+18h+var_10], eax
0x518C7F: test    eax, eax
0x518C81: mov     [esp+18h+var_4], 10h
0x518C89: jz      short loc_518C94
0x518C8B: mov     ecx, eax; this
0x518C8D: call    ??0TESSound@@QAE@XZ
0x518C92: jmp     short loc_518C96
0x518C94: xor     eax, eax
0x518C96: push    1; a3
0x518C98: push    21Eh; a2
0x518C9D: mov     ecx, eax; this
0x518C9F: mov     [esp+20h+var_4], esi
0x518CA3: mov     ds:0B36250h, eax
0x518CA8: call    TESForm_SetFormID
0x518CAD: mov     ecx, ds:0B36250h
0x518CB3: mov     eax, [ecx]
0x518CB5: mov     edx, [eax+0D8h]
0x518CBB: push    offset aFootsoundwoodl
0x518CC0: call    edx
0x518CC2: mov     ecx, ds:0B36250h
0x518CC8: mov     eax, [ecx]
0x518CCA: mov     edx, [eax+90h]
0x518CD0: push    0
0x518CD2: call    edx
0x518CD4: mov     eax, ds:0B36250h
0x518CD9: mov     ecx, ds:0B33A98h
0x518CDF: push    eax
0x518CE0: add     ecx, 6Ch ; 'l'
0x518CE3: call    BSSimpleList_PushFront
0x518CE8: mov     ecx, ds:0B36250h
0x518CEE: push    ecx
0x518CEF: push    offset aFootsoundwoodl
0x518CF4: mov     ecx, offset off_B06164
0x518CF9: call    sub_412D30
0x518CFE: mov     ecx, ds:0B33A98h
0x518D04: push    0; int
0x518D06: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x518D0B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518D10: push    0; int
0x518D12: push    220h
0x518D17: call    TESDataHandler_LookupFormByID
0x518D1C: push    eax; void *
0x518D1D: call    OblivionDynamicCast
0x518D22: add     esp, 14h
0x518D25: test    eax, eax
0x518D27: mov     ds:0B36254h, eax
0x518D2C: jnz     loc_518DC0
0x518D32: push    44h ; 'D'; Size
0x518D34: call    FormHeapAlloc
0x518D39: add     esp, 4
0x518D3C: mov     [esp+18h+var_10], eax
0x518D40: test    eax, eax
0x518D42: mov     [esp+18h+var_4], 11h
0x518D4A: jz      short loc_518D55
0x518D4C: mov     ecx, eax; this
0x518D4E: call    ??0TESSound@@QAE@XZ
0x518D53: jmp     short loc_518D57
0x518D55: xor     eax, eax
0x518D57: push    1; a3
0x518D59: push    220h; a2
0x518D5E: mov     ecx, eax; this
0x518D60: mov     [esp+20h+var_4], esi
0x518D64: mov     ds:0B36254h, eax
0x518D69: call    TESForm_SetFormID
0x518D6E: mov     ecx, ds:0B36254h
0x518D74: mov     edx, [ecx]
0x518D76: mov     eax, [edx+0D8h]
0x518D7C: push    offset aFstsnowland
0x518D81: call    eax
0x518D83: mov     ecx, ds:0B36254h
0x518D89: mov     edx, [ecx]
0x518D8B: mov     eax, [edx+90h]
0x518D91: push    0
0x518D93: call    eax
0x518D95: mov     ecx, ds:0B36254h
0x518D9B: push    ecx
0x518D9C: mov     ecx, ds:0B33A98h
0x518DA2: add     ecx, 6Ch ; 'l'
0x518DA5: call    BSSimpleList_PushFront
0x518DAA: mov     edx, ds:0B36254h
0x518DB0: push    edx
0x518DB1: push    offset aFstsnowland
0x518DB6: mov     ecx, offset off_B06164
0x518DBB: call    sub_412D30
0x518DC0: mov     ecx, ds:0B33A98h
0x518DC6: push    0; int
0x518DC8: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x518DCD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518DD2: push    0; int
0x518DD4: push    221h
0x518DD9: call    TESDataHandler_LookupFormByID
0x518DDE: push    eax; void *
0x518DDF: call    OblivionDynamicCast
0x518DE4: add     esp, 14h
0x518DE7: test    eax, eax
0x518DE9: mov     ds:0B36258h, eax
0x518DEE: jnz     loc_518E81
0x518DF4: push    44h ; 'D'; Size
0x518DF6: call    FormHeapAlloc
0x518DFB: add     esp, 4
0x518DFE: mov     [esp+18h+var_10], eax
0x518E02: test    eax, eax
0x518E04: mov     [esp+18h+var_4], 12h
0x518E0C: jz      short loc_518E17
0x518E0E: mov     ecx, eax; this
0x518E10: call    ??0TESSound@@QAE@XZ
0x518E15: jmp     short loc_518E19
0x518E17: xor     eax, eax
0x518E19: push    1; a3
0x518E1B: push    221h; a2
0x518E20: mov     ecx, eax; this
0x518E22: mov     [esp+20h+var_4], esi
0x518E26: mov     ds:0B36258h, eax
0x518E2B: call    TESForm_SetFormID
0x518E30: mov     ecx, ds:0B36258h
0x518E36: mov     eax, [ecx]
0x518E38: mov     edx, [eax+0D8h]
0x518E3E: push    offset aFstearthsneak
0x518E43: call    edx
0x518E45: mov     ecx, ds:0B36258h
0x518E4B: mov     eax, [ecx]
0x518E4D: mov     edx, [eax+90h]
0x518E53: push    0
0x518E55: call    edx
0x518E57: mov     eax, ds:0B36258h
0x518E5C: mov     ecx, ds:0B33A98h
0x518E62: push    eax
0x518E63: add     ecx, 6Ch ; 'l'
0x518E66: call    BSSimpleList_PushFront
0x518E6B: mov     ecx, ds:0B36258h
0x518E71: push    ecx
0x518E72: push    offset aFstearthsneak
0x518E77: mov     ecx, offset off_B06164
0x518E7C: call    sub_412D30
0x518E81: mov     ecx, ds:0B33A98h
0x518E87: push    0; int
0x518E89: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x518E8E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518E93: push    0; int
0x518E95: push    222h
0x518E9A: call    TESDataHandler_LookupFormByID
0x518E9F: push    eax; void *
0x518EA0: call    OblivionDynamicCast
0x518EA5: add     esp, 14h
0x518EA8: test    eax, eax
0x518EAA: mov     ds:0B3625Ch, eax
0x518EAF: jnz     loc_518F43
0x518EB5: push    44h ; 'D'; Size
0x518EB7: call    FormHeapAlloc
0x518EBC: add     esp, 4
0x518EBF: mov     [esp+18h+var_10], eax
0x518EC3: test    eax, eax
0x518EC5: mov     [esp+18h+var_4], 13h
0x518ECD: jz      short loc_518ED8
0x518ECF: mov     ecx, eax; this
0x518ED1: call    ??0TESSound@@QAE@XZ
0x518ED6: jmp     short loc_518EDA
0x518ED8: xor     eax, eax
0x518EDA: push    1; a3
0x518EDC: push    222h; a2
0x518EE1: mov     ecx, eax; this
0x518EE3: mov     [esp+20h+var_4], esi
0x518EE7: mov     ds:0B3625Ch, eax
0x518EEC: call    TESForm_SetFormID
0x518EF1: mov     ecx, ds:0B3625Ch
0x518EF7: mov     edx, [ecx]
0x518EF9: mov     eax, [edx+0D8h]
0x518EFF: push    offset aFstgrasssneak
0x518F04: call    eax
0x518F06: mov     ecx, ds:0B3625Ch
0x518F0C: mov     edx, [ecx]
0x518F0E: mov     eax, [edx+90h]
0x518F14: push    0
0x518F16: call    eax
0x518F18: mov     ecx, ds:0B3625Ch
0x518F1E: push    ecx
0x518F1F: mov     ecx, ds:0B33A98h
0x518F25: add     ecx, 6Ch ; 'l'
0x518F28: call    BSSimpleList_PushFront
0x518F2D: mov     edx, ds:0B3625Ch
0x518F33: push    edx
0x518F34: push    offset aFstgrasssneak
0x518F39: mov     ecx, offset off_B06164
0x518F3E: call    sub_412D30
0x518F43: mov     ecx, ds:0B33A98h
0x518F49: push    0; int
0x518F4B: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x518F50: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x518F55: push    0; int
0x518F57: push    223h
0x518F5C: call    TESDataHandler_LookupFormByID
0x518F61: push    eax; void *
0x518F62: call    OblivionDynamicCast
0x518F67: add     esp, 14h
0x518F6A: test    eax, eax
0x518F6C: mov     ds:0B36260h, eax
0x518F71: jnz     loc_519004
0x518F77: push    44h ; 'D'; Size
0x518F79: call    FormHeapAlloc
0x518F7E: add     esp, 4
0x518F81: mov     [esp+18h+var_10], eax
0x518F85: test    eax, eax
0x518F87: mov     [esp+18h+var_4], 14h
0x518F8F: jz      short loc_518F9A
0x518F91: mov     ecx, eax; this
0x518F93: call    ??0TESSound@@QAE@XZ
0x518F98: jmp     short loc_518F9C
0x518F9A: xor     eax, eax
0x518F9C: push    1; a3
0x518F9E: push    223h; a2
0x518FA3: mov     ecx, eax; this
0x518FA5: mov     [esp+20h+var_4], esi
0x518FA9: mov     ds:0B36260h, eax
0x518FAE: call    TESForm_SetFormID
0x518FB3: mov     ecx, ds:0B36260h
0x518FB9: mov     eax, [ecx]
0x518FBB: mov     edx, [eax+0D8h]
0x518FC1: push    offset aFstmetalsneak
0x518FC6: call    edx
0x518FC8: mov     ecx, ds:0B36260h
0x518FCE: mov     eax, [ecx]
0x518FD0: mov     edx, [eax+90h]
0x518FD6: push    0
0x518FD8: call    edx
0x518FDA: mov     eax, ds:0B36260h
0x518FDF: mov     ecx, ds:0B33A98h
0x518FE5: push    eax
0x518FE6: add     ecx, 6Ch ; 'l'
0x518FE9: call    BSSimpleList_PushFront
0x518FEE: mov     ecx, ds:0B36260h
0x518FF4: push    ecx
0x518FF5: push    offset aFstmetalsneak
0x518FFA: mov     ecx, offset off_B06164
0x518FFF: call    sub_412D30
0x519004: mov     ecx, ds:0B33A98h
0x51900A: push    0; int
0x51900C: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x519011: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x519016: push    0; int
0x519018: push    225h
0x51901D: call    TESDataHandler_LookupFormByID
0x519022: push    eax; void *
0x519023: call    OblivionDynamicCast
0x519028: add     esp, 14h
0x51902B: test    eax, eax
0x51902D: mov     ds:0B36264h, eax
0x519032: jnz     loc_5190C6
0x519038: push    44h ; 'D'; Size
0x51903A: call    FormHeapAlloc
0x51903F: add     esp, 4
0x519042: mov     [esp+18h+var_10], eax
0x519046: test    eax, eax
0x519048: mov     [esp+18h+var_4], 15h
0x519050: jz      short loc_51905B
0x519052: mov     ecx, eax; this
0x519054: call    ??0TESSound@@QAE@XZ
0x519059: jmp     short loc_51905D
0x51905B: xor     eax, eax
0x51905D: push    1; a3
0x51905F: push    225h; a2
0x519064: mov     ecx, eax; this
0x519066: mov     [esp+20h+var_4], esi
0x51906A: mov     ds:0B36264h, eax
0x51906F: call    TESForm_SetFormID
0x519074: mov     ecx, ds:0B36264h
0x51907A: mov     edx, [ecx]
0x51907C: mov     eax, [edx+0D8h]
0x519082: push    offset aFststonesneak
0x519087: call    eax
0x519089: mov     ecx, ds:0B36264h
0x51908F: mov     edx, [ecx]
0x519091: mov     eax, [edx+90h]
0x519097: push    0
0x519099: call    eax
0x51909B: mov     ecx, ds:0B36264h
0x5190A1: push    ecx
0x5190A2: mov     ecx, ds:0B33A98h
0x5190A8: add     ecx, 6Ch ; 'l'
0x5190AB: call    BSSimpleList_PushFront
0x5190B0: mov     edx, ds:0B36264h
0x5190B6: push    edx
0x5190B7: push    offset aFststonesneak
0x5190BC: mov     ecx, offset off_B06164
0x5190C1: call    sub_412D30
0x5190C6: mov     ecx, ds:0B33A98h
0x5190CC: push    0; int
0x5190CE: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x5190D3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5190D8: push    0; int
0x5190DA: push    226h
0x5190DF: call    TESDataHandler_LookupFormByID
0x5190E4: push    eax; void *
0x5190E5: call    OblivionDynamicCast
0x5190EA: add     esp, 14h
0x5190ED: test    eax, eax
0x5190EF: mov     ds:0B36268h, eax
0x5190F4: jnz     loc_519187
0x5190FA: push    44h ; 'D'; Size
0x5190FC: call    FormHeapAlloc
0x519101: add     esp, 4
0x519104: mov     [esp+18h+var_10], eax
0x519108: test    eax, eax
0x51910A: mov     [esp+18h+var_4], 16h
0x519112: jz      short loc_51911D
0x519114: mov     ecx, eax; this
0x519116: call    ??0TESSound@@QAE@XZ
0x51911B: jmp     short loc_51911F
0x51911D: xor     eax, eax
0x51911F: push    1; a3
0x519121: push    226h; a2
0x519126: mov     ecx, eax; this
0x519128: mov     [esp+20h+var_4], esi
0x51912C: mov     ds:0B36268h, eax
0x519131: call    TESForm_SetFormID
0x519136: mov     ecx, ds:0B36268h
0x51913C: mov     eax, [ecx]
0x51913E: mov     edx, [eax+0D8h]
0x519144: push    offset aFstwatersneak
0x519149: call    edx
0x51914B: mov     ecx, ds:0B36268h
0x519151: mov     eax, [ecx]
0x519153: mov     edx, [eax+90h]
0x519159: push    0
0x51915B: call    edx
0x51915D: mov     eax, ds:0B36268h
0x519162: mov     ecx, ds:0B33A98h
0x519168: push    eax
0x519169: add     ecx, 6Ch ; 'l'
0x51916C: call    BSSimpleList_PushFront
0x519171: mov     ecx, ds:0B36268h
0x519177: push    ecx
0x519178: push    offset aFstwatersneak
0x51917D: mov     ecx, offset off_B06164
0x519182: call    sub_412D30
0x519187: mov     ecx, ds:0B33A98h
0x51918D: push    0; int
0x51918F: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x519194: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x519199: push    0; int
0x51919B: push    227h
0x5191A0: call    TESDataHandler_LookupFormByID
0x5191A5: push    eax; void *
0x5191A6: call    OblivionDynamicCast
0x5191AB: add     esp, 14h
0x5191AE: test    eax, eax
0x5191B0: mov     ds:0B3626Ch, eax
0x5191B5: jnz     loc_519249
0x5191BB: push    44h ; 'D'; Size
0x5191BD: call    FormHeapAlloc
0x5191C2: add     esp, 4
0x5191C5: mov     [esp+18h+var_10], eax
0x5191C9: test    eax, eax
0x5191CB: mov     [esp+18h+var_4], 17h
0x5191D3: jz      short loc_5191DE
0x5191D5: mov     ecx, eax; this
0x5191D7: call    ??0TESSound@@QAE@XZ
0x5191DC: jmp     short loc_5191E0
0x5191DE: xor     eax, eax
0x5191E0: push    1; a3
0x5191E2: push    227h; a2
0x5191E7: mov     ecx, eax; this
0x5191E9: mov     [esp+20h+var_4], esi
0x5191ED: mov     ds:0B3626Ch, eax
0x5191F2: call    TESForm_SetFormID
0x5191F7: mov     ecx, ds:0B3626Ch
0x5191FD: mov     edx, [ecx]
0x5191FF: mov     eax, [edx+0D8h]
0x519205: push    offset aFstwoodsneak
0x51920A: call    eax
0x51920C: mov     ecx, ds:0B3626Ch
0x519212: mov     edx, [ecx]
0x519214: mov     eax, [edx+90h]
0x51921A: push    0
0x51921C: call    eax
0x51921E: mov     ecx, ds:0B3626Ch
0x519224: push    ecx
0x519225: mov     ecx, ds:0B33A98h
0x51922B: add     ecx, 6Ch ; 'l'
0x51922E: call    BSSimpleList_PushFront
0x519233: mov     edx, ds:0B3626Ch
0x519239: push    edx
0x51923A: push    offset aFstwoodsneak
0x51923F: mov     ecx, offset off_B06164
0x519244: call    sub_412D30
0x519249: mov     ecx, ds:0B33A98h
0x51924F: push    0; int
0x519251: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x519256: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51925B: push    0; int
0x51925D: push    224h
0x519262: call    TESDataHandler_LookupFormByID
0x519267: push    eax; void *
0x519268: call    OblivionDynamicCast
0x51926D: add     esp, 14h
0x519270: test    eax, eax
0x519272: mov     ds:0B36270h, eax
0x519277: jnz     loc_51930A
0x51927D: push    44h ; 'D'; Size
0x51927F: call    FormHeapAlloc
0x519284: add     esp, 4
0x519287: mov     [esp+18h+var_10], eax
0x51928B: test    eax, eax
0x51928D: mov     [esp+18h+var_4], 18h
0x519295: jz      short loc_5192A0
0x519297: mov     ecx, eax; this
0x519299: call    ??0TESSound@@QAE@XZ
0x51929E: jmp     short loc_5192A2
0x5192A0: xor     eax, eax
0x5192A2: push    1; a3
0x5192A4: push    224h; a2
0x5192A9: mov     ecx, eax; this
0x5192AB: mov     [esp+20h+var_4], esi
0x5192AF: mov     ds:0B36270h, eax
0x5192B4: call    TESForm_SetFormID
0x5192B9: mov     ecx, ds:0B36270h
0x5192BF: mov     eax, [ecx]
0x5192C1: mov     edx, [eax+0D8h]
0x5192C7: push    offset aFstsnowsneak
0x5192CC: call    edx
0x5192CE: mov     ecx, ds:0B36270h
0x5192D4: mov     eax, [ecx]
0x5192D6: mov     edx, [eax+90h]
0x5192DC: push    0
0x5192DE: call    edx
0x5192E0: mov     eax, ds:0B36270h
0x5192E5: mov     ecx, ds:0B33A98h
0x5192EB: push    eax
0x5192EC: add     ecx, 6Ch ; 'l'
0x5192EF: call    BSSimpleList_PushFront
0x5192F4: mov     ecx, ds:0B36270h
0x5192FA: push    ecx
0x5192FB: push    offset aFstsnowsneak
0x519300: mov     ecx, offset off_B06164
0x519305: call    sub_412D30
0x51930A: mov     ecx, dword ptr [esp+18h+var_C]
0x51930E: mov     large fs:0, ecx
0x519315: pop     ecx
0x519316: pop     esi
0x519317: add     esp, 10h
0x51931A: retn
