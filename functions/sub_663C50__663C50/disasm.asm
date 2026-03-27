0x663C50: mov     eax, [esp+arg_0]
0x663C54: sub     esp, 8
0x663C57: push    edi
0x663C58: mov     edi, ecx
0x663C5A: lea     ecx, [eax-0Ch]
0x663C5D: cmp     ecx, 14h
0x663C60: ja      loc_663D26
0x663C66: push    ebx
0x663C67: push    esi
0x663C68: push    eax
0x663C69: push    2
0x663C6B: call    ActorValue_GetGroupOffsetFromAV
0x663C70: mov     ecx, ds:0B33A98h
0x663C76: movsx   eax, al
0x663C79: add     esp, 8
0x663C7C: push    eax
0x663C7D: mov     [esp+18h+var_4], eax
0x663C81: call    TESDataHandler_GetTESSkillByCode
0x663C86: mov     esi, eax
0x663C88: xor     ebx, ebx
0x663C8A: cmp     esi, ebx
0x663C8C: jz      loc_663D24
0x663C92: mov     eax, [esi+2Ch]
0x663C95: push    ebp
0x663C96: push    eax
0x663C97: mov     ecx, edi
0x663C99: call    Actor_GetBaseCalcAVi
0x663C9E: mov     ecx, edi
0x663CA0: mov     ebp, eax
0x663CA2: mov     byte ptr [esp+18h+var_8], bl
0x663CA6: mov     byte ptr [esp+18h+arg_0], bl
0x663CAA: call    Actor_GetBaseClass
0x663CAF: mov     edx, [eax+0Ch]
0x663CB2: cmp     edx, ds:0B37D00h
0x663CB8: jz      short loc_663CEA
0x663CBA: mov     ebx, [esi+34h]
0x663CBD: mov     ecx, edi
0x663CBF: call    Actor_GetBaseClass
0x663CC4: mov     ecx, eax; this
0x663CC6: call    TESObjectREFR_GetParentCell
0x663CCB: mov     esi, [esi+2Ch]
0x663CCE: cmp     eax, ebx
0x663CD0: setz    al
0x663CD3: push    esi
0x663CD4: mov     ecx, edi
0x663CD6: mov     byte ptr [esp+1Ch+var_8], al
0x663CDA: call    Actor_GetBaseClass
0x663CDF: mov     ecx, eax
0x663CE1: call    sub_51C090
0x663CE6: mov     byte ptr [esp+18h+arg_0], al
0x663CEA: mov     ecx, [esp+18h+arg_0]
0x663CEE: mov     edx, [esp+18h+var_8]
0x663CF2: push    ecx; float
0x663CF3: push    edx; float
0x663CF4: push    ebp; int
0x663CF5: call    sub_548030
0x663CFA: fstp    [esp+24h+arg_0]
0x663CFE: fldz
0x663D00: add     esp, 0Ch
0x663D03: fcomp   [esp+18h+arg_0]
0x663D07: pop     ebp
0x663D08: fnstsw  ax
0x663D0A: test    ah, 44h
0x663D0D: jp      short loc_663D15
0x663D0F: fld1
0x663D11: fstp    [esp+14h+arg_0]
0x663D15: fld     [esp+14h+arg_0]
0x663D19: mov     eax, [esp+14h+var_4]
0x663D1D: fstp    dword ptr [edi+eax*4+7A4h]
0x663D24: pop     esi
0x663D25: pop     ebx
0x663D26: pop     edi
0x663D27: add     esp, 8
0x663D2A: retn    4
