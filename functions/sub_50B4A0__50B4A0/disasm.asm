0x50B4A0: push    ecx
0x50B4A1: push    edi
0x50B4A2: mov     edi, dword ptr [esp+8+arg_8]
0x50B4A6: test    edi, edi
0x50B4A8: jnz     short loc_50B4AF
0x50B4AA: xor     al, al
0x50B4AC: pop     edi
0x50B4AD: pop     ecx
0x50B4AE: retn
0x50B4AF: push    esi
0x50B4B0: push    0; int
0x50B4B2: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50B4B7: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50B4BC: push    0; int
0x50B4BE: push    edi; void *
0x50B4BF: call    OblivionDynamicCast
0x50B4C4: mov     esi, eax
0x50B4C6: add     esp, 14h
0x50B4C9: test    esi, esi
0x50B4CB: jz      loc_50B585
0x50B4D1: mov     ecx, [esp+0Ch+l]
0x50B4D5: mov     edx, [esp+0Ch+arg_10]
0x50B4D9: lea     eax, [esp+0Ch+arg_8]
0x50B4DD: push    eax; UInt16
0x50B4DE: mov     eax, [esp+10h+arg_C]
0x50B4E2: push    ecx; l
0x50B4E3: mov     ecx, [esp+14h+a3]
0x50B4E7: push    edx; a6
0x50B4E8: mov     edx, [esp+18h+arg_4]
0x50B4EC: push    eax; a5
0x50B4ED: mov     eax, [esp+1Ch+a1]
0x50B4F1: push    edi; a4
0x50B4F2: push    ecx; a3
0x50B4F3: push    edx; a2
0x50B4F4: push    eax; a1
0x50B4F5: mov     dword ptr [esp+2Ch+arg_8], 0
0x50B4FD: call    Script_ExtractArgs
0x50B502: add     esp, 20h
0x50B505: test    al, al
0x50B507: jnz     short loc_50B50D
0x50B509: pop     esi
0x50B50A: pop     edi
0x50B50B: pop     ecx
0x50B50C: retn
0x50B50D: mov     edx, [esi]
0x50B50F: mov     eax, [edx+250h]
0x50B515: mov     ecx, esi
0x50B517: call    eax
0x50B519: fstp    [esp+0Ch+var_4]
0x50B51D: fild    dword ptr [esp+0Ch+arg_8]
0x50B521: mov     eax, ds:0B333C4h
0x50B526: cmp     esi, eax
0x50B528: fsub    [esp+0Ch+var_4]
0x50B52C: fstp    [esp+0Ch+var_4]
0x50B530: jnz     short loc_50B54D
0x50B532: cmp     byte ptr [eax+116h], 0
0x50B539: jz      short loc_50B54D
0x50B53B: fld     dword ptr [eax+700h]
0x50B541: fadd    [esp+0Ch+var_4]
0x50B545: fstp    dword ptr [eax+700h]
0x50B54B: jmp     short loc_50B55D
0x50B54D: fld     [esp+0Ch+var_4]
0x50B551: push    ecx
0x50B552: lea     ecx, [esi+44h]
0x50B555: fstp    [esp+10h+var_10]; float
0x50B558: call    sub_4269E0
0x50B55D: cmp     byte ptr ds:0B361ACh, 0
0x50B564: jz      short loc_50B585
0x50B566: mov     edx, [esi]
0x50B568: mov     eax, [edx+250h]
0x50B56E: mov     ecx, esi
0x50B570: call    eax
0x50B572: sub     esp, 8
0x50B575: fstp    qword ptr [esp]
0x50B578: push    offset aActorCrimeGo_0; "Actor Crime Gold modified to %.02f "
0x50B57D: call    Interface_ConsolePrint
0x50B582: add     esp, 0Ch
0x50B585: pop     esi
0x50B586: mov     al, 1
0x50B588: pop     edi
0x50B589: pop     ecx
0x50B58A: retn
