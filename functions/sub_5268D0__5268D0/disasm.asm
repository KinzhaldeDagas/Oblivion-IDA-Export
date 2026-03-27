0x5268D0: push    ecx
0x5268D1: push    ebx
0x5268D2: mov     ebx, [esp+8+arg_4]
0x5268D6: push    ebp
0x5268D7: push    esi
0x5268D8: push    edi
0x5268D9: mov     edi, ecx
0x5268DB: mov     eax, [edi+28h]
0x5268DE: mov     ecx, [edi+0E8h]
0x5268E4: and     eax, 1
0x5268E7: push    eax
0x5268E8: push    ecx
0x5268E9: mov     ecx, ebx
0x5268EB: call    sub_47AB90
0x5268F0: mov     esi, [esp+14h+arg_0]
0x5268F4: push    0; int
0x5268F6: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5268FB: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x526900: push    0; int
0x526902: push    esi; void *
0x526903: call    OblivionDynamicCast
0x526908: mov     ebp, eax
0x52690A: add     esp, 14h
0x52690D: test    ebp, ebp
0x52690F: jz      short loc_526924
0x526911: mov     ecx, [ebp+58h]
0x526914: test    ecx, ecx
0x526916: jz      short loc_526924
0x526918: mov     edx, [ecx]
0x52691A: mov     eax, [edx+31Ch]
0x526920: push    1
0x526922: call    eax
0x526924: cmp     dword ptr [esi+3Ch], 0
0x526928: jnz     loc_5269C5
0x52692E: mov     ecx, ebp
0x526930: mov     byte ptr [esp+14h+var_4], 1
0x526935: mov     byte ptr [esp+14h+arg_0], 1
0x52693A: call    sub_5E0380
0x52693F: test    eax, eax
0x526941: jz      short loc_526961
0x526943: mov     eax, [eax+1Ch]
0x526946: mov     ecx, eax
0x526948: shr     ecx, 14h
0x52694B: test    cl, 1
0x52694E: jz      short loc_526955
0x526950: mov     byte ptr [esp+14h+var_4], 0
0x526955: shr     eax, 15h
0x526958: test    al, 1
0x52695A: jz      short loc_526961
0x52695C: mov     byte ptr [esp+14h+arg_0], 0
0x526961: mov     ecx, ds:0B33B00h
0x526967: mov     edx, [ecx+18h]
0x52696A: mov     bl, 1
0x52696C: shr     edx, 1
0x52696E: test    bl, dl
0x526970: jz      short loc_526983
0x526972: push    1
0x526974: push    esi
0x526975: call    sub_4533F0
0x52697A: test    eax, 8000000h
0x52697F: jz      short loc_526983
0x526981: xor     bl, bl
0x526983: mov     eax, [esi]
0x526985: mov     edx, [eax+198h]
0x52698B: push    0
0x52698D: mov     ecx, esi
0x52698F: call    edx
0x526991: test    al, al
0x526993: jz      short loc_5269A7
0x526995: mov     ecx, ds:0B33B00h
0x52699B: push    1
0x52699D: push    esi
0x52699E: call    sub_4533F0
0x5269A3: test    al, 40h
0x5269A5: jnz     short loc_5269C1
0x5269A7: test    bl, bl
0x5269A9: jz      short loc_5269C1
0x5269AB: mov     eax, [esp+14h+arg_0]
0x5269AF: mov     ecx, [esp+14h+var_4]
0x5269B3: push    0; char
0x5269B5: push    0; int
0x5269B7: push    eax; int
0x5269B8: push    ecx; int
0x5269B9: push    esi; int
0x5269BA: mov     ecx, edi; int
0x5269BC: call    sub_5227A0
0x5269C1: mov     ebx, [esp+14h+arg_4]
0x5269C5: cmp     byte ptr ds:0B120DCh, 0
0x5269CC: jz      short loc_5269D7
0x5269CE: cmp     byte ptr ds:0B120B4h, 0
0x5269D5: jnz     short loc_5269E0
0x5269D7: push    ebx
0x5269D8: push    esi
0x5269D9: mov     ecx, edi
0x5269DB: call    sub_525A70
0x5269E0: push    ebx
0x5269E1: push    esi
0x5269E2: mov     ecx, edi
0x5269E4: call    sub_524280
0x5269E9: mov     ecx, ds:0B333C4h
0x5269EF: push    1
0x5269F1: call    sub_6600D0
0x5269F6: cmp     ebx, eax
0x5269F8: jz      short loc_526A04
0x5269FA: push    0
0x5269FC: push    esi
0x5269FD: mov     ecx, edi
0x5269FF: call    sub_524510
0x526A04: test    ebp, ebp
0x526A06: jz      short loc_526A1B
0x526A08: mov     ecx, [ebp+58h]
0x526A0B: test    ecx, ecx
0x526A0D: jz      short loc_526A1B
0x526A0F: mov     edx, [ecx]
0x526A11: mov     eax, [edx+31Ch]
0x526A17: push    0
0x526A19: call    eax
0x526A1B: pop     edi
0x526A1C: pop     esi
0x526A1D: pop     ebp
0x526A1E: pop     ebx
0x526A1F: pop     ecx
0x526A20: retn    8
