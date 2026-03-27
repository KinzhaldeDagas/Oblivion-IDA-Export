0x5CF030: push    0FFFFFFFFh
0x5CF032: push    offset ??0?$NiTPointerListBase@V?$DFALL@PAVRechargeItemAndIndex@@@@PAVRechargeItemAndIndex@@@@QAE@XZ_SEH
0x5CF037: mov     eax, large fs:0
0x5CF03D: push    eax
0x5CF03E: sub     esp, 148h
0x5CF044: mov     eax, ds:0B30AACh
0x5CF049: xor     eax, esp
0x5CF04B: mov     [esp+154h+var_10], eax
0x5CF052: push    ebx; a3
0x5CF053: push    ebp; a3
0x5CF054: push    esi; a3
0x5CF055: push    edi; a3
0x5CF056: mov     eax, ds:0B30AACh
0x5CF05B: xor     eax, esp
0x5CF05D: push    eax; a3
0x5CF05E: lea     eax, [esp+168h+var_C]
0x5CF065: mov     large fs:0, eax
0x5CF06B: mov     eax, ecx
0x5CF06D: mov     ecx, ds:0B333C4h
0x5CF073: xor     esi, esi
0x5CF075: cmp     ecx, esi
0x5CF077: mov     [esp+168h+var_134], eax
0x5CF07B: jz      loc_5CF742
0x5CF081: mov     eax, [eax+38h]
0x5CF084: push    esi
0x5CF085: mov     [esp+16Ch+var_11C], eax
0x5CF089: call    TESObjectREF_GetTotalEntryCountForITem
0x5CF08E: mov     [esp+168h+var_138], eax
0x5CF092: mov     [esp+168h+var_144], esi
0x5CF096: mov     [esp+168h+var_14C], esi
0x5CF09A: mov     [esp+168h+var_148], esi
0x5CF09E: mov     [esp+168h+var_150], offset ??_7?$NiTList@PAVRechargeItemAndIndex@@@@6B@; const NiTList<RechargeItemAndIndex *>::`vftable'
0x5CF0A6: cmp     eax, esi
0x5CF0A8: mov     [esp+168h+var_4], esi
0x5CF0AF: mov     [esp+168h+var_154], esi
0x5CF0B3: jle     loc_5CF30E
0x5CF0B9: lea     esp, [esp+0]
0x5CF0C0: mov     ecx, [esp+168h+var_154]
0x5CF0C4: push    0; a3
0x5CF0C6: push    ecx; a2
0x5CF0C7: mov     ecx, ds:0B333C4h; this
0x5CF0CD: call    GetInventoryEntryOfItem
0x5CF0D2: mov     edi, eax
0x5CF0D4: test    edi, edi
0x5CF0D6: jz      short loc_5CF101
0x5CF0D8: mov     eax, [edi+8]
0x5CF0DB: push    0; int
0x5CF0DD: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5CF0E2: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5CF0E7: push    0; int
0x5CF0E9: push    eax; void *
0x5CF0EA: call    OblivionDynamicCast
0x5CF0EF: mov     ebx, eax
0x5CF0F1: add     esp, 14h
0x5CF0F4: test    ebx, ebx
0x5CF0F6: jz      short loc_5CF103
0x5CF0F8: movzx   eax, word ptr [ebx+8]
0x5CF0FC: movzx   ebp, ax
0x5CF0FF: jmp     short loc_5CF108
0x5CF101: xor     ebx, ebx
0x5CF103: mov     ebp, 0FFFFh
0x5CF108: test    edi, edi
0x5CF10A: jz      short loc_5CF159
0x5CF10C: mov     edx, [esp+168h+var_134]
0x5CF110: mov     eax, [edx+44h]
0x5CF113: test    eax, eax
0x5CF115: jz      short loc_5CF159
0x5CF117: mov     ecx, [edi+8]
0x5CF11A: cmp     ecx, [eax+8]
0x5CF11D: jnz     short loc_5CF159
0x5CF11F: mov     ecx, edi
0x5CF121: call    sub_4849C0
0x5CF126: fcomp   dword ptr ds:0A2FAA8h
0x5CF12C: fnstsw  ax
0x5CF12E: test    ah, 41h
0x5CF131: jnz     short loc_5CF159
0x5CF133: mov     eax, [esp+168h+var_134]
0x5CF137: mov     esi, [eax+4]
0x5CF13A: mov     ecx, edi
0x5CF13C: call    TESHealthForm_GetHealth
0x5CF141: mov     [esp+168h+var_140], eax
0x5CF145: fild    [esp+168h+var_140]
0x5CF149: push    ecx
0x5CF14A: mov     ecx, esi; this
0x5CF14C: fstp    [esp+16Ch+a2]; a3
0x5CF14F: push    0FB4h; a2
0x5CF154: call    Tile_SetFloat
0x5CF159: test    ebx, ebx
0x5CF15B: jz      short loc_5CF193
0x5CF15D: mov     eax, [edi+8]
0x5CF160: cmp     byte ptr [eax+4], 15h
0x5CF164: jz      short loc_5CF193
0x5CF166: cmp     byte ptr [eax+4], 16h
0x5CF16A: jz      short loc_5CF193
0x5CF16C: cmp     byte ptr [eax+4], 14h
0x5CF170: jz      short loc_5CF193
0x5CF172: cmp     dword ptr [ebx+4], 0
0x5CF176: jz      short loc_5CF193
0x5CF178: mov     ecx, edi
0x5CF17A: call    sub_4849C0
0x5CF17F: movzx   ecx, bp
0x5CF182: mov     [esp+168h+var_140], ecx
0x5CF186: fild    [esp+168h+var_140]
0x5CF18A: fcompp
0x5CF18C: fnstsw  ax
0x5CF18E: test    ah, 41h
0x5CF191: jp      short loc_5CF1A9
0x5CF193: test    edi, edi
0x5CF195: jz      short loc_5CF1A7
0x5CF197: mov     ecx, edi
0x5CF199: call    ContainerEntryExtraData_DestroyDataTable
0x5CF19E: push    edi
0x5CF19F: call    FormHeapFree
0x5CF1A4: add     esp, 4
0x5CF1A7: xor     edi, edi
0x5CF1A9: test    edi, edi
0x5CF1AB: mov     esi, [esp+168h+var_14C]
0x5CF1AF: mov     [esp+168h+var_13C], 0
0x5CF1B7: jz      short loc_5CF1C4
0x5CF1B9: mov     ecx, edi
0x5CF1BB: call    sub_485150
0x5CF1C0: mov     [esp+168h+var_13C], eax
0x5CF1C4: test    esi, esi
0x5CF1C6: jz      short loc_5CF212
0x5CF1C8: test    edi, edi
0x5CF1CA: jz      loc_5CF2F9
0x5CF1D0: lea     eax, [esi+8]
0x5CF1D3: mov     eax, [eax]
0x5CF1D5: mov     ebx, [eax]
0x5CF1D7: mov     ebp, esi
0x5CF1D9: mov     esi, [esi]
0x5CF1DB: mov     ecx, ebx
0x5CF1DD: call    sub_485150
0x5CF1E2: cmp     eax, [esp+168h+var_13C]
0x5CF1E6: jl      short loc_5CF23C
0x5CF1E8: jnz     short loc_5CF20E
0x5CF1EA: mov     ecx, edi
0x5CF1EC: call    sub_488DF0
0x5CF1F1: mov     ecx, ebx
0x5CF1F3: mov     [esp+168h+var_140], eax
0x5CF1F7: call    sub_488DF0
0x5CF1FC: mov     edx, [esp+168h+var_140]
0x5CF200: push    edx; unsigned __int8 *
0x5CF201: push    eax; unsigned __int8 *
0x5CF202: call    __mbsicmp
0x5CF207: add     esp, 8
0x5CF20A: test    eax, eax
0x5CF20C: jle     short loc_5CF288
0x5CF20E: test    esi, esi
0x5CF210: jnz     short loc_5CF1C8
0x5CF212: test    edi, edi
0x5CF214: jz      loc_5CF2F9
0x5CF21A: push    8; Size
0x5CF21C: call    FormHeapAlloc
0x5CF221: add     esp, 4
0x5CF224: test    eax, eax
0x5CF226: jz      loc_5CF2C1
0x5CF22C: mov     edx, [esp+168h+var_154]
0x5CF230: mov     [eax], edi
0x5CF232: mov     [eax+4], edx
0x5CF235: mov     esi, eax
0x5CF237: jmp     loc_5CF2C3
0x5CF23C: push    8; Size
0x5CF23E: call    FormHeapAlloc
0x5CF243: add     esp, 4
0x5CF246: test    eax, eax
0x5CF248: jz      short loc_5CF257
0x5CF24A: mov     ecx, [esp+168h+var_154]
0x5CF24E: mov     [eax], edi
0x5CF250: mov     [eax+4], ecx
0x5CF253: mov     esi, eax
0x5CF255: jmp     short loc_5CF259
0x5CF257: xor     esi, esi
0x5CF259: mov     edx, [esp+168h+var_150]
0x5CF25D: mov     eax, [edx+4]
0x5CF260: lea     ecx, [esp+168h+var_150]
0x5CF264: call    eax
0x5CF266: mov     [eax+8], esi
0x5CF269: mov     [eax], ebp
0x5CF26B: mov     ecx, [ebp+4]
0x5CF26E: mov     [eax+4], ecx
0x5CF271: mov     ecx, [ebp+4]
0x5CF274: test    ecx, ecx
0x5CF276: jz      short loc_5CF27F
0x5CF278: mov     [ecx], eax
0x5CF27A: mov     [ebp+4], eax
0x5CF27D: jmp     short loc_5CF2F4
0x5CF27F: mov     [esp+168h+var_14C], eax
0x5CF283: mov     [ebp+4], eax
0x5CF286: jmp     short loc_5CF2F4
0x5CF288: push    8; Size
0x5CF28A: call    FormHeapAlloc
0x5CF28F: add     esp, 4
0x5CF292: test    eax, eax
0x5CF294: jz      short loc_5CF2B0
0x5CF296: mov     edx, [esp+168h+var_154]
0x5CF29A: mov     [eax+4], edx
0x5CF29D: mov     [eax], edi
0x5CF29F: mov     esi, eax
0x5CF2A1: mov     eax, [esp+168h+var_150]
0x5CF2A5: mov     edx, [eax+4]
0x5CF2A8: lea     ecx, [esp+168h+var_150]
0x5CF2AC: call    edx
0x5CF2AE: jmp     short loc_5CF266
0x5CF2B0: mov     eax, [esp+168h+var_150]
0x5CF2B4: mov     edx, [eax+4]
0x5CF2B7: lea     ecx, [esp+168h+var_150]
0x5CF2BB: xor     esi, esi
0x5CF2BD: call    edx
0x5CF2BF: jmp     short loc_5CF266
0x5CF2C1: xor     esi, esi
0x5CF2C3: mov     eax, [esp+168h+var_150]
0x5CF2C7: mov     edx, [eax+4]
0x5CF2CA: lea     ecx, [esp+168h+var_150]
0x5CF2CE: call    edx
0x5CF2D0: mov     [eax+8], esi
0x5CF2D3: mov     dword ptr [eax], 0
0x5CF2D9: mov     ecx, [esp+168h+var_148]
0x5CF2DD: mov     [eax+4], ecx
0x5CF2E0: mov     ecx, [esp+168h+var_148]
0x5CF2E4: test    ecx, ecx
0x5CF2E6: jz      short loc_5CF2EC
0x5CF2E8: mov     [ecx], eax
0x5CF2EA: jmp     short loc_5CF2F0
0x5CF2EC: mov     [esp+168h+var_14C], eax
0x5CF2F0: mov     [esp+168h+var_148], eax
0x5CF2F4: add     [esp+168h+var_144], 1
0x5CF2F9: mov     eax, [esp+168h+var_154]
0x5CF2FD: add     eax, 1
0x5CF300: cmp     eax, [esp+168h+var_138]
0x5CF304: mov     [esp+168h+var_154], eax
0x5CF308: jl      loc_5CF0C0
0x5CF30E: cmp     [esp+168h+arg_0], 0
0x5CF316: jz      short loc_5CF336
0x5CF318: mov     eax, [esp+168h+var_134]
0x5CF31C: fld1
0x5CF31E: mov     ecx, [eax+28h]; this
0x5CF321: push    ecx
0x5CF322: fstp    [esp+16Ch+a2]; a3
0x5CF325: push    0FA1h; a2
0x5CF32A: mov     dword ptr [eax+3Ch], 0
0x5CF331: call    Tile_SetFloat
0x5CF336: mov     edx, [esp+168h+var_11C]
0x5CF33A: mov     esi, [edx+34h]
0x5CF33D: test    esi, esi
0x5CF33F: jz      short loc_5CF362
0x5CF341: fld     dword ptr ds:0A690E0h
0x5CF347: lea     eax, [esi+8]
0x5CF34A: mov     eax, [eax]
0x5CF34C: mov     esi, [esi]
0x5CF34E: push    ecx
0x5CF34F: fstp    [esp+16Ch+a2]; a3
0x5CF352: push    0FAEh; a2
0x5CF357: mov     ecx, eax; this
0x5CF359: call    Tile_SetFloat
0x5CF35E: test    esi, esi
0x5CF360: jnz     short loc_5CF341
0x5CF362: mov     eax, [esp+168h+var_148]
0x5CF366: xor     ebx, ebx
0x5CF368: cmp     eax, ebx
0x5CF36A: mov     [esp+168h+var_154], ebx
0x5CF36E: mov     [esp+168h+var_118], ebx
0x5CF372: mov     [esp+168h+var_13C], eax
0x5CF376: jz      loc_5CF675
0x5CF37C: lea     esp, [esp+0]
0x5CF380: mov     ecx, [esp+168h+var_13C]
0x5CF384: lea     eax, [ecx+8]
0x5CF387: mov     eax, [eax]
0x5CF389: mov     ecx, [ecx+4]
0x5CF38C: mov     edi, [eax]
0x5CF38E: mov     edx, [eax+4]
0x5CF391: mov     [esp+168h+var_13C], ecx
0x5CF395: mov     ecx, edi
0x5CF397: mov     [esp+168h+var_138], eax
0x5CF39B: mov     [esp+168h+var_140], edx
0x5CF39F: call    sub_485150
0x5CF3A4: cmp     eax, [esp+168h+var_118]
0x5CF3A8: jz      short loc_5CF3AE
0x5CF3AA: mov     [esp+168h+var_118], eax
0x5CF3AE: mov     eax, ds:0B333C4h
0x5CF3B3: push    eax
0x5CF3B4: mov     ecx, edi
0x5CF3B6: call    sub_4851B0
0x5CF3BB: push    eax
0x5CF3BC: push    offset aIcons; "Icons"
0x5CF3C1: lea     ecx, [esp+170h+var_114]
0x5CF3C5: push    offset aSS_2; "%s\\%s"
0x5CF3CA: push    ecx
0x5CF3CB: call    __sprintf
0x5CF3D0: mov     edx, [esp+178h+var_11C]
0x5CF3D4: mov     ebp, [edx+34h]
0x5CF3D7: add     esp, 10h
0x5CF3DA: cmp     ebp, ebx
0x5CF3DC: jz      short loc_5CF452
0x5CF3DE: mov     edi, edi
0x5CF3E0: mov     esi, [ebp+8]
0x5CF3E3: lea     eax, [ebp+8]
0x5CF3E6: mov     ebp, [ebp+0]
0x5CF3E9: push    0FAFh
0x5CF3EE: mov     ecx, esi
0x5CF3F0: call    sub_588C10
0x5CF3F5: test    eax, eax
0x5CF3F7: jz      short loc_5CF44E
0x5CF3F9: mov     eax, [esp+168h+var_138]
0x5CF3FD: mov     ecx, [eax]
0x5CF3FF: call    sub_488DF0
0x5CF404: test    eax, eax
0x5CF406: jz      short loc_5CF44E
0x5CF408: push    0FAEh
0x5CF40D: mov     ecx, esi
0x5CF40F: call    Tile_GetFloat
0x5CF414: fcomp   dword ptr ds:0A690E0h
0x5CF41A: fnstsw  ax
0x5CF41C: test    ah, 44h
0x5CF41F: jp      short loc_5CF44E
0x5CF421: mov     ecx, [esp+168h+var_138]
0x5CF425: mov     ecx, [ecx]
0x5CF427: call    sub_488DF0
0x5CF42C: push    0FAFh
0x5CF431: mov     ecx, esi
0x5CF433: mov     [esp+16Ch+var_120], eax
0x5CF437: call    sub_588C10
0x5CF43C: mov     edx, [esp+168h+var_120]
0x5CF440: push    edx; unsigned __int8 *
0x5CF441: push    eax; unsigned __int8 *
0x5CF442: call    __mbscmp
0x5CF447: add     esp, 8
0x5CF44A: test    eax, eax
0x5CF44C: jz      short loc_5CF47E
0x5CF44E: cmp     ebp, ebx
0x5CF450: jnz     short loc_5CF3E0
0x5CF452: mov     eax, [edi+8]
0x5CF455: push    ebx; int
0x5CF456: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5CF45B: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5CF460: push    ebx; int
0x5CF461: push    eax; void *
0x5CF462: call    OblivionDynamicCast
0x5CF467: add     esp, 14h
0x5CF46A: cmp     eax, ebx
0x5CF46C: jz      loc_5CF5C6
0x5CF472: movzx   eax, word ptr [eax+8]
0x5CF476: movzx   ebp, ax
0x5CF479: jmp     loc_5CF5CB
0x5CF47E: mov     eax, [edi+8]
0x5CF481: push    ebx; int
0x5CF482: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5CF487: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5CF48C: push    ebx; int
0x5CF48D: push    eax; void *
0x5CF48E: call    OblivionDynamicCast
0x5CF493: add     esp, 14h
0x5CF496: cmp     eax, ebx
0x5CF498: jz      short loc_5CF4A3
0x5CF49A: movzx   eax, word ptr [eax+8]
0x5CF49E: movzx   ebp, ax
0x5CF4A1: jmp     short loc_5CF4A8
0x5CF4A3: mov     ebp, 7FFFFFFFh
0x5CF4A8: mov     ecx, edi
0x5CF4AA: call    sub_488DF0
0x5CF4AF: push    eax
0x5CF4B0: push    0FAFh
0x5CF4B5: mov     ecx, esi
0x5CF4B7: call    Tile_SetString
0x5CF4BC: lea     eax, [esp+168h+var_114]
0x5CF4C0: push    eax
0x5CF4C1: push    0FB1h
0x5CF4C6: mov     ecx, esi
0x5CF4C8: call    Tile_SetString
0x5CF4CD: fild    [esp+168h+var_140]
0x5CF4D1: push    ecx
0x5CF4D2: mov     ecx, esi; this
0x5CF4D4: fstp    [esp+16Ch+a2]; a3
0x5CF4D7: push    0FB9h; a2
0x5CF4DC: call    Tile_SetFloat
0x5CF4E1: fild    [esp+168h+var_154]
0x5CF4E5: push    ecx
0x5CF4E6: mov     ecx, esi; this
0x5CF4E8: fstp    [esp+16Ch+a2]; a3
0x5CF4EB: push    0FAEh; a2
0x5CF4F0: call    Tile_SetFloat
0x5CF4F5: mov     [esp+168h+var_130], ebx
0x5CF4F9: mov     [esp+168h+var_12C], bx
0x5CF4FE: mov     [esp+168h+var_12A], bx
0x5CF503: push    ebp
0x5CF504: mov     ecx, edi
0x5CF506: mov     byte ptr [esp+16Ch+var_4], 1
0x5CF50E: call    sub_4849C0
0x5CF513: call    Double_To_SInt32
0x5CF518: push    eax; ArgList
0x5CF519: lea     ecx, [esp+170h+var_130]
0x5CF51D: push    offset aDD_0; "%d/%d"
0x5CF522: push    ecx; int
0x5CF523: call    BSStringT_Static_Format
0x5CF528: mov     ebp, [esp+178h+var_130]
0x5CF52C: add     esp, 10h
0x5CF52F: push    ebp
0x5CF530: push    0FB0h
0x5CF535: mov     ecx, esi
0x5CF537: call    Tile_SetString
0x5CF53C: mov     eax, [esi+10h]
0x5CF53F: lea     ecx, [eax+30h]
0x5CF542: mov     eax, [ecx+4]
0x5CF545: cmp     eax, ebx
0x5CF547: jz      short loc_5CF560
0x5CF549: lea     esp, [esp+0]
0x5CF550: cmp     esi, [eax+8]
0x5CF553: lea     edx, [eax+8]
0x5CF556: mov     edi, eax
0x5CF558: mov     eax, [eax]
0x5CF55A: jz      short loc_5CF562
0x5CF55C: cmp     eax, ebx
0x5CF55E: jnz     short loc_5CF550
0x5CF560: xor     edi, edi
0x5CF562: cmp     edi, ebx
0x5CF564: mov     [esp+168h+var_120], edi
0x5CF568: jz      short loc_5CF574
0x5CF56A: lea     edx, [esp+168h+var_120]
0x5CF56E: push    edx
0x5CF56F: call    sub_7AA860
0x5CF574: mov     edi, [esi+10h]
0x5CF577: mov     eax, [edi+30h]
0x5CF57A: mov     edx, [eax+4]
0x5CF57D: add     edi, 30h ; '0'
0x5CF580: mov     ecx, edi
0x5CF582: call    edx
0x5CF584: mov     [eax+8], esi
0x5CF587: mov     [eax+4], ebx
0x5CF58A: mov     ecx, [edi+4]
0x5CF58D: mov     [eax], ecx
0x5CF58F: mov     ecx, [edi+4]
0x5CF592: cmp     ecx, ebx
0x5CF594: jz      short loc_5CF59B
0x5CF596: mov     [ecx+4], eax
0x5CF599: jmp     short loc_5CF59E
0x5CF59B: mov     [edi+8], eax
0x5CF59E: add     dword ptr [edi+0Ch], 1
0x5CF5A2: push    ebp
0x5CF5A3: mov     [edi+4], eax
0x5CF5A6: mov     byte ptr [esp+16Ch+var_4], 0
0x5CF5AE: call    FormHeapFree
0x5CF5B3: mov     [esp+16Ch+var_130], ebx
0x5CF5B7: mov     [esp+16Ch+var_12A], bx
0x5CF5BC: mov     [esp+16Ch+var_12C], bx
0x5CF5C1: jmp     loc_5CF663
0x5CF5C6: mov     ebp, 7FFFFFFFh
0x5CF5CB: mov     eax, [esp+168h+var_154]
0x5CF5CF: lea     edx, [eax+33h]
0x5CF5D2: push    edx
0x5CF5D3: push    eax
0x5CF5D4: mov     ecx, edi
0x5CF5D6: call    sub_488DF0
0x5CF5DB: mov     ecx, [esp+170h+var_134]
0x5CF5DF: push    eax
0x5CF5E0: lea     eax, [esp+174h+var_114]
0x5CF5E4: push    eax
0x5CF5E5: call    sub_5CEE10
0x5CF5EA: fild    [esp+168h+var_140]
0x5CF5EE: push    ecx
0x5CF5EF: mov     esi, eax
0x5CF5F1: fstp    [esp+16Ch+a2]; a3
0x5CF5F4: push    0FB9h; a2
0x5CF5F9: mov     ecx, esi; this
0x5CF5FB: call    Tile_SetFloat
0x5CF600: mov     [esp+168h+var_128], ebx
0x5CF604: mov     [esp+168h+var_124], bx
0x5CF609: mov     [esp+168h+var_122], bx
0x5CF60E: push    ebp
0x5CF60F: mov     ecx, edi
0x5CF611: mov     byte ptr [esp+16Ch+var_4], 2
0x5CF619: call    sub_4849C0
0x5CF61E: call    Double_To_SInt32
0x5CF623: push    eax; ArgList
0x5CF624: lea     ecx, [esp+170h+var_128]
0x5CF628: push    offset aDD_0; "%d/%d"
0x5CF62D: push    ecx; int
0x5CF62E: call    BSStringT_Static_Format
0x5CF633: mov     edi, [esp+178h+var_128]
0x5CF637: add     esp, 10h
0x5CF63A: push    edi
0x5CF63B: push    0FB0h
0x5CF640: mov     ecx, esi
0x5CF642: call    Tile_SetString
0x5CF647: push    edi
0x5CF648: mov     byte ptr [esp+16Ch+var_4], 0
0x5CF650: call    FormHeapFree
0x5CF655: mov     [esp+16Ch+var_128], ebx
0x5CF659: mov     [esp+16Ch+var_122], bx
0x5CF65E: mov     [esp+16Ch+var_124], bx
0x5CF663: add     [esp+16Ch+var_154], 1
0x5CF668: add     esp, 4
0x5CF66B: cmp     [esp+168h+var_13C], ebx
0x5CF66F: jnz     loc_5CF380
0x5CF675: mov     edx, [esp+168h+var_11C]
0x5CF679: mov     esi, [edx+34h]
0x5CF67C: cmp     esi, ebx
0x5CF67E: jz      short loc_5CF6B3
0x5CF680: mov     edi, [esi+8]
0x5CF683: lea     eax, [esi+8]
0x5CF686: mov     esi, [esi]
0x5CF688: push    0FAEh
0x5CF68D: mov     ecx, edi
0x5CF68F: call    Tile_GetFloat
0x5CF694: fcomp   dword ptr ds:0A690E0h
0x5CF69A: fnstsw  ax
0x5CF69C: test    ah, 44h
0x5CF69F: jp      short loc_5CF6AF
0x5CF6A1: cmp     edi, ebx
0x5CF6A3: jz      short loc_5CF6AF
0x5CF6A5: mov     eax, [edi]
0x5CF6A7: mov     edx, [eax]
0x5CF6A9: push    1
0x5CF6AB: mov     ecx, edi
0x5CF6AD: call    edx
0x5CF6AF: cmp     esi, ebx
0x5CF6B1: jnz     short loc_5CF680
0x5CF6B3: cmp     [esp+168h+var_144], ebx
0x5CF6B7: jz      short loc_5CF711
0x5CF6B9: xor     ebx, ebx
0x5CF6BB: mov     eax, [esp+168h+var_14C]
0x5CF6BF: mov     ecx, [eax]
0x5CF6C1: cmp     ecx, ebx
0x5CF6C3: mov     [esp+168h+var_14C], ecx
0x5CF6C7: jz      short loc_5CF6CE
0x5CF6C9: mov     [ecx+4], ebx
0x5CF6CC: jmp     short loc_5CF6D2
0x5CF6CE: mov     [esp+168h+var_148], ebx
0x5CF6D2: mov     esi, [eax+8]
0x5CF6D5: push    eax
0x5CF6D6: mov     eax, [esp+16Ch+var_150]
0x5CF6DA: mov     edx, [eax+8]
0x5CF6DD: lea     ecx, [esp+16Ch+var_150]
0x5CF6E1: call    edx
0x5CF6E3: sub     [esp+168h+var_144], 1
0x5CF6E8: cmp     esi, ebx
0x5CF6EA: jz      short loc_5CF70B
0x5CF6EC: mov     edi, [esi]
0x5CF6EE: cmp     edi, ebx
0x5CF6F0: jz      short loc_5CF702
0x5CF6F2: mov     ecx, edi
0x5CF6F4: call    ContainerEntryExtraData_DestroyDataTable
0x5CF6F9: push    edi
0x5CF6FA: call    FormHeapFree
0x5CF6FF: add     esp, 4
0x5CF702: push    esi
0x5CF703: call    FormHeapFree
0x5CF708: add     esp, 4
0x5CF70B: cmp     [esp+168h+var_144], ebx
0x5CF70F: jnz     short loc_5CF6BB
0x5CF711: mov     [esp+168h+var_150], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVRechargeItemAndIndex@@@@PAVRechargeItemAndIndex@@@@6B@; const NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::`vftable'
0x5CF719: mov     esi, [esp+168h+var_14C]
0x5CF71D: test    esi, esi
0x5CF71F: mov     [esp+168h+var_4], 3
0x5CF72A: jz      short loc_5CF742
0x5CF72C: mov     eax, esi
0x5CF72E: mov     esi, [esi]
0x5CF730: push    eax
0x5CF731: mov     eax, [esp+16Ch+var_150]
0x5CF735: mov     edx, [eax+8]
0x5CF738: lea     ecx, [esp+16Ch+var_150]
0x5CF73C: call    edx
0x5CF73E: test    esi, esi
0x5CF740: jnz     short loc_5CF72C
0x5CF742: mov     ecx, [esp+168h+var_C]
0x5CF749: mov     large fs:0, ecx
0x5CF750: pop     ecx
0x5CF751: pop     edi
0x5CF752: pop     esi
0x5CF753: pop     ebp
0x5CF754: pop     ebx
0x5CF755: mov     ecx, [esp+154h+var_10]
0x5CF75C: xor     ecx, esp
0x5CF75E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5CF763: add     esp, 154h
0x5CF769: retn    4
