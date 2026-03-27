0x5B03B0: push    ecx
0x5B03B1: push    esi
0x5B03B2: mov     esi, ecx
0x5B03B4: mov     eax, [esi+178h]
0x5B03BA: test    eax, eax
0x5B03BC: jz      loc_5B0614
0x5B03C2: cmp     dword ptr [eax+44h], 0
0x5B03C6: jz      short loc_5B03E9
0x5B03C8: mov     eax, ds:0B35ECCh
0x5B03CD: mov     ecx, ds:0B333C4h
0x5B03D3: push    eax
0x5B03D4: call    TESObjectREF_GetItemCount
0x5B03D9: test    eax, eax
0x5B03DB: jnz     short loc_5B03E9
0x5B03DD: cmp     ds:0B3B3F5h, al
0x5B03E3: jz      loc_5B0614
0x5B03E9: xor     al, al
0x5B03EB: cmp     [esi+95h], al
0x5B03F1: jnz     short loc_5B03F5
0x5B03F3: mov     al, 1
0x5B03F5: cmp     byte ptr [esi+0BDh], 0
0x5B03FC: jnz     short loc_5B0400
0x5B03FE: mov     al, 1
0x5B0400: cmp     byte ptr [esi+0E5h], 0
0x5B0407: jnz     short loc_5B040B
0x5B0409: mov     al, 1
0x5B040B: cmp     byte ptr [esi+10Dh], 0
0x5B0412: jnz     short loc_5B0416
0x5B0414: mov     al, 1
0x5B0416: cmp     byte ptr [esi+135h], 0
0x5B041D: push    edi; a3
0x5B041E: jz      loc_5B0509
0x5B0424: test    al, al
0x5B0426: jnz     loc_5B0509
0x5B042C: mov     ecx, [esi+144h]
0x5B0432: push    0; int
0x5B0434: push    offset ??_R0?AVTile3D@@@8; struct TypeDescriptor *
0x5B0439: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5B043E: push    0; int
0x5B0440: push    ecx; void *
0x5B0441: call    OblivionDynamicCast
0x5B0446: mov     edi, eax
0x5B0448: add     esp, 14h
0x5B044B: test    edi, edi
0x5B044D: jz      loc_5B0513
0x5B0453: cmp     dword ptr [edi+44h], 0
0x5B0457: jnz     loc_5B0513
0x5B045D: cmp     byte ptr ds:0B3B3F6h, 0
0x5B0464: jnz     loc_5B0513
0x5B046A: mov     ecx, [esi+178h]
0x5B0470: push    0FABh
0x5B0475: call    Tile_GetFloat
0x5B047A: fadd    qword ptr ds:0A2F928h
0x5B0480: call    Double_To_SInt32
0x5B0485: mov     [esp+0Ch+var_4], eax
0x5B0489: fild    [esp+0Ch+var_4]
0x5B048D: push    ecx
0x5B048E: mov     ecx, [esi+144h]; this
0x5B0494: fstp    [esp+10h+a2]; a3
0x5B0497: push    0FABh; a2
0x5B049C: call    Tile_SetFloat
0x5B04A1: push    offset aOpen; "Open"
0x5B04A6: mov     ecx, edi
0x5B04A8: mov     byte ptr ds:0B3B3F4h, 0
0x5B04AF: mov     byte ptr ds:0B3B3F6h, 1
0x5B04B6: call    sub_590740
0x5B04BB: push    0; float
0x5B04BD: mov     ecx, edi
0x5B04BF: call    sub_58FBA0
0x5B04C4: mov     ecx, [esi+38h]
0x5B04C7: call    sub_4DBEA0
0x5B04CC: push    offset aUilocksuccess; "UILockSuccess"
0x5B04D1: mov     ecx, esi
0x5B04D3: call    sub_5AFD50
0x5B04D8: push    offset aDrslockopen; "DRSLockOpen"
0x5B04DD: mov     ecx, esi
0x5B04DF: call    sub_5AFD50
0x5B04E4: push    0FFh
0x5B04E9: call    sub_583DF0
0x5B04EE: mov     ecx, 1
0x5B04F3: mov     [esi+150h], ecx
0x5B04F9: mov     eax, ds:0B333C4h
0x5B04FE: add     esp, 4
0x5B0501: add     [eax+678h], ecx
0x5B0507: jmp     short loc_5B0513
0x5B0509: mov     dword ptr [esi+150h], 0
0x5B0513: mov     edx, [esi+144h]
0x5B0519: push    0; int
0x5B051B: push    offset ??_R0?AVTile3D@@@8; struct TypeDescriptor *
0x5B0520: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5B0525: push    0; int
0x5B0527: push    edx; void *
0x5B0528: call    OblivionDynamicCast
0x5B052D: add     esp, 14h
0x5B0530: test    eax, eax
0x5B0532: jz      loc_5B0613
0x5B0538: cmp     dword ptr [eax+44h], 0
0x5B053C: jnz     loc_5B0613
0x5B0542: cmp     byte ptr ds:0B3B3F6h, 0
0x5B0549: jz      loc_5B0613
0x5B054F: call    sub_5AF960
0x5B0554: cmp     byte ptr [esi+17Ch], 0
0x5B055B: jz      loc_5B05E5
0x5B0561: mov     eax, [esi+38h]
0x5B0564: mov     ecx, ds:0B333C4h
0x5B056A: push    2
0x5B056C: push    eax
0x5B056D: push    ecx
0x5B056E: mov     ecx, offset ActorProcessManager_ptr
0x5B0573: call    sub_675BF0
0x5B0578: test    eax, eax
0x5B057A: jz      short loc_5B05E5
0x5B057C: push    0
0x5B057E: push    eax
0x5B057F: mov     ecx, offset ActorProcessManager_ptr
0x5B0584: call    sub_675740
0x5B0589: mov     edi, eax
0x5B058B: test    edi, edi
0x5B058D: jz      short loc_5B05E5
0x5B058F: nop
0x5B0590: mov     ecx, [edi]
0x5B0592: test    ecx, ecx
0x5B0594: jz      short loc_5B05D5
0x5B0596: mov     edx, ds:0B333C4h
0x5B059C: push    0
0x5B059E: push    edx
0x5B059F: call    TesObjectREF_GetDistance
0x5B05A4: fcomp   qword ptr ds:0A6BEA0h
0x5B05AA: fnstsw  ax
0x5B05AC: test    ah, 41h
0x5B05AF: jnp     short loc_5B0613
0x5B05B1: mov     eax, [edi+4]
0x5B05B4: test    eax, eax
0x5B05B6: jz      short loc_5B05CD
0x5B05B8: mov     ecx, [eax+4]
0x5B05BB: mov     [edi+4], ecx
0x5B05BE: mov     edx, [eax]
0x5B05C0: push    eax
0x5B05C1: mov     [edi], edx
0x5B05C3: call    FormHeapFree
0x5B05C8: add     esp, 4
0x5B05CB: jmp     short loc_5B0590
0x5B05CD: mov     dword ptr [edi], 0
0x5B05D3: jmp     short loc_5B0590
0x5B05D5: mov     ecx, edi
0x5B05D7: call    BSSimpleList_Clear
0x5B05DC: push    edi
0x5B05DD: call    FormHeapFree
0x5B05E2: add     esp, 4
0x5B05E5: mov     eax, ds:0B333C4h
0x5B05EA: push    1
0x5B05EC: push    0
0x5B05EE: mov     byte ptr [eax+12Ch], 1
0x5B05F5: mov     ecx, ds:0B333C4h
0x5B05FB: push    0
0x5B05FD: push    ecx
0x5B05FE: mov     ecx, [esi+38h]
0x5B0601: call    ActivateRef
0x5B0606: mov     edx, ds:0B333C4h
0x5B060C: mov     byte ptr [edx+12Ch], 0
0x5B0613: pop     edi
0x5B0614: pop     esi
0x5B0615: pop     ecx
0x5B0616: retn
