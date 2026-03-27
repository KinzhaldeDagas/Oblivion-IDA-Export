0x50AF90: mov     eax, [esp+arg_8]
0x50AF94: push    0; int
0x50AF96: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50AF9B: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50AFA0: push    0; int
0x50AFA2: push    eax; void *
0x50AFA3: call    OblivionDynamicCast
0x50AFA8: add     esp, 14h
0x50AFAB: test    eax, eax
0x50AFAD: jz      short loc_50AFCB
0x50AFAF: mov     edx, [eax+8]
0x50AFB2: mov     ecx, edx
0x50AFB4: shr     ecx, 0Bh
0x50AFB7: test    cl, 1
0x50AFBA: jnz     short loc_50AFCB
0x50AFBC: shr     edx, 5
0x50AFBF: test    dl, 1
0x50AFC2: jnz     short loc_50AFCB
0x50AFC4: mov     ecx, eax; int
0x50AFC6: call    EvaluatePackage
0x50AFCB: mov     al, 1
0x50AFCD: retn
