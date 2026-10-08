0x5C4630: push    0FFFFFFFFh
0x5C4632: push    offset SEH_5C4630
0x5C4637: mov     eax, large fs:0
0x5C463D: push    eax
0x5C463E: sub     esp, 10h
0x5C4641: push    ebx; a3
0x5C4642: push    ebp; a3
0x5C4643: push    esi; a3
0x5C4644: push    edi; a3
0x5C4645: mov     eax, ds:0B30AACh
0x5C464A: xor     eax, esp
0x5C464C: push    eax; a3
0x5C464D: lea     eax, [esp+30h+var_C]
0x5C4651: mov     large fs:0, eax
0x5C4657: mov     edi, ecx
0x5C4659: mov     eax, ds:0B3B5D4h
0x5C465E: add     eax, 1
0x5C4661: xor     ebx, ebx
0x5C4663: push    ebx; lastTile
0x5C4664: mov     ds:0B3B5D4h, eax
0x5C4669: mov     [esp+34h+a3], eax; a3
0x5C466D: mov     eax, [esp+34h+parent]
0x5C4671: push    offset aRace_templat_1; "race_template_toggle"
0x5C4676: push    eax; parent
0x5C4677: mov     [esp+3Ch+var_4], ebx
0x5C467B: call    Menu__RenderTemplate; Verified 2026-10-07: case-insensitive search of Menu template list +8/+0xC; saves global build context0xB3B0A8, creates temporary storage, replaces owned default template with borrowed matched template, builds/connects, nulls mainTemplate before Destroy so borrowed template survives, then restores previous build context. Optional lastTile stored Menu+0x10. Fallout named RenderTemplate0x827E4270 corroborates role; Fallout names use interned-string comparison.
0x5C4680: mov     esi, eax
0x5C4682: mov     [esp+30h+a2], ebx; a3
0x5C4686: mov     word ptr [esp+30h+var_10], bx; a3
0x5C468B: mov     word ptr [esp+30h+var_10+2], bx
0x5C4690: mov     ebp, [esp+30h+ArgList]
0x5C4694: push    ebp; ArgList
0x5C4695: lea     ecx, [esp+34h+a2]
0x5C4699: push    offset aS; "%s"
0x5C469E: push    ecx; int
0x5C469F: mov     byte ptr [esp+3Ch+var_4], 1
0x5C46A4: call    BSStringT_Static_Format
0x5C46A9: mov     edx, [esp+3Ch+a2]
0x5C46AD: add     esp, 4
0x5C46B0: mov     ecx, esp; this
0x5C46B2: mov     [esp+38h+var_18], esp; a3
0x5C46B6: push    ebx; a3
0x5C46B7: push    edx; a2
0x5C46B8: mov     [ecx], ebx
0x5C46BA: mov     [ecx+4], bx
0x5C46BE: mov     [ecx+6], bx
0x5C46C2: call    BSStringT_Set
0x5C46C7: mov     ecx, esi
0x5C46C9: call    sub_58A020
0x5C46CE: fild    [esp+30h+a3]
0x5C46D2: push    ecx
0x5C46D3: mov     ecx, esi; this
0x5C46D5: fstp    [esp+34h+var_34]; value
0x5C46D8: push    0FA8h; propertyCode
0x5C46DD: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C46E2: mov     ecx, [esp+30h+parent]
0x5C46E6: push    0FD0h
0x5C46EB: call    Tile_GetFloat
0x5C46F0: fsub    qword ptr ds:0A2F928h
0x5C46F6: push    ecx
0x5C46F7: mov     ecx, esi; this
0x5C46F9: fstp    [esp+34h+parent]
0x5C46FD: fld     [esp+34h+parent]
0x5C4701: fstp    [esp+34h+var_34]; value
0x5C4704: push    0FAAh; propertyCode
0x5C4709: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C470E: fldz
0x5C4710: push    ecx
0x5C4711: fstp    [esp+34h+var_34]; value
0x5C4714: push    0FAFh; propertyCode
0x5C4719: mov     ecx, esi; this
0x5C471B: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C4720: push    ebp
0x5C4721: push    0FB0h
0x5C4726: mov     ecx, esi
0x5C4728: call    Tile_SetString
0x5C472D: push    0FAEh
0x5C4732: mov     ecx, esi
0x5C4734: call    Tile_GetFloat
0x5C4739: fchs
0x5C473B: push    ecx
0x5C473C: fstp    [esp+34h+var_34]; value
0x5C473F: push    0FB1h; propertyCode
0x5C4744: mov     ecx, esi; this
0x5C4746: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C474B: fldz
0x5C474D: push    ecx
0x5C474E: fstp    [esp+34h+var_34]; value
0x5C4751: push    0FB1h; propertyCode
0x5C4756: mov     ecx, esi; this
0x5C4758: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C475D: fldz
0x5C475F: push    ecx
0x5C4760: fstp    [esp+34h+var_34]; value
0x5C4763: push    0FB1h; propertyCode
0x5C4768: mov     ecx, esi; this
0x5C476A: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C476F: fldz
0x5C4771: push    ecx
0x5C4772: fstp    [esp+34h+var_34]; value
0x5C4775: push    0FB2h; propertyCode
0x5C477A: mov     ecx, esi; this
0x5C477C: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C4781: fldz
0x5C4783: push    ecx
0x5C4784: fstp    [esp+34h+var_34]; value
0x5C4787: push    0FB3h; propertyCode
0x5C478C: mov     ecx, esi; this
0x5C478E: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C4793: push    offset asc_A6D30C; "          "
0x5C4798: push    0FB4h
0x5C479D: mov     ecx, esi
0x5C479F: call    Tile_SetString
0x5C47A4: cmp     [esp+30h+arg_C], bl
0x5C47A8: jz      short loc_5C47C0
0x5C47AA: fld     dword ptr ds:0A379B4h
0x5C47B0: push    ecx
0x5C47B1: fstp    [esp+34h+var_34]; value
0x5C47B4: push    0FF0h; propertyCode
0x5C47B9: mov     ecx, esi; this
0x5C47BB: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C47C0: mov     ecx, [esp+30h+a2]
0x5C47C4: mov     eax, [esp+30h+a3]
0x5C47C8: push    ecx
0x5C47C9: mov     [edi+eax*4+94h], esi
0x5C47D0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5C47D5: push    ebp
0x5C47D6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5C47DB: add     esp, 8
0x5C47DE: mov     eax, esi
0x5C47E0: mov     ecx, [esp+30h+var_C]
0x5C47E4: mov     large fs:0, ecx
0x5C47EB: pop     ecx
0x5C47EC: pop     edi
0x5C47ED: pop     esi
0x5C47EE: pop     ebp
0x5C47EF: pop     ebx
0x5C47F0: add     esp, 1Ch
0x5C47F3: retn    10h
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
