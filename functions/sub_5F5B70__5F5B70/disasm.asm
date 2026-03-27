0x5F5B70: push    ebx
0x5F5B71: push    ebp
0x5F5B72: push    esi
0x5F5B73: mov     esi, [esp+0Ch+arg_8]
0x5F5B77: mov     ebp, ecx
0x5F5B79: mov     ecx, [esi+58h]
0x5F5B7C: mov     eax, [ecx]
0x5F5B7E: mov     edx, [eax+0F8h]
0x5F5B84: push    edi
0x5F5B85: push    1
0x5F5B87: call    edx
0x5F5B89: mov     ebx, eax
0x5F5B8B: test    ebx, ebx
0x5F5B8D: jz      short loc_5F5B93
0x5F5B8F: mov     edi, ebx
0x5F5B91: jmp     short loc_5F5BA4
0x5F5B93: mov     ecx, [esi+58h]
0x5F5B96: mov     eax, [ecx]
0x5F5B98: mov     edx, [eax+0ECh]
0x5F5B9E: push    1
0x5F5BA0: call    edx
0x5F5BA2: mov     edi, eax
0x5F5BA4: cmp     byte ptr ds:0B3B908h, 0
0x5F5BAB: fld     [esp+10h+arg_0]
0x5F5BAF: fmul    [esp+10h+arg_4]
0x5F5BB3: fstp    [esp+10h+arg_8]
0x5F5BB7: jz      short loc_5F5BE6
0x5F5BB9: mov     ecx, ebp; this
0x5F5BBB: call    TESObjectREFR_GetName
0x5F5BC0: fld     [esp+10h+arg_4]
0x5F5BC4: fmul    qword ptr ds:0A309F0h
0x5F5BCA: push    eax
0x5F5BCB: sub     esp, 8
0x5F5BCE: mov     ecx, esi; this
0x5F5BD0: fstp    qword ptr [esp+1Ch+var_1C]
0x5F5BD3: call    TESObjectREFR_GetName
0x5F5BD8: push    eax
0x5F5BD9: push    offset a_20sBlocks_0fO; "%.20s blocks %.0f%% of %.20s's blow!"
0x5F5BDE: call    Interface_ConsolePrint
0x5F5BE3: add     esp, 14h
0x5F5BE6: fldz
0x5F5BE8: fcom    [esp+10h+arg_4]
0x5F5BEC: fnstsw  ax
0x5F5BEE: test    ah, 5
0x5F5BF1: jnp     short loc_5F5BF7
0x5F5BF3: test    edi, edi
0x5F5BF5: jnz     short loc_5F5C0D
0x5F5BF7: mov     eax, [esi]
0x5F5BF9: mov     edx, [eax+39Ch]
0x5F5BFF: push    ecx
0x5F5C00: fstp    [esp+14h+var_14]
0x5F5C03: push    0
0x5F5C05: push    0Fh
0x5F5C07: mov     ecx, esi
0x5F5C09: call    edx
0x5F5C0B: jmp     short loc_5F5C0F
0x5F5C0D: fstp    st
0x5F5C0F: push    0Fh
0x5F5C11: mov     ecx, esi
0x5F5C13: call    Actor_GetBaseCalcAVi
0x5F5C18: push    eax
0x5F5C19: call    Calc_MasteryFromSkill
0x5F5C1E: add     esp, 4
0x5F5C21: test    eax, eax
0x5F5C23: jnz     short loc_5F5C64
0x5F5C25: fld     [esp+10h+arg_4]
0x5F5C29: mov     eax, [esi]
0x5F5C2B: mov     edx, [eax+284h]
0x5F5C31: sub     esp, 8
0x5F5C34: fstp    [esp+18h+var_14]; float
0x5F5C38: mov     ecx, esi
0x5F5C3A: fld     [esp+18h+arg_0]
0x5F5C3E: fstp    [esp+18h+var_18]; int
0x5F5C41: push    0Fh
0x5F5C43: call    edx
0x5F5C45: push    eax; int
0x5F5C46: call    sub_547590
0x5F5C4B: fstp    [esp+1Ch+arg_0]
0x5F5C4F: fld     [esp+1Ch+arg_0]
0x5F5C53: add     esp, 8
0x5F5C56: fchs
0x5F5C58: mov     ecx, esi
0x5F5C5A: fstp    [esp+14h+var_14]; float
0x5F5C5D: call    Actor_ModFatigue?
0x5F5C62: jmp     short loc_5F5C69
0x5F5C64: cmp     eax, 1
0x5F5C67: jg      short loc_5F5CD6
0x5F5C69: test    edi, edi
0x5F5C6B: jz      short loc_5F5CD6
0x5F5C6D: mov     eax, [esi]
0x5F5C6F: fld     [esp+10h+arg_8]
0x5F5C73: mov     edx, [eax+2C4h]
0x5F5C79: push    0
0x5F5C7B: push    ecx
0x5F5C7C: fstp    [esp+18h+var_18]
0x5F5C7F: push    edi
0x5F5C80: mov     ecx, esi
0x5F5C82: call    edx
0x5F5C84: test    al, al
0x5F5C86: jz      short loc_5F5CD6
0x5F5C88: push    0; float
0x5F5C8A: mov     ecx, esi
0x5F5C8C: call    sub_5F4AE0
0x5F5C91: cmp     byte ptr ds:0B3B908h, 0
0x5F5C98: jz      short loc_5F5CD6
0x5F5C9A: test    ebx, ebx
0x5F5C9C: mov     edi, offset aShield_0; "shield"
0x5F5CA1: jnz     short loc_5F5CA8
0x5F5CA3: mov     edi, offset aWeapon_0; "weapon"
0x5F5CA8: mov     ecx, ebp; this
0x5F5CAA: call    TESObjectREFR_GetName
0x5F5CAF: fld     [esp+10h+arg_4]
0x5F5CB3: fmul    qword ptr ds:0A309F0h
0x5F5CB9: push    eax
0x5F5CBA: sub     esp, 8
0x5F5CBD: mov     ecx, esi; this
0x5F5CBF: fstp    qword ptr [esp+1Ch+var_1C]
0x5F5CC2: push    edi
0x5F5CC3: call    TESObjectREFR_GetName
0x5F5CC8: push    eax
0x5F5CC9: push    offset a_20sSSShatters; "%.20s's %s shatters under the blow and "...
0x5F5CCE: call    Interface_ConsolePrint
0x5F5CD3: add     esp, 18h
0x5F5CD6: mov     ecx, [esp+10h+arg_C]
0x5F5CDA: test    ecx, ecx
0x5F5CDC: pop     edi
0x5F5CDD: pop     esi
0x5F5CDE: pop     ebp
0x5F5CDF: pop     ebx
0x5F5CE0: jz      short locret_5F5D04
0x5F5CE2: fld     [esp+arg_4]
0x5F5CE6: fld     dword ptr ds:0B37060h
0x5F5CEC: fcompp
0x5F5CEE: fnstsw  ax
0x5F5CF0: test    ah, 41h
0x5F5CF3: jp      short locret_5F5D04
0x5F5CF5: push    offset Vector3_InitValue?
0x5F5CFA: push    offset Vector3_InitValue?
0x5F5CFF: call    sub_608DA0
0x5F5D04: retn    10h
