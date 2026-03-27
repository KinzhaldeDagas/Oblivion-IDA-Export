0x413130: push    ebp
0x413131: mov     ebp, esp
0x413133: sub     esp, 18h
0x413136: mov     eax, ___security_cookie
0x41313B: xor     eax, ebp
0x41313D: mov     [ebp+var_4], eax
0x413140: push    ebx
0x413141: mov     ebx, [ebp+a2]
0x413144: push    esi
0x413145: mov     esi, ecx
0x413147: push    edi
0x413148: mov     ecx, ebx
0x41314A: call    TESFile_GetNextChunk
0x41314F: mov     ecx, ebx
0x413151: call    TESFile_GetChunkType
0x413156: cmp     eax, 54494645h
0x41315B: jnz     EffectItem_Load___Return_0
0x413161: xor     eax, eax
0x413163: mov     [esi], eax
0x413165: mov     [esi+4], eax
0x413168: mov     [esi+8], eax
0x41316B: mov     [esi+0Ch], eax
0x41316E: push    18h; a4
0x413170: mov     [esi+10h], eax
0x413173: push    esi; Dst
0x413174: mov     ecx, ebx; a1
0x413176: mov     [esi+14h], eax
0x413179: call    TESFile_GetChunkData
0x41317E: mov     eax, [esi]
0x413180: push    eax
0x413181: call    EffectSettingCollection_LookupByCode
0x413186: add     esp, 4
0x413189: test    eax, eax
0x41318B: mov     [esi+1Ch], eax
0x41318E: jnz     short EffectItem_Load___InitActorValue
0x413190: mov     eax, dword ptr [ebp+ArgList]
0x413193: test    eax, eax
0x413195: jnz     short loc_41319C
0x413197: mov     eax, offset aUnknown_0; "{unknown}"
0x41319C: push    eax
0x41319D: mov     eax, [esi]
0x41319F: push    eax; ArgList
0x4131A0: push    offset aUnknownEffects; "Unknown EffectSetting '%d' encountered "...
0x4131A5: call    PrintError
0x4131AA: add     esp, 0Ch
0x4131AD: mov     al, 1
0x4131AF: jmp     EffectItem_Load___Done
0x4131B4: mov     edi, [eax+58h]
0x4131B7: test    edi, 1180000h
0x4131BD: jz      short EffectItem_Load___InitSEFF
0x4131BF: mov     ecx, edi
0x4131C1: shr     ecx, 18h
0x4131C4: test    cl, 1
0x4131C7: jz      short EffectItem_Load___InitSEFF
0x4131C9: mov     edx, [eax+60h]
0x4131CC: mov     [esi+14h], edx
0x4131CF: cmp     dword ptr [eax+98h], 46464553h
0x4131D9: jnz     EffectItem_Load___Return_1
0x4131DF: mov     ecx, ebx
0x4131E1: call    TESFile_GetNextChunk
0x4131E6: mov     ecx, ebx
0x4131E8: call    TESFile_GetChunkType
0x4131ED: cmp     eax, 54494353h
0x4131F2: jnz     EffectItem_Load___Return_0
0x4131F8: xor     edi, edi
0x4131FA: cmp     [esi+18h], edi
0x4131FD: jnz     short EffectItem_Load___LoadSCITBlock
0x4131FF: push    18h; Size
0x413201: call    FormHeapAlloc
0x413206: add     esp, 4
0x413209: cmp     eax, edi
0x41320B: jz      short loc_41321A
0x41320D: mov     [eax+8], edi
0x413210: mov     [eax+0Ch], di
0x413214: mov     [eax+0Eh], di
0x413218: jmp     short loc_41321C
0x41321A: xor     eax, eax
0x41321C: cmp     eax, edi
0x41321E: mov     [esi+18h], eax
0x413221: jz      EffectItem_Load___SCITAllocationError
0x413227: xor     eax, eax
0x413229: mov     dword ptr [ebp+Dst], eax
0x41322C: mov     [ebp+var_10], eax
0x41322F: mov     [ebp+var_C], eax
0x413232: mov     [ebp+var_8], eax
0x413235: push    10h; a4
0x413237: lea     eax, [ebp+Dst]
0x41323A: push    eax; Dst
0x41323B: mov     ecx, ebx; a1
0x41323D: call    TESFile_GetChunkData
0x413242: mov     ecx, [esi+18h]
0x413245: mov     edx, [ebp+var_10]
0x413248: mov     [ecx+4], edx
0x41324B: mov     eax, [esi+18h]
0x41324E: mov     ecx, dword ptr [ebp+Dst]
0x413251: mov     [eax], ecx
0x413253: mov     edx, [esi+18h]
0x413256: mov     eax, [ebp+var_C]
0x413259: mov     [edx+10h], eax
0x41325C: mov     ecx, [esi+18h]
0x41325F: mov     dl, byte ptr [ebp+var_8]
0x413262: mov     [ecx+14h], dl
0x413265: mov     eax, [esi+18h]
0x413268: push    ebx; a2
0x413269: push    eax; a1
0x41326A: call    TESForm_ResolveFormID
0x41326F: mov     ecx, [esi+18h]
0x413272: mov     eax, [ecx+10h]
0x413275: add     esp, 8
0x413278: cmp     eax, edi
0x41327A: jz      short EffectItem_Load___LoadSCITName
0x41327C: push    eax
0x41327D: call    EffectSettingCollection_LookupByCode
0x413282: add     esp, 4
0x413285: test    eax, eax
0x413287: jnz     short EffectItem_Load___LoadSCITName
0x413289: mov     edx, [esi+18h]
0x41328C: mov     [edx+10h], edi
0x41328F: mov     ecx, ebx
0x413291: call    TESFile_GetNextChunk
0x413296: mov     ecx, ebx
0x413298: call    TESFile_GetChunkType
0x41329D: cmp     eax, 4C4C5546h
0x4132A2: jnz     short EffectItem_Load___Return_1
0x4132A4: mov     edi, [ebx+254h]
0x4132AA: add     edi, 1
0x4132AD: mov     eax, edi
0x4132AF: call    __alloca?
0x4132B4: mov     eax, esp
0x4132B6: push    edi
0x4132B7: push    0
0x4132B9: push    eax
0x4132BA: mov     [ebp+var_18], eax
0x4132BD: call    __memset
0x4132C2: mov     edi, [ebp+var_18]
0x4132C5: add     esp, 0Ch
0x4132C8: push    0; a4
0x4132CA: push    edi; Dst
0x4132CB: mov     ecx, ebx; a1
0x4132CD: call    TESFile_GetChunkData
0x4132D2: mov     ecx, [esi+18h]
0x4132D5: push    0; a3
0x4132D7: push    edi; a2
0x4132D8: add     ecx, 8; this
0x4132DB: call    BSStringT_Set
0x4132E0: mov     al, 1
0x4132E2: jmp     short EffectItem_Load___Done
0x4132E4: mov     eax, dword ptr [ebp+ArgList]
0x4132E7: cmp     eax, edi
0x4132E9: jnz     short loc_4132F0
0x4132EB: mov     eax, offset aUnknown_0; "{unknown}"
0x4132F0: push    eax; ArgList
0x4132F1: push    offset aUnableToAlloca; "Unable to allocate Script Effect Data i"...
0x4132F6: call    PrintError
0x4132FB: add     esp, 8
0x4132FE: mov     al, 1
0x413300: jmp     short EffectItem_Load___Done
0x413302: xor     al, al
0x413304: lea     esp, [ebp-24h]
0x413307: pop     edi
0x413308: pop     esi
0x413309: pop     ebx
0x41330A: mov     ecx, [ebp+var_4]
0x41330D: xor     ecx, ebp
0x41330F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x413314: mov     esp, ebp
0x413316: pop     ebp
0x413317: retn    8
