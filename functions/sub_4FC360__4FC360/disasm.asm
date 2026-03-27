0x4FC360: push    ebp
0x4FC361: mov     ebp, esp
0x4FC363: and     esp, 0FFFFFFC0h
0x4FC366: push    0FFFFFFFFh
0x4FC368: push    offset SEH_4FC360
0x4FC36D: mov     eax, large fs:0
0x4FC373: push    eax
0x4FC374: sub     esp, 228h
0x4FC37A: mov     eax, ds:0B30AACh
0x4FC37F: xor     eax, esp
0x4FC381: mov     [esp+234h+var_44], eax
0x4FC388: push    ebx
0x4FC389: push    esi
0x4FC38A: push    edi
0x4FC38B: mov     eax, ds:0B30AACh
0x4FC390: xor     eax, esp
0x4FC392: push    eax
0x4FC393: lea     eax, [esp+244h+var_C]
0x4FC39A: mov     large fs:0, eax
0x4FC3A0: mov     eax, [ebp+arg_4]
0x4FC3A3: fldz
0x4FC3A5: mov     ecx, [ebp+arg_8]
0x4FC3A8: fstp    [esp+244h+var_1F4]
0x4FC3AC: mov     [esp+244h+var_1E4], eax
0x4FC3B0: mov     eax, [eax]
0x4FC3B2: xor     ebx, ebx
0x4FC3B4: mov     [esp+244h+var_210], eax
0x4FC3B8: mov     eax, ds:0B33A98h
0x4FC3BD: cmp     eax, ebx
0x4FC3BF: mov     [esp+244h+var_1DC], ecx
0x4FC3C3: mov     ecx, [ecx]
0x4FC3C5: mov     [esp+244h+var_1E0], ecx
0x4FC3C9: mov     [esp+244h+var_1E8], ebx
0x4FC3CD: mov     [esp+244h+var_1EC], ebx
0x4FC3D1: mov     [esp+244h+var_1F0], ebx
0x4FC3D5: jz      loc_4FC694
0x4FC3DB: xor     ecx, ecx
0x4FC3DD: lea     edi, [eax+64h]
0x4FC3E0: mov     [esp+244h+var_1FC], ebx
0x4FC3E4: mov     [esp+244h+var_204], ecx
0x4FC3E8: mov     [esp+244h+var_200], ebx
0x4FC3EC: mov     [esp+244h+var_208], offset ??_7?$NiTPointerList@PAVScript@@@@6B@; const NiTPointerList<Script *>::`vftable'
0x4FC3F4: cmp     edi, ebx
0x4FC3F6: mov     [esp+244h+var_4], ebx
0x4FC3FD: jz      loc_4FC680
0x4FC403: cmp     [edi+4], ebx
0x4FC406: jnz     short loc_4FC416
0x4FC408: cmp     [edi], ebx
0x4FC40A: jz      loc_4FC680
0x4FC410: jmp     short loc_4FC416
0x4FC412: mov     ecx, [esp+244h+var_204]
0x4FC416: mov     esi, [edi]
0x4FC418: fld     dword ptr [esi+34h]
0x4FC41B: mov     [esp+244h+var_1F8], esi
0x4FC41F: fstp    [esp+244h+var_20C]
0x4FC423: fldz
0x4FC425: fld     [esp+244h+var_20C]
0x4FC429: fcom    st(1)
0x4FC42B: fnstsw  ax
0x4FC42D: fstp    st(1)
0x4FC42F: test    ah, 41h
0x4FC432: jnz     loc_4FC4EC
0x4FC438: fld     st
0x4FC43A: mov     eax, 1
0x4FC43F: fadd    [esp+244h+var_1F4]
0x4FC443: add     [esp+244h+var_1E8], eax
0x4FC447: cmp     byte ptr [esi+28h], 0
0x4FC44B: fstp    [esp+244h+var_1F4]
0x4FC44F: jz      short loc_4FC457
0x4FC451: add     [esp+244h+var_1EC], eax
0x4FC455: jmp     short loc_4FC461
0x4FC457: cmp     byte ptr [esi+29h], 0
0x4FC45B: jz      short loc_4FC461
0x4FC45D: add     [esp+244h+var_1F0], eax
0x4FC461: cmp     [esp+244h+var_1FC], ebx
0x4FC465: jnz     short loc_4FC479
0x4FC467: lea     edx, [esp+244h+var_1F8]
0x4FC46B: fstp    st
0x4FC46D: push    edx
0x4FC46E: lea     ecx, [esp+248h+var_208]
0x4FC472: call    sub_6AA320
0x4FC477: jmp     short loc_4FC4EE
0x4FC479: cmp     ecx, ebx
0x4FC47B: jz      short loc_4FC4EC
0x4FC47D: mov     eax, [ecx+8]
0x4FC480: fld     dword ptr [eax+34h]
0x4FC483: fstp    [esp+244h+var_20C]
0x4FC487: fld     [esp+244h+var_20C]
0x4FC48B: fcomp   st(1)
0x4FC48D: fnstsw  ax
0x4FC48F: test    ah, 5
0x4FC492: jnp     short loc_4FC4D9
0x4FC494: mov     ecx, [ecx]
0x4FC496: cmp     ecx, ebx
0x4FC498: jnz     short loc_4FC47D
0x4FC49A: mov     eax, [esp+244h+var_208]
0x4FC49E: fstp    st
0x4FC4A0: mov     edx, [eax+4]
0x4FC4A3: lea     ecx, [esp+244h+var_208]
0x4FC4A7: call    edx
0x4FC4A9: mov     [eax+8], esi
0x4FC4AC: mov     [eax], ebx
0x4FC4AE: mov     ecx, [esp+244h+var_200]
0x4FC4B2: mov     [eax+4], ecx
0x4FC4B5: mov     ecx, [esp+244h+var_200]
0x4FC4B9: cmp     ecx, ebx
0x4FC4BB: jz      short loc_4FC4CA
0x4FC4BD: mov     [ecx], eax
0x4FC4BF: add     [esp+244h+var_1FC], 1
0x4FC4C4: mov     [esp+244h+var_200], eax
0x4FC4C8: jmp     short loc_4FC4EE
0x4FC4CA: add     [esp+244h+var_1FC], 1
0x4FC4CF: mov     [esp+244h+var_204], eax
0x4FC4D3: mov     [esp+244h+var_200], eax
0x4FC4D7: jmp     short loc_4FC4EE
0x4FC4D9: lea     edx, [esp+244h+var_1F8]
0x4FC4DD: fstp    st
0x4FC4DF: push    edx
0x4FC4E0: push    ecx
0x4FC4E1: lea     ecx, [esp+24Ch+var_208]
0x4FC4E5: call    sub_589640
0x4FC4EA: jmp     short loc_4FC4EE
0x4FC4EC: fstp    st
0x4FC4EE: mov     edi, [edi+4]
0x4FC4F1: cmp     edi, ebx
0x4FC4F3: jnz     loc_4FC412
0x4FC4F9: fild    [esp+244h+var_210]
0x4FC4FD: push    0FFFFFFFFh; int
0x4FC4FF: push    1; int
0x4FC501: sub     esp, 8
0x4FC504: fstp    [esp+254h+var_254+4]; float
0x4FC508: fild    dword ptr ds:0B02E24h
0x4FC50E: fstp    [esp+254h+var_254]; float
0x4FC511: push    offset aScriptProfiler; "Script Profiler"
0x4FC516: call    InterfaceMgr_DebugTextLine
0x4FC51B: mov     edi, [ebp+arg_0]
0x4FC51E: add     [esp+258h+var_210], edi
0x4FC522: push    1
0x4FC524: call    GetGlobalScriptStateObj??
0x4FC529: add     esp, 18h
0x4FC52C: cmp     byte ptr [eax+31h], 0
0x4FC530: jg      loc_4FC680
0x4FC536: fld     [esp+244h+var_1F4]
0x4FC53A: mov     eax, [esp+244h+var_1F0]
0x4FC53E: fld     st
0x4FC540: mov     ecx, [esp+244h+var_1EC]
0x4FC544: fdiv    dword ptr ds:0B33E9Ch
0x4FC54A: mov     edx, [esp+244h+var_1E8]
0x4FC54E: sub     esp, 10h
0x4FC551: fmul    qword ptr ds:0A309F0h
0x4FC557: fstp    [esp+254h+var_24C]
0x4FC55B: fstp    qword ptr [esp+254h+var_254]
0x4FC55E: push    eax
0x4FC55F: push    ecx
0x4FC560: push    edx
0x4FC561: lea     eax, [esp+260h+var_1D8]
0x4FC568: push    offset aActiveDQuestDM; "Active: %d (Quest: %d, Magic: %d)Second"...
0x4FC56D: push    eax
0x4FC56E: call    __sprintf
0x4FC573: fild    [esp+268h+var_210]
0x4FC577: add     esp, 24h
0x4FC57A: push    0FFFFFFFFh; int
0x4FC57C: push    1; int
0x4FC57E: sub     esp, 8
0x4FC581: fstp    [esp+254h+var_254+4]; float
0x4FC585: lea     ecx, [esp+254h+var_1D8]
0x4FC589: fild    dword ptr ds:0B02E24h
0x4FC58F: fstp    [esp+254h+var_254]; float
0x4FC592: push    ecx; int
0x4FC593: call    InterfaceMgr_DebugTextLine
0x4FC598: mov     eax, [esp+258h+var_204]
0x4FC59C: add     [esp+258h+var_210], edi
0x4FC5A0: add     esp, 14h
0x4FC5A3: test    eax, eax
0x4FC5A5: mov     ebx, eax
0x4FC5A7: jz      loc_4FC663
0x4FC5AD: lea     ecx, [ecx+0]
0x4FC5B0: mov     ecx, [ebx+8]
0x4FC5B3: cmp     byte ptr [ecx+28h], 0
0x4FC5B7: jz      short loc_4FC5C0
0x4FC5B9: mov     esi, offset aQuest; "Quest: "
0x4FC5BE: jmp     short loc_4FC5D0
0x4FC5C0: cmp     byte ptr [ecx+29h], 0
0x4FC5C4: mov     esi, offset aMagic; "Magic: "
0x4FC5C9: jnz     short loc_4FC5D0
0x4FC5CB: mov     esi, offset EmptyString
0x4FC5D0: fld     dword ptr [ecx+34h]
0x4FC5D3: mov     edx, [ecx]
0x4FC5D5: fstp    [esp+244h+var_20C]
0x4FC5D9: mov     eax, [edx+0D4h]
0x4FC5DF: fld     dword ptr [ecx+34h]
0x4FC5E2: sub     esp, 10h
0x4FC5E5: fstp    [esp+254h+var_1F8]
0x4FC5E9: fld     [esp+254h+var_20C]
0x4FC5ED: fdiv    dword ptr ds:0B33E9Ch
0x4FC5F3: fmul    qword ptr ds:0A309F0h
0x4FC5F9: fstp    [esp+254h+var_24C]
0x4FC5FD: fld     [esp+254h+var_1F8]
0x4FC601: fstp    qword ptr [esp+254h+var_254]
0x4FC604: call    eax
0x4FC606: push    eax
0x4FC607: push    esi
0x4FC608: lea     ecx, [esp+25Ch+var_1D8]
0x4FC60F: push    offset aSSSeconds0_6fP; "%s%s -> Seconds: %0.6f Percentage: %0.3"...
0x4FC614: push    ecx
0x4FC615: call    __sprintf
0x4FC61A: fild    [esp+264h+var_210]
0x4FC61E: add     esp, 20h
0x4FC621: push    0FFFFFFFFh; int
0x4FC623: push    1; int
0x4FC625: sub     esp, 8
0x4FC628: fstp    [esp+254h+var_254+4]; float
0x4FC62C: lea     edx, [esp+254h+var_1D8]
0x4FC630: fild    dword ptr ds:0B02E24h
0x4FC636: fstp    [esp+254h+var_254]; float
0x4FC639: push    edx; int
0x4FC63A: call    InterfaceMgr_DebugTextLine
0x4FC63F: mov     eax, [esp+258h+var_210]
0x4FC643: mov     ecx, ds:0B06C50h
0x4FC649: add     eax, edi
0x4FC64B: add     ecx, 0FFFFFFF6h
0x4FC64E: add     esp, 14h
0x4FC651: cmp     eax, ecx
0x4FC653: mov     [esp+244h+var_210], eax
0x4FC657: jg      short loc_4FC663
0x4FC659: mov     ebx, [ebx]
0x4FC65B: test    ebx, ebx
0x4FC65D: jnz     loc_4FC5B0
0x4FC663: lea     ecx, [esp+244h+var_208]
0x4FC667: call    NiTPointerList__FreeAllNodes
0x4FC66C: mov     edx, [esp+244h+var_1E4]
0x4FC670: mov     eax, [esp+244h+var_210]
0x4FC674: mov     ecx, [esp+244h+var_1E0]
0x4FC678: mov     [edx], eax
0x4FC67A: mov     edx, [esp+244h+var_1DC]
0x4FC67E: mov     [edx], ecx
0x4FC680: lea     ecx, [esp+244h+var_208]
0x4FC684: mov     [esp+244h+var_4], 0FFFFFFFFh
0x4FC68F: call    ??1?$NiTPointerList@PAVScript@@@@UAE@XZ; NiTPointerList<Script *>::~NiTPointerList<Script *>(void)
0x4FC694: mov     ecx, [esp+244h+var_C]
0x4FC69B: mov     large fs:0, ecx
0x4FC6A2: pop     ecx
0x4FC6A3: pop     edi
0x4FC6A4: pop     esi
0x4FC6A5: pop     ebx
0x4FC6A6: mov     ecx, [esp+234h+var_44]
0x4FC6AD: xor     ecx, esp
0x4FC6AF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4FC6B4: mov     esp, ebp
0x4FC6B6: pop     ebp
0x4FC6B7: retn
