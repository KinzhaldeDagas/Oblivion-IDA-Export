0x506B80: sub     esp, 20h
0x506B83: mov     ecx, [esp+20h+l]
0x506B87: mov     edx, [esp+20h+arg_10]
0x506B8B: lea     eax, [esp+20h+var_20]
0x506B8E: push    eax; UInt16
0x506B8F: mov     eax, [esp+24h+arg_C]
0x506B93: push    ecx; l
0x506B94: mov     ecx, [esp+28h+a4]
0x506B98: push    edx; a6
0x506B99: mov     edx, [esp+2Ch+a3]
0x506B9D: push    eax; a5
0x506B9E: mov     eax, [esp+30h+arg_4]
0x506BA2: push    ecx; a4
0x506BA3: mov     ecx, [esp+34h+a1]
0x506BA7: push    edx; a3
0x506BA8: push    eax; a2
0x506BA9: push    ecx; a1
0x506BAA: mov     dword ptr [esp+40h+var_20], 0
0x506BB2: call    Script_ExtractArgs
0x506BB7: add     esp, 20h
0x506BBA: test    al, al
0x506BBC: jnz     short loc_506BC2
0x506BBE: add     esp, 20h
0x506BC1: retn
0x506BC2: mov     ecx, dword ptr [esp+20h+var_20]
0x506BC5: cmp     ecx, 6
0x506BC8: ja      loc_506C59
0x506BCE: mov     edx, ds:0B2C678h
0x506BD4: mov     eax, 1
0x506BD9: shl     eax, cl
0x506BDB: test    edx, eax
0x506BDD: jz      short loc_506BE9
0x506BDF: push    esi
0x506BE0: mov     esi, eax
0x506BE2: not     esi
0x506BE4: and     edx, esi
0x506BE6: pop     esi
0x506BE7: jmp     short loc_506BEB
0x506BE9: or      edx, eax
0x506BEB: cmp     byte ptr ds:0B361ACh, 0
0x506BF2: mov     ds:0B2C678h, edx
0x506BF8: jz      short loc_506C6F
0x506BFA: mov     [esp+20h+var_1C], offset aUndetermined; "Undetermined"
0x506C02: mov     [esp+20h+var_18], offset aArchitecture; "Architecture"
0x506C0A: mov     [esp+20h+var_14], offset aFurniture; "Furniture"
0x506C12: mov     [esp+20h+var_10], offset aActors; "Actors"
0x506C1A: mov     [esp+20h+var_C], offset aItems; "Items"
0x506C22: mov     [esp+20h+var_8], offset aMisc; "Misc"
0x506C2A: mov     [esp+20h+var_4], offset aOther; "Other"
0x506C32: mov     ecx, [esp+ecx*4+20h+var_1C]
0x506C36: test    edx, eax
0x506C38: mov     eax, offset aOn_0
0x506C3D: jnz     short loc_506C44
0x506C3F: mov     eax, offset aOff
0x506C44: push    eax
0x506C45: push    ecx
0x506C46: push    offset aShadowsSS; "Shadows %s: %s"
0x506C4B: call    Interface_ConsolePrint
0x506C50: add     esp, 0Ch
0x506C53: mov     al, 1
0x506C55: add     esp, 20h
0x506C58: retn
0x506C59: cmp     byte ptr ds:0B361ACh, 0
0x506C60: jz      short loc_506C6F
0x506C62: push    offset aShadowObjectTy; "Shadow object type must be [0,6]"
0x506C67: call    Interface_ConsolePrint
0x506C6C: add     esp, 4
0x506C6F: mov     al, 1
0x506C71: add     esp, 20h
0x506C74: retn
