0x4BD430: push    0FFFFFFFFh
0x4BD432: push    offset SEH_4BD430
0x4BD437: mov     eax, large fs:0
0x4BD43D: push    eax
0x4BD43E: sub     esp, 118h
0x4BD444: mov     eax, ds:0B30AACh
0x4BD449: xor     eax, esp
0x4BD44B: mov     [esp+124h+var_10], eax
0x4BD452: push    ebx
0x4BD453: push    ebp
0x4BD454: push    esi
0x4BD455: push    edi
0x4BD456: mov     eax, ds:0B30AACh
0x4BD45B: xor     eax, esp
0x4BD45D: push    eax
0x4BD45E: lea     eax, [esp+138h+var_C]
0x4BD465: mov     large fs:0, eax
0x4BD46B: mov     edi, [esp+138h+arg_0]
0x4BD472: mov     eax, [esp+138h+arg_C]
0x4BD479: mov     edx, [esp+138h+arg_10]
0x4BD480: xor     esi, esi
0x4BD482: cmp     edi, esi
0x4BD484: mov     [esp+138h+var_118], ecx
0x4BD488: mov     [esp+138h+var_120], eax
0x4BD48C: mov     [esp+138h+a2], edx
0x4BD490: jz      loc_4BD6B0
0x4BD496: mov     ebp, [esp+138h+arg_8]
0x4BD49D: mov     ebx, [esp+138h+arg_4]
0x4BD4A4: push    ebp
0x4BD4A5: push    ebx
0x4BD4A6: call    sub_4BDE80
0x4BD4AB: test    al, al
0x4BD4AD: jnz     loc_4BD6B0
0x4BD4B3: mov     ecx, edi
0x4BD4B5: call    TESWorldSpace_GetParentWorldpsace
0x4BD4BA: test    eax, eax
0x4BD4BC: jz      short loc_4BD4C7
0x4BD4BE: mov     ecx, edi
0x4BD4C0: call    TESWorldSpace_GetParentWorldpsace
0x4BD4C5: mov     edi, eax
0x4BD4C7: cmp     [esp+138h+arg_18], 2
0x4BD4CF: jnz     short loc_4BD4E2
0x4BD4D1: push    ebp
0x4BD4D2: push    ebx
0x4BD4D3: mov     ecx, edi
0x4BD4D5: call    sub_4F0DA0
0x4BD4DA: test    al, al
0x4BD4DC: jz      loc_4BD6B0
0x4BD4E2: push    2Ch ; ','; Size
0x4BD4E4: call    FormHeapAlloc
0x4BD4E9: add     esp, 4
0x4BD4EC: mov     [esp+138h+var_11C], eax
0x4BD4F0: cmp     eax, esi
0x4BD4F2: mov     [esp+138h+var_4], esi
0x4BD4F9: jz      short loc_4BD504
0x4BD4FB: mov     ecx, eax
0x4BD4FD: call    ??0?$NiTPointerMap@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@QAE@XZ; NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>(void)
0x4BD502: mov     esi, eax
0x4BD504: mov     eax, [esp+138h+a2]
0x4BD508: push    eax; a2
0x4BD509: lea     ecx, [esi+20h]; this
0x4BD50C: mov     [esp+13Ch+var_4], 0FFFFFFFFh
0x4BD517: mov     [esi+8], edi
0x4BD51A: mov     [esi], ebx
0x4BD51C: mov     [esi+4], ebp
0x4BD51F: call    NiSmartPointer_Set??
0x4BD524: mov     ecx, [esp+138h+var_120]
0x4BD528: push    ecx; a2
0x4BD529: lea     ecx, [esi+1Ch]; this
0x4BD52C: call    NiSmartPointer_Set??
0x4BD531: mov     edx, [esp+138h+arg_18]
0x4BD538: push    ebp
0x4BD539: push    ebx
0x4BD53A: mov     byte ptr [esi+28h], 0
0x4BD53E: mov     [esi+24h], edx
0x4BD541: call    sub_4EF1D0
0x4BD546: xor     edi, edi
0x4BD548: add     esp, 8
0x4BD54B: mov     [esp+138h+var_120], eax
0x4BD54F: mov     [esp+138h+a2], edi
0x4BD553: cmp     byte ptr ds:0B09DB0h, 0
0x4BD55A: mov     [esp+138h+var_4], 1
0x4BD565: jz      loc_4BD5F0
0x4BD56B: mov     ecx, [esi+8]
0x4BD56E: mov     eax, [ecx]
0x4BD570: mov     edx, [eax+0D4h]
0x4BD576: push    ebp
0x4BD577: push    ebx
0x4BD578: call    edx
0x4BD57A: push    eax
0x4BD57B: lea     eax, [esp+144h+var_114]
0x4BD57F: push    offset aDistantlodS_I_; "DistantLOD\\%s_%i_%i.lod"
0x4BD584: push    eax
0x4BD585: call    __sprintf
0x4BD58A: mov     ecx, ds:0B33A04h
0x4BD590: add     esp, 14h
0x4BD593: test    ecx, ecx
0x4BD595: jz      loc_4BD679
0x4BD59B: mov     edx, [ecx]
0x4BD59D: mov     edx, [edx+4]
0x4BD5A0: push    1
0x4BD5A2: push    edi
0x4BD5A3: push    edi
0x4BD5A4: lea     eax, [esp+144h+var_114]
0x4BD5A8: push    eax
0x4BD5A9: call    edx
0x4BD5AB: test    eax, eax
0x4BD5AD: jz      loc_4BD679
0x4BD5B3: push    30h ; '0'; Size
0x4BD5B5: call    FormHeapAlloc
0x4BD5BA: add     esp, 4
0x4BD5BD: mov     [esp+138h+var_11C], eax
0x4BD5C1: test    eax, eax
0x4BD5C3: mov     byte ptr [esp+138h+var_4], 2
0x4BD5CB: jz      short loc_4BD628
0x4BD5CD: mov     ecx, [esp+138h+var_118]
0x4BD5D1: mov     edx, [esp+138h+arg_14]
0x4BD5D8: push    esi
0x4BD5D9: push    ecx
0x4BD5DA: mov     ecx, ds:0A45A58h[edx*4]
0x4BD5E1: push    ecx
0x4BD5E2: lea     edx, [esp+144h+var_114]
0x4BD5E6: push    edx
0x4BD5E7: mov     ecx, eax
0x4BD5E9: call    sub_4BCAC0
0x4BD5EE: jmp     short loc_4BD62A
0x4BD5F0: push    30h ; '0'; Size
0x4BD5F2: call    FormHeapAlloc
0x4BD5F7: add     esp, 4
0x4BD5FA: mov     [esp+138h+var_11C], eax
0x4BD5FE: test    eax, eax
0x4BD600: mov     byte ptr [esp+138h+var_4], 3
0x4BD608: jz      short loc_4BD628
0x4BD60A: mov     ecx, [esp+138h+var_118]
0x4BD60E: mov     edx, [esp+138h+arg_14]
0x4BD615: push    esi
0x4BD616: push    ecx
0x4BD617: mov     ecx, ds:0A45A58h[edx*4]
0x4BD61E: push    ecx
0x4BD61F: mov     ecx, eax
0x4BD621: call    sub_4BCA90
0x4BD626: jmp     short loc_4BD62A
0x4BD628: xor     eax, eax
0x4BD62A: push    eax
0x4BD62B: lea     ecx, [esp+13Ch+a2]
0x4BD62F: mov     byte ptr [esp+13Ch+var_4], 1
0x4BD637: call    sub_4BCB70
0x4BD63C: mov     edi, [esp+138h+a2]
0x4BD640: test    edi, edi
0x4BD642: jz      short loc_4BD679
0x4BD644: push    0
0x4BD646: push    ecx
0x4BD647: mov     eax, esp
0x4BD649: lea     edx, [edi+8]
0x4BD64C: mov     [esp+140h+var_11C], esp
0x4BD650: push    edx; lpAddend
0x4BD651: mov     [eax], edi
0x4BD653: call    dword ptr ds:0A28078h
0x4BD659: mov     ecx, [esp+140h+var_118]
0x4BD65D: mov     eax, [ecx]
0x4BD65F: mov     edx, [esp+140h+var_120]
0x4BD663: mov     eax, [eax+0Ch]
0x4BD666: push    edx
0x4BD667: call    eax
0x4BD669: mov     ecx, ds:0B33A10h
0x4BD66F: mov     edx, [ecx]
0x4BD671: mov     eax, [edx+3Ch]
0x4BD674: push    edi
0x4BD675: call    eax
0x4BD677: jmp     short loc_4BD689
0x4BD679: mov     ecx, esi
0x4BD67B: call    sub_4BD230
0x4BD680: push    esi
0x4BD681: call    FormHeapFree
0x4BD686: add     esp, 4
0x4BD689: test    edi, edi
0x4BD68B: mov     [esp+138h+var_4], 0FFFFFFFFh
0x4BD696: jz      short loc_4BD6B0
0x4BD698: lea     ecx, [edi+8]
0x4BD69B: push    ecx; lpAddend
0x4BD69C: call    dword ptr ds:0A2807Ch
0x4BD6A2: test    eax, eax
0x4BD6A4: jnz     short loc_4BD6B0
0x4BD6A6: mov     edx, [edi]
0x4BD6A8: mov     eax, [edx]
0x4BD6AA: push    1
0x4BD6AC: mov     ecx, edi
0x4BD6AE: call    eax
0x4BD6B0: mov     ecx, dword ptr [esp+138h+var_C]
0x4BD6B7: mov     large fs:0, ecx
0x4BD6BE: pop     ecx
0x4BD6BF: pop     edi
0x4BD6C0: pop     esi
0x4BD6C1: pop     ebp
0x4BD6C2: pop     ebx
0x4BD6C3: mov     ecx, [esp+124h+var_10]
0x4BD6CA: xor     ecx, esp
0x4BD6CC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BD6D1: add     esp, 124h
0x4BD6D7: retn    1Ch
