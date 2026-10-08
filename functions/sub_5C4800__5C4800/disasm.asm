0x5C4800: push    0FFFFFFFFh
0x5C4802: push    offset SEH_5C4630
0x5C4807: mov     eax, large fs:0
0x5C480D: push    eax
0x5C480E: sub     esp, 10h
0x5C4811: push    ebx
0x5C4812: push    ebp
0x5C4813: push    esi
0x5C4814: push    edi; a3
0x5C4815: mov     eax, ds:0B30AACh
0x5C481A: xor     eax, esp
0x5C481C: push    eax; a3
0x5C481D: lea     eax, [esp+30h+var_C]
0x5C4821: mov     large fs:0, eax
0x5C4827: mov     edi, ecx
0x5C4829: mov     eax, ds:0B3B5D4h
0x5C482E: add     eax, 1
0x5C4831: xor     ebx, ebx
0x5C4833: push    ebx; lastTile
0x5C4834: mov     ebp, eax
0x5C4836: mov     ds:0B3B5D4h, eax
0x5C483B: mov     eax, [esp+34h+parent]
0x5C483F: push    offset aRace_templat_3; "race_template_text"
0x5C4844: push    eax; parent
0x5C4845: mov     [esp+3Ch+var_4], ebx
0x5C4849: mov     [esp+3Ch+var_1C], ebp
0x5C484D: call    Menu__RenderTemplate; Verified 2026-10-07: case-insensitive search of Menu template list +8/+0xC; saves global build context0xB3B0A8, creates temporary storage, replaces owned default template with borrowed matched template, builds/connects, nulls mainTemplate before Destroy so borrowed template survives, then restores previous build context. Optional lastTile stored Menu+0x10. Fallout named RenderTemplate0x827E4270 corroborates role; Fallout names use interned-string comparison.
0x5C4852: mov     esi, eax
0x5C4854: mov     [esp+30h+a2], ebx
0x5C4858: mov     [esp+30h+var_10], bx
0x5C485D: mov     [esp+30h+var_E], bx
0x5C4862: mov     ecx, dword ptr [esp+30h+ArgList]
0x5C4866: push    ecx; ArgList
0x5C4867: lea     edx, [esp+34h+a2]
0x5C486B: push    offset aS; "%s"
0x5C4870: push    edx; int
0x5C4871: mov     byte ptr [esp+3Ch+var_4], 1
0x5C4876: call    BSStringT_Static_Format
0x5C487B: add     esp, 4
0x5C487E: mov     ecx, esp; this
0x5C4880: mov     [esp+38h+var_18], esp
0x5C4884: push    ebx; a3
0x5C4885: mov     [ecx], ebx
0x5C4887: mov     [ecx+4], bx
0x5C488B: mov     [ecx+6], bx
0x5C488F: mov     ebx, [esp+3Ch+a2]
0x5C4893: push    ebx; a2
0x5C4894: call    BSStringT_Set
0x5C4899: mov     ecx, esi
0x5C489B: call    sub_58A020
0x5C48A0: fild    [esp+30h+var_1C]
0x5C48A4: push    ecx
0x5C48A5: mov     ecx, esi; this
0x5C48A7: fstp    [esp+34h+var_34]; value
0x5C48AA: push    0FA8h; propertyCode
0x5C48AF: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C48B4: mov     ecx, [esp+30h+parent]
0x5C48B8: push    0FD0h
0x5C48BD: call    Tile_GetFloat
0x5C48C2: fsub    qword ptr ds:0A2F928h
0x5C48C8: push    ecx
0x5C48C9: mov     ecx, esi; this
0x5C48CB: fstp    [esp+34h+parent]
0x5C48CF: fld     [esp+34h+parent]
0x5C48D3: fstp    [esp+34h+var_34]; value
0x5C48D6: push    0FAAh; propertyCode
0x5C48DB: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C48E0: push    ebx
0x5C48E1: mov     [edi+ebp*4+94h], esi
0x5C48E8: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5C48ED: mov     eax, dword ptr [esp+34h+ArgList]
0x5C48F1: push    eax
0x5C48F2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5C48F7: add     esp, 8
0x5C48FA: mov     eax, esi
0x5C48FC: mov     ecx, [esp+30h+var_C]
0x5C4900: mov     large fs:0, ecx
0x5C4907: pop     ecx
0x5C4908: pop     edi
0x5C4909: pop     esi
0x5C490A: pop     ebp
0x5C490B: pop     ebx
0x5C490C: add     esp, 1Ch
0x5C490F: retn    0Ch
0x9C1120: lea     ecx, [ebp+8]; void *
0x9C1123: jmp     BSStringT_Clear
0x9C1128: lea     ecx, [ebp-14h]; void *
0x9C112B: jmp     BSStringT_Clear
0x9C1130: mov     edx, [esp+ArgList]
0x9C1134: lea     eax, [edx-20h]
0x9C1137: mov     ecx, [edx-24h]
0x9C113A: xor     ecx, eax
0x9C113C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C1141: mov     eax, offset stru_AEA24C
0x9C1146: jmp     ___CxxFrameHandler3
