0x532370: push    ebp; TES4 authoritative: rebuilds the two player camera collision bhkSimpleShapePhantoms from sphere shape radius and filter layer 0x18 cinfo; only observed constructor path for the object used by 0x5326B0.
0x532371: mov     ebp, esp
0x532373: and     esp, 0FFFFFFF0h
0x532376: push    0FFFFFFFFh
0x532378: push    offset SEH_532370
0x53237D: mov     eax, large fs:0
0x532383: push    eax
0x532384: sub     esp, 0D8h
0x53238A: push    ebx
0x53238B: push    esi
0x53238C: push    edi
0x53238D: mov     eax, ds:0B30AACh
0x532392: xor     eax, esp
0x532394: push    eax
0x532395: lea     eax, [esp+0F4h+var_C]
0x53239C: mov     large fs:0, eax
0x5323A2: mov     esi, ecx
0x5323A4: mov     [esp+0F4h+var_DC], esi
0x5323A8: push    14h; Size
0x5323AA: call    FormHeapAlloc
0x5323AF: add     esp, 4
0x5323B2: mov     [esp+0F4h+var_D8], eax
0x5323B6: xor     edi, edi
0x5323B8: cmp     eax, edi
0x5323BA: mov     [esp+0F4h+var_4], edi
0x5323C1: jz      short loc_5323D7
0x5323C3: fld     [ebp+arg_0]
0x5323C6: push    1; float
0x5323C8: push    ecx
0x5323C9: mov     ecx, eax
0x5323CB: fstp    [esp+0FCh+var_FC]; float
0x5323CE: call    bhkSphereShape_CtorRadius; TES4 authoritative: constructs a bhkSphereShape; if the third byte arg is true, radius is converted from TES/world units to Havok units with hkFactor.
0x5323D3: mov     ebx, eax
0x5323D5: jmp     short loc_5323D9
0x5323D7: xor     ebx, ebx
0x5323D9: lea     ecx, [esp+0F4h+info]
0x5323E0: call    OB_bhkShapePhantomCinfo_InitIdentity_010201A0; 2026-05-18 73000 consumer decode: initializes bhkSimpleShapePhantom cinfo, including identity transform at +0x20 and shape pointer slot at +0x04. Stock 0x565510 installs one shape pointer and attaches the phantom to the target NiAVObject.
0x5323E5: lea     ecx, [esp+0F4h+var_D0]
0x5323E9: mov     [esp+0F4h+var_4], 1
0x5323F4: call    OB_bhkShapePhantomCinfo_InitIdentity_010201A0; 2026-05-18 73000 consumer decode: initializes bhkSimpleShapePhantom cinfo, including identity transform at +0x20 and shape pointer slot at +0x04. Stock 0x565510 installs one shape pointer and attaches the phantom to the target NiAVObject.
0x5323F9: mov     ecx, [ebp+arg_4]
0x5323FC: mov     eax, ds:0B2EB3Ch
0x532401: shl     ecx, 10h
0x532404: add     eax, 1
0x532407: or      ecx, 18h
0x53240A: and     eax, 0FFFFh
0x53240F: mov     byte ptr [esp+0F4h+var_4], 2
0x532417: mov     ds:0B2EB3Ch, eax
0x53241C: jnz     short loc_532428
0x53241E: mov     eax, 0Ah
0x532423: mov     ds:0B2EB3Ch, eax
0x532428: shl     eax, 10h
0x53242B: or      eax, 18h
0x53242E: cmp     ebx, edi
0x532430: mov     [esp+0F4h+var_D8], eax; Second camera collision phantom uses generated high-word identity and filter layer 0x18.
0x532434: mov     [esp+0F4h+info.collisionFilter], ecx; First camera collision phantom uses filter layer 0x18 plus caller high-word identity.
0x53243B: jz      short loc_532449
0x53243D: mov     eax, [ebx+8]
0x532440: mov     [esp+0F4h+info.shape], eax
0x532447: jmp     short loc_532450
0x532449: mov     [esp+0F4h+info.shape], edi
0x532450: fldz
0x532452: push    14h; Size
0x532454: fst     [esp+0F8h+info.transform+4]
0x53245B: fst     [esp+0F8h+info.transform+8]
0x532462: fst     [esp+0F8h+info.transform+0Ch]
0x532469: fst     [esp+0F8h+info.transform+10h]
0x532470: fst     [esp+0F8h+info.transform+18h]
0x532477: fst     [esp+0F8h+info.transform+1Ch]
0x53247E: fst     [esp+0F8h+info.transform+20h]
0x532485: fst     [esp+0F8h+info.transform+24h]
0x53248C: fst     [esp+0F8h+info.transform+2Ch]
0x532493: fld1
0x532495: fst     [esp+0F8h+info.transform]
0x53249C: fst     [esp+0F8h+info.transform+14h]
0x5324A3: fstp    [esp+0F8h+info.transform+28h]
0x5324AA: fst     [esp+0F8h+info.transform+30h]
0x5324B1: fst     [esp+0F8h+info.transform+34h]
0x5324B8: fst     [esp+0F8h+info.transform+38h]
0x5324BF: fstp    [esp+0F8h+info.transform+3Ch]
0x5324C6: call    FormHeapAlloc
0x5324CB: add     esp, 4
0x5324CE: mov     [esp+0F4h+var_D4], eax
0x5324D2: cmp     eax, edi
0x5324D4: mov     byte ptr [esp+0F4h+var_4], 3
0x5324DC: jz      short loc_5324EF
0x5324DE: lea     ecx, [esp+0F4h+info]
0x5324E5: push    ecx; info
0x5324E6: mov     ecx, eax; self
0x5324E8: call    OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0; Constructs bhkSimpleShapePhantom wrapper and calls 0x8AF1A0 to create/attach the low-level Havok phantom object from cinfo.
0x5324ED: mov     edi, eax
0x5324EF: mov     esi, [esi]
0x5324F1: cmp     esi, edi
0x5324F3: mov     byte ptr [esp+0F4h+var_4], 2
0x5324FB: jz      short loc_532531
0x5324FD: test    esi, esi
0x5324FF: jz      short loc_53251D
0x532501: lea     edx, [esi+4]
0x532504: push    edx; lpAddend
0x532505: call    dword ptr ds:0A2807Ch
0x53250B: test    eax, eax
0x53250D: jnz     short loc_53251D
0x53250F: test    esi, esi
0x532511: jz      short loc_53251D
0x532513: mov     eax, [esi]
0x532515: mov     edx, [eax]
0x532517: push    1
0x532519: mov     ecx, esi
0x53251B: call    edx
0x53251D: test    edi, edi
0x53251F: mov     eax, [esp+0F4h+var_DC]
0x532523: mov     [eax], edi
0x532525: jz      short loc_532531
0x532527: add     edi, 4
0x53252A: push    edi; lpAddend
0x53252B: call    dword ptr ds:0A28078h
0x532531: test    ebx, ebx
0x532533: mov     ecx, [esp+0F4h+var_D8]
0x532537: mov     [esp+0F4h+var_D0.collisionFilter], ecx
0x53253B: jz      short loc_532546
0x53253D: mov     edx, [ebx+8]
0x532540: mov     [esp+0F4h+var_D0.shape], edx
0x532544: jmp     short loc_53254E
0x532546: mov     [esp+0F4h+var_D0.shape], 0
0x53254E: fldz
0x532550: push    14h; Size
0x532552: fst     [esp+0F8h+var_D0.transform+4]
0x532556: fst     [esp+0F8h+var_D0.transform+8]
0x53255A: fst     [esp+0F8h+var_D0.transform+0Ch]
0x53255E: fst     [esp+0F8h+var_D0.transform+10h]
0x532562: fst     [esp+0F8h+var_D0.transform+18h]
0x532566: fst     [esp+0F8h+var_D0.transform+1Ch]
0x53256A: fst     [esp+0F8h+var_D0.transform+20h]
0x53256E: fst     [esp+0F8h+var_D0.transform+24h]
0x532572: fst     [esp+0F8h+var_D0.transform+2Ch]
0x532576: fld1
0x532578: fst     [esp+0F8h+var_D0.transform]
0x53257C: fst     [esp+0F8h+var_D0.transform+14h]
0x532580: fstp    [esp+0F8h+var_D0.transform+28h]
0x532584: fst     [esp+0F8h+var_D0.transform+30h]
0x532588: fst     [esp+0F8h+var_D0.transform+34h]
0x53258C: fst     [esp+0F8h+var_D0.transform+38h]
0x532593: fstp    [esp+0F8h+var_D0.transform+3Ch]
0x53259A: call    FormHeapAlloc
0x53259F: add     esp, 4
0x5325A2: mov     [esp+0F4h+var_D4], eax
0x5325A6: test    eax, eax
0x5325A8: mov     byte ptr [esp+0F4h+var_4], 4
0x5325B0: jz      short loc_5325C2
0x5325B2: lea     ecx, [esp+0F4h+var_D0]
0x5325B6: push    ecx; info
0x5325B7: mov     ecx, eax; self
0x5325B9: call    OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0; Constructs bhkSimpleShapePhantom wrapper and calls 0x8AF1A0 to create/attach the low-level Havok phantom object from cinfo.
0x5325BE: mov     edi, eax
0x5325C0: jmp     short loc_5325C4
0x5325C2: xor     edi, edi
0x5325C4: mov     edx, [esp+0F4h+var_DC]
0x5325C8: mov     esi, [edx+4]
0x5325CB: cmp     esi, edi
0x5325CD: mov     byte ptr [esp+0F4h+var_4], 2
0x5325D5: jz      short loc_53260C
0x5325D7: test    esi, esi
0x5325D9: jz      short loc_5325F7
0x5325DB: lea     eax, [esi+4]
0x5325DE: push    eax; lpAddend
0x5325DF: call    dword ptr ds:0A2807Ch
0x5325E5: test    eax, eax
0x5325E7: jnz     short loc_5325F7
0x5325E9: test    esi, esi
0x5325EB: jz      short loc_5325F7
0x5325ED: mov     edx, [esi]
0x5325EF: mov     eax, [edx]
0x5325F1: push    1
0x5325F3: mov     ecx, esi
0x5325F5: call    eax
0x5325F7: test    edi, edi
0x5325F9: mov     ecx, [esp+0F4h+var_DC]
0x5325FD: mov     [ecx+4], edi
0x532600: jz      short loc_53260C
0x532602: add     edi, 4
0x532605: push    edi; lpAddend
0x532606: call    dword ptr ds:0A28078h
0x53260C: mov     eax, [esp+0F4h+var_D0.propertyCapacityFlags]
0x532610: test    eax, eax
0x532612: mov     esi, ds:0BA9DE4h
0x532618: mov     edi, large fs:2Ch
0x53261F: mov     byte ptr [esp+0F4h+var_4], 1
0x532627: js      short loc_532654
0x532629: mov     edx, [edi+esi*4]
0x53262C: mov     ecx, [edx+19Ch]
0x532632: test    ecx, ecx
0x532634: jnz     short loc_53263C
0x532636: mov     ecx, ds:0BA7D9Ch
0x53263C: and     eax, 3FFFFFFFh
0x532641: add     eax, eax
0x532643: add     eax, eax
0x532645: push    14h
0x532647: add     eax, eax
0x532649: push    eax
0x53264A: mov     eax, [esp+0FCh+var_D0.propertyData]
0x53264E: push    eax
0x53264F: call    sub_8A75D0
0x532654: mov     eax, [esp+0F4h+info.propertyCapacityFlags]
0x53265B: test    eax, eax
0x53265D: mov     [esp+0F4h+var_4], 0FFFFFFFFh
0x532668: js      short loc_532698
0x53266A: mov     ecx, [edi+esi*4]
0x53266D: mov     ecx, [ecx+19Ch]
0x532673: test    ecx, ecx
0x532675: jnz     short loc_53267D
0x532677: mov     ecx, ds:0BA7D9Ch
0x53267D: mov     edx, [esp+0F4h+info.propertyData]
0x532684: and     eax, 3FFFFFFFh
0x532689: add     eax, eax
0x53268B: add     eax, eax
0x53268D: push    14h
0x53268F: add     eax, eax
0x532691: push    eax
0x532692: push    edx
0x532693: call    sub_8A75D0
0x532698: mov     ecx, [esp+0F4h+var_C]
0x53269F: mov     large fs:0, ecx
0x5326A6: pop     ecx
0x5326A7: pop     edi
0x5326A8: pop     esi
0x5326A9: pop     ebx
0x5326AA: mov     esp, ebp
0x5326AC: pop     ebp
0x5326AD: retn    8
0x9B8DA0: mov     eax, [ebp+var_D8]
0x9B8DA6: push    eax
0x9B8DA7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B8DAC: pop     ecx
0x9B8DAD: retn
0x9B8DAE: lea     ecx, [ebp+info]
0x9B8DB1: jmp     sub_8A5090
0x9B8DB6: lea     ecx, [ebp+var_D0]
0x9B8DBC: jmp     sub_8A5090
0x9B8DC1: mov     eax, [ebp+var_D4]
0x9B8DC7: push    eax
0x9B8DC8: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B8DCD: pop     ecx
0x9B8DCE: retn
0x9B8DCF: mov     eax, [ebp+var_D4]
0x9B8DD5: push    eax
0x9B8DD6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9B8DDB: pop     ecx
0x9B8DDC: retn
0x9B8DDD: mov     edx, [esp-4+arg_4]
0x9B8DE1: lea     eax, [edx-0E4h]
0x9B8DE7: mov     ecx, [edx-0E8h]
0x9B8DED: xor     ecx, eax
0x9B8DEF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B8DF4: mov     eax, offset stru_AE31E8
0x9B8DF9: jmp     ___CxxFrameHandler3
