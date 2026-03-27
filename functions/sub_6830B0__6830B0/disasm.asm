0x6830B0: push    0FFFFFFFFh
0x6830B2: push    offset SEH_6830B0
0x6830B7: mov     eax, large fs:0
0x6830BD: push    eax
0x6830BE: sub     esp, 0Ch
0x6830C1: push    ebx
0x6830C2: push    ebp
0x6830C3: push    esi
0x6830C4: push    edi
0x6830C5: mov     eax, ds:0B30AACh
0x6830CA: xor     eax, esp
0x6830CC: push    eax
0x6830CD: lea     eax, [esp+2Ch+var_C]
0x6830D1: mov     large fs:0, eax
0x6830D7: mov     esi, [esp+2Ch+arg_0]
0x6830DB: xor     eax, eax
0x6830DD: test    esi, esi
0x6830DF: jz      loc_6833EB
0x6830E5: movzx   eax, byte ptr [esi+4]
0x6830E9: push    0
0x6830EB: push    eax
0x6830EC: call    sub_4DB260
0x6830F1: push    0; int
0x6830F3: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6830F8: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6830FD: push    0; int
0x6830FF: push    eax; void *
0x683100: call    OblivionDynamicCast
0x683105: mov     ebx, eax
0x683107: add     esp, 1Ch
0x68310A: test    ebx, ebx
0x68310C: mov     [esp+2Ch+var_18], ebx
0x683110: jz      loc_6833EB
0x683116: mov     eax, [esi]
0x683118: mov     edx, [eax+170h]
0x68311E: mov     ecx, esi
0x683120: call    edx
0x683122: push    eax; a2
0x683123: mov     ecx, ebx; this
0x683125: call    TESObjectREFR_SetBaseForm
0x68312A: mov     ecx, ebx; this
0x68312C: call    TESForm_MakeTemporary
0x683131: mov     eax, [esi+0Ch]
0x683134: push    1; a3
0x683136: push    eax; a3
0x683137: mov     ecx, ebx; this
0x683139: call    TESForm_SetFormID
0x68313E: mov     ecx, esi; this
0x683140: call    TESObjectREFR_IsPersistent?
0x683145: mov     ecx, ebx; this
0x683147: push    eax; a4
0x683148: call    TESObjectREFR_SetPersistance
0x68314D: mov     ecx, [esi+2Ch]
0x683150: mov     edx, [esi+30h]
0x683153: sub     esp, 0Ch
0x683156: mov     eax, esp
0x683158: mov     [eax], ecx
0x68315A: mov     ecx, [esi+34h]
0x68315D: mov     [eax+4], edx
0x683160: mov     [eax+8], ecx
0x683163: mov     ecx, ebx; this
0x683165: call    TESObjectREFR_SetPosition
0x68316A: mov     edx, [esi+20h]
0x68316D: mov     ecx, [esi+24h]
0x683170: sub     esp, 0Ch
0x683173: mov     eax, esp
0x683175: mov     [eax], edx
0x683177: mov     edx, [esi+28h]
0x68317A: mov     [eax+4], ecx
0x68317D: mov     ecx, ebx
0x68317F: mov     [eax+8], edx
0x683182: call    sub_4D89A0
0x683187: mov     ecx, esi; this
0x683189: call    TESObjectREFR_GetParentCell
0x68318E: test    eax, eax
0x683190: jz      short loc_6831BC
0x683192: mov     ecx, esi; this
0x683194: call    TESObjectREFR_GetParentCell
0x683199: mov     ecx, eax; this
0x68319B: call    TESObjectCELL_IsInterior
0x6831A0: test    al, al
0x6831A2: jz      short loc_6831BC
0x6831A4: mov     edi, [ebx]
0x6831A6: mov     ecx, esi; this
0x6831A8: add     edi, 194h
0x6831AE: call    TESObjectREFR_GetParentCell
0x6831B3: push    eax
0x6831B4: mov     eax, [edi]
0x6831B6: mov     ecx, ebx
0x6831B8: call    eax
0x6831BA: jmp     short loc_6831EB
0x6831BC: mov     edx, [esi+18h]
0x6831BF: mov     eax, [edx]
0x6831C1: lea     ecx, [esi+18h]
0x6831C4: call    eax
0x6831C6: test    eax, eax
0x6831C8: jz      short loc_6831D5
0x6831CA: push    eax
0x6831CB: lea     ecx, [ebx+44h]
0x6831CE: call    sub_4247B0
0x6831D3: jmp     short loc_6831EB
0x6831D5: mov     edi, [ebx]
0x6831D7: mov     ecx, esi; this
0x6831D9: add     edi, 194h
0x6831DF: call    TESObjectREFR_GetParentCell
0x6831E4: mov     edx, [edi]
0x6831E6: push    eax
0x6831E7: mov     ecx, ebx
0x6831E9: call    edx
0x6831EB: push    0; a2
0x6831ED: mov     ecx, esi; this
0x6831EF: call    Actor_GetActorBaseForm
0x6831F4: test    eax, eax
0x6831F6: jz      short loc_6831FD
0x6831F8: add     eax, 44h ; 'D'
0x6831FB: jmp     short loc_6831FF
0x6831FD: xor     eax, eax
0x6831FF: push    eax
0x683200: push    esi; a1
0x683201: call    ContainerExtraData_GetContainerExtraDataForRef
0x683206: mov     edi, eax
0x683208: add     esp, 8
0x68320B: test    edi, edi
0x68320D: jz      loc_6832D5
0x683213: mov     eax, [edi]
0x683215: cmp     dword ptr [eax+4], 0
0x683219: jnz     short loc_683224
0x68321B: cmp     dword ptr [eax], 0
0x68321E: jz      loc_6832D5
0x683224: push    0; a2
0x683226: mov     ecx, ebx; this
0x683228: call    Actor_GetActorBaseForm
0x68322D: test    eax, eax
0x68322F: jz      short loc_683236
0x683231: add     eax, 44h ; 'D'
0x683234: jmp     short loc_683238
0x683236: xor     eax, eax
0x683238: push    eax
0x683239: push    ebx; a1
0x68323A: call    ContainerExtraData_GetContainerExtraDataForRef
0x68323F: mov     edx, [edi]
0x683241: add     esp, 8
0x683244: test    edx, edx
0x683246: mov     [esp+30h+var_18], eax
0x68324A: mov     [esp+30h], edx
0x68324E: jz      loc_6832D5
0x683254: jmp     short loc_68325A
0x683256: mov     edx, [esp+38h+var_8]
0x68325A: mov     edi, [edx]
0x68325C: test    edi, edi
0x68325E: jz      short loc_6832CA
0x683260: mov     eax, [edi+8]
0x683263: movzx   ecx, byte ptr [eax+4]
0x683267: cmp     ecx, 1Bh
0x68326A: jz      short loc_683271
0x68326C: cmp     ecx, 27h ; '''
0x68326F: jmp     short loc_68327F
0x683271: cmp     eax, ds:0B35EC8h
0x683277: jz      short loc_683281
0x683279: cmp     eax, ds:0B35ECCh
0x68327F: jnz     short loc_6832CA
0x683281: push    0Ch; Size
0x683283: call    FormHeapAlloc
0x683288: mov     ebp, eax
0x68328A: add     esp, 4
0x68328D: mov     [esp+30h+var_14], ebp
0x683291: xor     eax, eax
0x683293: cmp     ebp, eax
0x683295: mov     [esp+30h+var_8], eax
0x683299: jz      short loc_6832B2
0x68329B: mov     ebx, [edi+8]
0x68329E: mov     ecx, edi
0x6832A0: call    TESHealthForm_GetHealth
0x6832A5: push    eax
0x6832A6: push    ebx
0x6832A7: mov     ecx, ebp
0x6832A9: call    ContainerEntryExtraData_constr
0x6832AE: mov     ebx, [esp+30h+var_1C]
0x6832B2: mov     ecx, [esp+30h+var_18]
0x6832B6: push    1
0x6832B8: push    eax
0x6832B9: mov     [esp+38h+var_8], 0FFFFFFFFh
0x6832C1: call    ContainerExtraData_AddEntry
0x6832C6: mov     edx, [esp+38h+var_8]
0x6832CA: mov     edx, [edx+4]
0x6832CD: test    edx, edx
0x6832CF: mov     [esp+38h+var_8], edx
0x6832D3: jnz     short loc_683256
0x6832D5: mov     esi, [esi+58h]
0x6832D8: test    esi, esi
0x6832DA: jz      loc_6833E9
0x6832E0: mov     eax, [esi]
0x6832E2: mov     edx, [eax+8]
0x6832E5: mov     ecx, esi
0x6832E7: xor     edi, edi
0x6832E9: call    edx
0x6832EB: cmp     eax, 3; switch 4 cases
0x6832EE: ja      def_6832F4
0x6832F4: jmp     ds:jpt_6832F4[eax*4]; switch jump
0x6832FB: push    90h; jumptable 006832F4 case 3
0x683300: call    FormHeapAlloc
0x683305: add     esp, 4
0x683308: mov     [esp+38h+var_8], eax
0x68330C: test    eax, eax
0x68330E: mov     [esp+38h+var_10], 1
0x683316: jz      short loc_683393
0x683318: mov     ecx, eax; this
0x68331A: call    ??0LowProcess@@QAE@XZ; LowProcess::LowProcess(void)
0x68331F: jmp     short loc_683395
0x683321: push    0A8h ; '¨'; jumptable 006832F4 case 2
0x683326: call    FormHeapAlloc
0x68332B: add     esp, 4
0x68332E: mov     [esp+38h+var_8], eax
0x683332: test    eax, eax
0x683334: mov     [esp+38h+var_10], 2
0x68333C: jz      short loc_683393
0x68333E: mov     ecx, eax; this
0x683340: call    ??0MiddleLowProcess@@QAE@XZ; MiddleLowProcess::MiddleLowProcess(void)
0x683345: jmp     short loc_683395
0x683347: push    18Ch; jumptable 006832F4 case 1
0x68334C: call    FormHeapAlloc
0x683351: add     esp, 4
0x683354: mov     [esp+38h+var_8], eax
0x683358: test    eax, eax
0x68335A: mov     [esp+38h+var_10], 3
0x683362: jz      short loc_683393
0x683364: mov     ecx, eax; this
0x683366: call    ??0MiddleHighProcess@@QAE@XZ; MiddleHighProcess::MiddleHighProcess(void)
0x68336B: jmp     short loc_683395
0x68336D: push    2ECh; jumptable 006832F4 case 0
0x683372: call    FormHeapAlloc
0x683377: add     esp, 4
0x68337A: mov     [esp+38h+var_8], eax
0x68337E: test    eax, eax
0x683380: mov     [esp+38h+var_10], 4
0x683388: jz      short loc_683393
0x68338A: mov     ecx, eax; this
0x68338C: call    ??0HighProcess@@QAE@XZ; HighProcess::HighProcess(void)
0x683391: jmp     short loc_683395
0x683393: xor     eax, eax
0x683395: mov     edi, eax
0x683397: mov     [esp+38h+var_10], 0FFFFFFFFh
