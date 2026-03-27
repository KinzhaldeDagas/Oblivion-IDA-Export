0x512BB0: sub     esp, 214h
0x512BB6: mov     eax, ds:0B30AACh
0x512BBB: xor     eax, esp
0x512BBD: mov     [esp+214h+var_4], eax
0x512BC4: mov     eax, [esp+214h+arg_10]
0x512BCB: mov     ecx, [esp+214h+arg_14]
0x512BD2: mov     edx, [esp+214h+arg_1C]
0x512BD9: push    ebx
0x512BDA: mov     ebx, [esp+218h+arg_4]
0x512BE1: push    ebp
0x512BE2: mov     ebp, [esp+21Ch+arg_C]
0x512BE9: push    esi
0x512BEA: mov     esi, [esp+220h+a4]
0x512BF1: push    edi
0x512BF2: mov     edi, [esp+224h+a1]
0x512BF9: push    0; int
0x512BFB: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x512C00: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x512C05: push    0; int
0x512C07: push    esi; void *
0x512C08: mov     [esp+238h+var_208], eax
0x512C0C: mov     [esp+238h+l], ecx
0x512C10: mov     [esp+238h+a3], edx
0x512C14: call    OblivionDynamicCast
0x512C19: mov     ecx, [esp+238h+l]
0x512C1D: mov     edx, [esp+238h+var_208]
0x512C21: mov     [esp+238h+var_20C], eax
0x512C25: lea     eax, [esp+238h+var_204]
0x512C29: push    eax; UInt16
0x512C2A: mov     eax, [esp+23Ch+a3]
0x512C2E: push    ecx; l
0x512C2F: push    edx; a6
0x512C30: push    ebp; a5
0x512C31: push    esi; a4
0x512C32: push    eax; a3
0x512C33: push    ebx; a2
0x512C34: push    edi; a1
0x512C35: call    Script_ExtractArgs
0x512C3A: add     esp, 34h
0x512C3D: test    al, al
0x512C3F: jz      short loc_512C7D
0x512C41: mov     esi, [esp+224h+var_20C]
0x512C45: test    esi, esi
0x512C47: jz      short loc_512C7B
0x512C49: push    0; a2
0x512C4B: mov     ecx, esi; this
0x512C4D: call    Actor_GetActorBaseForm
0x512C52: push    0; a3
0x512C54: lea     ecx, [esp+228h+var_204]
0x512C58: add     eax, 0A0h ; ' '
0x512C5D: push    ecx; a2
0x512C5E: lea     ecx, [eax+4]; this
0x512C61: call    BSStringT_Set
0x512C66: push    80h ; '€'; a2
0x512C6B: push    0; a2
0x512C6D: mov     ecx, esi; this
0x512C6F: call    Actor_GetActorBaseForm
0x512C74: mov     ecx, eax; this
0x512C76: call    TESForm_MarkAsModified
0x512C7B: mov     al, 1
0x512C7D: mov     ecx, [esp+224h+var_4]
0x512C84: pop     edi
0x512C85: pop     esi
0x512C86: pop     ebp
0x512C87: pop     ebx
0x512C88: xor     ecx, esp
0x512C8A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x512C8F: add     esp, 214h
0x512C95: retn
