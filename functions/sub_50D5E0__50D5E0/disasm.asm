0x50D5E0: push    ecx
0x50D5E1: fldz
0x50D5E3: push    esi
0x50D5E4: push    edi
0x50D5E5: fstp    dword ptr [esp+0Ch+var_4]
0x50D5E9: mov     edi, [esp+0Ch+a4]
0x50D5ED: push    0; int
0x50D5EF: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50D5F4: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50D5F9: push    0; int
0x50D5FB: push    edi; void *
0x50D5FC: call    OblivionDynamicCast
0x50D601: mov     ecx, [esp+20h+l]
0x50D605: mov     edx, [esp+20h+arg_10]
0x50D609: mov     esi, eax
0x50D60B: lea     eax, [esp+20h+var_4]
0x50D60F: push    eax; UInt16
0x50D610: mov     eax, [esp+24h+arg_C]
0x50D614: push    ecx; l
0x50D615: mov     ecx, [esp+28h+a3]
0x50D619: push    edx; a6
0x50D61A: mov     edx, [esp+2Ch+arg_4]
0x50D61E: push    eax; a5
0x50D61F: mov     eax, [esp+30h+a1]
0x50D623: push    edi; a4
0x50D624: push    ecx; a3
0x50D625: push    edx; a2
0x50D626: push    eax; a1
0x50D627: call    Script_ExtractArgs
0x50D62C: add     esp, 34h
0x50D62F: test    al, al
0x50D631: jnz     short loc_50D637
0x50D633: pop     edi
0x50D634: pop     esi
0x50D635: pop     ecx
0x50D636: retn
0x50D637: test    esi, esi
0x50D639: jz      short loc_50D674
0x50D63B: mov     ecx, [esi+58h]
0x50D63E: test    ecx, ecx
0x50D640: jz      short loc_50D654
0x50D642: mov     edx, [ecx]
0x50D644: fld     dword ptr [esp+0Ch+var_4]
0x50D648: mov     eax, [edx+3E0h]
0x50D64E: push    ecx
0x50D64F: fstp    [esp+10h+var_10]
0x50D652: call    eax
0x50D654: cmp     byte ptr ds:0B361ACh, 0
0x50D65B: jz      short loc_50D674
0x50D65D: fld     dword ptr [esp+0Ch+var_4]
0x50D661: sub     esp, 8
0x50D664: fstp    [esp+14h+var_18+4]
0x50D667: push    offset aPackageDuratio; "Package duration is set to  %.02f "
0x50D66C: call    Interface_ConsolePrint
0x50D671: add     esp, 0Ch
0x50D674: pop     edi
0x50D675: mov     al, 1
0x50D677: pop     esi
0x50D678: pop     ecx
0x50D679: retn
