0x67D3A0: push    0FFFFFFFFh
0x67D3A2: push    offset SEH_67D3A0
0x67D3A7: mov     eax, large fs:0
0x67D3AD: push    eax
0x67D3AE: push    ecx
0x67D3AF: push    ebx
0x67D3B0: push    ebp
0x67D3B1: push    esi
0x67D3B2: push    edi
0x67D3B3: mov     eax, ds:0B30AACh
0x67D3B8: xor     eax, esp
0x67D3BA: push    eax
0x67D3BB: lea     eax, [esp+24h+var_C]
0x67D3BF: mov     large fs:0, eax
0x67D3C5: mov     esi, ecx
0x67D3C7: mov     [esp+24h+var_10], esi
0x67D3CB: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x67D3D0: fldz
0x67D3D2: mov     ecx, [esp+24h+arg_8]
0x67D3D6: fstp    dword ptr [esi+3Ch]
0x67D3D9: mov     eax, [esp+24h+arg_4]
0x67D3DD: xor     ebx, ebx
0x67D3DF: mov     [esi+48h], ecx
0x67D3E2: push    11h
0x67D3E4: mov     ecx, esi
0x67D3E6: mov     [esp+28h+var_4], ebx
0x67D3EA: mov     dword ptr [esi], offset ??_7TrespassPackage@@6B@; const TrespassPackage::`vftable'
0x67D3F0: mov     [esi+40h], ebx
0x67D3F3: mov     [esi+44h], eax
0x67D3F6: call    TESPackage_SetType?
0x67D3FB: or      dword ptr [esi+1Ch], 6
0x67D3FF: push    0Ch; Size
0x67D401: call    FormHeapAlloc
0x67D406: add     esp, 4
0x67D409: mov     [esp+24h+arg_4], eax
0x67D40D: cmp     eax, ebx
0x67D40F: mov     byte ptr [esp+24h+var_4], 1
0x67D414: jz      short loc_67D421
0x67D416: mov     ecx, eax
0x67D418: call    TESPackage_LocationData_constr
0x67D41D: mov     edi, eax
0x67D41F: jmp     short loc_67D423
0x67D421: xor     edi, edi
0x67D423: push    ebx
0x67D424: mov     ecx, edi
0x67D426: mov     byte ptr [esp+28h+var_4], bl
0x67D42A: call    TESPackage_LocationData_SetType
0x67D42F: mov     ebp, [esp+24h+arg_0]
0x67D433: push    ebp
0x67D434: mov     ecx, edi
0x67D436: call    TESPackage_LocationData_SetReference
0x67D43B: push    edi
0x67D43C: mov     ecx, esi
0x67D43E: call    TESPackage_SetLocation
0x67D443: cmp     edi, ebx
0x67D445: jz      short loc_67D457
0x67D447: mov     ecx, edi
0x67D449: call    TESPackage_LocationData_destr
0x67D44E: push    edi
0x67D44F: call    FormHeapFree
0x67D454: add     esp, 4
0x67D457: push    0Ch; Size
0x67D459: call    FormHeapAlloc
0x67D45E: add     esp, 4
0x67D461: mov     [esp+24h+arg_4], eax
0x67D465: cmp     eax, ebx
0x67D467: mov     byte ptr [esp+24h+var_4], 2
0x67D46C: jz      short loc_67D479
0x67D46E: mov     ecx, eax
0x67D470: call    TESPackage_TargetData_constr
0x67D475: mov     edi, eax
0x67D477: jmp     short loc_67D47B
0x67D479: xor     edi, edi
0x67D47B: push    edi
0x67D47C: mov     ecx, esi
0x67D47E: mov     byte ptr [esp+28h+var_4], bl
0x67D482: call    TESPackage_SetTarget
0x67D487: cmp     edi, ebx
0x67D489: jz      short loc_67D49B
0x67D48B: mov     ecx, edi; void *
0x67D48D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x67D492: push    edi
0x67D493: call    FormHeapFree
0x67D498: add     esp, 4
0x67D49B: mov     ecx, [esi+28h]
0x67D49E: push    ebx
0x67D49F: mov     dword ptr [esi+18h], 14h
0x67D4A6: call    TESPackage_TargetData_SetType
0x67D4AB: mov     ecx, [esi+28h]
0x67D4AE: push    ebp
0x67D4AF: call    TeSPackage_TargetData_SetTargetREFR
0x67D4B4: mov     ecx, [esi+28h]
0x67D4B7: push    80h ; '€'
0x67D4BC: call    TESAIForm_SetServiceFlags
0x67D4C1: mov     edx, [esp+24h+arg_C]
0x67D4C5: mov     dword ptr [esi+4Ch], 0FFFFFFFFh
0x67D4CC: mov     [esi+50h], edx
0x67D4CF: mov     [esi+54h], ebx
0x67D4D2: mov     eax, esi
0x67D4D4: mov     ecx, [esp+24h+var_C]
0x67D4D8: mov     large fs:0, ecx
0x67D4DF: pop     ecx
0x67D4E0: pop     edi
0x67D4E1: pop     esi
0x67D4E2: pop     ebp
0x67D4E3: pop     ebx
0x67D4E4: add     esp, 10h
0x67D4E7: retn    10h
