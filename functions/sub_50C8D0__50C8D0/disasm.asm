0x50C8D0: sub     esp, 8
0x50C8D3: mov     edx, [esp+8+l]
0x50C8D7: push    esi
0x50C8D8: mov     esi, [esp+0Ch+a4]
0x50C8DC: lea     eax, [esp+0Ch+var_8]
0x50C8E0: push    eax
0x50C8E1: mov     eax, [esp+10h+arg_10]
0x50C8E5: lea     ecx, [esp+10h+var_4]
0x50C8E9: push    ecx; UInt16
0x50C8EA: mov     ecx, [esp+14h+arg_C]
0x50C8EE: push    edx; l
0x50C8EF: mov     edx, [esp+18h+a3]
0x50C8F3: push    eax; a6
0x50C8F4: mov     eax, [esp+1Ch+arg_4]
0x50C8F8: push    ecx; a5
0x50C8F9: mov     ecx, [esp+20h+a1]
0x50C8FD: push    esi; a4
0x50C8FE: push    edx; a3
0x50C8FF: push    eax; a2
0x50C900: push    ecx; a1
0x50C901: mov     dword ptr [esp+30h+var_4], 0
0x50C909: mov     [esp+30h+var_8], 0
0x50C911: call    Script_ExtractArgs
0x50C916: add     esp, 24h
0x50C919: test    al, al
0x50C91B: jnz     short loc_50C922
0x50C91D: pop     esi
0x50C91E: add     esp, 8
0x50C921: retn
0x50C922: cmp     esi, ds:0B333C4h
0x50C928: jz      short loc_50C973
0x50C92A: test    esi, esi
0x50C92C: jz      short loc_50C973
0x50C92E: push    0; int
0x50C930: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50C935: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50C93A: push    0; int
0x50C93C: push    esi; void *
0x50C93D: call    OblivionDynamicCast
0x50C942: add     esp, 14h
0x50C945: test    eax, eax
0x50C947: jz      short loc_50C973
0x50C949: cmp     dword ptr [eax+58h], 0
0x50C94D: jz      short loc_50C973
0x50C94F: mov     edx, [eax]
0x50C951: mov     ecx, eax
0x50C953: mov     eax, [edx+330h]
0x50C959: call    eax
0x50C95B: test    eax, eax
0x50C95D: jz      short loc_50C973
0x50C95F: fild    [esp+0Ch+var_8]
0x50C963: push    ecx
0x50C964: mov     ecx, dword ptr [esp+10h+var_4]
0x50C968: fstp    [esp+10h+var_10]; float
0x50C96B: push    ecx; int
0x50C96C: mov     ecx, eax
0x50C96E: call    sub_61D5B0
0x50C973: mov     al, 1
0x50C975: pop     esi
0x50C976: add     esp, 8
0x50C979: retn
