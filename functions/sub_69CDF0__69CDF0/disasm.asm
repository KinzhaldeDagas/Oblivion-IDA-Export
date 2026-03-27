0x69CDF0: push    0FFFFFFFFh
0x69CDF2: push    offset SEH_787830
0x69CDF7: mov     eax, large fs:0
0x69CDFD: push    eax
0x69CDFE: push    ebx
0x69CDFF: push    esi
0x69CE00: push    edi
0x69CE01: mov     eax, ds:0B30AACh
0x69CE06: xor     eax, esp
0x69CE08: push    eax
0x69CE09: lea     eax, [esp+1Ch+var_C]
0x69CE0D: mov     large fs:0, eax
0x69CE13: mov     esi, ecx
0x69CE15: mov     eax, [esp+1Ch+arg_4]
0x69CE19: mov     ecx, [esp+1Ch+arg_0]
0x69CE1D: push    eax
0x69CE1E: push    ecx
0x69CE1F: mov     ecx, esi
0x69CE21: call    sub_69F1E0
0x69CE26: mov     ecx, esi
0x69CE28: call    sub_69CB30
0x69CE2D: push    esi; Concurrency::details::SchedulerBase *
0x69CE2E: mov     ecx, esi; this
0x69CE30: call    TESObjectREFR_GetParentCell
0x69CE35: mov     ecx, eax
0x69CE37: call    sub_4D35D0
0x69CE3C: cmp     dword ptr [esi+88h], 1
0x69CE43: jz      short loc_69CE95
0x69CE45: mov     eax, [esi+74h]
0x69CE48: cmp     dword ptr [eax+84h], 0
0x69CE4F: jz      short loc_69CE95
0x69CE51: mov     edi, [esi+90h]
0x69CE57: test    edi, edi
0x69CE59: mov     eax, [eax+84h]
0x69CE5F: mov     ebx, [eax+0Ch]
0x69CE62: jz      short loc_69CE7E
0x69CE64: mov     ecx, edi; this
0x69CE66: call    sub_6B73E0
0x69CE6B: push    edi
0x69CE6C: call    FormHeapFree
0x69CE71: add     esp, 4
0x69CE74: mov     dword ptr [esi+90h], 0
0x69CE7E: push    1; a5
0x69CE80: push    102h; a4
0x69CE85: push    1; a3
0x69CE87: push    ebx; a2
0x69CE88: mov     ecx, esi; this
0x69CE8A: call    sub_65AC50
0x69CE8F: mov     [esi+90h], eax
0x69CE95: mov     edx, [esi+98h]
0x69CE9B: mov     eax, [esi]
0x69CE9D: mov     [esp+1Ch+arg_4], edx
0x69CEA1: mov     edx, [eax+154h]
0x69CEA7: mov     ecx, esi
0x69CEA9: mov     dword ptr [esi+98h], 0
0x69CEB3: call    edx
0x69CEB5: test    eax, eax
0x69CEB7: jz      short loc_69CF32
0x69CEB9: mov     eax, [esi+74h]
0x69CEBC: cmp     dword ptr [eax+70h], 0
0x69CEC0: jz      short loc_69CF32
0x69CEC2: push    1Ch; Size
0x69CEC4: call    FormHeapAlloc
0x69CEC9: mov     ebx, eax
0x69CECB: add     esp, 4
0x69CECE: mov     [esp+1Ch+arg_0], ebx
0x69CED2: test    ebx, ebx
0x69CED4: mov     [esp+1Ch+var_4], 0
0x69CEDC: jz      short loc_69CEFE
0x69CEDE: mov     eax, [esi+74h]
0x69CEE1: mov     eax, [eax+70h]
0x69CEE4: mov     edi, [eax+0Ch]
0x69CEE7: mov     eax, [esi]
0x69CEE9: mov     edx, [eax+154h]
0x69CEEF: mov     ecx, esi
0x69CEF1: call    edx
0x69CEF3: push    eax
0x69CEF4: push    edi
0x69CEF5: mov     ecx, ebx
0x69CEF7: call    MagicCaster_CastingVFX_constr
0x69CEFC: jmp     short loc_69CF00
0x69CEFE: xor     eax, eax
0x69CF00: test    eax, eax
0x69CF02: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x69CF0A: mov     [esi+98h], eax
0x69CF10: jz      short loc_69CF32
0x69CF12: fld     dword ptr [esi+80h]
0x69CF18: push    ecx
0x69CF19: fstp    [esp+20h+var_20]; float
0x69CF1C: push    0; char
0x69CF1E: mov     ecx, eax
0x69CF20: call    MagicCaster_CastingVFX_ClearSomething???
0x69CF25: fld     [esp+1Ch+arg_4]
0x69CF29: mov     eax, [esi+98h]
0x69CF2F: fstp    dword ptr [eax+10h]
0x69CF32: mov     ecx, ds:0B33B00h
0x69CF38: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x69CF3C: jb      short loc_69CF95
0x69CF3E: mov     edi, [esi+94h]
0x69CF44: test    edi, edi
0x69CF46: jz      short loc_69CF95
0x69CF48: mov     eax, [edi]
0x69CF4A: test    eax, eax
0x69CF4C: mov     dl, [edi+4]
0x69CF4F: mov     byte ptr [esp+1Ch+arg_4], dl
0x69CF53: jz      short loc_69CF77
0x69CF55: push    0; int
0x69CF57: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x69CF5C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x69CF61: push    0; int
0x69CF63: push    eax; a1
0x69CF64: call    TESForm_LookupByFormID
0x69CF69: add     esp, 4
0x69CF6C: push    eax; void *
0x69CF6D: call    OblivionDynamicCast
0x69CF72: add     esp, 14h
0x69CF75: mov     [edi], eax
0x69CF77: mov     eax, [esi+6Ch]
0x69CF7A: test    eax, eax
0x69CF7C: jz      short loc_69CF8E
0x69CF7E: mov     ecx, [esp+1Ch+arg_4]
0x69CF82: push    ecx
0x69CF83: lea     ecx, [eax+0Ch]
0x69CF86: call    EffectItemList_GetItemByIndex
0x69CF8B: mov     [edi+4], eax
0x69CF8E: mov     edi, [edi+8]
0x69CF91: test    edi, edi
0x69CF93: jnz     short loc_69CF48
0x69CF95: mov     ecx, dword ptr [esp+1Ch+var_C]
0x69CF99: mov     large fs:0, ecx
0x69CFA0: pop     ecx
0x69CFA1: pop     edi
0x69CFA2: pop     esi
0x69CFA3: pop     ebx
0x69CFA4: add     esp, 0Ch
0x69CFA7: retn    8
