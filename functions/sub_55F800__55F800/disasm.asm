0x55F800: push    0FFFFFFFFh
0x55F802: push    offset SEH_55F800
0x55F807: mov     eax, large fs:0
0x55F80D: push    eax
0x55F80E: sub     esp, 0Ch
0x55F811: push    ebx
0x55F812: push    ebp
0x55F813: push    esi
0x55F814: push    edi
0x55F815: mov     eax, ds:0B30AACh
0x55F81A: xor     eax, esp
0x55F81C: push    eax
0x55F81D: lea     eax, [esp+2Ch+var_C]
0x55F821: mov     large fs:0, eax
0x55F827: mov     esi, ecx
0x55F829: xor     edi, edi
0x55F82B: mov     [esp+2Ch+var_18], edi
0x55F82F: cmp     byte ptr ds:0B125E8h, 0
0x55F836: mov     [esp+2Ch+var_4], edi
0x55F83A: jz      loc_55F9C0
0x55F840: mov     ebx, [esp+2Ch+arg_4]
0x55F844: cmp     ebx, edi
0x55F846: jz      loc_55F9C0
0x55F84C: mov     eax, [ebx+24h]
0x55F84F: mov     edx, [eax+14h]
0x55F852: lea     ecx, [ebx+24h]
0x55F855: mov     [esp+2Ch+var_10], ecx
0x55F859: call    edx
0x55F85B: test    eax, eax
0x55F85D: jz      loc_55F9C0
0x55F863: movzx   eax, word ptr [ebx+2Ch]
0x55F867: cmp     ax, 0FFFFh
0x55F86B: jnz     short loc_55F880
0x55F86D: mov     eax, [ebx+28h]
0x55F870: lea     edx, [eax+1]
0x55F873: mov     cl, [eax]
0x55F875: add     eax, 1
0x55F878: test    cl, cl
0x55F87A: jnz     short loc_55F873
0x55F87C: sub     eax, edx
0x55F87E: jmp     short loc_55F883
0x55F880: movzx   eax, ax
0x55F883: cmp     eax, edi
0x55F885: jz      loc_55F9C0
0x55F88B: mov     ebp, [esp+2Ch+arg_0]
0x55F88F: cmp     ebp, edi
0x55F891: jz      short loc_55F8A8
0x55F893: mov     eax, [ebp+0]
0x55F896: mov     edx, [eax+170h]
0x55F89C: mov     ecx, ebp
0x55F89E: call    edx
0x55F8A0: cmp     eax, ebx
0x55F8A2: jnz     loc_55F9C0
0x55F8A8: push    offset unk_A2F830; lpCriticalSection
0x55F8AD: mov     ecx, offset stru_B39E80
0x55F8B2: mov     [esp+30h+arg_4], edi
0x55F8B6: call    NiEnterCriticalSection
0x55F8BB: mov     ecx, [esi+24h]
0x55F8BE: mov     eax, [ecx]
0x55F8C0: mov     eax, [eax+4]
0x55F8C3: lea     edx, [esp+2Ch+arg_4]
0x55F8C7: push    edx
0x55F8C8: push    ebp
0x55F8C9: call    eax
0x55F8CB: test    al, al
0x55F8CD: jz      short loc_55F900
0x55F8CF: mov     ecx, [esi+24h]
0x55F8D2: mov     edx, [ecx]
0x55F8D4: mov     eax, [edx+10h]
0x55F8D7: push    ebp
0x55F8D8: call    eax
0x55F8DA: mov     ecx, offset stru_B39E80; lpCriticalSection
0x55F8DF: call    NiLeaveCriticalSection_0
0x55F8E4: mov     esi, [esp+2Ch+arg_4]
0x55F8E8: lea     ecx, [esp+2Ch+var_18]; this
0x55F8EC: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x55F8F4: call    sub_7016A0
0x55F8F9: mov     eax, esi
0x55F8FB: jmp     loc_55F9C2
0x55F900: mov     ecx, offset stru_B39E80; lpCriticalSection
0x55F905: call    NiLeaveCriticalSection_0
0x55F90A: cmp     ebp, edi
0x55F90C: mov     esi, 1
0x55F911: jz      short loc_55F91C
0x55F913: mov     ecx, ebp
0x55F915: call    sub_4D7820
0x55F91A: mov     esi, eax
0x55F91C: cmp     ds:0B39E04h, edi
0x55F922: jnz     short loc_55F92D
0x55F924: push    edi
0x55F925: call    sub_55F750
0x55F92A: add     esp, 4
0x55F92D: push    esi
0x55F92E: push    ebx
0x55F92F: lea     ecx, [esp+34h+var_14]
0x55F933: push    ecx
0x55F934: mov     ecx, ds:0B39E04h
0x55F93A: call    sub_55ED30
0x55F93F: push    eax
0x55F940: lea     ecx, [esp+30h+var_18]
0x55F944: mov     byte ptr [esp+30h+var_4], 1
0x55F949: call    sub_55E2A0
0x55F94E: lea     ecx, [esp+2Ch+var_14]; this
0x55F952: mov     byte ptr [esp+2Ch+var_4], 0
0x55F957: call    sub_7016A0
0x55F95C: mov     edi, [esp+2Ch+var_18]
0x55F960: test    edi, edi
0x55F962: jz      short loc_55F9AF
0x55F964: mov     eax, [edi+4]
0x55F967: cmp     eax, 2
0x55F96A: jbe     short loc_55F9D8
0x55F96C: push    58h ; 'X'; Size
0x55F96E: call    FormHeapAlloc
0x55F973: add     esp, 4
0x55F976: mov     [esp+2Ch+arg_0], eax
0x55F97A: test    eax, eax
0x55F97C: mov     byte ptr [esp+2Ch+var_4], 2
0x55F981: jz      short loc_55F98E
0x55F983: mov     ecx, eax; this
0x55F985: call    ??0BSTreeModel@@QAE@XZ; BSTreeModel::BSTreeModel(void)
0x55F98A: mov     esi, eax
0x55F98C: jmp     short loc_55F990
0x55F98E: xor     esi, esi
0x55F990: push    edi
0x55F991: mov     ecx, esi
0x55F993: mov     byte ptr [esp+30h+var_4], 0
0x55F998: call    sub_5630A0
0x55F99D: test    al, al
0x55F99F: jnz     short loc_55F9E7
0x55F9A1: test    esi, esi
0x55F9A3: jz      short loc_55F9AF
0x55F9A5: mov     edx, [esi]
0x55F9A7: mov     eax, [edx]
0x55F9A9: push    1
0x55F9AB: mov     ecx, esi
0x55F9AD: call    eax
0x55F9AF: lea     ecx, [esp+2Ch+var_18]; this
0x55F9B3: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x55F9BB: call    sub_7016A0
0x55F9C0: xor     eax, eax
0x55F9C2: mov     ecx, dword ptr [esp+2Ch+var_C]
0x55F9C6: mov     large fs:0, ecx
0x55F9CD: pop     ecx
0x55F9CE: pop     edi
0x55F9CF: pop     esi
0x55F9D0: pop     ebp
0x55F9D1: pop     ebx
0x55F9D2: add     esp, 18h
0x55F9D5: retn    8
0x55F9D8: push    esi
0x55F9D9: push    ebx
0x55F9DA: mov     ecx, edi
0x55F9DC: call    BSTreeModel__MakeBase
0x55F9E1: test    al, al
0x55F9E3: jz      short loc_55F9AF
0x55F9E5: mov     esi, edi
0x55F9E7: test    ebp, ebp
0x55F9E9: fld1
0x55F9EB: fstp    [esp+2Ch+arg_0]
0x55F9EF: jz      short loc_55FA02
0x55F9F1: mov     edx, [ebp+0]
0x55F9F4: mov     eax, [edx+0ECh]
0x55F9FA: mov     ecx, ebp
0x55F9FC: call    eax
0x55F9FE: fstp    [esp+2Ch+arg_0]
0x55FA02: mov     edx, [esi]
0x55FA04: fld     [esp+2Ch+arg_0]
0x55FA08: mov     eax, [edx+8]
0x55FA0B: push    ecx
0x55FA0C: mov     ecx, esi
0x55FA0E: fstp    [esp+30h+var_30]
0x55FA11: call    eax
0x55FA13: mov     edi, eax
0x55FA15: test    edi, edi
0x55FA17: jz      short loc_55FA2C
0x55FA19: mov     ecx, [esp+2Ch+var_10]
0x55FA1D: mov     edx, [ecx]
0x55FA1F: mov     eax, [edx+14h]
0x55FA22: call    eax
0x55FA24: push    eax; Src
0x55FA25: mov     ecx, edi
0x55FA27: call    NiObjectNET_SetName
0x55FA2C: lea     ecx, [esp+2Ch+var_18]; this
0x55FA30: mov     byte ptr [esi+4Ch], 1
0x55FA34: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x55FA3C: call    sub_7016A0
0x55FA41: mov     eax, edi
0x55FA43: jmp     loc_55F9C2
