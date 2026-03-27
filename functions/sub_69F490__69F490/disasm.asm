0x69F490: push    0FFFFFFFFh
0x69F492: push    offset SEH_69F490
0x69F497: mov     eax, large fs:0
0x69F49D: push    eax
0x69F49E: push    esi
0x69F49F: push    edi
0x69F4A0: mov     eax, ds:0B30AACh
0x69F4A5: xor     eax, esp
0x69F4A7: push    eax
0x69F4A8: lea     eax, [esp+18h+var_C]
0x69F4AC: mov     large fs:0, eax
0x69F4B2: mov     ecx, [esp+18h+arg_14]
0x69F4B6: test    ecx, ecx
0x69F4B8: mov     edi, [esp+18h+arg_10]
0x69F4BC: mov     esi, ecx
0x69F4BE: jnz     short loc_69F4C3
0x69F4C0: mov     esi, [edi+1Ch]
0x69F4C3: call    EffectSetting_GetProjectileType
0x69F4C8: cmp     eax, 3; switch 4 cases
0x69F4CB: ja      def_69F4D1
0x69F4D1: jmp     ds:jpt_69F4D1[eax*4]; switch jump
0x69F4D8: push    90h; jumptable 0069F4D1 case 0
0x69F4DD: call    FormHeapAlloc
0x69F4E2: add     esp, 4
0x69F4E5: mov     [esp+18h+arg_14], eax
0x69F4E9: test    eax, eax
0x69F4EB: mov     [esp+18h+var_4], 0
0x69F4F3: jz      loc_69F68B
0x69F4F9: mov     ecx, [esp+18h+arg_8]
0x69F4FD: mov     edx, [esp+18h+arg_4]
0x69F501: push    ecx; int
0x69F502: mov     ecx, [esp+1Ch+arg_24]
0x69F506: push    edx; int
0x69F507: sub     esp, 0Ch
0x69F50A: mov     edx, esp
0x69F50C: mov     [edx], ecx
0x69F50E: mov     ecx, [esp+2Ch+arg_28]
0x69F512: mov     [edx+4], ecx
0x69F515: mov     ecx, [esp+2Ch+arg_2C]
0x69F519: mov     [edx+8], ecx
0x69F51C: mov     ecx, [esp+2Ch+arg_18]
0x69F520: sub     esp, 0Ch
0x69F523: mov     edx, esp
0x69F525: mov     [edx], ecx
0x69F527: mov     ecx, [esp+38h+arg_1C]
0x69F52B: mov     [edx+4], ecx
0x69F52E: mov     ecx, [esp+38h+arg_20]
0x69F532: push    esi; int
0x69F533: mov     [edx+8], ecx
0x69F536: mov     edx, [esp+3Ch+arg_C]
0x69F53A: mov     ecx, [esp+3Ch+arg_0]
0x69F53E: push    edi; int
0x69F53F: push    edx; int
0x69F540: push    ecx; int
0x69F541: mov     ecx, eax; Concurrency::details::SchedulerBase *
0x69F543: call    sub_696250
0x69F548: jmp     loc_69F68D
0x69F54D: push    0A4h ; '¤'; jumptable 0069F4D1 case 1
0x69F552: call    FormHeapAlloc
0x69F557: add     esp, 4
0x69F55A: mov     [esp+18h+arg_14], eax
0x69F55E: test    eax, eax
0x69F560: mov     [esp+18h+var_4], 1
0x69F568: jz      loc_69F68B
0x69F56E: mov     ecx, [esp+18h+arg_24]
0x69F572: sub     esp, 0Ch
0x69F575: mov     edx, esp
0x69F577: mov     [edx], ecx
0x69F579: mov     ecx, [esp+24h+arg_28]
0x69F57D: mov     [edx+4], ecx
0x69F580: mov     ecx, [esp+24h+arg_2C]
0x69F584: mov     [edx+8], ecx
0x69F587: mov     ecx, [esp+24h+arg_18]
0x69F58B: sub     esp, 0Ch
0x69F58E: mov     edx, esp
0x69F590: mov     [edx], ecx
0x69F592: mov     ecx, [esp+30h+arg_1C]
0x69F596: mov     [edx+4], ecx
0x69F599: mov     ecx, [esp+30h+arg_20]
0x69F59D: push    esi; int
0x69F59E: mov     [edx+8], ecx
0x69F5A1: mov     edx, [esp+34h+arg_C]
0x69F5A5: mov     ecx, [esp+34h+arg_0]
0x69F5A9: push    edi; int
0x69F5AA: push    edx; int
0x69F5AB: push    ecx; int
0x69F5AC: mov     ecx, eax; Concurrency::details::SchedulerBase *
0x69F5AE: call    sub_6988A0
0x69F5B3: jmp     loc_69F68D
0x69F5B8: push    9Ch ; 'œ'; jumptable 0069F4D1 case 3
0x69F5BD: call    FormHeapAlloc
0x69F5C2: add     esp, 4
0x69F5C5: mov     [esp+18h+arg_14], eax
0x69F5C9: test    eax, eax
0x69F5CB: mov     [esp+18h+var_4], 2
0x69F5D3: jz      loc_69F68B
0x69F5D9: mov     edx, [esp+18h+arg_8]
0x69F5DD: mov     ecx, [esp+18h+arg_4]
0x69F5E1: push    edx; int
0x69F5E2: push    ecx; int
0x69F5E3: mov     ecx, [esp+20h+arg_24]
0x69F5E7: sub     esp, 0Ch
0x69F5EA: mov     edx, esp
0x69F5EC: mov     [edx], ecx
0x69F5EE: mov     ecx, [esp+2Ch+arg_28]
0x69F5F2: mov     [edx+4], ecx
0x69F5F5: mov     ecx, [esp+2Ch+arg_2C]
0x69F5F9: mov     [edx+8], ecx
0x69F5FC: mov     ecx, [esp+2Ch+arg_18]
0x69F600: sub     esp, 0Ch
0x69F603: mov     edx, esp
0x69F605: mov     [edx], ecx
0x69F607: mov     ecx, [esp+38h+arg_1C]
0x69F60B: mov     [edx+4], ecx
0x69F60E: mov     ecx, [esp+38h+arg_20]
0x69F612: push    esi; int
0x69F613: mov     [edx+8], ecx
0x69F616: mov     edx, [esp+3Ch+arg_C]
0x69F61A: mov     ecx, [esp+3Ch+arg_0]
0x69F61E: push    edi; int
0x69F61F: push    edx; int
0x69F620: push    ecx; int
0x69F621: mov     ecx, eax; Concurrency::details::SchedulerBase *
0x69F623: call    sub_69D5E0
0x69F628: jmp     short loc_69F68D
0x69F62A: push    7Ch ; '|'; jumptable 0069F4D1 case 2
0x69F62C: call    FormHeapAlloc
0x69F631: add     esp, 4
0x69F634: mov     [esp+18h+arg_14], eax
0x69F638: test    eax, eax
0x69F63A: mov     [esp+18h+var_4], 3
0x69F642: jz      short loc_69F68B
0x69F644: mov     ecx, [esp+18h+arg_24]
0x69F648: sub     esp, 0Ch
0x69F64B: mov     edx, esp
0x69F64D: mov     [edx], ecx
0x69F64F: mov     ecx, [esp+24h+arg_28]
0x69F653: mov     [edx+4], ecx
0x69F656: mov     ecx, [esp+24h+arg_2C]
0x69F65A: mov     [edx+8], ecx
0x69F65D: mov     ecx, [esp+24h+arg_18]
0x69F661: sub     esp, 0Ch
0x69F664: mov     edx, esp
0x69F666: mov     [edx], ecx
0x69F668: mov     ecx, [esp+30h+arg_1C]
0x69F66C: mov     [edx+4], ecx
0x69F66F: mov     ecx, [esp+30h+arg_20]
0x69F673: push    esi; int
0x69F674: mov     [edx+8], ecx
0x69F677: mov     edx, [esp+34h+arg_C]
0x69F67B: mov     ecx, [esp+34h+arg_0]
0x69F67F: push    edi; int
0x69F680: push    edx; int
0x69F681: push    ecx; int
0x69F682: mov     ecx, eax; int
0x69F684: call    sub_6A1CA0
0x69F689: jmp     short loc_69F68D
0x69F68B: xor     eax, eax
0x69F68D: test    eax, eax
0x69F68F: mov     [esp+18h+var_4], 0FFFFFFFFh
0x69F697: jz      short def_69F4D1
0x69F699: push    0
0x69F69B: push    0
0x69F69D: push    0
0x69F69F: push    0
0x69F6A1: push    eax
0x69F6A2: mov     ecx, offset ActorProcessManager_ptr
0x69F6A7: call    sub_673A90
