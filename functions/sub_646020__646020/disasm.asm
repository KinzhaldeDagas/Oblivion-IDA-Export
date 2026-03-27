0x646020: push    0FFFFFFFFh
0x646022: push    offset SEH_646020
0x646027: mov     eax, large fs:0
0x64602D: push    eax
0x64602E: sub     esp, 8
0x646031: push    ebx
0x646032: push    esi
0x646033: push    edi
0x646034: mov     eax, ds:0B30AACh
0x646039: xor     eax, esp
0x64603B: push    eax
0x64603C: lea     eax, [esp+24h+var_C]
0x646040: mov     large fs:0, eax
0x646046: mov     [esp+24h+var_14], ecx
0x64604A: push    3Ch ; '<'; Size
0x64604C: call    FormHeapAlloc
0x646051: add     esp, 4
0x646054: mov     [esp+24h+var_10], eax
0x646058: test    eax, eax
0x64605A: mov     [esp+24h+var_4], 0
0x646062: jz      short loc_64606F
0x646064: mov     ecx, eax; this
0x646066: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x64606B: mov     esi, eax
0x64606D: jmp     short loc_646071
0x64606F: xor     esi, esi
0x646071: push    0Dh
0x646073: mov     ecx, esi
0x646075: mov     [esp+28h+var_4], 0FFFFFFFFh
0x64607D: call    TESPackage_SetType?
0x646082: or      dword ptr [esi+1Ch], 6
0x646086: push    0Ch; Size
0x646088: call    FormHeapAlloc
0x64608D: add     esp, 4
0x646090: mov     [esp+24h+var_10], eax
0x646094: test    eax, eax
0x646096: mov     [esp+24h+var_4], 1
0x64609E: jz      short loc_6460AB
0x6460A0: mov     ecx, eax
0x6460A2: call    TESPackage_LocationData_constr
0x6460A7: mov     edi, eax
0x6460A9: jmp     short loc_6460AD
0x6460AB: xor     edi, edi
0x6460AD: push    0
0x6460AF: mov     ecx, edi
0x6460B1: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6460B9: call    TESPackage_LocationData_SetType
0x6460BE: mov     ebx, [esp+24h+arg_4]
0x6460C2: push    ebx
0x6460C3: mov     ecx, edi
0x6460C5: call    TESPackage_LocationData_SetReference
0x6460CA: push    edi
0x6460CB: mov     ecx, esi
0x6460CD: call    TESPackage_SetLocation
0x6460D2: test    edi, edi
0x6460D4: jz      short loc_6460E6
0x6460D6: mov     ecx, edi
0x6460D8: call    TESPackage_LocationData_destr
0x6460DD: push    edi
0x6460DE: call    FormHeapFree
0x6460E3: add     esp, 4
0x6460E6: push    0Ch; Size
0x6460E8: call    FormHeapAlloc
0x6460ED: add     esp, 4
0x6460F0: mov     [esp+24h+arg_4], eax
0x6460F4: test    eax, eax
0x6460F6: mov     [esp+24h+var_4], 2
0x6460FE: jz      short loc_64610B
0x646100: mov     ecx, eax
0x646102: call    TESPackage_TargetData_constr
0x646107: mov     edi, eax
0x646109: jmp     short loc_64610D
0x64610B: xor     edi, edi
0x64610D: push    edi
0x64610E: mov     ecx, esi
0x646110: mov     [esp+28h+var_4], 0FFFFFFFFh
0x646118: call    TESPackage_SetTarget
0x64611D: test    edi, edi
0x64611F: jz      short loc_646131
0x646121: mov     ecx, edi; void *
0x646123: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x646128: push    edi
0x646129: call    FormHeapFree
0x64612E: add     esp, 4
0x646131: mov     ecx, [esi+28h]
0x646134: push    0
0x646136: mov     dword ptr [esi+18h], 12h
0x64613D: call    TESPackage_TargetData_SetType
0x646142: mov     ecx, [esi+28h]
0x646145: push    ebx
0x646146: call    TeSPackage_TargetData_SetTargetREFR
0x64614B: mov     ecx, [esi+28h]
0x64614E: push    5Ah ; 'Z'
0x646150: call    TESAIForm_SetServiceFlags
0x646155: mov     ecx, [esp+24h+var_14]
0x646159: mov     eax, [ecx]
0x64615B: mov     edx, [esp+24h+arg_14]
0x64615F: mov     eax, [eax+14Ch]
0x646165: push    edx
0x646166: call    eax
0x646168: mov     edi, [esp+24h+arg_0]
0x64616C: mov     ecx, edi
0x64616E: call    sub_5E0380
0x646173: test    eax, eax
0x646175: jz      short loc_6461BE
0x646177: mov     ebx, [edi+58h]
0x64617A: mov     edx, [ebx]
0x64617C: mov     eax, [edx+390h]
0x646182: mov     ecx, ebx
0x646184: call    eax
0x646186: mov     edx, [ebx]
0x646188: mov     ecx, ebx
0x64618A: push    eax
0x64618B: mov     eax, [edx+0C0h]
0x646191: call    eax
0x646193: mov     edx, [ebx]
0x646195: mov     ecx, ebx
0x646197: push    eax
0x646198: mov     eax, [edx+0CCh]
0x64619E: call    eax
0x6461A0: mov     edx, [ebx]
0x6461A2: push    eax
0x6461A3: mov     eax, [edx+180h]
0x6461A9: mov     ecx, ebx
0x6461AB: call    eax
0x6461AD: push    eax
0x6461AE: mov     ecx, edi
0x6461B0: call    sub_5E0380
0x6461B5: push    eax
0x6461B6: lea     ecx, [edi+44h]
0x6461B9: call    sub_4268B0
0x6461BE: push    1; a4
0x6461C0: push    0; a3
0x6461C2: push    esi; a2
0x6461C3: mov     ecx, edi; this
0x6461C5: call    Actor_AddPackage?
0x6461CA: cmp     [esp+24h+arg_C], 0
0x6461CF: jz      short loc_6461E1
0x6461D1: mov     ecx, [edi+58h]
0x6461D4: mov     edx, [ecx]
0x6461D6: mov     eax, [edx+188h]
0x6461DC: push    1
0x6461DE: push    edi
0x6461DF: call    eax
0x6461E1: mov     al, 1
0x6461E3: mov     ecx, dword ptr [esp+24h+var_C]
0x6461E7: mov     large fs:0, ecx
0x6461EE: pop     ecx
0x6461EF: pop     edi
0x6461F0: pop     esi
0x6461F1: pop     ebx
0x6461F2: add     esp, 14h
0x6461F5: retn    28h ; '('
