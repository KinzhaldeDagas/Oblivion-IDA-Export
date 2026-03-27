0x5F4190: sub     esp, 0Ch
0x5F4193: push    ebx
0x5F4194: mov     ebx, ecx
0x5F4196: mov     eax, [ebx+5Ch]
0x5F4199: mov     edx, [eax+24h]
0x5F419C: push    ebp
0x5F419D: push    esi
0x5F419E: lea     esi, [ebx+5Ch]
0x5F41A1: mov     ecx, esi
0x5F41A3: mov     [esp+18h+var_8], ebx
0x5F41A7: call    edx
0x5F41A9: mov     ebp, eax
0x5F41AB: test    ebp, ebp
0x5F41AD: jnz     short loc_5F41CC
0x5F41AF: mov     ecx, [ebx+58h]
0x5F41B2: test    ecx, ecx
0x5F41B4: jz      loc_5F43CF
0x5F41BA: mov     eax, [ecx]
0x5F41BC: mov     edx, [eax+2BCh]
0x5F41C2: push    ebp
0x5F41C3: call    edx
0x5F41C5: pop     esi
0x5F41C6: pop     ebp
0x5F41C7: pop     ebx
0x5F41C8: add     esp, 0Ch
0x5F41CB: retn
0x5F41CC: mov     eax, [esi]
0x5F41CE: mov     edx, [eax+30h]
0x5F41D1: push    edi
0x5F41D2: mov     ecx, esi
0x5F41D4: call    edx
0x5F41D6: mov     edi, eax
0x5F41D8: mov     eax, [ebx]
0x5F41DA: mov     edx, [eax+164h]
0x5F41E0: mov     ecx, ebx
0x5F41E2: mov     [esp+1Ch+var_9], 0
0x5F41E7: call    edx
0x5F41E9: mov     esi, eax
0x5F41EB: test    esi, esi
0x5F41ED: jz      loc_5F4297
0x5F41F3: test    edi, edi
0x5F41F5: push    1
0x5F41F7: jz      loc_5F42C4
0x5F41FD: mov     eax, [esp+20h+var_8]
0x5F4201: mov     ecx, [eax+58h]
0x5F4204: mov     edx, [ecx]
0x5F4206: mov     eax, [edx+0ECh]
0x5F420C: xor     bl, bl
0x5F420E: call    eax
0x5F4210: test    eax, eax
0x5F4212: jz      short loc_5F4271
0x5F4214: mov     ecx, [esp+1Ch+var_8]
0x5F4218: mov     ecx, [ecx+58h]
0x5F421B: mov     edx, [ecx]
0x5F421D: mov     eax, [edx+13Ch]
0x5F4223: call    eax
0x5F4225: test    al, al
0x5F4227: jz      short loc_5F4271
0x5F4229: mov     ecx, [esp+1Ch+var_8]
0x5F422D: mov     ecx, [ecx+58h]
0x5F4230: mov     edx, [ecx]
0x5F4232: mov     eax, [edx+0ECh]
0x5F4238: push    1
0x5F423A: call    eax
0x5F423C: mov     eax, [eax+8]
0x5F423F: push    0; int
0x5F4241: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5F4246: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5F424B: push    0; int
0x5F424D: push    eax; void *
0x5F424E: call    OblivionDynamicCast
0x5F4253: add     esp, 14h
0x5F4256: test    eax, eax
0x5F4258: jz      short loc_5F425F
0x5F425A: mov     eax, [eax+4]
0x5F425D: jmp     short loc_5F4261
0x5F425F: xor     eax, eax
0x5F4261: test    eax, eax
0x5F4263: jz      short loc_5F426A
0x5F4265: add     eax, 18h
0x5F4268: jmp     short loc_5F426C
0x5F426A: xor     eax, eax
0x5F426C: cmp     eax, edi
0x5F426E: setz    bl
0x5F4271: xor     ecx, ecx
0x5F4273: test    bl, bl
0x5F4275: setnz   cl
0x5F4278: lea     ecx, [ecx+ecx+1]
0x5F427C: push    ecx
0x5F427D: mov     ecx, esi
0x5F427F: call    sub_4706E0
0x5F4284: test    eax, eax
0x5F4286: jz      short loc_5F4293
0x5F4288: cmp     dword ptr [eax+44h], 1
0x5F428C: jnz     short loc_5F4293
0x5F428E: mov     [esp+1Ch+var_9], 1
0x5F4293: mov     ebx, [esp+1Ch+var_8]
0x5F4297: test    edi, edi
0x5F4299: jz      short loc_5F42DA
0x5F429B: cmp     word ptr [ebp+0B8h], 0
0x5F42A3: jnz     loc_5F43CE
0x5F42A9: cmp     [esp+1Ch+var_9], 0
0x5F42AE: jz      loc_5F43CE
0x5F42B4: push    edi
0x5F42B5: mov     ecx, ebx
0x5F42B7: call    Actor_SetupCastingFX?
0x5F42BC: pop     edi
0x5F42BD: pop     esi
0x5F42BE: pop     ebp
0x5F42BF: pop     ebx
0x5F42C0: add     esp, 0Ch
0x5F42C3: retn
0x5F42C4: mov     ecx, esi
0x5F42C6: call    sub_4706E0
0x5F42CB: test    eax, eax
0x5F42CD: jz      short loc_5F42DA
0x5F42CF: cmp     dword ptr [eax+44h], 1
0x5F42D3: jnz     short loc_5F42DA
0x5F42D5: mov     [esp+1Ch+var_9], 1
0x5F42DA: cmp     word ptr [ebp+0B8h], 0
0x5F42E2: jbe     loc_5F43B9
0x5F42E8: cmp     [esp+1Ch+var_9], 0
0x5F42ED: jnz     short loc_5F42FA
0x5F42EF: lea     ecx, [ebp+0ACh]
0x5F42F5: call    sub_477EF0
0x5F42FA: movzx   eax, word ptr [ebp+0B6h]
0x5F4301: xor     edi, edi
0x5F4303: test    eax, eax
0x5F4305: jbe     loc_5F43B1
0x5F430B: cmp     eax, edi
0x5F430D: jbe     short loc_5F4351
0x5F430F: mov     edx, [ebp+0B0h]
0x5F4315: mov     eax, [edx+edi*4]
0x5F4318: test    eax, eax
0x5F431A: jz      short loc_5F4351
0x5F431C: mov     eax, [eax+0Ch]
0x5F431F: test    eax, eax
0x5F4321: jz      short loc_5F4351
0x5F4323: push    eax
0x5F4324: push    offset stru_B3CAC0
0x5F4329: call    NiRTTI_Cast
0x5F432E: add     esp, 8
0x5F4331: test    eax, eax
0x5F4333: jz      short loc_5F4351
0x5F4335: lea     ecx, [esp+1Ch+var_8]
0x5F4339: push    ecx
0x5F433A: push    offset aSpecialidle_ca; "SpecialIdle_Cast"
0x5F433F: lea     ecx, [eax+58h]
0x5F4342: call    NiTMap_GetAt
0x5F4347: neg     al
0x5F4349: sbb     eax, eax
0x5F434B: and     eax, [esp+1Ch+var_8]
0x5F434F: jmp     short loc_5F4353
0x5F4351: xor     eax, eax
0x5F4353: test    eax, eax
0x5F4355: jz      short loc_5F439F
0x5F4357: fld     dword ptr [eax+34h]
0x5F435A: fld     dword ptr [eax+30h]
0x5F435D: fcompp
0x5F435F: fnstsw  ax
0x5F4361: test    ah, 5
0x5F4364: jp      short loc_5F439F
0x5F4366: mov     edx, [ebp+0]
0x5F4369: mov     edx, [edx+8Ch]
0x5F436F: push    edi
0x5F4370: lea     eax, [esp+20h+var_4]
0x5F4374: push    eax
0x5F4375: mov     ecx, ebp
0x5F4377: call    edx
0x5F4379: mov     eax, [esp+1Ch+var_4]
0x5F437D: test    eax, eax
0x5F437F: jz      short loc_5F439F
0x5F4381: mov     esi, eax
0x5F4383: add     eax, 4
0x5F4386: push    eax; lpAddend
0x5F4387: call    dword ptr ds:0A2807Ch
0x5F438D: test    eax, eax
0x5F438F: jnz     short loc_5F439F
0x5F4391: test    esi, esi
0x5F4393: jz      short loc_5F439F
0x5F4395: mov     eax, [esi]
0x5F4397: mov     edx, [eax]
0x5F4399: push    1
0x5F439B: mov     ecx, esi
0x5F439D: call    edx
0x5F439F: movzx   eax, word ptr [ebp+0B6h]
0x5F43A6: add     edi, 1
0x5F43A9: cmp     eax, edi
0x5F43AB: ja      loc_5F430F
0x5F43B1: cmp     word ptr [ebp+0B8h], 0
0x5F43B9: jnz     short loc_5F43CE
0x5F43BB: mov     ecx, [ebx+58h]
0x5F43BE: test    ecx, ecx
0x5F43C0: jz      short loc_5F43CE
0x5F43C2: mov     eax, [ecx]
0x5F43C4: mov     edx, [eax+2BCh]
0x5F43CA: push    0
0x5F43CC: call    edx
0x5F43CE: pop     edi
0x5F43CF: pop     esi
0x5F43D0: pop     ebp
0x5F43D1: pop     ebx
0x5F43D2: add     esp, 0Ch
0x5F43D5: retn
