0x504BB0: sub     esp, 8
0x504BB3: fldz
0x504BB5: push    ebx
0x504BB6: mov     ebx, dword ptr [esp+0Ch+arg_18]
0x504BBA: fstp    qword ptr [ebx]
0x504BBC: push    esi
0x504BBD: mov     esi, [esp+10h+a4]
0x504BC1: lea     eax, [esp+10h+var_4]
0x504BC5: push    eax
0x504BC6: mov     eax, [esp+14h+l]
0x504BCA: lea     ecx, [esp+14h+var_8]
0x504BCE: push    ecx
0x504BCF: mov     ecx, [esp+18h+arg_10]
0x504BD3: lea     edx, [esp+18h+arg_18]
0x504BD7: push    edx; UInt16
0x504BD8: mov     edx, [esp+1Ch+arg_C]
0x504BDC: push    eax; l
0x504BDD: mov     eax, [esp+20h+a3]
0x504BE1: push    ecx; a6
0x504BE2: mov     ecx, [esp+24h+arg_4]
0x504BE6: push    edx; a5
0x504BE7: mov     edx, [esp+28h+a1]
0x504BEB: push    esi; a4
0x504BEC: push    eax; a3
0x504BED: push    ecx; a2
0x504BEE: push    edx; a1
0x504BEF: mov     dword ptr [esp+38h+arg_18], 0
0x504BF7: mov     [esp+38h+var_8], 0
0x504BFF: mov     [esp+38h+var_4], 0
0x504C07: call    Script_ExtractArgs
0x504C0C: add     esp, 28h
0x504C0F: test    al, al
0x504C11: jnz     short loc_504C19
0x504C13: pop     esi
0x504C14: pop     ebx
0x504C15: add     esp, 8
0x504C18: retn
0x504C19: mov     eax, dword ptr [esp+10h+arg_18]
0x504C1D: push    0FFFFFFFFh
0x504C1F: push    0
0x504C21: push    eax
0x504C22: push    0; int
0x504C24: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x504C29: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x504C2E: push    0; int
0x504C30: push    esi; void *
0x504C31: call    OblivionDynamicCast
0x504C36: mov     ecx, [esp+30h+var_8]
0x504C3A: mov     edx, [esp+30h+var_4]
0x504C3E: add     esp, 14h
0x504C41: push    eax
0x504C42: push    ecx
0x504C43: push    edx
0x504C44: mov     ecx, offset ActorProcessManager_ptr
0x504C49: call    sub_675C40
0x504C4E: test    al, al
0x504C50: jz      short loc_504C56
0x504C52: fld1
0x504C54: fstp    qword ptr [ebx]
0x504C56: pop     esi
0x504C57: mov     al, 1
0x504C59: pop     ebx
0x504C5A: add     esp, 8
0x504C5D: retn
