0x50C6E0: push    ecx
0x50C6E1: mov     ecx, [esp+4+l]
0x50C6E5: mov     edx, [esp+4+arg_10]
0x50C6E9: push    esi
0x50C6EA: mov     esi, [esp+8+a4]
0x50C6EE: lea     eax, [esp+8+var_4]
0x50C6F2: push    eax; UInt16
0x50C6F3: mov     eax, [esp+0Ch+arg_C]
0x50C6F7: push    ecx; l
0x50C6F8: mov     ecx, [esp+10h+a3]
0x50C6FC: push    edx; a6
0x50C6FD: mov     edx, [esp+14h+arg_4]
0x50C701: push    eax; a5
0x50C702: mov     eax, [esp+18h+a1]
0x50C706: push    esi; a4
0x50C707: push    ecx; a3
0x50C708: push    edx; a2
0x50C709: push    eax; a1
0x50C70A: mov     dword ptr [esp+28h+var_4], 0
0x50C712: call    Script_ExtractArgs
0x50C717: add     esp, 20h
0x50C71A: test    al, al
0x50C71C: jnz     short loc_50C721
0x50C71E: pop     esi
0x50C71F: pop     ecx
0x50C720: retn
0x50C721: test    esi, esi
0x50C723: jz      short loc_50C781
0x50C725: push    0; int
0x50C727: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50C72C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50C731: push    0; int
0x50C733: push    esi; void *
0x50C734: call    OblivionDynamicCast
0x50C739: add     esp, 14h
0x50C73C: test    eax, eax
0x50C73E: jz      short loc_50C781
0x50C740: cmp     dword ptr [esp+8+var_4], 0
0x50C745: jz      short loc_50C781
0x50C747: mov     edx, [eax]
0x50C749: push    0; int
0x50C74B: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x50C750: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x50C755: mov     ecx, eax
0x50C757: mov     eax, [edx+170h]
0x50C75D: push    0; int
0x50C75F: call    eax
0x50C761: push    eax; void *
0x50C762: call    OblivionDynamicCast
0x50C767: add     esp, 14h
0x50C76A: test    eax, eax
0x50C76C: jz      short loc_50C781
0x50C76E: mov     ecx, dword ptr [esp+8+var_4]
0x50C772: mov     [eax+104h], ecx
0x50C778: push    0
0x50C77A: mov     ecx, eax
0x50C77C: call    sub_5222D0
0x50C781: mov     al, 1
0x50C783: pop     esi
0x50C784: pop     ecx
0x50C785: retn
