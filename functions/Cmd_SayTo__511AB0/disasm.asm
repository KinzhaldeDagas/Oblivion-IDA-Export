0x511AB0: sub     esp, 10h
0x511AB3: fldz
0x511AB5: mov     eax, [esp+10h+arg_18]
0x511AB9: push    ebx
0x511ABA: fstp    qword ptr [eax]
0x511ABC: push    edi
0x511ABD: mov     edi, [esp+18h+a4]
0x511AC1: lea     ecx, [esp+18h+var_8]
0x511AC5: push    ecx
0x511AC6: mov     ecx, [esp+1Ch+l]
0x511ACA: lea     edx, [esp+1Ch+var_C]
0x511ACE: push    edx
0x511ACF: mov     edx, [esp+20h+arg_10]
0x511AD3: lea     eax, [esp+20h+var_10]
0x511AD7: push    eax; UInt16
0x511AD8: mov     eax, [esp+24h+arg_C]
0x511ADC: push    ecx; l
0x511ADD: mov     ecx, [esp+28h+a3]
0x511AE1: push    edx; a6
0x511AE2: mov     edx, [esp+2Ch+arg_4]
0x511AE6: push    eax; a5
0x511AE7: mov     eax, [esp+30h+a1]
0x511AEB: push    edi; a4
0x511AEC: push    ecx; a3
0x511AED: xor     ebx, ebx
0x511AEF: push    edx; a2
0x511AF0: push    eax; a1
0x511AF1: mov     dword ptr [esp+40h+var_10], ebx
0x511AF5: mov     [esp+40h+var_C], ebx
0x511AF9: mov     [esp+40h+var_8], ebx
0x511AFD: mov     byte ptr [esp+40h+var_4], bl
0x511B01: call    Script_ExtractArgs
0x511B06: add     esp, 28h
0x511B09: test    al, al
0x511B0B: jnz     short loc_511B13
0x511B0D: pop     edi
0x511B0E: pop     ebx
0x511B0F: add     esp, 10h
0x511B12: retn
0x511B13: cmp     [esp+18h+var_8], ebx
0x511B17: jle     short loc_511B1E
0x511B19: mov     byte ptr [esp+18h+var_4], 1
0x511B1E: push    ebp
0x511B1F: mov     ebp, ds:0B36798h
0x511B25: push    esi
0x511B26: push    ebx; int
0x511B27: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x511B2C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x511B31: push    ebx; int
0x511B32: push    edi; void *
0x511B33: mov     dword ptr ds:0B36798h, 7FFFFFFFh
0x511B3D: call    OblivionDynamicCast
0x511B42: mov     esi, eax
0x511B44: mov     eax, dword ptr [esp+34h+var_10]
0x511B48: add     esp, 14h
0x511B4B: cmp     esi, ebx
0x511B4D: jz      loc_511BE4
0x511B53: cmp     eax, ebx
0x511B55: jz      loc_511BE4
0x511B5B: mov     ecx, [esi+58h]
0x511B5E: cmp     ecx, ebx
0x511B60: jz      loc_511C00
0x511B66: mov     edx, [ecx]
0x511B68: mov     eax, [edx+4A0h]
0x511B6E: call    eax
0x511B70: mov     ecx, [esi+58h]
0x511B73: mov     edx, [ecx]
0x511B75: mov     eax, dword ptr [esp+20h+var_10]
0x511B79: mov     edx, [edx+484h]
0x511B7F: push    eax
0x511B80: call    edx
0x511B82: mov     eax, dword ptr [esp+20h+var_10]
0x511B86: mov     ecx, [esi+58h]
0x511B89: push    ebx
0x511B8A: mov     [esi+0E4h], eax
0x511B90: mov     eax, [esp+24h+var_4]
0x511B94: mov     edx, [ecx]
0x511B96: mov     edx, [edx+1A4h]
0x511B9C: push    ebx
0x511B9D: push    eax
0x511B9E: mov     eax, [esp+2Ch+var_C]
0x511BA2: push    eax
0x511BA3: push    esi
0x511BA4: call    edx
0x511BA6: mov     esi, [esi+58h]
0x511BA9: push    ebx; int
0x511BAA: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x511BAF: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x511BB4: push    ebx; int
0x511BB5: push    esi; void *
0x511BB6: call    OblivionDynamicCast
0x511BBB: add     esp, 14h
0x511BBE: cmp     eax, ebx
0x511BC0: jz      short loc_511C00
0x511BC2: mov     edx, [eax]
0x511BC4: mov     ecx, eax
0x511BC6: mov     eax, [edx+208h]
0x511BCC: call    eax
0x511BCE: mov     ecx, [esp+20h+arg_18]
0x511BD2: pop     esi
0x511BD3: fstp    qword ptr [ecx]
0x511BD5: mov     ds:0B36798h, ebp
0x511BDB: pop     ebp
0x511BDC: pop     edi
0x511BDD: mov     al, 1
0x511BDF: pop     ebx
0x511BE0: add     esp, 10h
0x511BE3: retn
0x511BE4: cmp     edi, ebx
0x511BE6: jz      short loc_511C00
0x511BE8: mov     edx, [edi]
0x511BEA: mov     edx, [edx+0DCh]
0x511BF0: push    1
0x511BF2: push    ebx
0x511BF3: push    ebx
0x511BF4: push    eax
0x511BF5: mov     eax, [esp+30h+var_C]
0x511BF9: push    eax
0x511BFA: mov     ecx, edi
0x511BFC: call    edx
0x511BFE: fstp    st
0x511C00: pop     esi
0x511C01: mov     ds:0B36798h, ebp
0x511C07: pop     ebp
0x511C08: pop     edi
0x511C09: mov     al, 1
0x511C0B: pop     ebx
0x511C0C: add     esp, 10h
0x511C0F: retn
