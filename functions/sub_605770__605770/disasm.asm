0x605770: sub     esp, 3Ch
0x605773: push    esi
0x605774: mov     esi, ecx
0x605776: mov     eax, [esi+8]
0x605779: shr     eax, 0Bh
0x60577C: test    al, 1
0x60577E: jnz     loc_605DAB
0x605784: cmp     byte ptr [esi+78h], 0
0x605788: jnz     loc_60583E
0x60578E: mov     ecx, ds:0B33B00h
0x605794: call    sub_45A500
0x605799: test    al, al
0x60579B: jnz     loc_60583E
0x6057A1: mov     ecx, offset ActorProcessManager_ptr
0x6057A6: call    sub_673B00
0x6057AB: fstp    dword ptr [esp+40h+var_3C]
0x6057AF: fld     dword ptr [esp+40h+var_3C]
0x6057B3: fld     st
0x6057B5: fsub    dword ptr [esi+0BCh]
0x6057BB: fstp    [esp+40h+arg_0]
0x6057BF: fld     dword ptr [esi+0BCh]
0x6057C5: fcomp   st(1)
0x6057C7: fnstsw  ax
0x6057C9: fldz
0x6057CB: test    ah, 41h
0x6057CE: jz      short loc_6057DD
0x6057D0: fcom    dword ptr [esi+0BCh]
0x6057D6: fnstsw  ax
0x6057D8: test    ah, 41h
0x6057DB: jnz     short loc_60580F
0x6057DD: fxch    st(1)
0x6057DF: fst     dword ptr [esi+0BCh]
0x6057E5: fxch    st(1)
0x6057E7: fst     [esp+40h+arg_0]
0x6057EB: fcom    st(1)
0x6057ED: fnstsw  ax
0x6057EF: test    ah, 5
0x6057F2: jp      short loc_60580F
0x6057F4: fld     dword ptr ds:0A3744Ch
0x6057FA: fcomp   st(2)
0x6057FC: fnstsw  ax
0x6057FE: test    ah, 41h
0x605801: jnz     short loc_60580F
0x605803: fstp    dword ptr [esi+0BCh]
0x605809: fstp    [esp+40h+arg_0]
0x60580D: jmp     short loc_605813
0x60580F: fstp    st(1)
0x605811: fstp    st
0x605813: mov     ecx, [esi+58h]
0x605816: mov     edx, [ecx]
0x605818: mov     eax, [edx+20h]
0x60581B: call    eax
0x60581D: fld     [esp+40h+arg_0]
0x605821: push    ecx
0x605822: lea     ecx, [esi+68h]; this
0x605825: fstp    dword ptr [esp+44h+var_44]
0x605828: call    MagicTarget_ProcessEffects
0x60582D: fld     dword ptr [esp+40h+var_3C]
0x605831: fstp    dword ptr [esi+0BCh]
0x605837: pop     esi
0x605838: add     esp, 3Ch
0x60583B: retn    4
0x60583E: mov     ecx, [esi+58h]
0x605841: test    ecx, ecx
0x605843: push    ebx
0x605844: push    edi
0x605845: jz      short loc_6058BB
0x605847: mov     edx, [ecx]
0x605849: mov     eax, [edx+34h]
0x60584C: call    eax
0x60584E: mov     ecx, offset TimeGlobals
0x605853: mov     edi, eax
0x605855: call    TimeGlobals_GetGameDay
0x60585A: movsx   ecx, al
0x60585D: cmp     edi, ecx
0x60585F: jz      short loc_6058B4
0x605861: cmp     byte ptr [esi+0FDh], 0
0x605868: jnz     short loc_6058AB
0x60586A: mov     ecx, offset TimeGlobals
0x60586F: call    TimeGlobals_GetGameDayOfWeek
0x605874: cmp     eax, ds:0B37D80h
0x60587A: jz      short loc_605884
0x60587C: cmp     eax, ds:0B37D88h
0x605882: jnz     short loc_6058AB
0x605884: lea     ecx, [esi+44h]
0x605887: call    sub_420680
0x60588C: mov     edi, eax
0x60588E: test    edi, edi
0x605890: jz      short loc_6058AB
0x605892: mov     ebx, [edi]
0x605894: mov     ecx, edi
0x605896: call    TESObjectREFR__ShouldReferenceRespawn
0x60589B: test    al, al
0x60589D: mov     eax, [ebx+184h]
0x6058A3: setz    dl
0x6058A6: mov     ecx, edi
0x6058A8: push    edx
0x6058A9: call    eax
0x6058AB: mov     byte ptr [esi+0FDh], 1
0x6058B2: jmp     short loc_6058BB
0x6058B4: mov     byte ptr [esi+0FDh], 0
0x6058BB: mov     edx, [esi]
0x6058BD: mov     eax, [edx+1A0h]
0x6058C3: mov     ecx, esi
0x6058C5: call    eax
0x6058C7: test    al, al
0x6058C9: jz      short loc_6058F2
0x6058CB: mov     edx, [esi]
0x6058CD: mov     eax, [edx+380h]
0x6058D3: mov     ecx, esi
0x6058D5: call    eax
0x6058D7: test    eax, eax
0x6058D9: jnz     short loc_6058EB
0x6058DB: mov     edx, [esi]
0x6058DD: mov     eax, [edx+388h]
0x6058E3: mov     ecx, esi
0x6058E5: call    eax
0x6058E7: test    eax, eax
0x6058E9: jz      short loc_6058F2
0x6058EB: mov     ecx, esi
0x6058ED: call    sub_5F0410
0x6058F2: mov     edx, [esi]
0x6058F4: mov     eax, [edx+198h]
0x6058FA: push    0
0x6058FC: mov     ecx, esi
0x6058FE: call    eax
0x605900: test    al, al
0x605902: jnz     loc_605A23
0x605908: cmp     [esi+0C0h], al
0x60590E: jnz     loc_605A23
0x605914: cmp     ds:0B3BD98h, al
0x60591A: jz      loc_605A23
0x605920: cmp     dword ptr [esi+0B0h], 6
0x605927: jz      loc_605A23
0x60592D: mov     edx, [esi]
0x60592F: mov     eax, [edx+388h]
0x605935: mov     ecx, esi
0x605937: call    eax
0x605939: test    eax, eax
0x60593B: jz      short loc_605969
0x60593D: mov     ecx, esi
0x60593F: call    sub_5E0380
0x605944: test    eax, eax
0x605946: jz      short loc_605962
0x605948: mov     ecx, esi
0x60594A: call    sub_5E0380
0x60594F: cmp     byte ptr [eax+20h], 18h
0x605953: jz      short loc_605969
0x605955: mov     ecx, esi
0x605957: call    sub_5E0380
0x60595C: cmp     byte ptr [eax+20h], 1Eh
0x605960: jz      short loc_605969
0x605962: mov     ecx, esi; this
0x605964: call    sub_5F8000
0x605969: mov     eax, [esi+0CCh]
0x60596F: test    eax, eax
0x605971: jz      short loc_60597D
0x605973: push    1; int
0x605975: push    eax; int
0x605976: mov     ecx, esi; int
0x605978: call    sub_5F7CF0
0x60597D: mov     ecx, [esi+58h]
0x605980: mov     edx, [ecx]
0x605982: mov     eax, [edx+34h]
0x605985: call    eax
0x605987: mov     ecx, offset TimeGlobals
0x60598C: mov     bl, al
0x60598E: call    TimeGlobals_GetGameDay
0x605993: cmp     al, bl
0x605995: jz      short loc_60599F
0x605997: lea     ecx, [esi+44h]
0x60599A: call    sub_422D10
0x60599F: mov     edx, [esi]
0x6059A1: mov     eax, [edx+19Ch]
0x6059A7: mov     ecx, esi
0x6059A9: call    eax
0x6059AB: test    al, al
0x6059AD: jnz     short loc_605A0B
0x6059AF: cmp     ds:0B3BDA4h, al
0x6059B5: jnz     short loc_6059CA
0x6059B7: mov     ecx, [esi+58h]
0x6059BA: mov     ecx, [ecx+8]
0x6059BD: test    ecx, ecx
0x6059BF: jz      short loc_605A0B
0x6059C1: call    sub_567770
0x6059C6: test    al, al
0x6059C8: jz      short loc_605A0B
0x6059CA: mov     ecx, [esi+58h]
0x6059CD: mov     eax, [ecx+8]
0x6059D0: test    eax, eax
0x6059D2: jz      short loc_6059DA
0x6059D4: cmp     byte ptr [eax+20h], 18h
0x6059D8: jz      short loc_605A0B
0x6059DA: fldz
0x6059DC: fld     [esp+48h+arg_0]
0x6059E0: fucom   st(1)
0x6059E2: fnstsw  ax
0x6059E4: fstp    st(1)
0x6059E6: test    ah, 44h
0x6059E9: jnp     short loc_605A01
0x6059EB: cmp     esi, ds:0B333C4h
0x6059F1: jz      short loc_605A01
0x6059F3: mov     edx, [ecx]
0x6059F5: mov     eax, [edx+0Ch]
0x6059F8: push    ecx
0x6059F9: fstp    [esp+4Ch+a2+4]
0x6059FC: push    esi
0x6059FD: call    eax
0x6059FF: jmp     short loc_605A0B
0x605A01: mov     edx, [ecx]
0x605A03: fstp    st
0x605A05: mov     eax, [edx+10h]
0x605A08: push    esi
0x605A09: call    eax
0x605A0B: mov     ecx, offset TimeGlobals
0x605A10: call    TimeGlobals_GetGameDay
0x605A15: lea     ecx, [esi+44h]
0x605A18: push    eax
0x605A19: call    sub_420050
0x605A1E: jmp     loc_605B58
0x605A23: mov     edx, [esi]
0x605A25: mov     eax, [edx+198h]
0x605A2B: push    0
0x605A2D: mov     ecx, esi
0x605A2F: call    eax
0x605A31: test    al, al
0x605A33: jz      loc_605B58
0x605A39: cmp     dword ptr [esi+0B0h], 1
0x605A40: jz      short loc_605A60
0x605A42: mov     ecx, [esi+58h]
0x605A45: mov     edx, [ecx]
0x605A47: mov     eax, [edx+20h]
0x605A4A: call    eax
0x605A4C: fld     dword ptr [esi+84h]
0x605A52: fsub    dword ptr ds:0B33E9Ch
0x605A58: fstp    dword ptr [esi+84h]
0x605A5E: jmp     short loc_605A86
0x605A60: cmp     byte ptr ds:0B14E98h, 0
0x605A67: jz      short loc_605A86
0x605A69: mov     ecx, esi
0x605A6B: call    Actor__IsEssential
0x605A70: test    al, al
0x605A72: jz      short loc_605A86
0x605A74: mov     edx, [esi]
0x605A76: mov     eax, [edx+20Ch]
0x605A7C: push    1
0x605A7E: push    0
0x605A80: push    0
0x605A82: mov     ecx, esi
0x605A84: call    eax
0x605A86: mov     ecx, esi
0x605A88: call    Actor__IsEssential
0x605A8D: test    al, al
0x605A8F: jnz     loc_605B58
0x605A95: mov     ecx, esi
0x605A97: call    sub_5E1D70
0x605A9C: test    al, al
0x605A9E: jz      loc_605B58
0x605AA4: push    0; a2
0x605AA6: mov     ecx, esi; this
0x605AA8: call    TESObjectREFR_GetParentCell
0x605AAD: mov     ecx, ds:0B333A0h
0x605AB3: push    eax; a1
0x605AB4: call    TESObjectCELL_IsProcessLevel?LowHigh
0x605AB9: test    al, al
0x605ABB: jnz     loc_605B58
0x605AC1: mov     ecx, [esi+58h]
0x605AC4: test    ecx, ecx
0x605AC6: jz      loc_605B58
0x605ACC: mov     edx, [ecx]
0x605ACE: mov     eax, [edx+4F0h]
0x605AD4: call    eax
0x605AD6: fcomp   dword ptr ds:0A2FAA8h
0x605ADC: fnstsw  ax
0x605ADE: test    ah, 44h
0x605AE1: jnp     short loc_605B58
0x605AE3: mov     ecx, [esi+58h]
0x605AE6: mov     edx, [ecx]
0x605AE8: mov     eax, [edx+4F0h]
0x605AEE: mov     edi, ds:0B35C1Ch
0x605AF4: call    eax
0x605AF6: test    edi, edi
0x605AF8: mov     dword ptr [esp+48h+var_3C], edi
0x605AFC: fild    dword ptr [esp+48h+var_3C]
0x605B00: jge     short loc_605B08
0x605B02: fadd    dword ptr ds:0A2FC78h
0x605B08: faddp   st(1), st
0x605B0A: mov     ecx, offset TimeGlobals
0x605B0F: fstp    [esp+48h+var_30]
0x605B13: call    TimeGlobals_GetGameDaysPassed
0x605B18: test    eax, eax
0x605B1A: mov     dword ptr [esp+48h+var_3C], eax
0x605B1E: fild    dword ptr [esp+48h+var_3C]
0x605B22: jge     short loc_605B2A
0x605B24: fadd    dword ptr ds:0A2FC78h
0x605B2A: fmul    qword ptr ds:0A2F920h
0x605B30: mov     ecx, offset TimeGlobals
0x605B35: fstp    [esp+48h+var_3C]
0x605B39: call    TimeGlobals_GetGameHour
0x605B3E: fadd    [esp+48h+var_3C]
0x605B42: fcomp   [esp+48h+var_30]
0x605B46: fnstsw  ax
0x605B48: test    ah, 41h
0x605B4B: jnz     short loc_605B58
0x605B4D: push    esi
0x605B4E: mov     ecx, offset ActorProcessManager_ptr
0x605B53: call    sub_6748B0
0x605B58: mov     ecx, ds:0B33B00h
0x605B5E: call    sub_45A500
0x605B63: test    al, al
0x605B65: jnz     short loc_605B81
0x605B67: mov     edi, [esi]
0x605B69: mov     ecx, offset ActorProcessManager_ptr
0x605B6E: call    sub_673B00
0x605B73: mov     edx, [edi+368h]
0x605B79: push    ecx
0x605B7A: mov     ecx, esi
0x605B7C: fstp    [esp+4Ch+a2+4]
0x605B7F: call    edx
0x605B81: cmp     byte ptr [esi+0C0h], 0
0x605B88: jz      loc_605D06
0x605B8E: mov     ecx, [esi+58h]
0x605B91: test    ecx, ecx
0x605B93: jz      loc_605D06
0x605B99: mov     eax, [ecx]
0x605B9B: mov     edx, [eax+8]
0x605B9E: call    edx
0x605BA0: test    eax, eax
0x605BA2: jnz     loc_605D06
0x605BA8: mov     edi, [esi+3Ch]
0x605BAB: test    edi, edi
0x605BAD: jz      loc_605D06
0x605BB3: mov     eax, [esi]
0x605BB5: mov     edx, [eax+170h]
0x605BBB: mov     ecx, esi
0x605BBD: mov     bl, 1
0x605BBF: call    edx
0x605BC1: cmp     byte ptr [eax+4], 24h ; '$'
0x605BC5: jnz     short loc_605BD9
0x605BC7: mov     eax, [esi]
0x605BC9: mov     edx, [eax+278h]
0x605BCF: mov     ecx, esi
0x605BD1: call    edx
0x605BD3: test    al, al
0x605BD5: jnz     short loc_605BD9
0x605BD7: xor     bl, bl
0x605BD9: push    1; newDeadState
0x605BDB: mov     ecx, esi; this
0x605BDD: call    Actor_HandleDeathSTate????
0x605BE2: mov     eax, [esi]
0x605BE4: mov     edx, [eax+1C8h]
0x605BEA: mov     ecx, esi
0x605BEC: call    edx
0x605BEE: test    bl, bl
0x605BF0: mov     ecx, esi
0x605BF2: jz      short loc_605C69
0x605BF4: mov     eax, [esi]
0x605BF6: mov     edx, [eax+1E0h]
0x605BFC: call    edx
0x605BFE: push    ecx
0x605BFF: lea     ecx, [esp+4Ch+var_24]
0x605C03: fstp    [esp+4Ch+a2+4]; float
0x605C06: call    NiMatrix33_InitRotationTransform
0x605C0B: fldz
0x605C0D: fst     dword ptr [esp+48h+var_30]
0x605C11: lea     eax, [esp+48h+var_30]
0x605C15: fld1
0x605C17: push    eax
0x605C18: lea     ecx, [esp+4Ch+var_3C]
0x605C1C: fstp    dword ptr [esp+4Ch+var_30+4]
0x605C20: push    ecx
0x605C21: lea     ecx, [esp+50h+var_24]
0x605C25: fstp    [esp+50h+var_28]
0x605C29: call    sub_7101F0
0x605C2E: mov     edx, [eax]
0x605C30: fldz
0x605C32: mov     dword ptr [esp+48h+var_30], edx
0x605C36: mov     ecx, [eax+4]
0x605C39: push    0; int
0x605C3B: push    ecx
0x605C3C: fstp    [esp+50h+a2]; float
0x605C3F: mov     dword ptr [esp+50h+var_30+4], ecx
0x605C43: mov     edx, [eax+8]
0x605C46: push    1; int
0x605C48: lea     eax, [esp+54h+var_30]
0x605C4C: push    eax; int
0x605C4D: push    edi; int
0x605C4E: mov     [esp+5Ch+var_28], edx
0x605C52: call    sub_8AB440
0x605C57: mov     ecx, [esi+58h]
0x605C5A: mov     edx, [ecx]
0x605C5C: mov     eax, [edx+20h]
0x605C5F: add     esp, 14h
0x605C62: call    eax
0x605C64: jmp     loc_605CFF
0x605C69: mov     edx, [esi]
0x605C6B: mov     eax, [edx+164h]
0x605C71: call    eax
0x605C73: test    eax, eax
0x605C75: jz      loc_605CFF
0x605C7B: mov     edx, [esi]
0x605C7D: mov     eax, [edx+164h]
0x605C83: push    20h ; ' '
0x605C85: mov     ecx, esi
0x605C87: call    eax
0x605C89: mov     ecx, eax
0x605C8B: call    sub_470D00
0x605C90: test    al, al
0x605C92: jz      short loc_605CFF
0x605C94: mov     edx, [esi]
0x605C96: mov     eax, [edx+164h]
0x605C9C: mov     ecx, esi
0x605C9E: call    eax
0x605CA0: fldz
0x605CA2: push    ecx
0x605CA3: fstp    [esp+4Ch+a2+4]; float
0x605CA6: mov     edi, eax
0x605CA8: push    5; int
0x605CAA: mov     ecx, edi
0x605CAC: call    sub_470FC0
0x605CB1: fldz
0x605CB3: push    0FFFFFFFFh
0x605CB5: push    ecx
0x605CB6: fstp    [esp+50h+a2]
0x605CB9: push    0FFFFFFFFh
0x605CBB: push    20h ; ' '
0x605CBD: push    0
0x605CBF: mov     ecx, edi
0x605CC1: call    sub_474AB0
0x605CC6: push    0
0x605CC8: mov     ecx, edi
0x605CCA: call    sub_4706E0
0x605CCF: test    eax, eax
0x605CD1: jz      short loc_605CF8
0x605CD3: fld     dword ptr [eax+30h]
0x605CD6: sub     esp, 8
0x605CD9: fstp    dword ptr [eax+48h]
0x605CDC: mov     ecx, edi; this
0x605CDE: fld     dword ptr [eax+30h]
0x605CE1: fstp    [esp+50h+a2+4]; float
0x605CE5: fldz
0x605CE7: fstp    [esp+50h+a2]; float
0x605CEA: push    esi; int
0x605CEB: call    sub_476D10
0x605CF0: push    esi; a2
0x605CF1: mov     ecx, edi; this
0x605CF3: call    sub_474510
0x605CF8: mov     ecx, esi
0x605CFA: call    sub_5F5D10
0x605CFF: mov     byte ptr [esi+0C0h], 0
0x605D06: mov     edx, [esi]
0x605D08: mov     eax, [edx+388h]
0x605D0E: mov     ecx, esi
0x605D10: call    eax
0x605D12: test    eax, eax
0x605D14: jz      short loc_605D27
0x605D16: mov     edx, [eax]
0x605D18: mov     ecx, eax
0x605D1A: mov     eax, [edx+18Ch]
0x605D20: call    eax
0x605D22: cmp     eax, 4
0x605D25: jz      short loc_605D36
0x605D27: fld     [esp+48h+arg_0]
0x605D2B: push    ecx
0x605D2C: mov     ecx, esi; this
0x605D2E: fstp    [esp+4Ch+a2+4]; a2
0x605D31: call    sub_603CA0
0x605D36: cmp     esi, ds:0B333C4h
0x605D3C: jz      short loc_605DA9
0x605D3E: mov     edx, [esi]
0x605D40: mov     eax, [edx+170h]
0x605D46: mov     ecx, esi
0x605D48: call    eax
0x605D4A: test    eax, eax
0x605D4C: jz      short loc_605DA9
0x605D4E: mov     ecx, esi; this
0x605D50: call    TESObjectREFR_GetParentCell
0x605D55: mov     edx, [esi]
0x605D57: mov     edi, eax
0x605D59: mov     eax, [edx+174h]
0x605D5F: mov     ecx, esi
0x605D61: call    eax
0x605D63: test    edi, edi
0x605D65: mov     ecx, [eax]
0x605D67: mov     dword ptr [esp+48h+var_30], ecx
0x605D6B: mov     edx, [eax+4]
0x605D6E: mov     dword ptr [esp+48h+var_30+4], edx
0x605D72: mov     eax, [eax+8]
0x605D75: mov     [esp+48h+var_28], eax
0x605D79: jz      short loc_605DA9
0x605D7B: mov     ecx, edi; this
0x605D7D: call    TESObjectCELL_IsInterior
0x605D82: test    al, al
0x605D84: jnz     short loc_605DA9
0x605D86: lea     ecx, [esp+48h+var_30]
0x605D8A: push    ecx
0x605D8B: mov     ecx, edi
0x605D8D: call    sub_4CC540
0x605D92: test    al, al
0x605D94: jnz     short loc_605DA9
0x605D96: mov     ecx, edi; this
0x605D98: call    TESObjectCELL_GetWorldSpace
0x605D9D: push    eax; int
0x605D9E: push    0; int
0x605DA0: push    esi; Concurrency::details::SchedulerBase *
0x605DA1: call    sub_4DD4B0
0x605DA6: add     esp, 0Ch
0x605DA9: pop     edi
0x605DAA: pop     ebx
0x605DAB: pop     esi
0x605DAC: add     esp, 3Ch
0x605DAF: retn    4
