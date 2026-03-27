0x5118D0: sub     esp, 20h
0x5118D3: push    ebx
0x5118D4: fldz
0x5118D6: push    ebp
0x5118D7: push    edi
0x5118D8: mov     edi, [esp+2Ch+a4]
0x5118DC: mov     ebp, dword ptr [esp+2Ch+arg_18]
0x5118E0: lea     eax, [esp+2Ch+var_14]
0x5118E4: fstp    qword ptr [ebp+0]
0x5118E7: push    eax
0x5118E8: lea     ecx, [esp+30h+var_1C]
0x5118EC: push    ecx
0x5118ED: lea     edx, [esp+34h+a2]
0x5118F1: push    edx
0x5118F2: mov     edx, [esp+38h+l]
0x5118F6: lea     eax, [esp+38h+var_18]
0x5118FA: push    eax
0x5118FB: mov     eax, [esp+3Ch+arg_10]
0x5118FF: lea     ecx, [esp+3Ch+arg_18]
0x511903: push    ecx; UInt16
0x511904: mov     ecx, [esp+40h+arg_C]
0x511908: push    edx; l
0x511909: mov     edx, [esp+44h+a3]
0x51190D: push    eax; a6
0x51190E: mov     eax, [esp+48h+arg_4]
0x511912: push    ecx; a5
0x511913: mov     ecx, [esp+4Ch+a1]
0x511917: push    edi; a4
0x511918: push    edx; a3
0x511919: xor     ebx, ebx
0x51191B: push    eax; a2
0x51191C: push    ecx; a1
0x51191D: mov     dword ptr [esp+5Ch+arg_18], ebx
0x511921: mov     [esp+5Ch+var_18], ebx
0x511925: mov     [esp+5Ch+a2], ebx
0x511929: mov     [esp+5Ch+var_1C], ebx
0x51192D: mov     [esp+5Ch+var_14], ebx
0x511931: call    Script_ExtractArgs
0x511936: add     esp, 30h
0x511939: test    al, al
0x51193B: jnz     short loc_511944
0x51193D: pop     edi
0x51193E: pop     ebp
0x51193F: pop     ebx
0x511940: add     esp, 20h
0x511943: retn
0x511944: cmp     [esp+2Ch+var_1C], ebx
0x511948: mov     [esp+2Ch+var_10], bl
0x51194C: mov     byte ptr [esp+2Ch+var_8], bl
0x511950: mov     byte ptr [esp+2Ch+var_C], bl
0x511954: jz      short loc_51195B
0x511956: mov     byte ptr [esp+2Ch+var_8], 1
0x51195B: cmp     [esp+2Ch+var_18], ebx
0x51195F: jle     short loc_511966
0x511961: mov     [esp+2Ch+var_10], 1
0x511966: cmp     [esp+2Ch+var_14], ebx
0x51196A: jle     short loc_511971
0x51196C: mov     byte ptr [esp+2Ch+var_C], 1
0x511971: push    esi
0x511972: push    ebx; int
0x511973: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x511978: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x51197D: push    ebx; int
0x51197E: push    edi; void *
0x51197F: call    OblivionDynamicCast
0x511984: mov     edx, ds:0B36798h
0x51198A: mov     esi, eax
0x51198C: add     esp, 14h
0x51198F: cmp     esi, ebx
0x511991: mov     [esp+30h+var_4], edx
0x511995: mov     dword ptr ds:0B36798h, 7FFFFFFFh
0x51199F: jz      loc_511A3B
0x5119A5: cmp     dword ptr [esp+30h+arg_18], ebx
0x5119A9: jz      loc_511A3B
0x5119AF: mov     ecx, [esi+58h]
0x5119B2: cmp     ecx, ebx
0x5119B4: jz      loc_511A8F
0x5119BA: mov     eax, [ecx]
0x5119BC: mov     edx, [eax+4C8h]
0x5119C2: push    2
0x5119C4: call    edx
0x5119C6: mov     ecx, [esi+58h]
0x5119C9: mov     edi, eax
0x5119CB: mov     eax, [ecx]
0x5119CD: mov     edx, [eax+4A0h]
0x5119D3: call    edx
0x5119D5: mov     ecx, [esi+58h]
0x5119D8: mov     eax, [ecx]
0x5119DA: mov     edx, [eax+484h]
0x5119E0: push    edi
0x5119E1: call    edx
0x5119E3: mov     edx, dword ptr [esp+30h+var_10]
0x5119E7: mov     ecx, [esi+58h]
0x5119EA: mov     eax, [ecx]
0x5119EC: mov     eax, [eax+1A4h]
0x5119F2: push    ebx
0x5119F3: push    ebx
0x5119F4: push    edx
0x5119F5: mov     edx, dword ptr [esp+3Ch+arg_18]
0x5119F9: push    edx
0x5119FA: push    esi
0x5119FB: call    eax
0x5119FD: mov     esi, [esi+58h]
0x511A00: push    ebx; int
0x511A01: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x511A06: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x511A0B: push    ebx; int
0x511A0C: push    esi; void *
0x511A0D: call    OblivionDynamicCast
0x511A12: add     esp, 14h
0x511A15: cmp     eax, ebx
0x511A17: jz      short loc_511A8F
0x511A19: mov     edx, [eax]
0x511A1B: mov     ecx, eax
0x511A1D: mov     eax, [edx+208h]
0x511A23: call    eax
0x511A25: fstp    qword ptr [ebp+0]
0x511A28: mov     eax, [esp+30h+var_4]
0x511A2C: pop     esi
0x511A2D: pop     edi
0x511A2E: pop     ebp
0x511A2F: mov     ds:0B36798h, eax
0x511A34: mov     al, 1
0x511A36: pop     ebx
0x511A37: add     esp, 20h
0x511A3A: retn
0x511A3B: cmp     edi, ebx
0x511A3D: jz      short loc_511A8F
0x511A3F: cmp     [esp+30h+a2], ebx
0x511A43: jz      short loc_511A8F
0x511A45: push    1
0x511A47: push    32h ; '2'
0x511A49: call    sub_4DB260
0x511A4E: mov     ecx, [esp+38h+a2]
0x511A52: add     esp, 8
0x511A55: mov     esi, eax
0x511A57: push    ecx; a2
0x511A58: mov     ecx, esi; this
0x511A5A: call    TESObjectREFR_SetBaseForm
0x511A5F: mov     eax, [esp+30h+var_C]
0x511A63: mov     ecx, [esp+30h+var_8]
0x511A67: mov     edx, [edi]
0x511A69: mov     edx, [edx+0DCh]
0x511A6F: push    1
0x511A71: push    eax
0x511A72: mov     eax, dword ptr [esp+38h+arg_18]
0x511A76: push    ecx
0x511A77: push    esi
0x511A78: push    eax
0x511A79: mov     ecx, edi
0x511A7B: call    edx
0x511A7D: fstp    qword ptr [ebp+0]
0x511A80: cmp     esi, ebx
0x511A82: jz      short loc_511A8F
0x511A84: mov     eax, [esi]
0x511A86: mov     edx, [eax+10h]
0x511A89: push    1
0x511A8B: mov     ecx, esi
0x511A8D: call    edx
0x511A8F: mov     eax, [esp+30h+var_4]
0x511A93: pop     esi
0x511A94: pop     edi
0x511A95: pop     ebp
0x511A96: mov     ds:0B36798h, eax
0x511A9B: mov     al, 1
0x511A9D: pop     ebx
0x511A9E: add     esp, 20h
0x511AA1: retn
