0x692430: push    0FFFFFFFFh
0x692432: push    offset CommandEffect_MakeActorLoyal??_SEH
0x692437: mov     eax, large fs:0
0x69243D: push    eax
0x69243E: sub     esp, 18h
0x692441: push    ebp
0x692442: push    esi
0x692443: push    edi
0x692444: mov     eax, ds:0B30AACh
0x692449: xor     eax, esp
0x69244B: push    eax
0x69244C: lea     eax, [esp+34h+var_C]
0x692450: mov     large fs:0, eax
0x692456: mov     ebp, [esp+34h+arg_0]
0x69245A: fld     dword ptr ds:0A2FE7Ch
0x692460: mov     eax, [ebp+0]
0x692463: mov     edi, [esp+34h+arg_4]
0x692467: mov     edx, [eax+374h]
0x69246D: push    ecx
0x69246E: fstp    [esp+38h+var_38]
0x692471: push    edi
0x692472: mov     ecx, ebp
0x692474: call    edx
0x692476: mov     ecx, [ebp+58h]
0x692479: mov     eax, [ecx]
0x69247B: mov     edx, [eax+3CCh]
0x692481: push    edi
0x692482: call    edx
0x692484: mov     eax, [ebp+0]
0x692487: mov     edx, [eax+298h]
0x69248D: xor     esi, esi
0x69248F: push    esi
0x692490: push    64h ; 'd'
0x692492: push    22h ; '"'
0x692494: mov     ecx, ebp
0x692496: call    edx
0x692498: cmp     edi, ds:0B333C4h
0x69249E: jz      short loc_6924BB
0x6924A0: mov     ecx, [edi+58h]
0x6924A3: mov     eax, [ecx]
0x6924A5: mov     edx, [eax+184h]
0x6924AB: call    edx
0x6924AD: cmp     eax, esi
0x6924AF: jz      short loc_6924BB
0x6924B1: cmp     byte ptr [eax+20h], 0Ch
0x6924B5: jnz     loc_6925A1
0x6924BB: push    3Ch ; '<'; Size
0x6924BD: call    FormHeapAlloc
0x6924C2: add     esp, 4
0x6924C5: mov     [esp+34h+arg_0], eax
0x6924C9: cmp     eax, esi
0x6924CB: mov     [esp+34h+var_4], esi
0x6924CF: jz      short loc_6924DA
0x6924D1: mov     ecx, eax; this
0x6924D3: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x6924D8: mov     esi, eax
0x6924DA: push    1Fh
0x6924DC: mov     ecx, esi
0x6924DE: mov     [esp+38h+var_4], 0FFFFFFFFh
0x6924E6: call    TESPackage_SetType?
0x6924EB: or      dword ptr [esi+1Ch], 401006h
0x6924F2: lea     ecx, [esp+34h+var_18]
0x6924F6: call    TESPackage_LocationData_constr
0x6924FB: push    edi
0x6924FC: lea     ecx, [esp+38h+var_18]
0x692500: mov     [esp+38h+var_4], 1
0x692508: call    TESPackage_LocationData_SetReference
0x69250D: push    5DCh
0x692512: lea     ecx, [esp+38h+var_18]
0x692516: call    TESPackage_LocationData_SetRadius
0x69251B: push    0
0x69251D: lea     ecx, [esp+38h+var_18]
0x692521: call    TESPackage_LocationData_SetType
0x692526: lea     eax, [esp+34h+var_18]
0x69252A: push    eax
0x69252B: mov     ecx, esi
0x69252D: call    TESPackage_SetLocation
0x692532: lea     ecx, [esp+34h+var_24]
0x692536: call    TESPackage_TargetData_constr
0x69253B: push    0
0x69253D: lea     ecx, [esp+38h+var_24]
0x692541: mov     byte ptr [esp+38h+var_4], 2
0x692546: call    TESPackage_TargetData_SetType
0x69254B: push    edi
0x69254C: lea     ecx, [esp+38h+var_24]
0x692550: call    TeSPackage_TargetData_SetTargetREFR
0x692555: push    12Ch
0x69255A: lea     ecx, [esp+38h+var_24]
0x69255E: call    TESAIForm_SetServiceFlags
0x692563: lea     ecx, [esp+34h+var_24]
0x692567: push    ecx
0x692568: mov     ecx, esi
0x69256A: call    TESPackage_SetTarget
0x69256F: push    1; a4
0x692571: push    0; a3
0x692573: push    esi; a2
0x692574: mov     ecx, ebp; this
0x692576: mov     dword ptr [esi+18h], 26h ; '&'
0x69257D: call    Actor_AddPackage?
0x692582: lea     ecx, [esp+34h+var_24]; void *
0x692586: mov     byte ptr [esp+34h+var_4], 1
0x69258B: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x692590: lea     ecx, [esp+34h+var_18]
0x692594: mov     [esp+34h+var_4], 0FFFFFFFFh
0x69259C: call    TESPackage_LocationData_destr
0x6925A1: mov     ecx, dword ptr [esp+34h+var_C]
0x6925A5: mov     large fs:0, ecx
0x6925AC: pop     ecx
0x6925AD: pop     edi
0x6925AE: pop     esi
0x6925AF: pop     ebp
0x6925B0: add     esp, 24h
0x6925B3: retn
