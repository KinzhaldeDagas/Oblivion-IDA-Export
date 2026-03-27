0x5F5170: push    0FFFFFFFFh
0x5F5172: push    offset SEH_5F9EB0
0x5F5177: mov     eax, large fs:0
0x5F517D: push    eax
0x5F517E: push    ecx
0x5F517F: push    ebx
0x5F5180: push    ebp
0x5F5181: push    esi
0x5F5182: push    edi
0x5F5183: mov     eax, ds:0B30AACh
0x5F5188: xor     eax, esp
0x5F518A: push    eax
0x5F518B: lea     eax, [esp+24h+var_C]
0x5F518F: mov     large fs:0, eax
0x5F5195: mov     edi, ecx
0x5F5197: push    3Ch ; '<'; Size
0x5F5199: call    FormHeapAlloc
0x5F519E: add     esp, 4
0x5F51A1: mov     [esp+24h+var_10], eax
0x5F51A5: xor     ebx, ebx
0x5F51A7: cmp     eax, ebx
0x5F51A9: mov     [esp+24h+var_4], ebx
0x5F51AD: jz      short loc_5F51BA
0x5F51AF: mov     ecx, eax; this
0x5F51B1: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x5F51B6: mov     esi, eax
0x5F51B8: jmp     short loc_5F51BC
0x5F51BA: xor     esi, esi
0x5F51BC: or      ebp, 0FFFFFFFFh
0x5F51BF: push    ebx
0x5F51C0: mov     ecx, esi
0x5F51C2: mov     [esp+28h+var_4], ebp
0x5F51C6: call    TESPackage_SetType?
0x5F51CB: and     dword ptr [esi+1Ch], 0FFFFFFF9h
0x5F51CF: push    0Ch; Size
0x5F51D1: call    FormHeapAlloc
0x5F51D6: add     esp, 4
0x5F51D9: mov     [esp+24h+var_10], eax
0x5F51DD: cmp     eax, ebx
0x5F51DF: mov     [esp+24h+var_4], 1
0x5F51E7: jz      short loc_5F51F2
0x5F51E9: mov     ecx, eax
0x5F51EB: call    TESPackage_LocationData_constr
0x5F51F0: mov     ebx, eax
0x5F51F2: push    0
0x5F51F4: mov     ecx, ebx
0x5F51F6: mov     [esp+28h+var_4], ebp
0x5F51FA: call    TESPackage_LocationData_SetType
0x5F51FF: push    edi
0x5F5200: mov     ecx, ebx
0x5F5202: call    TESPackage_LocationData_SetReference
0x5F5207: push    ebx
0x5F5208: mov     ecx, esi
0x5F520A: call    TESPackage_SetLocation
0x5F520F: test    ebx, ebx
0x5F5211: jz      short loc_5F5223
0x5F5213: mov     ecx, ebx
0x5F5215: call    TESPackage_LocationData_destr
0x5F521A: push    ebx
0x5F521B: call    FormHeapFree
0x5F5220: add     esp, 4
0x5F5223: push    0Ch; Size
0x5F5225: call    FormHeapAlloc
0x5F522A: add     esp, 4
0x5F522D: mov     [esp+24h+var_10], eax
0x5F5231: test    eax, eax
0x5F5233: mov     [esp+24h+var_4], 2
0x5F523B: jz      short loc_5F5248
0x5F523D: mov     ecx, eax
0x5F523F: call    TESPackage_TargetData_constr
0x5F5244: mov     ebx, eax
0x5F5246: jmp     short loc_5F524A
0x5F5248: xor     ebx, ebx
0x5F524A: push    ebx
0x5F524B: mov     ecx, esi
0x5F524D: mov     [esp+28h+var_4], ebp
0x5F5251: call    TESPackage_SetTarget
0x5F5256: mov     ecx, [esi+28h]
0x5F5259: push    2
0x5F525B: mov     dword ptr [esi+18h], 3
0x5F5262: call    TESPackage_TargetData_SetType
0x5F5267: mov     eax, [esp+24h+arg_4]
0x5F526B: mov     ecx, [esi+28h]
0x5F526E: push    eax
0x5F526F: call    TESAIForm_SetServiceFlags
0x5F5274: test    ebx, ebx
0x5F5276: jz      short loc_5F5288
0x5F5278: mov     ecx, ebx; void *
0x5F527A: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x5F527F: push    ebx
0x5F5280: call    FormHeapFree
0x5F5285: add     esp, 4
0x5F5288: cmp     [esp+24h+arg_0], 0
0x5F528D: mov     ecx, [esi+28h]
0x5F5290: jnz     short loc_5F5296
0x5F5292: push    0Dh
0x5F5294: jmp     short loc_5F5298
0x5F5296: push    0Eh
0x5F5298: call    TESPackage_TargetData_SetTargetFormID
0x5F529D: mov     ecx, [edi+58h]
0x5F52A0: mov     edx, [ecx]
0x5F52A2: mov     eax, [edx+20h]
0x5F52A5: call    eax
0x5F52A7: mov     ecx, [edi+58h]
0x5F52AA: cmp     dword ptr [ecx+8], 0
0x5F52AE: jz      short loc_5F52EC
0x5F52B0: mov     eax, [ecx]
0x5F52B2: mov     edx, [eax+390h]
0x5F52B8: mov     ebx, ecx
0x5F52BA: mov     ebp, ecx
0x5F52BC: call    edx
0x5F52BE: mov     ecx, ebx
0x5F52C0: push    eax
0x5F52C1: mov     eax, [ebx]
0x5F52C3: mov     edx, [eax+0C0h]
0x5F52C9: call    edx
0x5F52CB: mov     ecx, ebp
0x5F52CD: push    eax
0x5F52CE: mov     eax, [ebp+0]
0x5F52D1: mov     edx, [eax+0CCh]
0x5F52D7: call    edx
0x5F52D9: push    eax
0x5F52DA: mov     eax, ebx
0x5F52DC: mov     ecx, [eax+4]
0x5F52DF: mov     edx, [eax+8]
0x5F52E2: push    ecx
0x5F52E3: push    edx
0x5F52E4: lea     ecx, [edi+44h]
0x5F52E7: call    sub_4268B0
0x5F52EC: push    1; a4
0x5F52EE: push    1; a3
0x5F52F0: push    esi; a2
0x5F52F1: mov     ecx, edi; this
0x5F52F3: call    Actor_AddPackage?
0x5F52F8: mov     edi, [edi+58h]
0x5F52FB: mov     eax, [edi]
0x5F52FD: mov     edx, [eax+0A4h]
0x5F5303: mov     ecx, edi
0x5F5305: call    edx
0x5F5307: mov     ecx, [esp+24h+var_C]
0x5F530B: mov     large fs:0, ecx
0x5F5312: pop     ecx
0x5F5313: pop     edi
0x5F5314: pop     esi
0x5F5315: pop     ebp
0x5F5316: pop     ebx
0x5F5317: add     esp, 10h
0x5F531A: retn    8
