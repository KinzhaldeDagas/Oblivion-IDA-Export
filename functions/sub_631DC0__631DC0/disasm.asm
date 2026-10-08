0x631DC0: push    0FFFFFFFFh
0x631DC2: push    offset SEH_803C90
0x631DC7: mov     eax, large fs:0
0x631DCD: push    eax
0x631DCE: push    ecx
0x631DCF: push    esi
0x631DD0: push    edi
0x631DD1: mov     eax, ds:0B30AACh
0x631DD6: xor     eax, esp
0x631DD8: push    eax
0x631DD9: lea     eax, [esp+1Ch+var_C]
0x631DDD: mov     large fs:0, eax
0x631DE3: push    3Ch ; '<'; Size
0x631DE5: call    FormHeapAlloc
0x631DEA: add     esp, 4
0x631DED: mov     [esp+1Ch+var_10], eax
0x631DF1: test    eax, eax
0x631DF3: mov     [esp+1Ch+var_4], 0
0x631DFB: jz      short loc_631E08
0x631DFD: mov     ecx, eax; this
0x631DFF: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x631E04: mov     edi, eax
0x631E06: jmp     short loc_631E0A
0x631E08: xor     edi, edi
0x631E0A: push    6
0x631E0C: mov     ecx, edi
0x631E0E: mov     [esp+20h+var_4], 0FFFFFFFFh
0x631E16: call    TESPackage_SetType?
0x631E1B: and     dword ptr [edi+1Ch], 0FFFFFFF9h
0x631E1F: push    0Ch; Size
0x631E21: call    FormHeapAlloc
0x631E26: add     esp, 4
0x631E29: mov     [esp+1Ch+var_10], eax
0x631E2D: test    eax, eax
0x631E2F: mov     [esp+1Ch+var_4], 1
0x631E37: jz      short loc_631E44
0x631E39: mov     ecx, eax
0x631E3B: call    TESPackage_LocationData_constr
0x631E40: mov     esi, eax
0x631E42: jmp     short loc_631E46
0x631E44: xor     esi, esi
0x631E46: push    0
0x631E48: mov     ecx, esi
0x631E4A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x631E52: call    TESPackage_LocationData_SetType
0x631E57: mov     eax, [esp+1Ch+arg_4]
0x631E5B: push    eax
0x631E5C: mov     ecx, esi
0x631E5E: call    TESPackage_LocationData_SetReference
0x631E63: push    0
0x631E65: mov     ecx, esi
0x631E67: call    TESPackage_LocationData_SetRadius
0x631E6C: push    esi
0x631E6D: mov     ecx, edi
0x631E6F: call    TESPackage_SetLocation; 3DTheft decode: TESPackage_SetLocation allocates package->location when needed and copies a 0x0C LocationData record; null source clears location data.
0x631E74: test    esi, esi
0x631E76: jz      short loc_631E88
0x631E78: mov     ecx, esi
0x631E7A: call    TESPackage_LocationData_destr
0x631E7F: push    esi
0x631E80: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x631E85: add     esp, 4
0x631E88: mov     ecx, edi
0x631E8A: call    sub_5672A0; 3DTheft decode: TESPackage procedure-array resolver is a mutator. It writes TESPackage+0x18/procedureArrayIndex directly; callers should not use EAX as the row result.
0x631E8F: mov     ecx, [esp+1Ch+arg_0]; this
0x631E93: push    1; a4
0x631E95: push    1; a3
0x631E97: push    edi; a2
0x631E98: call    Actor_AddPackage?; 3DTheft: xrefs ignore this function's return value; use current package/process state after call, not AL/EAX, as the package assignment result.
0x631E9D: mov     ecx, [esp+1Ch+var_C]
0x631EA1: mov     large fs:0, ecx
0x631EA8: pop     ecx
0x631EA9: pop     edi
0x631EAA: pop     esi
0x631EAB: add     esp, 10h
0x631EAE: retn    8
0x9D00B0: mov     eax, [ebp-10h]
0x9D00B3: push    eax
0x9D00B4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D00B9: pop     ecx
0x9D00BA: retn
0x9D00BB: mov     eax, [ebp-10h]
0x9D00BE: push    eax
0x9D00BF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D00C4: pop     ecx
0x9D00C5: retn
0x9D00C6: mov     edx, [esp+arg_4]
0x9D00CA: lea     eax, [edx-0Ch]
0x9D00CD: mov     ecx, [edx-10h]
0x9D00D0: xor     ecx, eax
0x9D00D2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D00D7: mov     eax, offset stru_AF8B40
0x9D00DC: jmp     ___CxxFrameHandler3
