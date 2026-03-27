0x5F8890: push    ebp
0x5F8891: mov     ebp, esp
0x5F8893: and     esp, 0FFFFFFC0h
0x5F8896: sub     esp, 134h
0x5F889C: mov     eax, ds:0B30AACh
0x5F88A1: xor     eax, esp
0x5F88A3: mov     [esp+134h+var_4], eax
0x5F88AA: fild    dword ptr ds:0B02E24h
0x5F88B0: mov     eax, [ebp+arg_C]
0x5F88B3: mov     ecx, 500h
0x5F88B8: sub     ecx, ds:0B02E24h
0x5F88BE: fstp    [esp+134h+var_104]
0x5F88C2: push    ebx
0x5F88C3: mov     ebx, [ebp+arg_8]
0x5F88C6: mov     [esp+138h+var_100], ecx
0x5F88CA: fild    [esp+138h+var_100]
0x5F88CE: push    esi
0x5F88CF: mov     esi, [ebp+arg_0]
0x5F88D2: test    esi, esi
0x5F88D4: fstp    [esp+13Ch+var_100]
0x5F88D8: push    edi
0x5F88D9: fld     [esp+140h+var_100]
0x5F88DD: mov     edi, [ebx]
0x5F88DF: fld     [esp+140h+var_104]
0x5F88E3: mov     [esp+140h+var_FC], eax
0x5F88E7: mov     eax, [eax]
0x5F88E9: fld     st
0x5F88EB: fsubp   st(2), st
0x5F88ED: mov     [esp+140h+var_F8], ebx
0x5F88F1: fxch    st(1)
0x5F88F3: mov     [esp+140h+var_118], edi
0x5F88F7: mov     [esp+140h+var_108], eax
0x5F88FB: fmul    qword ptr ds:0A2FAA0h
0x5F8901: fadd    st, st(1)
0x5F8903: fstp    [esp+140h+var_10C]
0x5F8907: jz      short loc_5F891F
0x5F8909: mov     edx, [esi]
0x5F890B: fstp    st
0x5F890D: mov     eax, [edx+190h]
0x5F8913: mov     ecx, esi
0x5F8915: call    eax
0x5F8917: test    al, al
0x5F8919: jnz     short loc_5F8946
0x5F891B: fld     [esp+140h+var_104]
0x5F891F: fild    [esp+140h+var_118]
0x5F8923: push    0FFFFFFFFh; int
0x5F8925: push    1; int
0x5F8927: sub     esp, 8
0x5F892A: fstp    [esp+150h+var_14C]; float
0x5F892E: fstp    [esp+150h+var_150]; float
0x5F8931: push    offset aActorInfoCurre; "ACTOR INFO: Current ref is not an actor"...
0x5F8936: call    InterfaceMgr_DebugTextLine
0x5F893B: add     esp, 14h
0x5F893E: add     edi, [ebp+arg_4]
0x5F8941: jmp     loc_5F91B8
0x5F8946: mov     ecx, esi; this
0x5F8948: call    TESObjectREFR_GetName
0x5F894D: push    eax
0x5F894E: lea     ecx, [esp+144h+var_D0]
0x5F8952: push    offset aActorInfoS; "ACTOR INFO: %s"
0x5F8957: push    ecx
0x5F8958: call    __sprintf
0x5F895D: fild    [esp+14Ch+var_118]
0x5F8961: add     esp, 0Ch
0x5F8964: push    0FFFFFFFFh; int
0x5F8966: push    1; int
0x5F8968: sub     esp, 8
0x5F896B: fstp    [esp+150h+var_14C]; float
0x5F896F: lea     edx, [esp+150h+var_D0]
0x5F8976: fld     [esp+150h+var_104]
0x5F897A: fstp    [esp+150h+var_150]; float
0x5F897D: push    edx; int
0x5F897E: call    InterfaceMgr_DebugTextLine
0x5F8983: mov     ebx, [ebp+arg_4]
0x5F8986: mov     eax, ds:0A6EAF8h
0x5F898B: mov     ecx, ds:0A6EAFCh
0x5F8991: mov     edx, ds:0A6EB00h
0x5F8997: add     esp, 14h
0x5F899A: add     edi, ebx
0x5F899C: push    0FFFFFFFFh; int
0x5F899E: mov     [esp+144h+var_118], edi
0x5F89A2: fild    [esp+144h+var_118]
0x5F89A6: push    1; int
0x5F89A8: sub     esp, 8
0x5F89AB: mov     [esp+150h+var_110], edi
0x5F89AF: fstp    [esp+150h+var_14C]; float
0x5F89B3: mov     [esp+150h+var_DC], eax
0x5F89B7: fld     [esp+150h+var_104]
0x5F89BB: mov     [esp+150h+var_D8], ecx
0x5F89BF: fstp    [esp+150h+var_150]; float
0x5F89C2: push    offset aAttributes_0; "ATTRIBUTES"
0x5F89C7: mov     [esp+154h+var_D4], edx
0x5F89CE: call    InterfaceMgr_DebugTextLine
0x5F89D3: add     edi, ebx
0x5F89D5: add     esp, 14h
0x5F89D8: mov     [esp+140h+var_11C], edi
0x5F89DC: mov     [esp+140h+var_118], edi
0x5F89E0: xor     edi, edi
0x5F89E2: cmp     edi, 0Bh
0x5F89E5: mov     ecx, esi
0x5F89E7: jnz     short loc_5F8A3B
0x5F89E9: mov     eax, [esi]
0x5F89EB: mov     edx, [eax+288h]
0x5F89F1: push    0
0x5F89F3: call    edx
0x5F89F5: push    ecx
0x5F89F6: fstp    [esp+148h+var_14C+4]; float
0x5F89F9: call    Calc_ActorBaseEncumbrance
0x5F89FE: fstp    [esp+148h+var_118]
0x5F8A02: add     esp, 4
0x5F8A05: fld     [esp+144h+var_118]
0x5F8A09: call    Double_To_SInt32
0x5F8A0E: push    eax
0x5F8A0F: mov     eax, [esi]
0x5F8A11: mov     edx, [eax+288h]
0x5F8A17: push    edi
0x5F8A18: mov     ecx, esi
0x5F8A1A: call    edx
0x5F8A1C: sub     esp, 8
0x5F8A1F: fstp    qword ptr [esp+14Ch+var_14C]
0x5F8A22: push    edi
0x5F8A23: call    ActorValue_GetName
0x5F8A28: add     esp, 4
0x5F8A2B: push    eax
0x5F8A2C: lea     eax, [esp+150h+var_DC]
0x5F8A30: push    eax
0x5F8A31: lea     ecx, [esp+154h+var_D0]
0x5F8A38: push    ecx
0x5F8A39: jmp     short loc_5F8AB1
0x5F8A3B: push    edi
0x5F8A3C: call    Actor_GetBaseCalcAVf
0x5F8A41: fstp    [esp+140h+var_114]
0x5F8A45: fld     [esp+140h+var_114]
0x5F8A49: fld     st
0x5F8A4B: call    Double_To_SInt32
0x5F8A50: mov     [esp+140h+var_114], eax
0x5F8A54: fild    [esp+140h+var_114]
0x5F8A58: fstp    [esp+140h+var_114]
0x5F8A5C: fld     [esp+140h+var_114]
0x5F8A60: fld     st
0x5F8A62: fsubp   st(2), st
0x5F8A64: fxch    st(1)
0x5F8A66: fcomp   qword ptr ds:0A2FC68h
0x5F8A6C: fnstsw  ax
0x5F8A6E: test    ah, 1
0x5F8A71: jz      short loc_5F8A79
0x5F8A73: fsub    qword ptr ds:0A2F928h
0x5F8A79: fstp    [esp+140h+var_114]
0x5F8A7D: fld     [esp+140h+var_114]
0x5F8A81: call    Double_To_SInt32
0x5F8A86: mov     edx, [esi]
0x5F8A88: push    eax
0x5F8A89: mov     eax, [edx+288h]
0x5F8A8F: push    edi
0x5F8A90: mov     ecx, esi
0x5F8A92: call    eax
0x5F8A94: sub     esp, 8
0x5F8A97: fstp    qword ptr [esp+14Ch+var_14C]
0x5F8A9A: push    edi
0x5F8A9B: call    ActorValue_GetName
0x5F8AA0: add     esp, 4
0x5F8AA3: push    eax
0x5F8AA4: lea     ecx, [esp+150h+var_DC]
0x5F8AA8: push    ecx
0x5F8AA9: lea     edx, [esp+154h+var_D0]
0x5F8AB0: push    edx
0x5F8AB1: call    __sprintf
0x5F8AB6: fild    [esp+158h+var_118]
0x5F8ABA: add     esp, 18h
0x5F8ABD: push    0FFFFFFFFh; int
0x5F8ABF: push    1; int
0x5F8AC1: sub     esp, 8
0x5F8AC4: fstp    [esp+150h+var_14C]; float
0x5F8AC8: lea     eax, [esp+150h+var_D0]
0x5F8ACF: fld     [esp+150h+var_104]
0x5F8AD3: fstp    [esp+150h+var_150]; float
0x5F8AD6: push    eax; int
0x5F8AD7: call    InterfaceMgr_DebugTextLine
0x5F8ADC: add     [esp+154h+var_118], ebx
0x5F8AE0: add     edi, 1
0x5F8AE3: add     esp, 14h
0x5F8AE6: cmp     edi, 0Ch
0x5F8AE9: jl      loc_5F89E2
0x5F8AEF: mov     edi, 21h ; '!'
0x5F8AF4: push    edi
0x5F8AF5: mov     ecx, esi
0x5F8AF7: call    Actor_GetBaseCalcAVf
0x5F8AFC: fstp    [esp+140h+var_114]
0x5F8B00: fld     [esp+140h+var_114]
0x5F8B04: fld     st
0x5F8B06: call    Double_To_SInt32
0x5F8B0B: mov     [esp+140h+var_114], eax
0x5F8B0F: fild    [esp+140h+var_114]
0x5F8B13: fstp    [esp+140h+var_114]
0x5F8B17: fld     [esp+140h+var_114]
0x5F8B1B: fld     st
0x5F8B1D: fsubp   st(2), st
0x5F8B1F: fxch    st(1)
0x5F8B21: fcomp   qword ptr ds:0A2FC68h
0x5F8B27: fnstsw  ax
0x5F8B29: test    ah, 1
0x5F8B2C: jz      short loc_5F8B34
0x5F8B2E: fsub    qword ptr ds:0A2F928h
0x5F8B34: fstp    [esp+140h+var_114]
0x5F8B38: fld     [esp+140h+var_114]
0x5F8B3C: call    Double_To_SInt32
0x5F8B41: mov     edx, [esi]
0x5F8B43: push    eax
0x5F8B44: mov     eax, [edx+288h]
0x5F8B4A: push    edi
0x5F8B4B: mov     ecx, esi
0x5F8B4D: call    eax
0x5F8B4F: sub     esp, 8
0x5F8B52: fstp    qword ptr [esp+14Ch+var_14C]
0x5F8B55: push    edi
0x5F8B56: call    ActorValue_GetName
0x5F8B5B: add     esp, 4
0x5F8B5E: push    eax
0x5F8B5F: lea     ecx, [esp+150h+var_DC]
0x5F8B63: push    ecx
0x5F8B64: lea     edx, [esp+154h+var_D0]
0x5F8B6B: push    edx
0x5F8B6C: call    __sprintf
0x5F8B71: fild    [esp+158h+var_118]
0x5F8B75: add     esp, 18h
0x5F8B78: push    0FFFFFFFFh; int
0x5F8B7A: push    1; int
0x5F8B7C: sub     esp, 8
0x5F8B7F: fstp    [esp+150h+var_14C]; float
0x5F8B83: lea     eax, [esp+150h+var_D0]
0x5F8B8A: fld     [esp+150h+var_104]
0x5F8B8E: fstp    [esp+150h+var_150]; float
0x5F8B91: push    eax; int
0x5F8B92: call    InterfaceMgr_DebugTextLine
0x5F8B97: add     [esp+154h+var_118], ebx
0x5F8B9B: add     edi, 1
0x5F8B9E: add     esp, 14h
0x5F8BA1: cmp     edi, 28h ; '('
0x5F8BA4: jl      loc_5F8AF4
0x5F8BAA: fild    [esp+140h+var_110]
0x5F8BAE: push    0FFFFFFFFh; int
0x5F8BB0: push    2; int
0x5F8BB2: sub     esp, 8
0x5F8BB5: fstp    [esp+150h+var_14C]; float
0x5F8BB9: fld     [esp+150h+var_10C]
0x5F8BBD: fstp    [esp+150h+var_150]; float
0x5F8BC0: push    offset aSkills; "SKILLS"
0x5F8BC5: call    InterfaceMgr_DebugTextLine
0x5F8BCA: mov     edx, [esi]
0x5F8BCC: mov     edi, [esp+154h+var_11C]
0x5F8BD0: mov     eax, [edx+170h]
0x5F8BD6: add     esp, 14h
0x5F8BD9: mov     ecx, esi
0x5F8BDB: mov     [esp+140h+var_110], edi
0x5F8BDF: call    eax
0x5F8BE1: cmp     byte ptr [eax+4], 24h ; '$'
0x5F8BE5: jnz     loc_5F8DE7
0x5F8BEB: push    0Ch
0x5F8BED: mov     ecx, esi
0x5F8BEF: call    Actor_GetBaseCalcAVf
0x5F8BF4: fstp    [esp+140h+var_11C]
0x5F8BF8: fld     [esp+140h+var_11C]
0x5F8BFC: fld     st
0x5F8BFE: call    Double_To_SInt32
0x5F8C03: mov     [esp+140h+var_11C], eax
0x5F8C07: fild    [esp+140h+var_11C]
0x5F8C0B: fstp    [esp+140h+var_11C]
0x5F8C0F: fld     [esp+140h+var_11C]
0x5F8C13: fld     st
0x5F8C15: fsubp   st(2), st
0x5F8C17: fxch    st(1)
0x5F8C19: fcomp   qword ptr ds:0A2FC68h
0x5F8C1F: fnstsw  ax
0x5F8C21: test    ah, 1
0x5F8C24: jz      short loc_5F8C2C
0x5F8C26: fsub    qword ptr ds:0A2F928h
0x5F8C2C: fstp    [esp+140h+var_11C]
0x5F8C30: fld     [esp+140h+var_11C]
0x5F8C34: call    Double_To_SInt32
0x5F8C39: mov     edx, [esi]
0x5F8C3B: push    eax
0x5F8C3C: mov     eax, [edx+288h]
0x5F8C42: push    0Ch
0x5F8C44: mov     ecx, esi
0x5F8C46: call    eax
0x5F8C48: sub     esp, 8
0x5F8C4B: fstp    qword ptr [esp+144h+var_144]
0x5F8C4E: push    offset aCombat; "COMBAT"
0x5F8C53: lea     ecx, [esp+148h+var_D4]
0x5F8C57: push    ecx
0x5F8C58: lea     edx, [esp+14Ch+var_C8]
0x5F8C5F: push    edx
0x5F8C60: call    __sprintf
0x5F8C65: fild    [esp+150h+var_108]
0x5F8C69: add     esp, 18h
0x5F8C6C: push    0FFFFFFFFh; int
0x5F8C6E: push    2; int
0x5F8C70: sub     esp, 8
0x5F8C73: fstp    [esp+148h+var_144]; float
0x5F8C77: lea     eax, [esp+148h+var_C8]
0x5F8C7E: fld     [esp+148h+var_104]
0x5F8C82: fstp    [esp+148h+var_14C+4]; float
0x5F8C85: push    eax; int
0x5F8C86: call    InterfaceMgr_DebugTextLine
0x5F8C8B: add     esp, 14h
0x5F8C8E: add     edi, ebx
0x5F8C90: push    13h
0x5F8C92: mov     ecx, esi
0x5F8C94: mov     [esp+13Ch+var_108], edi
0x5F8C98: call    Actor_GetBaseCalcAVf
0x5F8C9D: fstp    [esp+138h+var_114]
0x5F8CA1: fld     [esp+138h+var_114]
0x5F8CA5: fld     st
0x5F8CA7: call    Double_To_SInt32
0x5F8CAC: mov     [esp+138h+var_114], eax
0x5F8CB0: fild    [esp+138h+var_114]
0x5F8CB4: fstp    [esp+138h+var_114]
0x5F8CB8: fld     [esp+138h+var_114]
0x5F8CBC: fld     st
0x5F8CBE: fsubp   st(2), st
0x5F8CC0: fxch    st(1)
0x5F8CC2: fcomp   qword ptr ds:0A2FC68h
0x5F8CC8: fnstsw  ax
0x5F8CCA: test    ah, 1
0x5F8CCD: jz      short loc_5F8CD5
0x5F8CCF: fsub    qword ptr ds:0A2F928h
0x5F8CD5: fstp    [esp+138h+var_114]
0x5F8CD9: fld     [esp+138h+var_114]
0x5F8CDD: call    Double_To_SInt32
0x5F8CE2: mov     edx, [esi]
0x5F8CE4: push    eax
0x5F8CE5: mov     eax, [edx+288h]
0x5F8CEB: push    13h
0x5F8CED: mov     ecx, esi
0x5F8CEF: call    eax
0x5F8CF1: sub     esp, 8
0x5F8CF4: fstp    qword ptr [esp+148h+var_14C+4]
0x5F8CF7: push    offset aMagic_0; "MAGIC"
0x5F8CFC: lea     ecx, [esp+14Ch+var_D8]
0x5F8D00: push    ecx
0x5F8D01: lea     edx, [esp+150h+var_CC]
0x5F8D08: push    edx
0x5F8D09: call    __sprintf
0x5F8D0E: fild    [esp+154h+var_10C]
0x5F8D12: add     esp, 18h
0x5F8D15: push    0FFFFFFFFh; int
0x5F8D17: push    2; int
0x5F8D19: sub     esp, 8
0x5F8D1C: fstp    [esp+14Ch+var_14C+4]; float
0x5F8D20: lea     eax, [esp+14Ch+var_CC]
0x5F8D27: fld     [esp+14Ch+var_108]
0x5F8D2B: fstp    [esp+14Ch+var_14C]; float
0x5F8D2E: push    eax; int
0x5F8D2F: call    InterfaceMgr_DebugTextLine
0x5F8D34: add     esp, 14h
0x5F8D37: add     edi, ebx
0x5F8D39: push    1Ah
0x5F8D3B: mov     ecx, esi
0x5F8D3D: mov     [esp+140h+var_10C], edi
0x5F8D41: call    Actor_GetBaseCalcAVf
0x5F8D46: fstp    [esp+13Ch+var_118]
0x5F8D4A: fld     [esp+13Ch+var_118]
0x5F8D4E: fld     st
0x5F8D50: call    Double_To_SInt32
0x5F8D55: mov     [esp+13Ch+var_118], eax
0x5F8D59: fild    [esp+13Ch+var_118]
0x5F8D5D: fstp    [esp+13Ch+var_118]
0x5F8D61: fld     [esp+13Ch+var_118]
0x5F8D65: fld     st
0x5F8D67: fsubp   st(2), st
0x5F8D69: fxch    st(1)
0x5F8D6B: fcomp   qword ptr ds:0A2FC68h
0x5F8D71: fnstsw  ax
0x5F8D73: test    ah, 1
0x5F8D76: jz      short loc_5F8D7E
0x5F8D78: fsub    qword ptr ds:0A2F928h
0x5F8D7E: fstp    [esp+13Ch+var_118]
0x5F8D82: fld     [esp+13Ch+var_118]
0x5F8D86: call    Double_To_SInt32
0x5F8D8B: mov     edx, [esi]
0x5F8D8D: push    eax
0x5F8D8E: mov     eax, [edx+288h]
0x5F8D94: push    1Ah
0x5F8D96: mov     ecx, esi
0x5F8D98: call    eax
0x5F8D9A: sub     esp, 8
0x5F8D9D: fstp    qword ptr [esp+14Ch+var_14C]
0x5F8DA0: push    offset aStealth; "STEALTH"
0x5F8DA5: lea     ecx, [esp+150h+var_DC]
0x5F8DA9: push    ecx
0x5F8DAA: lea     edx, [esp+154h+var_D0]
0x5F8DB1: push    edx
0x5F8DB2: call    __sprintf
0x5F8DB7: fild    [esp+158h+var_110]
0x5F8DBB: add     esp, 18h
0x5F8DBE: push    0FFFFFFFFh; int
0x5F8DC0: push    2; int
0x5F8DC2: sub     esp, 8
0x5F8DC5: fstp    [esp+150h+var_14C]; float
0x5F8DC9: lea     eax, [esp+150h+var_D0]
0x5F8DD0: fld     [esp+150h+var_10C]
0x5F8DD4: fstp    [esp+150h+var_150]; float
0x5F8DD7: push    eax; int
0x5F8DD8: call    InterfaceMgr_DebugTextLine
0x5F8DDD: add     esp, 14h
0x5F8DE0: add     edi, ebx
0x5F8DE2: jmp     loc_5F8EAA
0x5F8DE7: mov     edi, 0Ch
0x5F8DEC: lea     esp, [esp+0]
0x5F8DF0: push    edi
0x5F8DF1: mov     ecx, esi
0x5F8DF3: call    Actor_GetBaseCalcAVf
0x5F8DF8: fstp    [esp+140h+var_11C]
0x5F8DFC: fld     [esp+140h+var_11C]
0x5F8E00: fld     st
0x5F8E02: call    Double_To_SInt32
0x5F8E07: mov     [esp+140h+var_11C], eax
0x5F8E0B: fild    [esp+140h+var_11C]
0x5F8E0F: fstp    [esp+140h+var_11C]
0x5F8E13: fld     [esp+140h+var_11C]
0x5F8E17: fld     st
0x5F8E19: fsubp   st(2), st
0x5F8E1B: fxch    st(1)
0x5F8E1D: fcomp   qword ptr ds:0A2FC68h
0x5F8E23: fnstsw  ax
0x5F8E25: test    ah, 1
0x5F8E28: jz      short loc_5F8E30
0x5F8E2A: fsub    qword ptr ds:0A2F928h
0x5F8E30: fstp    [esp+140h+var_11C]
0x5F8E34: fld     [esp+140h+var_11C]
0x5F8E38: call    Double_To_SInt32
0x5F8E3D: mov     edx, [esi]
0x5F8E3F: push    eax
0x5F8E40: mov     eax, [edx+288h]
0x5F8E46: push    edi
0x5F8E47: mov     ecx, esi
0x5F8E49: call    eax
0x5F8E4B: sub     esp, 8
0x5F8E4E: fstp    qword ptr [esp+14Ch+var_14C]
0x5F8E51: push    edi
0x5F8E52: call    ActorValue_GetName
0x5F8E57: add     esp, 4
0x5F8E5A: push    eax
0x5F8E5B: lea     ecx, [esp+150h+var_DC]
0x5F8E5F: push    ecx
0x5F8E60: lea     edx, [esp+154h+var_D0]
0x5F8E67: push    edx
0x5F8E68: call    __sprintf
0x5F8E6D: fild    [esp+158h+var_110]
0x5F8E71: add     esp, 18h
0x5F8E74: push    0FFFFFFFFh; int
0x5F8E76: push    2; int
0x5F8E78: sub     esp, 8
0x5F8E7B: fstp    [esp+150h+var_14C]; float
0x5F8E7F: lea     eax, [esp+150h+var_D0]
0x5F8E86: fld     [esp+150h+var_10C]
0x5F8E8A: fstp    [esp+150h+var_150]; float
0x5F8E8D: push    eax; int
0x5F8E8E: call    InterfaceMgr_DebugTextLine
0x5F8E93: add     [esp+154h+var_110], ebx
0x5F8E97: add     edi, 1
0x5F8E9A: add     esp, 14h
0x5F8E9D: cmp     edi, 21h ; '!'
0x5F8EA0: jl      loc_5F8DF0
0x5F8EA6: mov     edi, [esp+140h+var_110]
0x5F8EAA: cmp     edi, [esp+140h+var_118]
0x5F8EAE: jle     short loc_5F8EB4
0x5F8EB0: mov     [esp+140h+var_118], edi
0x5F8EB4: add     [esp+140h+var_118], ebx
0x5F8EB8: fild    [esp+140h+var_118]
0x5F8EBC: push    0FFFFFFFFh; int
0x5F8EBE: push    2; int
0x5F8EC0: sub     esp, 8
0x5F8EC3: fstp    [esp+150h+var_14C]; float
0x5F8EC7: fld     [esp+150h+var_10C]
0x5F8ECB: fstp    [esp+150h+var_150]; float
0x5F8ECE: push    offset aActorValues; "ACTOR VALUES"
0x5F8ED3: call    InterfaceMgr_DebugTextLine
0x5F8ED8: fld     [esp+154h+var_104]
0x5F8EDC: fstp    [esp+154h+var_E8]
0x5F8EE0: add     esp, 14h
0x5F8EE3: fld     [esp+140h+var_10C]
0x5F8EE7: add     [esp+140h+var_118], ebx
0x5F8EEB: fstp    [esp+140h+var_E4]
0x5F8EEF: mov     edi, 28h ; '('
0x5F8EF4: fld     [esp+140h+var_100]
0x5F8EF8: fstp    [esp+140h+var_E0]
0x5F8EFC: fld1
0x5F8EFE: fstp    [esp+140h+var_F4]
0x5F8F02: fld     dword ptr ds:0A379B4h
0x5F8F08: fstp    [esp+140h+var_F0]
0x5F8F0C: fld     dword ptr ds:0A46C30h
0x5F8F12: fstp    [esp+140h+var_EC]
0x5F8F16: mov     eax, 55555556h
0x5F8F1B: imul    edi
0x5F8F1D: mov     eax, edx
0x5F8F1F: shr     eax, 1Fh
0x5F8F22: add     eax, edx
0x5F8F24: lea     ecx, [eax+eax*2]
0x5F8F27: mov     ebx, edi
0x5F8F29: sub     ebx, ecx
0x5F8F2B: push    edi
0x5F8F2C: mov     ecx, esi
0x5F8F2E: call    Actor_GetBaseCalcAVf
0x5F8F33: fstp    [esp+140h+var_11C]
0x5F8F37: fld     [esp+140h+var_11C]
0x5F8F3B: fld     st
0x5F8F3D: call    Double_To_SInt32
0x5F8F42: mov     [esp+140h+var_11C], eax
0x5F8F46: fild    [esp+140h+var_11C]
0x5F8F4A: fstp    [esp+140h+var_11C]
0x5F8F4E: fld     [esp+140h+var_11C]
0x5F8F52: fld     st
0x5F8F54: fsubp   st(2), st
0x5F8F56: fxch    st(1)
0x5F8F58: fcomp   qword ptr ds:0A2FC68h
0x5F8F5E: fnstsw  ax
0x5F8F60: test    ah, 1
0x5F8F63: jz      short loc_5F8F6B
0x5F8F65: fsub    qword ptr ds:0A2F928h
0x5F8F6B: fstp    [esp+140h+var_11C]
0x5F8F6F: fld     [esp+140h+var_11C]
0x5F8F73: call    Double_To_SInt32
0x5F8F78: mov     edx, [esi]
0x5F8F7A: push    eax
0x5F8F7B: mov     eax, [edx+288h]
0x5F8F81: push    edi
0x5F8F82: mov     ecx, esi
0x5F8F84: call    eax
0x5F8F86: sub     esp, 8
0x5F8F89: fstp    qword ptr [esp+14Ch+var_14C]
0x5F8F8C: push    edi
0x5F8F8D: call    ActorValue_GetName
0x5F8F92: add     esp, 4
0x5F8F95: push    eax
0x5F8F96: lea     ecx, [esp+150h+var_DC]
0x5F8F9A: push    ecx
0x5F8F9B: lea     edx, [esp+154h+var_D0]
0x5F8FA2: push    edx
0x5F8FA3: call    __sprintf
0x5F8FA8: fld     [esp+ebx*4+158h+var_F4]
0x5F8FAC: add     esp, 18h
0x5F8FAF: push    0FFFFFFFFh; int
0x5F8FB1: call    Double_To_SInt32
0x5F8FB6: fild    [esp+144h+var_118]
0x5F8FBA: push    eax; int
0x5F8FBB: sub     esp, 8
0x5F8FBE: fstp    [esp+150h+var_14C]; float
0x5F8FC2: lea     eax, [esp+150h+var_D0]
0x5F8FC9: fld     [esp+ebx*4+150h+var_E8]
0x5F8FCD: fstp    [esp+150h+var_150]; float
0x5F8FD0: push    eax; int
0x5F8FD1: call    InterfaceMgr_DebugTextLine
0x5F8FD6: add     esp, 14h
0x5F8FD9: cmp     ebx, 2
0x5F8FDC: jnz     short loc_5F8FE5
0x5F8FDE: mov     ecx, [ebp+arg_4]
0x5F8FE1: add     [esp+140h+var_118], ecx
0x5F8FE5: add     edi, 1
0x5F8FE8: cmp     edi, 48h ; 'H'
0x5F8FEB: jl      loc_5F8F16
0x5F8FF1: fild    [esp+140h+var_108]
0x5F8FF5: push    0FFFFFFFFh; int
0x5F8FF7: push    3; int
0x5F8FF9: sub     esp, 8
0x5F8FFC: fstp    [esp+150h+var_14C]; float
0x5F9000: fld     [esp+150h+var_100]
0x5F9004: fstp    [esp+150h+var_150]; float
0x5F9007: push    offset aInventory; "INVENTORY"
0x5F900C: call    InterfaceMgr_DebugTextLine
0x5F9011: mov     edx, [ebp+arg_4]
0x5F9014: add     [esp+154h+var_108], edx
0x5F9018: add     esp, 14h
0x5F901B: lea     ecx, [esi+44h]; this
0x5F901E: call    ExtraDataList_GetContainerChanges
0x5F9023: test    eax, eax
0x5F9025: jz      loc_5F91B0
0x5F902B: mov     edi, [eax]
0x5F902D: test    edi, edi
0x5F902F: mov     [esp+140h+var_10C], edi
0x5F9033: jz      loc_5F91B0
0x5F9039: jmp     short loc_5F9044
0x5F903B: jmp     short loc_5F9040
0x5F903D: align 10h
0x5F9040: mov     edi, [esp+140h+var_10C]
0x5F9044: cmp     dword ptr [edi+4], 0
0x5F9048: jnz     short loc_5F9053
0x5F904A: cmp     dword ptr [edi], 0
0x5F904D: jz      loc_5F91B0
0x5F9053: mov     ebx, [edi]
0x5F9055: test    ebx, ebx
0x5F9057: jz      short loc_5F905E
0x5F9059: mov     esi, [ebx+8]
0x5F905C: jmp     short loc_5F9060
0x5F905E: xor     esi, esi
0x5F9060: test    esi, esi
0x5F9062: jz      loc_5F91A1
0x5F9068: push    0
0x5F906A: mov     ecx, ebx
0x5F906C: call    ContainerEntryExtraData_HasWorn
0x5F9071: test    al, al
0x5F9073: jz      loc_5F91A1
0x5F9079: movzx   eax, byte ptr [esi+4]
0x5F907D: cmp     eax, 14h
0x5F9080: jz      loc_5F9122
0x5F9086: cmp     eax, 21h ; '!'
0x5F9089: jnz     loc_5F91A1
0x5F908F: mov     eax, [esi+88h]
0x5F9095: mov     edx, [eax+10h]
0x5F9098: lea     ecx, [esi+88h]
0x5F909E: call    edx
0x5F90A0: push    0; int
0x5F90A2: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x5F90A7: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5F90AC: push    0; int
0x5F90AE: push    esi; void *
0x5F90AF: movzx   edi, ax
0x5F90B2: call    OblivionDynamicCast
0x5F90B7: add     esp, 14h
0x5F90BA: test    eax, eax
0x5F90BC: jz      short loc_5F90CE
0x5F90BE: mov     eax, [eax+4]
0x5F90C1: test    eax, eax
0x5F90C3: jnz     short loc_5F90CA
0x5F90C5: mov     eax, offset EmptyString
0x5F90CA: mov     esi, eax
0x5F90CC: jmp     short loc_5F90D3
0x5F90CE: mov     esi, offset EmptyString
0x5F90D3: push    1
0x5F90D5: mov     ecx, ebx
0x5F90D7: call    ContainerEntryExtraData_GetHealth
0x5F90DC: sub     esp, 8
0x5F90DF: fstp    qword ptr [esp+148h+var_14C+4]
0x5F90E2: push    edi
0x5F90E3: push    esi
0x5F90E4: lea     eax, [esp+150h+var_D0]
0x5F90EB: push    offset a_20sDdmg_1f; "%.20s: %ddmg %.1f%%"
0x5F90F0: push    eax
0x5F90F1: call    __sprintf
0x5F90F6: fild    [esp+158h+var_108]
0x5F90FA: add     esp, 18h
0x5F90FD: push    0FFFFFFFFh; int
0x5F90FF: push    3; int
0x5F9101: sub     esp, 8
0x5F9104: fstp    [esp+150h+var_14C]; float
0x5F9108: lea     ecx, [esp+150h+var_D0]
0x5F910F: fld     [esp+150h+var_100]
0x5F9113: fstp    [esp+150h+var_150]; float
0x5F9116: push    ecx; int
0x5F9117: call    InterfaceMgr_DebugTextLine
0x5F911C: mov     edi, [esp+154h+var_10C]
0x5F9120: jmp     short loc_5F9197
0x5F9122: push    0; int
0x5F9124: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x5F9129: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5F912E: push    0; int
0x5F9130: push    esi; void *
0x5F9131: call    OblivionDynamicCast
0x5F9136: add     esp, 14h
0x5F9139: test    eax, eax
0x5F913B: jz      short loc_5F914D
0x5F913D: mov     eax, [eax+4]
0x5F9140: test    eax, eax
0x5F9142: jnz     short loc_5F9149
0x5F9144: mov     eax, offset EmptyString
0x5F9149: mov     esi, eax
0x5F914B: jmp     short loc_5F9152
0x5F914D: mov     esi, offset EmptyString
0x5F9152: push    1
0x5F9154: mov     ecx, ebx
0x5F9156: call    ContainerEntryExtraData_GetHealth
0x5F915B: sub     esp, 8
0x5F915E: fstp    qword ptr [esp+148h+var_14C+4]
0x5F9161: push    esi
0x5F9162: lea     eax, [esp+14Ch+var_D0]
0x5F9166: push    offset a_20s_1f; "%.20s: %.1f%%"
0x5F916B: push    eax
0x5F916C: call    __sprintf
0x5F9171: fild    [esp+154h+var_108]
0x5F9175: add     esp, 14h
0x5F9178: push    0FFFFFFFFh; int
0x5F917A: push    3; int
0x5F917C: sub     esp, 8
0x5F917F: fstp    [esp+150h+var_14C]; float
0x5F9183: lea     ecx, [esp+150h+var_D0]
0x5F918A: fld     [esp+150h+var_100]
0x5F918E: fstp    [esp+150h+var_150]; float
0x5F9191: push    ecx; int
0x5F9192: call    InterfaceMgr_DebugTextLine
0x5F9197: mov     edx, [ebp+arg_4]
0x5F919A: add     esp, 14h
0x5F919D: add     [esp+140h+var_108], edx
0x5F91A1: mov     eax, [edi+4]
0x5F91A4: test    eax, eax
0x5F91A6: mov     [esp+140h+var_10C], eax
0x5F91AA: jnz     loc_5F9040
0x5F91B0: mov     ebx, [esp+140h+var_F8]
0x5F91B4: mov     edi, [esp+140h+var_118]
0x5F91B8: mov     eax, [esp+140h+var_108]
0x5F91BC: cmp     edi, eax
0x5F91BE: mov     [ebx], edi
0x5F91C0: jle     short loc_5F91DD
0x5F91C2: mov     eax, [esp+140h+var_FC]
0x5F91C6: mov     [eax], edi
0x5F91C8: pop     edi
0x5F91C9: pop     esi
0x5F91CA: pop     ebx
0x5F91CB: mov     ecx, [esp+134h+var_4]
0x5F91D2: xor     ecx, esp
0x5F91D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5F91D9: mov     esp, ebp
0x5F91DB: pop     ebp
0x5F91DC: retn
0x5F91DD: mov     ecx, [esp+140h+var_FC]
0x5F91E1: pop     edi
0x5F91E2: mov     [ecx], eax
0x5F91E4: mov     ecx, [esp+13Ch+var_4]
0x5F91EB: pop     esi
0x5F91EC: pop     ebx
0x5F91ED: xor     ecx, esp
0x5F91EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5F91F4: mov     esp, ebp
0x5F91F6: pop     ebp
0x5F91F7: retn
