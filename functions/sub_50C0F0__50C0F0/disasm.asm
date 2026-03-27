0x50C0F0: mov     eax, [esp+arg_8]
0x50C0F4: fldz
0x50C0F6: push    esi
0x50C0F7: mov     esi, [esp+4+arg_18]
0x50C0FB: push    0; int
0x50C0FD: fstp    qword ptr [esi]
0x50C0FF: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50C104: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50C109: push    0; int
0x50C10B: push    eax; void *
0x50C10C: call    OblivionDynamicCast
0x50C111: add     esp, 14h
0x50C114: test    eax, eax
0x50C116: mov     [esp+4+arg_18], 0
0x50C11E: jz      short loc_50C140
0x50C120: mov     ecx, eax
0x50C122: call    sub_5E2E00
0x50C127: test    eax, eax
0x50C129: jz      short loc_50C140
0x50C12B: mov     ecx, [eax+0Ch]
0x50C12E: lea     edx, [esp+4+arg_18]
0x50C132: push    esi
0x50C133: push    edx
0x50C134: mov     [esp+0Ch+arg_18], ecx
0x50C138: call    sub_4F9FB0
0x50C13D: add     esp, 8
0x50C140: cmp     byte ptr ds:0B361ACh, 0
0x50C147: pop     esi
0x50C148: jz      short loc_50C15C
0x50C14A: mov     eax, [esp+arg_18]
0x50C14E: push    eax
0x50C14F: push    offset aGetpackagetarg; "GetPackageTarget >> (%08x)"
0x50C154: call    Interface_ConsolePrint
0x50C159: add     esp, 8
0x50C15C: mov     al, 1
0x50C15E: retn
