0x503BC0: push    ecx
0x503BC1: mov     ecx, [esp+4+l]
0x503BC5: mov     edx, [esp+4+arg_10]
0x503BC9: push    esi
0x503BCA: mov     esi, [esp+8+a4]
0x503BCE: lea     eax, [esp+8+var_4]
0x503BD2: push    eax; UInt16
0x503BD3: mov     eax, [esp+0Ch+arg_C]
0x503BD7: push    ecx; l
0x503BD8: mov     ecx, [esp+10h+a3]
0x503BDC: push    edx; a6
0x503BDD: mov     edx, [esp+14h+arg_4]
0x503BE1: push    eax; a5
0x503BE2: mov     eax, [esp+18h+a1]
0x503BE6: push    esi; a4
0x503BE7: push    ecx; a3
0x503BE8: push    edx; a2
0x503BE9: push    eax; a1
0x503BEA: mov     dword ptr [esp+28h+var_4], 0
0x503BF2: call    Script_ExtractArgs
0x503BF7: add     esp, 20h
0x503BFA: test    al, al
0x503BFC: jnz     short loc_503C01
0x503BFE: pop     esi
0x503BFF: pop     ecx
0x503C00: retn
0x503C01: test    esi, esi
0x503C03: jz      short loc_503C30
0x503C05: push    0; int
0x503C07: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x503C0C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x503C11: push    0; int
0x503C13: push    esi; void *
0x503C14: call    OblivionDynamicCast
0x503C19: add     esp, 14h
0x503C1C: test    eax, eax
0x503C1E: jz      short loc_503C30
0x503C20: cmp     dword ptr [esp+8+var_4], 0
0x503C25: setnle  cl
0x503C28: push    ecx
0x503C29: mov     ecx, eax
0x503C2B: call    Actor_SetAlerted
0x503C30: mov     al, 1
0x503C32: pop     esi
0x503C33: pop     ecx
0x503C34: retn
