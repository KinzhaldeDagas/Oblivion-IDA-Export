0x671620: push    ebp
0x671621: mov     ebp, esp
0x671623: and     esp, 0FFFFFFF0h
0x671626: sub     esp, 94h
0x67162C: mov     eax, ds:0B33398h
0x671631: fldz
0x671633: mov     edx, ds:0B333CCh
0x671639: push    ebx
0x67163A: mov     ebx, ecx
0x67163C: mov     ecx, [eax+20h]
0x67163F: fst     dword ptr [ebx+7FCh]
0x671645: push    esi
0x671646: fstp    dword ptr [ebx+800h]
0x67164C: push    edi; int
0x67164D: mov     [esp+0A0h+var_7C], ecx
0x671651: xor     edi, edi
0x671653: mov     ecx, ebx
0x671655: mov     [esp+0A0h+var_78], edx
0x671659: mov     [esp+0A0h+var_4C], edi
0x67165D: mov     byte ptr [esp+0A0h+var_94+7], 0
0x671662: call    sub_667520
0x671667: mov     ecx, ebx; this
0x671669: call    MobileObject_GetCharProxy
0x67166E: test    eax, eax
0x671670: jz      short loc_67169B
0x671672: mov     eax, [eax+1F4h]
0x671678: shr     eax, 11h
0x67167B: test    al, 1
0x67167D: jz      short loc_67169B
0x67167F: cmp     byte ptr [ebx+115h], 0
0x671686: jnz     short loc_6716A2
0x671688: mov     ecx, offset ActorProcessManager_ptr
0x67168D: call    sub_6768C0
0x671692: mov     byte ptr [ebx+115h], 1
0x671699: jmp     short loc_6716A2
0x67169B: mov     byte ptr [ebx+115h], 0
0x6716A2: mov     ecx, [ebx+58h]
0x6716A5: mov     edx, [ecx]
0x6716A7: mov     eax, [edx+4B0h]
0x6716AD: call    eax
0x6716AF: fldz
0x6716B1: mov     ecx, [ebx+58h]
0x6716B4: fcom    st(1)
0x6716B6: mov     edx, [ecx]
0x6716B8: fnstsw  ax
0x6716BA: fstp    st(1)
0x6716BC: test    ah, 5
0x6716BF: jp      short loc_6716CD
0x6716C1: mov     eax, [edx+4ACh]
0x6716C7: fstp    st
0x6716C9: call    eax
0x6716CB: jmp     short loc_6716D9
0x6716CD: mov     eax, [edx+354h]
0x6716D3: push    ecx
0x6716D4: fstp    [esp+0A4h+duration]
0x6716D7: call    eax
0x6716D9: cmp     byte ptr [ebx+738h], 0
0x6716E0: jz      short loc_671725
0x6716E2: mov     edx, [ebx]
0x6716E4: mov     eax, [edx+1D8h]
0x6716EA: mov     ecx, ebx
0x6716EC: call    eax
0x6716EE: fcomp   dword ptr ds:0A2FAA8h
0x6716F4: mov     ecx, ebx
0x6716F6: fnstsw  ax
0x6716F8: test    ah, 41h
0x6716FB: jp      short loc_67171B
0x6716FD: call    sub_6636B0
0x671702: fld     dword ptr ds:0B378A8h
0x671708: mov     ecx, [ebx+58h]
0x67170B: mov     edx, [ecx]
0x67170D: mov     eax, [edx+1C0h]
0x671713: push    ecx
0x671714: fstp    [esp+0A4h+duration]
0x671717: call    eax
0x671719: jmp     short loc_671725
0x67171B: mov     edx, [ebx]
0x67171D: mov     eax, [edx+1DCh]
0x671723: call    eax
0x671725: fldz
0x671727: fcomp   dword ptr [ebx+618h]
0x67172D: fnstsw  ax
0x67172F: test    ah, 1
0x671732: jnz     short loc_671746
0x671734: mov     ecx, offset ActorProcessManager_ptr
0x671739: call    sub_67A230
0x67173E: fld     dword ptr ds:0B36CE0h
0x671744: jmp     short loc_671752
0x671746: fld     dword ptr [ebx+618h]
0x67174C: fsub    dword ptr ds:0B33E9Ch
0x671752: push    1; arg1
0x671754: fstp    dword ptr [ebx+618h]
0x67175A: mov     esi, ds:0B37D30h
0x671760: push    0; canCreate
0x671762: call    InterfaceManager_GetSingleton
0x671767: push    1; arg1
0x671769: push    0; canCreate
0x67176B: mov     [eax+10h], esi
0x67176E: call    InterfaceManager_GetSingleton
0x671773: add     esp, 10h
0x671776: mov     ecx, eax
0x671778: call    sub_5806D0
0x67177D: cmp     byte ptr [ebx+71Fh], 0
0x671784: jz      short loc_671796
0x671786: push    1; float
0x671788: mov     ecx, ebx; int
0x67178A: mov     byte ptr [ebx+71Fh], 0
0x671791: call    sub_66FF10
0x671796: mov     ecx, [ebx+5C4h]
0x67179C: test    ecx, ecx
0x67179E: jz      short loc_6717BB
0x6717A0: push    1
0x6717A2: push    0
0x6717A4: push    0
0x6717A6: push    ebx
0x6717A7: call    ActivateRef
0x6717AC: mov     [ebx+5C4h], edi
0x6717B2: pop     edi
0x6717B3: pop     esi
0x6717B4: pop     ebx
0x6717B5: mov     esp, ebp
0x6717B7: pop     ebp
0x6717B8: retn    4
0x6717BB: cmp     byte ptr [ebx+748h], 0
0x6717C2: jz      short loc_6717CB
0x6717C4: mov     ecx, ebx
0x6717C6: call    UpdateFlyCam
0x6717CB: cmp     byte ptr [ebx+588h], 0
0x6717D2: jz      short loc_6717E2
0x6717D4: mov     ecx, [ebx+58h]
0x6717D7: mov     edx, [ecx]
0x6717D9: mov     eax, [edx+90h]
0x6717DF: push    ebx
0x6717E0: call    eax
0x6717E2: mov     ecx, [ebx+58h]
0x6717E5: mov     edx, [ecx]
0x6717E7: mov     eax, [edx+36Ch]
0x6717ED: call    eax
0x6717EF: cmp     eax, 4
0x6717F2: jnz     short loc_67180F
0x6717F4: mov     edx, [ebx]
0x6717F6: mov     eax, [edx+380h]
0x6717FC: mov     ecx, ebx
0x6717FE: call    eax
0x671800: mov     edi, eax
0x671802: test    edi, edi
0x671804: mov     [esp+0A0h+var_4C], edi
0x671808: jz      short loc_67180F
0x67180A: mov     ecx, [edi+58h]
0x67180D: jmp     short loc_671812
0x67180F: mov     ecx, [ebx+58h]
0x671812: mov     edx, [ecx]
0x671814: mov     eax, [edx+2C0h]
0x67181A: call    eax
0x67181C: mov     ecx, ebx
0x67181E: movzx   esi, ax
0x671821: call    Actor_IsSneaking
0x671826: test    al, al
0x671828: jz      short loc_67189B
0x67182A: test    edi, edi
0x67182C: jnz     short loc_67189B
0x67182E: mov     ecx, ebx
0x671830: call    sub_5E05B0
0x671835: test    al, al
0x671837: jz      short loc_67189B
0x671839: cmp     dword ptr ds:0B3B368h, 3
0x671840: jge     loc_671949
0x671846: cmp     byte ptr [ebx+5A8h], 0
0x67184D: jz      loc_671949
0x671853: fld1
0x671855: fcomp   dword ptr [ebx+5A4h]
0x67185B: fnstsw  ax
0x67185D: test    ah, 5
0x671860: jp      short loc_671884
0x671862: fldz
0x671864: mov     edx, [ebx]
0x671866: mov     eax, [edx+39Ch]
0x67186C: push    ecx
0x67186D: fstp    [esp+0A4h+duration]
0x671870: push    edi
0x671871: push    1Fh
0x671873: mov     ecx, ebx
0x671875: call    eax
0x671877: fldz
0x671879: fstp    dword ptr [ebx+5A4h]
0x67187F: jmp     loc_671949
0x671884: fld     dword ptr ds:0B33E9Ch
0x67188A: fadd    dword ptr [ebx+5A4h]
0x671890: fstp    dword ptr [ebx+5A4h]
0x671896: jmp     loc_671949
0x67189B: mov     ecx, ebx
0x67189D: call    Actor_IsSwimming
0x6718A2: test    al, al
0x6718A4: jz      short loc_6718F8
0x6718A6: test    edi, edi
0x6718A8: jnz     short loc_6718F8
0x6718AA: mov     ecx, ebx
0x6718AC: call    sub_5E05B0
0x6718B1: test    al, al
0x6718B3: jz      short loc_6718F8
0x6718B5: fld1
0x6718B7: fcomp   dword ptr [ebx+5A0h]
0x6718BD: fnstsw  ax
0x6718BF: test    ah, 5
0x6718C2: jp      short loc_6718E4
0x6718C4: fldz
0x6718C6: mov     edx, [ebx]
0x6718C8: mov     eax, [edx+39Ch]
0x6718CE: push    ecx
0x6718CF: fstp    [esp+0A4h+duration]
0x6718D2: push    1
0x6718D4: push    0Dh
0x6718D6: mov     ecx, ebx
0x6718D8: call    eax
0x6718DA: fldz
0x6718DC: fstp    dword ptr [ebx+5A0h]
0x6718E2: jmp     short loc_671949
0x6718E4: fld     dword ptr ds:0B33E9Ch
0x6718EA: fadd    dword ptr [ebx+5A0h]
0x6718F0: fstp    dword ptr [ebx+5A0h]
0x6718F6: jmp     short loc_671949
0x6718F8: test    esi, 200h
0x6718FE: jz      short loc_671949
0x671900: test    edi, edi
0x671902: jnz     short loc_671949
0x671904: mov     ecx, ebx
0x671906: call    sub_5E05B0
0x67190B: test    al, al
0x67190D: jz      short loc_671949
0x67190F: fld1
0x671911: fcomp   dword ptr [ebx+59Ch]
0x671917: fnstsw  ax
0x671919: test    ah, 5
0x67191C: jp      short loc_671937
0x67191E: fldz
0x671920: mov     edx, [ebx]
0x671922: mov     eax, [edx+39Ch]
0x671928: push    ecx
0x671929: fstp    [esp+0A4h+duration]
0x67192C: push    edi
0x67192D: push    0Dh
0x67192F: mov     ecx, ebx
0x671931: call    eax
0x671933: fldz
0x671935: jmp     short loc_671943
0x671937: fld     dword ptr [ebx+59Ch]
0x67193D: fadd    dword ptr ds:0B33E9Ch
0x671943: fstp    dword ptr [ebx+59Ch]
0x671949: mov     edi, [esp+0A0h+var_7C]
0x67194D: and     esi, 0CC00h
0x671953: push    1; a2
0x671955: mov     ecx, edi; this
0x671957: mov     [esp+0A4h+var_8C], esi
0x67195B: call    InputGlobals__GetMouseAxisMovement
0x671960: push    2; a2
0x671962: mov     ecx, edi; this
0x671964: mov     esi, eax
0x671966: call    InputGlobals__GetMouseAxisMovement
0x67196B: mov     ecx, [esp+0A0h+var_7C]; this
0x67196F: push    3; a2
0x671971: mov     edi, eax
0x671973: call    InputGlobals__GetMouseAxisMovement
0x671978: mov     ecx, ds:0B14EE0h
0x67197E: push    ecx; a3
0x67197F: mov     ecx, [esp+0A4h+var_7C]; this
0x671983: push    0; whichDevice
0x671985: mov     [esp+0A8h+var_84], eax
0x671989: call    InputGlobals__GetJoystickAxisMovement
0x67198E: mov     [esp+0A0h+var_68], eax
0x671992: fild    [esp+0A0h+var_68]
0x671996: fmul    dword ptr ds:0B14F08h
0x67199C: call    Double_To_SInt32
0x6719A1: mov     edx, ds:0B14ED8h
0x6719A7: mov     ecx, [esp+0A0h+var_7C]; this
0x6719AB: push    edx; a3
0x6719AC: add     esi, eax
0x6719AE: push    0; whichDevice
0x6719B0: mov     dword ptr [esp+0A8h+var_38+4], esi
0x6719B4: call    InputGlobals__GetJoystickAxisMovement
0x6719B9: mov     [esp+0A0h+var_68], eax
0x6719BD: fild    [esp+0A0h+var_68]
0x6719C1: fmul    dword ptr ds:0B14F00h
0x6719C7: call    Double_To_SInt32
0x6719CC: add     edi, eax
0x6719CE: cmp     byte ptr [ebx+748h], 0
0x6719D5: mov     dword ptr [esp+0A0h+var_38], edi
0x6719D9: jz      short loc_6719EB
0x6719DB: xor     edi, edi
0x6719DD: xor     esi, esi
0x6719DF: mov     dword ptr [esp+0A0h+var_38+4], esi
0x6719E3: mov     dword ptr [esp+0A0h+var_38], edi
0x6719E7: mov     [esp+0A0h+var_84], edi
0x6719EB: cmp     byte ptr ds:0B14F38h, 0
0x6719F2: jz      short loc_6719FA
0x6719F4: neg     edi
0x6719F6: mov     dword ptr [esp+0A0h+var_38], edi
0x6719FA: fild    [esp+0A0h+var_84]
0x6719FE: fstp    [esp+0A0h+var_84]
0x671A02: fldz
0x671A04: fld     [esp+0A0h+var_84]
0x671A08: fucom   st(1)
0x671A0A: fnstsw  ax
0x671A0C: fstp    st(1)
0x671A0E: test    ah, 44h
0x671A11: jnp     loc_671B13
0x671A17: cmp     byte ptr ds:0B3BB04h, 0
0x671A1E: jnz     short loc_671A32
0x671A20: cmp     byte ptr [ebx+588h], 0
0x671A27: mov     byte ptr [esp+0A0h+var_94+7], 1
0x671A2C: jz      loc_671AC7
0x671A32: fld     dword ptr ds:0B36B58h
0x671A38: push    0
0x671A3A: fmulp   st(1), st
0x671A3C: mov     ecx, ebx
0x671A3E: fsubr   dword ptr ds:0B3BB24h
0x671A44: fstp    dword ptr ds:0B3BB24h
0x671A4A: mov     eax, [ebx]
0x671A4C: mov     edx, [eax+198h]
0x671A52: call    edx
0x671A54: fld     dword ptr ds:0B3BB24h
0x671A5A: test    al, al
0x671A5C: jz      short loc_671A77
0x671A5E: fld     dword ptr ds:0B36B80h
0x671A64: fcom    st(1)
0x671A66: fnstsw  ax
0x671A68: fstp    st(1)
0x671A6A: test    ah, 41h
0x671A6D: jnz     short loc_671AA6
0x671A6F: fstp    dword ptr ds:0B3BB24h
0x671A75: jmp     short loc_671AA8
0x671A77: fld     dword ptr ds:0B36B60h
0x671A7D: fcompp
0x671A7F: fnstsw  ax
0x671A81: test    ah, 41h
0x671A84: jnz     short loc_671AA8
0x671A86: cmp     byte ptr ds:0B3BB04h, 0
0x671A8D: jnz     short loc_671A98
0x671A8F: push    1; a1
0x671A91: mov     ecx, ebx; this
0x671A93: call    TogglePOV
0x671A98: fld     dword ptr ds:0B36B60h
0x671A9E: fstp    dword ptr ds:0B3BB24h
0x671AA4: jmp     short loc_671AA8
0x671AA6: fstp    st
0x671AA8: fld     dword ptr ds:0B3BB24h
0x671AAE: fld     dword ptr ds:0B36B68h
0x671AB4: fcom    st(1)
0x671AB6: fnstsw  ax
0x671AB8: fstp    st(1)
0x671ABA: test    ah, 5
0x671ABD: jp      short loc_671AC7
0x671ABF: fstp    dword ptr ds:0B3BB24h
0x671AC5: jmp     short loc_671AC9
0x671AC7: fstp    st
0x671AC9: cmp     byte ptr [ebx+588h], 0
0x671AD0: jnz     short loc_671B15
0x671AD2: fld     [esp+0A0h+var_84]
0x671AD6: fmul    dword ptr ds:0B36B58h
0x671ADC: fcomp   qword ptr ds:0A2FC68h
0x671AE2: fnstsw  ax
0x671AE4: test    ah, 5
0x671AE7: jp      short loc_671B15
0x671AE9: push    0; a1
0x671AEB: mov     ecx, ebx; this
0x671AED: call    TogglePOV
0x671AF2: fld     dword ptr ds:0B3BB24h
0x671AF8: fcomp   qword ptr ds:0A3F3D0h
0x671AFE: fnstsw  ax
0x671B00: test    ah, 5
0x671B03: jp      short loc_671B15
0x671B05: fld     dword ptr ds:0A3D8F0h
0x671B0B: fstp    dword ptr ds:0B3BB24h
0x671B11: jmp     short loc_671B15
0x671B13: fstp    st
0x671B15: mov     eax, [ebx]
0x671B17: mov     edx, [eax+1E0h]
0x671B1D: mov     ecx, ebx
0x671B1F: call    edx
0x671B21: fstp    dword ptr ds:0B3BAC8h
0x671B27: mov     ecx, ebx
0x671B29: call    sub_4A9720
0x671B2E: fstp    dword ptr ds:0B3BAC4h
0x671B34: cmp     byte ptr ds:0B3BB04h, 0
0x671B3B: jz      loc_671C44
0x671B41: mov     ecx, [ebx+58h]
0x671B44: mov     eax, [ecx]
0x671B46: mov     edx, [eax+47Ch]
0x671B4C: call    edx
0x671B4E: test    eax, eax
0x671B50: jnz     loc_671C44
0x671B56: fild    dword ptr [esp+0A0h+var_38+4]
0x671B5A: fld     qword ptr ds:0A31C78h
0x671B60: fmul    st(1), st
0x671B62: fld     dword ptr ds:0B36B88h
0x671B68: fmulp   st(2), st
0x671B6A: fld     [ebp+arg_0]
0x671B6D: fld     st
0x671B6F: fmulp   st(3), st
0x671B71: fld     dword ptr ds:0B3BB28h
0x671B77: faddp   st(3), st
0x671B79: fxch    st(2)
0x671B7B: fstp    dword ptr ds:0B3BB28h
0x671B81: fimul   dword ptr [esp+0A0h+var_38]
0x671B85: fmul    dword ptr ds:0B36B90h
0x671B8B: fmulp   st(1), st
0x671B8D: fadd    dword ptr ds:0B3BB20h
0x671B93: fstp    dword ptr ds:0B3BB20h
0x671B99: cmp     byte ptr [ebx+71Dh], 0
0x671BA0: jnz     loc_6735D0
0x671BA6: cmp     byte ptr [ebx+71Ch], 0
0x671BAD: jnz     loc_6735D0
0x671BB3: mov     edx, [ebx]
0x671BB5: mov     eax, [edx+198h]
0x671BBB: push    0
0x671BBD: mov     ecx, ebx
0x671BBF: call    eax
0x671BC1: test    al, al
0x671BC3: jnz     loc_6735D0
0x671BC9: mov     ecx, ds:0B333C4h
0x671BCF: mov     edx, [ecx+58h]
0x671BD2: mov     ecx, [edx+8]
0x671BD5: test    ecx, ecx
0x671BD7: jz      short loc_671BF1
0x671BD9: mov     eax, [ecx]
0x671BDB: mov     edx, [eax+10h]
0x671BDE: push    1
0x671BE0: call    edx
0x671BE2: mov     eax, ds:0B333C4h
0x671BE7: mov     ecx, [eax+58h]
0x671BEA: mov     dword ptr [ecx+8], 0
0x671BF1: mov     edx, ds:0B333C4h
0x671BF7: mov     ecx, [edx+58h]
0x671BFA: mov     eax, [ecx]
0x671BFC: mov     edx, [eax+174h]
0x671C02: call    edx
0x671C04: test    eax, eax
0x671C06: jz      short loc_671C1C
0x671C08: mov     eax, ds:0B333C4h
0x671C0D: mov     ecx, [eax+58h]
0x671C10: mov     edx, [ecx]
0x671C12: mov     eax, [edx+178h]
0x671C18: push    0
0x671C1A: call    eax
0x671C1C: cmp     byte ptr [ebx+1DCh], 0
0x671C23: jz      loc_671E16
0x671C29: cmp     byte ptr ds:0B14E88h, 0
0x671C30: jz      loc_671E16
0x671C36: call    sub_5ACE20
0x671C3B: pop     edi
0x671C3C: pop     esi
0x671C3D: pop     ebx
0x671C3E: mov     esp, ebp
0x671C40: pop     ebp
0x671C41: retn    4
0x671C44: test    esi, esi
0x671C46: jnz     short loc_671C52
0x671C48: cmp     [esp+0A0h+var_4C], esi
0x671C4C: jz      loc_671D7F
0x671C52: test    esi, esi
0x671C54: fild    dword ptr [esp+0A0h+var_38+4]
0x671C58: fmul    dword ptr ds:0B14EE8h
0x671C5E: fstp    [esp+0A0h+var_84]
0x671C62: jz      short loc_671C7D
0x671C64: fldz
0x671C66: fcomp   [esp+0A0h+var_84]
0x671C6A: fnstsw  ax
0x671C6C: test    ah, 41h
0x671C6F: jnz     short loc_671C78
0x671C71: or      [esp+0A0h+var_8C], 10h
0x671C76: jmp     short loc_671C7D
0x671C78: or      [esp+0A0h+var_8C], 20h
0x671C7D: mov     ecx, ebx; this
0x671C7F: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x671C84: test    eax, eax
0x671C86: jnz     loc_671D7F
0x671C8C: mov     ecx, ebx
0x671C8E: call    Actor_GetCurrentAction
0x671C93: cmp     eax, 8
0x671C96: jz      loc_671D7F
0x671C9C: cmp     byte ptr [ebx+71Dh], 0
0x671CA3: jnz     loc_671D7F
0x671CA9: cmp     byte ptr [ebx+71Ch], 0
0x671CB0: jnz     loc_671D7F
0x671CB6: mov     ecx, [ebx+58h]
0x671CB9: mov     eax, [ecx]
0x671CBB: mov     edx, [eax+36Ch]
0x671CC1: call    edx
0x671CC3: test    eax, eax
0x671CC5: jz      short loc_671D2D
0x671CC7: cmp     eax, 4
0x671CCA: jnz     loc_671D7F
0x671CD0: fld     dword ptr [ebx+61Ch]
0x671CD6: fadd    [esp+0A0h+var_84]
0x671CDA: fstp    [esp+0A0h+var_68]
0x671CDE: fld     [esp+0A0h+var_68]
0x671CE2: fst     dword ptr [ebx+61Ch]
0x671CE8: fcom    qword ptr ds:0A73DD0h
0x671CEE: fnstsw  ax
0x671CF0: test    ah, 5
0x671CF3: jp      short loc_671CFF
0x671CF5: fstp    st
0x671CF7: fld     dword ptr ds:0A3721Ch
0x671CFD: jmp     short loc_671D12
0x671CFF: fcomp   qword ptr ds:0A6E740h
0x671D05: fnstsw  ax
0x671D07: test    ah, 41h
0x671D0A: jnz     short loc_671D18
0x671D0C: fld     dword ptr ds:0A3F3E0h
0x671D12: fstp    dword ptr [ebx+61Ch]
0x671D18: cmp     [esp+0A0h+var_4C], 0
0x671D1D: jz      short loc_671D7F
0x671D1F: fld     dword ptr ds:0A35AA4h
0x671D25: fstp    dword ptr ds:0B14E5Ch
0x671D2B: jmp     short loc_671D7F
0x671D2D: mov     ecx, offset flt_B14EE8
0x671D32: call    GameSetting_GetSafeFloatPointer
0x671D37: fld     [esp+0A0h+var_84]
0x671D3B: fld     st
0x671D3D: fabs
0x671D3F: fstp    [esp+0A0h+var_68]
0x671D43: fld     [esp+0A0h+var_68]
0x671D47: fld     dword ptr [eax]
0x671D49: fmul    qword ptr ds:0A2F920h
0x671D4F: fdivp   st(1), st
0x671D51: fstp    dword ptr ds:0B14E5Ch
0x671D57: fld     dword ptr ds:0A35AA4h
0x671D5D: fcom    dword ptr ds:0B14E5Ch
0x671D63: fnstsw  ax
0x671D65: test    ah, 5
0x671D68: jp      short loc_671D72
0x671D6A: fstp    dword ptr ds:0B14E5Ch
0x671D70: jmp     short loc_671D74
0x671D72: fstp    st
0x671D74: push    ecx
0x671D75: mov     ecx, ebx
0x671D77: fstp    [esp+0A4h+duration]; float
0x671D7A: call    sub_659B90
0x671D7F: test    edi, edi
0x671D81: jz      short loc_671DA0
0x671D83: fild    dword ptr [esp+0A0h+var_38]
0x671D87: push    ecx
0x671D88: mov     ecx, ebx
0x671D8A: fmul    dword ptr ds:0B14EE8h
0x671D90: fstp    [esp+0A4h+var_68]
0x671D94: fld     [esp+0A4h+var_68]
0x671D98: fstp    [esp+0A4h+duration]; float
0x671D9B: call    sub_65ABC0
0x671DA0: mov     ecx, [ebx+58h]
0x671DA3: push    ebx
0x671DA4: call    sub_633250
0x671DA9: test    al, al
0x671DAB: jz      loc_671B99
0x671DB1: cmp     dword ptr [ebx+574h], 0
0x671DB8: jz      short loc_671DC1
0x671DBA: mov     ecx, ebx
0x671DBC: call    sub_66A670
0x671DC1: mov     ecx, ebx
0x671DC3: call    sub_65E900
0x671DC8: fld     [ebp+arg_0]
0x671DCB: cmp     byte ptr [ebx+588h], 0
0x671DD2: push    ecx
0x671DD3: setz    al
0x671DD6: fstp    [esp+0A4h+duration]; a2
0x671DD9: mov     ecx, ebx; this
0x671DDB: mov     [ebx+588h], al
0x671DE1: call    sub_603CA0
0x671DE6: fld     [ebp+arg_0]
0x671DE9: cmp     byte ptr [ebx+588h], 0
0x671DF0: setz    cl
0x671DF3: mov     [ebx+588h], cl
0x671DF9: push    ecx
0x671DFA: mov     ecx, ebx; this
0x671DFC: fstp    [esp+0A4h+duration]; a2
0x671DFF: call    sub_603CA0
0x671E04: push    0
0x671E06: mov     ecx, ebx
0x671E08: call    sub_66B710
0x671E0D: pop     edi
0x671E0E: pop     esi
0x671E0F: pop     ebx
0x671E10: mov     esp, ebp
0x671E12: pop     ebp
0x671E13: retn    4
0x671E16: mov     ecx, ebx
0x671E18: call    sub_6606F0
0x671E1D: call    sub_65DA20
0x671E22: mov     esi, [esp+0A0h+var_7C]
0x671E26: push    1; a3
0x671E28: push    8; a2
0x671E2A: mov     ecx, esi; this
0x671E2C: call    InputGlobals__QueryControlState
0x671E31: test    eax, eax
0x671E33: jz      short loc_671E73
0x671E35: mov     ecx, ebx
0x671E37: call    IsWeaponReady
0x671E3C: test    al, al
0x671E3E: jz      short loc_671E73
0x671E40: cmp     byte ptr [ebx+5C0h], 0
0x671E47: jnz     short loc_671E73
0x671E49: mov     ecx, ebx
0x671E4B: call    Actor_GetCurrentAction
0x671E50: cmp     eax, 0FFFFFFFFh
0x671E53: jnz     short loc_671E73
0x671E55: mov     ecx, [ebx+58h]
0x671E58: mov     edx, [ecx]
0x671E5A: mov     eax, [edx+2FCh]
0x671E60: call    eax
0x671E62: test    al, al
0x671E64: mov     ecx, ebx
0x671E66: jz      short loc_671E6C
0x671E68: push    0
0x671E6A: jmp     short loc_671E6E
0x671E6C: push    1
0x671E6E: call    sub_5E6D70
0x671E73: push    1; a3
0x671E75: push    0Bh; a2
0x671E77: mov     ecx, esi; this
0x671E79: call    InputGlobals__QueryControlState
0x671E7E: test    eax, eax
0x671E80: jz      short loc_671E92
0x671E82: cmp     byte ptr [ebx+58Bh], 0
0x671E89: setz    cl
0x671E8C: mov     [ebx+58Bh], cl
0x671E92: push    1; a3
0x671E94: push    0Ch; a2
0x671E96: mov     ecx, esi; this
0x671E98: call    InputGlobals__QueryControlState
0x671E9D: test    eax, eax
0x671E9F: jz      short loc_671EB1
0x671EA1: cmp     byte ptr [ebx+58Ch], 0
0x671EA8: setz    dl
0x671EAB: mov     [ebx+58Ch], dl
0x671EB1: cmp     byte ptr [ebx+58Ch], 0
0x671EB8: jz      short loc_671F0C
0x671EBA: push    0; a3
0x671EBC: push    0; a2
0x671EBE: mov     ecx, esi; this
0x671EC0: call    InputGlobals__QueryControlState
0x671EC5: test    eax, eax
0x671EC7: jnz     short loc_671F05
0x671EC9: push    eax; a3
0x671ECA: push    1; a2
0x671ECC: mov     ecx, esi; this
0x671ECE: call    InputGlobals__QueryControlState
0x671ED3: test    eax, eax
0x671ED5: jnz     short loc_671F05
0x671ED7: push    eax; a3
0x671ED8: push    3; a2
0x671EDA: mov     ecx, esi; this
0x671EDC: call    InputGlobals__QueryControlState
0x671EE1: test    eax, eax
0x671EE3: jnz     short loc_671EF3
0x671EE5: push    eax; a3
0x671EE6: push    2; a2
0x671EE8: mov     ecx, esi; this
0x671EEA: call    InputGlobals__QueryControlState
0x671EEF: test    eax, eax
0x671EF1: jz      short loc_671EFA
0x671EF3: cmp     [esp+0A0h+var_4C], 0
0x671EF8: jz      short loc_671F05
0x671EFA: push    0; controlId
0x671EFC: mov     ecx, esi; this
0x671EFE: call    InputGlobals__SendControlPress
0x671F03: jmp     short loc_671F0C
0x671F05: mov     byte ptr [ebx+58Ch], 0
0x671F0C: cmp     [esp+0A0h+var_4C], 0
0x671F11: jnz     short loc_671F85
0x671F13: push    1; a3
0x671F15: push    9; a2
0x671F17: mov     ecx, esi; this
0x671F19: call    InputGlobals__QueryControlState
0x671F1E: test    eax, eax
0x671F20: jz      short loc_671F85
0x671F22: mov     eax, [ebx]
0x671F24: mov     edx, [eax+1A0h]
0x671F2A: mov     ecx, ebx
0x671F2C: call    edx
0x671F2E: test    al, al
0x671F30: jnz     short loc_671F85
0x671F32: mov     eax, [ebx]
0x671F34: mov     edx, [eax+198h]
0x671F3A: push    0
0x671F3C: mov     ecx, ebx
0x671F3E: call    edx
0x671F40: test    al, al
0x671F42: jnz     short loc_671F85
0x671F44: mov     eax, [ebx]
0x671F46: mov     edx, [eax+19Ch]
0x671F4C: mov     ecx, ebx
0x671F4E: call    edx
0x671F50: test    al, al
0x671F52: jnz     short loc_671F85
0x671F54: mov     ecx, ebx; this
0x671F56: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x671F5B: cmp     eax, 5
0x671F5E: jz      short loc_671F85
0x671F60: mov     ecx, ebx; this
0x671F62: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x671F67: cmp     eax, 3
0x671F6A: jz      short loc_671F85
0x671F6C: mov     eax, 400h
0x671F71: test    [esp+0A0h+var_8C], eax
0x671F75: jz      short loc_671F81
0x671F77: and     [esp+0A0h+var_8C], 0FBFFh
0x671F7F: jmp     short loc_671F85
0x671F81: or      [esp+0A0h+var_8C], eax
0x671F85: mov     eax, [esp+0A0h+var_78]
0x671F89: cmp     word ptr [eax+0B6h], 0
0x671F91: ja      short loc_671F97
0x671F93: xor     eax, eax
0x671F95: jmp     short loc_671F9F
0x671F97: mov     eax, [eax+0B0h]
0x671F9D: mov     eax, [eax]
0x671F9F: fld1
0x671FA1: mov     edx, [ebx+30h]
0x671FA4: fstp    [esp+0A0h+var_64]
0x671FA8: lea     esi, [eax+30h]
0x671FAB: fldz
0x671FAD: mov     eax, [ebx+34h]
0x671FB0: fst     [esp+0A0h+a2]
0x671FB4: mov     ecx, 9
0x671FB9: fst     [esp+0A0h+var_5C]
0x671FBD: lea     edi, [esp+0A0h+var_24]
0x671FC1: rep movsd
0x671FC3: fld     [esp+0A0h+var_20]
0x671FCA: mov     ecx, [ebx+2Ch]
0x671FCD: mov     [esp+0A0h+var_58.x], ecx
0x671FD1: mov     [esp+0A0h+var_30], ecx
0x671FD5: mov     ecx, [esp+0A0h+var_64]
0x671FD9: mov     [esp+0A0h+var_44], ecx
0x671FDD: mov     ecx, [ebx+8]
0x671FE0: fstp    [esp+0A0h+var_64]
0x671FE4: fld     [esp+0A0h+var_14]
0x671FEB: mov     [esp+0A0h+var_58.y], edx
0x671FEF: mov     [esp+0A0h+var_2C], edx
0x671FF3: mov     edx, [esp+0A0h+a2]
0x671FF7: mov     [esp+0A0h+var_58.z], eax
0x671FFB: fstp    [esp+0A0h+a2]
0x671FFF: mov     [esp+0A0h+var_28], eax
0x672003: mov     eax, [esp+0A0h+var_5C]
0x672007: fld     [esp+0A0h+var_8]
0x67200E: shr     ecx, 4
0x672011: test    cl, 1
0x672014: fstp    [esp+0A0h+var_5C]
0x672018: mov     [esp+0A0h+var_40], edx
0x67201C: mov     [esp+0A0h+var_3C], eax
0x672020: jnz     short loc_672033
0x672022: lea     ecx, [esp+0A0h+var_64]
0x672026: fstp    [esp+0A0h+var_5C]
0x67202A: call    sub_43F350
0x67202F: fstp    st
0x672031: jmp     short loc_672053
0x672033: fstp    st
0x672035: fld     [esp+0A0h+var_24]
0x672039: fstp    [esp+0A0h+var_44]
0x67203D: fld     [esp+0A0h+var_18]
0x672044: fstp    [esp+0A0h+var_40]
0x672048: fld     [esp+0A0h+var_C]
0x67204F: fstp    [esp+0A0h+var_3C]
0x672053: cmp     dword ptr [ebx+57Ch], 2
0x67205A: mov     [esp+0A0h+var_85], 0
0x67205F: jnz     short loc_672073
0x672061: fld     [ebp+arg_0]
0x672064: push    ecx
0x672065: mov     ecx, ebx
0x672067: fstp    [esp+0A4h+duration]; float
0x67206A: call    sub_66DFD0
0x67206F: mov     [esp+0A0h+var_85], al
0x672073: mov     ecx, ebx
0x672075: call    sub_663740
0x67207A: mov     edx, ds:0B14ED0h
0x672080: mov     edi, [esp+0A0h+var_7C]
0x672084: push    edx; a3
0x672085: push    0; whichDevice
0x672087: mov     ecx, edi; this
0x672089: call    InputGlobals__GetJoystickAxisMovement
0x67208E: mov     [esp+0A0h+var_78], eax
0x672092: fild    [esp+0A0h+var_78]
0x672096: fmul    dword ptr ds:0B14EF8h
0x67209C: call    Double_To_SInt32
0x6720A1: mov     esi, eax
0x6720A3: mov     eax, ds:0B14EC8h
0x6720A8: push    eax; a3
0x6720A9: push    0; whichDevice
0x6720AB: mov     ecx, edi; this
0x6720AD: call    InputGlobals__GetJoystickAxisMovement
0x6720B2: mov     [esp+0A0h+var_78], eax
0x6720B6: fild    [esp+0A0h+var_78]
0x6720BA: fmul    dword ptr ds:0B14EF0h
0x6720C0: call    Double_To_SInt32
0x6720C5: test    esi, esi
0x6720C7: mov     [esp+0A0h+var_68], eax
0x6720CB: jz      short loc_672118
0x6720CD: jle     short loc_6720D3
0x6720CF: push    3
0x6720D1: jmp     short loc_6720D9
0x6720D3: test    esi, esi
0x6720D5: jge     short loc_6720E0
0x6720D7: push    2; controlId
0x6720D9: mov     ecx, edi; this
0x6720DB: call    InputGlobals__SendControlPress
0x6720E0: mov     eax, esi
0x6720E2: cdq
0x6720E3: xor     eax, edx
0x6720E5: sub     eax, edx
0x6720E7: mov     [esp+0A0h+var_78], eax
0x6720EB: fild    [esp+0A0h+var_78]
0x6720EF: fmul    qword ptr ds:0A73E80h
0x6720F5: fstp    dword ptr ds:0B14E5Ch
0x6720FB: fld     dword ptr ds:0A35AA4h
0x672101: fcom    dword ptr ds:0B14E5Ch
0x672107: fnstsw  ax
0x672109: test    ah, 5
0x67210C: jp      short loc_672116
0x67210E: fstp    dword ptr ds:0B14E5Ch
0x672114: jmp     short loc_672118
0x672116: fstp    st
0x672118: mov     eax, [esp+0A0h+var_68]
0x67211C: cdq
0x67211D: mov     ecx, eax
0x67211F: xor     ecx, edx
0x672121: sub     ecx, edx
0x672123: mov     eax, esi
0x672125: cdq
0x672126: mov     edi, eax
0x672128: xor     edi, edx
0x67212A: sub     edi, edx
0x67212C: cmp     ecx, edi
0x67212E: mov     [esp+0A0h+var_84], ecx
0x672132: mov     [esp+0A0h+var_78], edi
0x672136: jge     short loc_67215A
0x672138: test    esi, esi
0x67213A: fild    [esp+0A0h+var_78]
0x67213E: fmul    qword ptr ds:0A73E80h
0x672144: fstp    dword ptr ds:0B14E58h
0x67214A: jge     short loc_672153
0x67214C: or      [esp+0A0h+var_8C], 4
0x672151: jmp     short loc_67218B
0x672153: or      [esp+0A0h+var_8C], 8
0x672158: jmp     short loc_67218B
0x67215A: mov     eax, [esp+0A0h+var_68]
0x67215E: test    eax, eax
0x672160: jz      short loc_67218B
0x672162: jge     short loc_672168
0x672164: push    0
0x672166: jmp     short loc_67216E
0x672168: test    eax, eax
0x67216A: jle     short loc_67217B
0x67216C: push    1; controlId
0x67216E: mov     ecx, [esp+0A4h+var_7C]; this
0x672172: call    InputGlobals__SendControlPress
0x672177: mov     ecx, [esp+0A0h+var_84]
0x67217B: fild    [esp+0A0h+var_84]
0x67217F: fmul    qword ptr ds:0A73E80h
0x672185: fstp    dword ptr ds:0B14E58h
0x67218B: fld1
0x67218D: fcom    dword ptr ds:0B14E58h
0x672193: fnstsw  ax
0x672195: test    ah, 5
0x672198: jp      short loc_6721A2
0x67219A: fstp    dword ptr ds:0B14E58h
0x6721A0: jmp     short loc_6721A4
0x6721A2: fstp    st
0x6721A4: cmp     edi, 62h ; 'b'
0x6721A7: jg      short loc_6721AE
0x6721A9: cmp     ecx, 62h ; 'b'
0x6721AC: jle     short loc_6721B9
0x6721AE: mov     ecx, [esp+0A0h+var_7C]; this
0x6721B2: push    0Ah; controlId
0x6721B4: call    InputGlobals__SendControlPress
0x6721B9: cmp     byte ptr [ebx+58Bh], 0
0x6721C0: push    1; a3
0x6721C2: push    0Ah; a2
0x6721C4: jz      short loc_6721F6
0x6721C6: mov     edi, [esp+0A8h+var_7C]
0x6721CA: mov     ecx, edi; this
0x6721CC: call    InputGlobals__QueryControlState
0x6721D1: test    eax, eax
0x6721D3: jnz     short loc_67221F
0x6721D5: push    eax; a3
0x6721D6: push    0Ah; a2
0x6721D8: mov     ecx, edi; this
0x6721DA: call    InputGlobals__QueryControlState
0x6721DF: test    eax, eax
0x6721E1: jnz     short loc_67221F
0x6721E3: push    0Ah; controlId
0x6721E5: mov     ecx, edi; this
0x6721E7: call    InputGlobals__SendControlPress
0x6721EC: or      [esp+0A0h+var_8C], 200h
0x6721F4: jmp     short loc_672223
0x6721F6: mov     esi, [esp+0A8h+var_7C]
0x6721FA: mov     ecx, esi; this
0x6721FC: call    InputGlobals__QueryControlState
0x672201: test    eax, eax
0x672203: jnz     short loc_672213
0x672205: push    eax; a3
0x672206: push    0Ah; a2
0x672208: mov     ecx, esi; this
0x67220A: call    InputGlobals__QueryControlState
0x67220F: test    eax, eax
0x672211: jz      short loc_67221F
0x672213: or      [esp+0A0h+var_8C], 200h
0x67221B: mov     edi, esi
0x67221D: jmp     short loc_672223
0x67221F: mov     edi, [esp+0A0h+var_7C]
0x672223: mov     ecx, ebx
0x672225: call    sub_5E65B0
0x67222A: fstp    [esp+0A0h+var_78]
0x67222E: cmp     byte ptr [ebx+748h], 0
0x672235: fld     dword ptr ds:0B14E58h
0x67223B: fmul    [esp+0A0h+var_78]
0x67223F: fstp    [esp+0A0h+var_78]
0x672243: fld     [esp+0A0h+var_78]
0x672247: fst     [esp+0A0h+var_78]
0x67224B: fld     [esp+0A0h+var_78]
0x67224F: fld     st
0x672251: fmul    [esp+0A0h+var_44]
0x672255: fstp    [esp+0A0h+var_44]
0x672259: fld     [esp+0A0h+var_40]
0x67225D: fmul    st, st(1)
0x67225F: fstp    [esp+0A0h+var_40]
0x672263: fmul    [esp+0A0h+var_3C]
0x672267: fstp    [esp+0A0h+var_3C]
0x67226B: fstp    [esp+0A0h+var_78]
0x67226F: fld     [esp+0A0h+var_78]
0x672273: fld     st
0x672275: fmul    [esp+0A0h+var_64]
0x672279: fstp    [esp+0A0h+var_64]
0x67227D: fld     [esp+0A0h+a2]
0x672281: fmul    st, st(1)
0x672283: fstp    [esp+0A0h+a2]
0x672287: fmul    [esp+0A0h+var_5C]
0x67228B: fstp    [esp+0A0h+var_5C]
0x67228F: jnz     loc_6723F6
0x672295: push    1; a3
0x672297: push    0; a2
0x672299: mov     ecx, edi; this
0x67229B: call    InputGlobals__QueryControlState
0x6722A0: test    eax, eax
0x6722A2: jnz     short loc_6722B1
0x6722A4: push    eax; a3
0x6722A5: push    eax; a2
0x6722A6: mov     ecx, edi; this
0x6722A8: call    InputGlobals__QueryControlState
0x6722AD: test    eax, eax
0x6722AF: jz      short loc_6722EC
0x6722B1: fld     [esp+0A0h+var_58.x]
0x6722B5: mov     eax, [esp+0A0h+var_8C]
0x6722B9: test    eax, 200h
0x6722BE: fadd    [esp+0A0h+var_64]
0x6722C2: fstp    [esp+0A0h+var_58.x]
0x6722C6: fld     [esp+0A0h+var_58.y]
0x6722CA: fadd    [esp+0A0h+a2]
0x6722CE: fstp    [esp+0A0h+var_58.y]
0x6722D2: fld     [esp+0A0h+var_58.z]
0x6722D6: fadd    [esp+0A0h+var_5C]
0x6722DA: fstp    [esp+0A0h+var_58.z]
0x6722DE: jnz     short loc_6722E5
0x6722E0: or      eax, 100h
0x6722E5: or      eax, 1
0x6722E8: mov     [esp+0A0h+var_8C], eax
0x6722EC: push    1; a3
0x6722EE: push    1; a2
0x6722F0: mov     ecx, edi; this
0x6722F2: call    InputGlobals__QueryControlState
0x6722F7: test    eax, eax
0x6722F9: jnz     short loc_672309
0x6722FB: push    eax; a3
0x6722FC: push    1; a2
0x6722FE: mov     ecx, edi; this
0x672300: call    InputGlobals__QueryControlState
0x672305: test    eax, eax
0x672307: jz      short loc_672344
0x672309: fld     [esp+0A0h+var_58.x]
0x67230D: mov     eax, [esp+0A0h+var_8C]
0x672311: test    eax, 200h
0x672316: fsub    [esp+0A0h+var_64]
0x67231A: fstp    [esp+0A0h+var_58.x]
0x67231E: fld     [esp+0A0h+var_58.y]
0x672322: fsub    [esp+0A0h+a2]
0x672326: fstp    [esp+0A0h+var_58.y]
0x67232A: fld     [esp+0A0h+var_58.z]
0x67232E: fsub    [esp+0A0h+var_5C]
0x672332: fstp    [esp+0A0h+var_58.z]
0x672336: jnz     short loc_67233D
0x672338: or      eax, 100h
0x67233D: or      eax, 2
0x672340: mov     [esp+0A0h+var_8C], eax
0x672344: push    1; a3
0x672346: push    2; a2
0x672348: mov     ecx, edi; this
0x67234A: call    InputGlobals__QueryControlState
0x67234F: test    eax, eax
0x672351: jnz     short loc_672361
0x672353: push    eax; a3
0x672354: push    2; a2
0x672356: mov     ecx, edi; this
0x672358: call    InputGlobals__QueryControlState
0x67235D: test    eax, eax
0x67235F: jz      short loc_67239C
0x672361: fld     [esp+0A0h+var_58.x]
0x672365: mov     eax, [esp+0A0h+var_8C]
0x672369: test    eax, 200h
0x67236E: fsub    [esp+0A0h+var_44]
0x672372: fstp    [esp+0A0h+var_58.x]
0x672376: fld     [esp+0A0h+var_58.y]
0x67237A: fsub    [esp+0A0h+var_40]
0x67237E: fstp    [esp+0A0h+var_58.y]
0x672382: fld     [esp+0A0h+var_58.z]
0x672386: fsub    [esp+0A0h+var_3C]
0x67238A: fstp    [esp+0A0h+var_58.z]
0x67238E: jnz     short loc_672395
0x672390: or      eax, 100h
0x672395: or      eax, 4
0x672398: mov     [esp+0A0h+var_8C], eax
0x67239C: push    1; a3
0x67239E: push    3; a2
0x6723A0: mov     ecx, edi; this
0x6723A2: call    InputGlobals__QueryControlState
0x6723A7: test    eax, eax
0x6723A9: jnz     short loc_6723B9
0x6723AB: push    eax; a3
0x6723AC: push    3; a2
0x6723AE: mov     ecx, edi; this
0x6723B0: call    InputGlobals__QueryControlState
0x6723B5: test    eax, eax
0x6723B7: jz      short loc_6723F6
0x6723B9: fld     [esp+0A0h+var_58.x]
0x6723BD: mov     eax, [esp+0A0h+var_8C]
0x6723C1: test    eax, 200h
0x6723C6: fadd    [esp+0A0h+var_44]
0x6723CA: fstp    [esp+0A0h+var_58.x]
0x6723CE: fld     [esp+0A0h+var_58.y]
0x6723D2: fadd    [esp+0A0h+var_40]
0x6723D6: fstp    [esp+0A0h+var_58.y]
0x6723DA: fld     [esp+0A0h+var_58.z]
0x6723DE: fadd    [esp+0A0h+var_3C]
0x6723E2: fstp    [esp+0A0h+var_58.z]
0x6723E6: jnz     short loc_6723ED
0x6723E8: or      eax, 100h
0x6723ED: or      eax, 8
0x6723F0: mov     [esp+0A0h+var_8C], eax
0x6723F4: jmp     short loc_6723FA
0x6723F6: mov     eax, [esp+0A0h+var_8C]
0x6723FA: mov     esi, [esp+0A0h+var_4C]
0x6723FE: test    esi, esi
0x672400: jz      loc_672595
0x672406: and     eax, 0FFCFh
0x67240B: test    al, 4
0x67240D: mov     [esp+0A0h+var_8C], eax
0x672411: jz      short loc_67248B
0x672413: fild    dword ptr ds:0B37520h
0x672419: fld     [ebp+arg_0]
0x67241C: fld     st
0x67241E: fmulp   st(2), st
0x672420: fld     dword ptr ds:0B3BCECh
0x672426: faddp   st(2), st
0x672428: fxch    st(1)
0x67242A: fstp    dword ptr ds:0B3BCECh
0x672430: fild    dword ptr ds:0B37518h
0x672436: fstp    [esp+0A0h+var_84]
0x67243A: fld     dword ptr ds:0B3BCECh
0x672440: fld     [esp+0A0h+var_84]
0x672444: fcom    st(1)
0x672446: fnstsw  ax
0x672448: fstp    st(1)
0x67244A: test    ah, 5
0x67244D: jp      short loc_672457
0x67244F: fstp    dword ptr ds:0B3BCECh
0x672455: jmp     short loc_672459
0x672457: fstp    st
0x672459: fld     dword ptr ds:0B3BCECh
0x67245F: push    ecx
0x672460: fmul    qword ptr ds:0A73E78h
0x672466: mov     ecx, esi
0x672468: fmulp   st(1), st
0x67246A: fmul    dword ptr ds:0B14E5Ch
0x672470: fstp    [esp+0A4h+var_78]
0x672474: fld     [esp+0A4h+var_78]
0x672478: fstp    [esp+0A4h+duration]; float
0x67247B: call    sub_659B90
0x672480: or      [esp+0A0h+var_8C], 10h
0x672485: mov     eax, [esp+0A0h+var_8C]
0x672489: jmp     short loc_672493
0x67248B: fldz
0x67248D: fstp    dword ptr ds:0B3BCECh
0x672493: test    al, 8
0x672495: jz      short loc_67250B
0x672497: fild    dword ptr ds:0B37520h
0x67249D: fld     [ebp+arg_0]
0x6724A0: fld     st
0x6724A2: fmulp   st(2), st
0x6724A4: fld     dword ptr ds:0B3BCE8h
0x6724AA: faddp   st(2), st
0x6724AC: fxch    st(1)
0x6724AE: fstp    dword ptr ds:0B3BCE8h
0x6724B4: fild    dword ptr ds:0B37518h
0x6724BA: fstp    [esp+0A0h+var_84]
0x6724BE: fld     dword ptr ds:0B3BCE8h
0x6724C4: fld     [esp+0A0h+var_84]
0x6724C8: fcom    st(1)
0x6724CA: fnstsw  ax
0x6724CC: fstp    st(1)
0x6724CE: test    ah, 5
0x6724D1: jp      short loc_6724DB
0x6724D3: fstp    dword ptr ds:0B3BCE8h
0x6724D9: jmp     short loc_6724DD
0x6724DB: fstp    st
0x6724DD: fld     dword ptr ds:0B3BCE8h
0x6724E3: push    ecx
0x6724E4: fmul    qword ptr ds:0A31C78h
0x6724EA: mov     ecx, esi
0x6724EC: fmulp   st(1), st
0x6724EE: fmul    dword ptr ds:0B14E5Ch
0x6724F4: fstp    [esp+0A4h+var_78]
0x6724F8: fld     [esp+0A4h+var_78]
0x6724FC: fstp    [esp+0A4h+duration]; float
0x6724FF: call    sub_659B90
0x672504: or      [esp+0A0h+var_8C], 20h
0x672509: jmp     short loc_672513
0x67250B: fldz
0x67250D: fstp    dword ptr ds:0B3BCE8h
0x672513: mov     eax, [esp+0A0h+var_8C]
0x672517: mov     ecx, [esi+58h]
0x67251A: mov     edx, [ecx]
0x67251C: and     eax, 0FFF3h
0x672521: mov     [esp+0A0h+var_8C], eax
0x672525: push    eax
0x672526: mov     eax, [edx+2C8h]
0x67252C: call    eax
0x67252E: test    byte ptr [esp+0A0h+var_8C], 1
0x672533: jz      short loc_672581
0x672535: test    byte ptr [esp+0A0h+var_8C], 3Eh
0x67253A: jnz     short loc_672581
0x67253C: push    1; a3
0x67253E: push    0Dh; a2
0x672540: mov     ecx, edi; this
0x672542: call    InputGlobals__QueryControlState
0x672547: test    eax, eax
0x672549: jz      short loc_672581
0x67254B: mov     edx, [ebx]
0x67254D: mov     eax, [edx+25Ch]
0x672553: mov     ecx, ebx
0x672555: call    eax
0x672557: test    al, al
0x672559: jnz     short loc_672581
0x67255B: mov     ecx, esi; this
0x67255D: call    MobileObject_GetCharProxy
0x672562: mov     ecx, [eax+1F4h]
0x672568: shr     ecx, 0Ah
0x67256B: test    cl, 1
0x67256E: jz      short loc_67257C
0x672570: mov     edx, [esi]
0x672572: mov     eax, [edx+1B8h]
0x672578: mov     ecx, esi
0x67257A: call    eax
0x67257C: mov     byte ptr [esp+0A0h+var_94+7], 1
0x672581: mov     ecx, ebx
0x672583: call    sub_4A9720
0x672588: push    ecx
0x672589: mov     ecx, esi; int
0x67258B: fstp    [esp+0A4h+duration]; float
0x67258E: call    sub_65A650
0x672593: jmp     short loc_6725A7
0x672595: mov     ecx, [ebx+58h]
0x672598: mov     edx, [ecx]
0x67259A: mov     eax, [esp+0A0h+var_8C]
0x67259E: mov     edx, [edx+2C8h]
0x6725A4: push    eax
0x6725A5: call    edx
0x6725A7: mov     ecx, ebx; Concurrency::details::SchedulerBase *
0x6725A9: call    sub_66C650
0x6725AE: mov     al, [ebx+588h]
0x6725B4: mov     edx, [ebx]
0x6725B6: mov     byte ptr [esp+0A0h+var_48+1], al
0x6725BA: mov     eax, [edx+19Ch]
0x6725C0: mov     ecx, ebx
0x6725C2: mov     byte ptr [ebx+588h], 1
0x6725C9: call    eax
0x6725CB: test    al, al
0x6725CD: jnz     loc_672B9B
0x6725D3: cmp     [ebx+5C0h], al
0x6725D9: jnz     loc_672B9B
0x6725DF: mov     edx, [ebx]
0x6725E1: mov     eax, [edx+1A0h]
0x6725E7: mov     ecx, ebx
0x6725E9: call    eax
0x6725EB: test    al, al
0x6725ED: jnz     loc_672B9B
0x6725F3: mov     ecx, ebx; this
0x6725F5: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x6725FA: test    eax, eax
0x6725FC: jnz     loc_672B9B
0x672602: mov     ecx, ebx
0x672604: call    Actor_GetCurrentAction
0x672609: cmp     eax, 8
0x67260C: jz      loc_672B9B
0x672612: mov     ecx, [ebx+58h]
0x672615: mov     edx, [ecx]
0x672617: mov     eax, [edx+36Ch]
0x67261D: call    eax
0x67261F: test    eax, eax
0x672621: jnz     loc_672B9B
0x672627: mov     eax, [ebx+57Ch]
0x67262D: cmp     eax, 2
0x672630: jz      loc_672927
0x672636: cmp     eax, 3
0x672639: jz      loc_672927
0x67263F: mov     ecx, [ebx+58h]
0x672642: mov     edx, [ecx]
0x672644: mov     eax, [edx+2DCh]
0x67264A: call    eax
0x67264C: test    al, al
0x67264E: jz      short loc_672674
0x672650: cmp     byte ptr ds:0B3BB04h, 0
0x672657: jz      short loc_672662
0x672659: cmp     byte ptr ds:0B3BB05h, 0
0x672660: jz      short loc_672674
0x672662: mov     ecx, ebx
0x672664: call    Actor_ProcessControlAttack
0x672669: test    al, al
0x67266B: jz      short loc_672686
0x67266D: mov     byte ptr [esp+0A0h+var_94+7], 1
0x672672: jmp     short loc_672686
0x672674: fldz
0x672676: mov     dword ptr ds:0B3BAF4h, 0
0x672680: fstp    dword ptr ds:0B3BAF8h
0x672686: push    1; a3
0x672688: push    6; a2
0x67268A: mov     ecx, edi; this
0x67268C: call    InputGlobals__QueryControlState
0x672691: test    eax, eax
0x672693: jnz     short loc_6726A7
0x672695: push    eax; a3
0x672696: push    6; a2
0x672698: mov     ecx, edi; this
0x67269A: call    InputGlobals__QueryControlState
0x67269F: test    eax, eax
0x6726A1: jz      loc_6727DD
0x6726A7: mov     ecx, [ebx+58h]
0x6726AA: mov     edx, [ecx]
0x6726AC: mov     eax, [edx+2D0h]
0x6726B2: call    eax
0x6726B4: cmp     eax, 6
0x6726B7: jz      loc_6727DD
0x6726BD: cmp     byte ptr ds:0B1501Ch, 0
0x6726C4: jz      loc_6727B7
0x6726CA: mov     ecx, ebx
0x6726CC: call    Actor_GetCurrentAction
0x6726D1: cmp     eax, 5
0x6726D4: jnz     loc_6727B7
0x6726DA: mov     byte ptr ds:0B3BAEAh, 1
0x6726E1: fld     dword ptr [ebx+598h]
0x6726E7: mov     ecx, offset g_DefaulFOV
0x6726EC: fstp    qword ptr [esp+0A0h+var_78]
0x6726F0: mov     byte ptr ds:0B1501Ch, 0
0x6726F7: call    GameSetting_GetSafeFloatPointer
0x6726FC: fld     dword ptr [eax]
0x6726FE: fcomp   qword ptr [esp+0A0h+var_78]
0x672702: fnstsw  ax
0x672704: test    ah, 41h
0x672707: jnz     short loc_672788
0x672709: mov     ecx, offset g_DefaulFOV
0x67270E: call    GameSetting_GetSafeFloatPointer
0x672713: fld     dword ptr [eax]
0x672715: mov     ecx, offset flt_B370A0
0x67271A: fstp    qword ptr [esp+0A0h+var_78]
0x67271E: call    GameSetting_GetSafeFloatPointer
0x672723: fld     dword ptr [eax]
0x672725: fsubr   qword ptr [esp+0A0h+var_78]
0x672729: mov     ecx, offset g_DefaulFOV
0x67272E: fstp    [esp+0A0h+var_78]
0x672732: fld     [esp+0A0h+var_78]
0x672736: fabs
0x672738: fstp    [esp+0A0h+var_78]
0x67273C: fld     [esp+0A0h+var_78]
0x672740: fstp    [esp+0A0h+var_78]
0x672744: call    GameSetting_GetSafeFloatPointer
0x672749: fld     dword ptr [eax]
0x67274B: mov     ecx, offset flt_B370A8
0x672750: fsub    dword ptr [ebx+598h]
0x672756: fdiv    [esp+0A0h+var_78]
0x67275A: fstp    qword ptr [esp+0A0h+var_78]
0x67275E: call    GameSetting_GetSafeFloatPointer
0x672763: fld     dword ptr [eax]
0x672765: fmul    qword ptr [esp+0A0h+var_78]
0x672769: mov     ecx, offset flt_B370B0
0x67276E: fstp    qword ptr [esp+0A0h+var_78]
0x672772: call    GameSetting_GetSafeFloatPointer
0x672777: fld     dword ptr [eax]
0x672779: fadd    qword ptr [esp+0A0h+var_78]
0x67277D: fstp    dword ptr ds:0B3BAFCh
0x672783: jmp     loc_672821
0x672788: mov     ecx, offset flt_B370B0
0x67278D: call    GameSetting_GetSafeFloatPointer
0x672792: fld     dword ptr ds:0B3BAFCh
0x672798: fld     dword ptr [eax]
0x67279A: fcompp
0x67279C: fnstsw  ax
0x67279E: test    ah, 5
0x6727A1: jp      short loc_672821
0x6727A3: mov     ecx, offset flt_B370B0
0x6727A8: call    GameSetting_GetSafeFloatPointer
0x6727AD: fld     dword ptr [eax]
0x6727AF: fstp    dword ptr ds:0B3BAFCh
0x6727B5: jmp     short loc_672821
0x6727B7: cmp     byte ptr ds:0B3BAEAh, 0
0x6727BE: mov     byte ptr ds:0B1501Ch, 1
0x6727C5: jnz     short loc_672821
0x6727C7: cmp     byte ptr ds:0B3BB04h, 0
0x6727CE: jz      short loc_6727D9
0x6727D0: cmp     byte ptr ds:0B3BB05h, 0
0x6727D7: jz      short loc_672821
0x6727D9: push    1
0x6727DB: jmp     short loc_672815
0x6727DD: push    2; a3
0x6727DF: push    6; a2
0x6727E1: mov     ecx, edi; this
0x6727E3: call    InputGlobals__QueryControlState
0x6727E8: test    eax, eax
0x6727EA: jnz     short loc_6727FA
0x6727EC: push    eax; a3
0x6727ED: push    6; a2
0x6727EF: mov     ecx, edi; this
0x6727F1: call    InputGlobals__QueryControlState
0x6727F6: test    eax, eax
0x6727F8: jnz     short loc_672821
0x6727FA: mov     byte ptr ds:0B3BAEAh, 0
0x672801: mov     ecx, [ebx+58h]
0x672804: mov     edx, [ecx]
0x672806: mov     eax, [edx+2D0h]
0x67280C: call    eax
0x67280E: cmp     eax, 6
0x672811: jnz     short loc_672821
0x672813: push    0; float
0x672815: mov     ecx, ebx
0x672817: call    sub_5F4AE0
0x67281C: mov     byte ptr [esp+0A0h+var_94+7], 1
0x672821: mov     ecx, ebx
0x672823: call    Player_GetCurrentMagicItem
0x672828: test    eax, eax
0x67282A: jz      loc_672939
0x672830: mov     ecx, [ebx+58h]
0x672833: mov     edx, [ecx]
0x672835: mov     eax, [edx+2DCh]
0x67283B: call    eax
0x67283D: test    al, al
0x67283F: jz      loc_672939
0x672845: push    1; a3
0x672847: push    7; a2
0x672849: mov     ecx, edi; this
0x67284B: call    InputGlobals__QueryControlState
0x672850: test    eax, eax
0x672852: jnz     short loc_672866
0x672854: push    eax; a3
0x672855: push    7; a2
0x672857: mov     ecx, edi; this
0x672859: call    InputGlobals__QueryControlState
0x67285E: test    eax, eax
0x672860: jz      loc_67291E
0x672866: mov     ecx, ebx
0x672868: call    Actor_GetCurrentAction
0x67286D: cmp     eax, 2
0x672870: jz      loc_67291E
0x672876: mov     ecx, ebx
0x672878: call    Actor_GetCurrentAction
0x67287D: cmp     eax, 4
0x672880: jz      loc_67291E
0x672886: mov     ecx, ebx
0x672888: call    Actor_GetCurrentAction
0x67288D: cmp     eax, 5
0x672890: jz      loc_67291E
0x672896: mov     ecx, ebx
0x672898: call    Actor_GetCurrentAction
0x67289D: cmp     eax, 3
0x6728A0: jz      short loc_67291E
0x6728A2: mov     eax, [ebx+628h]
0x6728A8: test    eax, eax
0x6728AA: jz      short loc_6728C6
0x6728AC: mov     edx, [ebx]
0x6728AE: push    0
0x6728B0: push    eax
0x6728B1: mov     eax, [edx+2D0h]
0x6728B7: mov     ecx, ebx
0x6728B9: call    eax
0x6728BB: mov     esi, [esp+0A0h+var_4C]
0x6728BF: mov     byte ptr [esp+0A0h+var_94+7], 1
0x6728C4: jmp     short loc_672939
0x6728C6: cmp     byte ptr ds:0B3BCE4h, 0
0x6728CD: jnz     short loc_672913
0x6728CF: mov     edi, [ebx+5Ch]
0x6728D2: push    0
0x6728D4: push    0
0x6728D6: lea     esi, [ebx+5Ch]
0x6728D9: push    0
0x6728DB: mov     ecx, ebx
0x6728DD: call    Player_GetCurrentMagicItem
0x6728E2: mov     edx, [edi+1Ch]
0x6728E5: push    eax
0x6728E6: mov     ecx, esi
0x6728E8: call    edx
0x6728EA: push    0
0x6728EC: push    0
0x6728EE: mov     ecx, ebx
0x6728F0: mov     byte ptr [esp+0A8h+var_80+3], al
0x6728F4: call    Player_GetCurrentMagicItem
0x6728F9: push    eax
0x6728FA: mov     ecx, esi
0x6728FC: call    MagicCaster_CastMagicItem
0x672901: cmp     byte ptr [esp+0A0h+var_80+3], 0
0x672906: mov     edi, [esp+0A0h+var_7C]
0x67290A: jnz     short loc_672913
0x67290C: mov     byte ptr ds:0B3BCE4h, 1
0x672913: mov     esi, [esp+0A0h+var_4C]
0x672917: mov     byte ptr [esp+0A0h+var_94+7], 1
0x67291C: jmp     short loc_672939
0x67291E: mov     byte ptr ds:0B3BCE4h, 0
0x672925: jmp     short loc_672939
0x672927: fldz
0x672929: mov     dword ptr ds:0B3BAF4h, 0
0x672933: fstp    dword ptr ds:0B3BAF8h
0x672939: test    esi, esi
0x67293B: jnz     loc_672B94
0x672941: push    1; a3
0x672943: push    0Dh; a2
0x672945: mov     ecx, edi; this
0x672947: call    InputGlobals__QueryControlState
0x67294C: test    eax, eax
0x67294E: jz      loc_672B94
0x672954: mov     eax, [ebx]
0x672956: mov     edx, [eax+25Ch]
0x67295C: mov     ecx, ebx
0x67295E: call    edx
0x672960: test    al, al
0x672962: jnz     loc_672B94
0x672968: mov     eax, [ebx]
0x67296A: mov     edx, [eax+164h]
0x672970: push    3
0x672972: mov     ecx, ebx
0x672974: call    edx
0x672976: mov     ecx, eax
0x672978: call    ActorAnimData_GetAnimGroupFromField8Value
0x67297D: push    eax
0x67297E: call    sub_51ACC0
0x672983: add     esp, 4
0x672986: test    al, al
0x672988: jnz     loc_672B94
0x67298E: mov     ecx, ebx
0x672990: call    Actor_GetCurrentAction
0x672995: cmp     eax, 9
0x672998: jz      loc_672B94
0x67299E: mov     ecx, ebx
0x6729A0: call    sub_5E5640
0x6729A5: test    al, al
0x6729A7: jz      short loc_6729BA
0x6729A9: push    1Ah
0x6729AB: mov     ecx, ebx
0x6729AD: call    Actor_GetSkillMasteryLevel
0x6729B2: test    eax, eax
0x6729B4: jle     loc_672B94
0x6729BA: mov     ecx, ebx
0x6729BC: call    sub_5EC180
0x6729C1: test    al, al
0x6729C3: jnz     short loc_6729D5
0x6729C5: mov     ecx, ebx
0x6729C7: call    Actor_IsSwimming
0x6729CC: test    al, al
0x6729CE: mov     byte ptr [esp+0A0h+var_80+3], 1
0x6729D3: jz      short loc_6729DA
0x6729D5: mov     byte ptr [esp+0A0h+var_80+3], 0
0x6729DA: push    0; a3
0x6729DC: push    6; a2
0x6729DE: mov     ecx, edi; this
0x6729E0: mov     byte ptr [esp+0A8h+var_94+7], 0
0x6729E5: call    InputGlobals__QueryControlState
0x6729EA: test    eax, eax
0x6729EC: mov     ecx, ebx
0x6729EE: setnz   byte ptr [esp+0A0h+var_48+3]
0x6729F3: call    Actor_IsBlocking
0x6729F8: cmp     byte ptr [esp+0A0h+var_48+3], 0
0x6729FD: mov     byte ptr [esp+0A0h+var_48+2], al
0x672A01: jz      short loc_672A79
0x672A03: call    sub_579540
0x672A08: test    eax, eax
0x672A0A: jnz     short loc_672A4F
0x672A0C: push    1Ah
0x672A0E: mov     ecx, ebx
0x672A10: call    Actor_GetSkillMasteryLevel
0x672A15: cmp     eax, 2
0x672A18: jl      short loc_672A4F
0x672A1A: mov     eax, [esp+0A0h+var_8C]
0x672A1E: or      eax, 0Fh
0x672A21: test    ax, ax
0x672A24: jz      short loc_672A4F
0x672A26: mov     ecx, ebx; this
0x672A28: call    MobileObject_GetCharProxy
0x672A2D: lea     ecx, [eax+1E0h]
0x672A33: call    sub_88D370
0x672A38: test    eax, eax
0x672A3A: jnz     short loc_672AA0
0x672A3C: mov     ecx, [esp+0A0h+var_8C]
0x672A40: push    ecx
0x672A41: mov     ecx, ebx
0x672A43: call    sub_5F5050
0x672A48: cmp     eax, 0FFh
0x672A4D: jmp     short loc_672A9B
0x672A4F: cmp     byte ptr [esp+0A0h+var_48+2], 0
0x672A54: jnz     short loc_672AA0
0x672A56: mov     ecx, ebx; this
0x672A58: call    MobileObject_GetCharProxy
0x672A5D: mov     edx, [eax+1F4h]
0x672A63: shr     edx, 0Ah
0x672A66: test    dl, 1
0x672A69: jz      short loc_672AA0
0x672A6B: mov     eax, [ebx]
0x672A6D: mov     edx, [eax+1B8h]
0x672A73: mov     ecx, ebx
0x672A75: call    edx
0x672A77: jmp     short loc_672A99
0x672A79: mov     ecx, ebx; this
0x672A7B: call    MobileObject_GetCharProxy
0x672A80: mov     eax, [eax+1F4h]
0x672A86: shr     eax, 0Ah
0x672A89: test    al, 1
0x672A8B: jz      short loc_672AA0
0x672A8D: mov     edx, [ebx]
0x672A8F: mov     eax, [edx+1B8h]
0x672A95: mov     ecx, ebx
0x672A97: call    eax
0x672A99: test    eax, eax
0x672A9B: setnz   byte ptr [esp+0A0h+var_94+7]
0x672AA0: mov     ecx, ebx
0x672AA2: call    sub_66A670
0x672AA7: cmp     byte ptr [esp+0A0h+var_80+3], 0
0x672AAC: jz      short loc_672AE4
0x672AAE: cmp     byte ptr [esp+0A0h+var_94+7], 0
0x672AB3: jz      loc_672B8F
0x672AB9: mov     ecx, ebx; this
0x672ABB: call    MobileObject_GetCharProxy
0x672AC0: mov     ecx, [eax+1F4h]
0x672AC6: shr     ecx, 0Ah
0x672AC9: test    cl, 1
0x672ACC: jz      short loc_672AE4
0x672ACE: fldz
0x672AD0: mov     edx, [ebx]
0x672AD2: mov     eax, [edx+39Ch]
0x672AD8: push    ecx
0x672AD9: fstp    [esp+0A4h+duration]
0x672ADC: push    0
0x672ADE: push    1Ah
0x672AE0: mov     ecx, ebx
0x672AE2: call    eax
0x672AE4: cmp     byte ptr [esp+0A0h+var_94+7], 0
0x672AE9: jz      loc_672B8F
0x672AEF: mov     edx, [ebx]
0x672AF1: mov     eax, [edx+284h]
0x672AF7: push    0Bh
0x672AF9: mov     ecx, ebx
0x672AFB: call    eax
0x672AFD: mov     [esp+0A0h+var_78], eax
0x672B01: fild    [esp+0A0h+var_78]
0x672B05: mov     ecx, ebx
0x672B07: fstp    qword ptr [esp+0A0h+var_78]
0x672B0B: call    Actor_GetBaseEncumberance
0x672B10: fdivr   qword ptr [esp+0A0h+var_78]
0x672B14: push    ecx
0x672B15: fstp    [esp+0A4h+var_78]
0x672B19: fld     [esp+0A4h+var_78]
0x672B1D: fstp    [esp+0A4h+duration]; float
0x672B20: call    Calc_FatigueJumpMultiplier?
0x672B25: fstp    [esp+0A4h+var_84]
0x672B29: add     esp, 4
0x672B2C: push    1Ah
0x672B2E: mov     ecx, ebx
0x672B30: call    Actor_GetSkillMasteryLevel
0x672B35: cmp     eax, 3
0x672B38: jl      short loc_672B4E
0x672B3A: mov     ecx, offset fPerkJumpFatigueExpertMult
0x672B3F: call    GameSetting_GetSafeFloatPointer
0x672B44: fld     [esp+0A0h+var_84]
0x672B48: fmul    dword ptr [eax]
0x672B4A: fstp    [esp+0A0h+var_84]
0x672B4E: mov     ecx, ebx; this
0x672B50: call    MobileObject_GetCharProxy
0x672B55: mov     ecx, [eax+1F4h]
0x672B5B: shr     ecx, 0Ah
0x672B5E: test    cl, 1
0x672B61: jz      short loc_672B8F
0x672B63: fldz
0x672B65: fld     [esp+0A0h+var_84]
0x672B69: fcom    st(1)
0x672B6B: fnstsw  ax
0x672B6D: fstp    st(1)
0x672B6F: test    ah, 41h
0x672B72: jnz     short loc_672B8D
0x672B74: push    ecx
0x672B75: fchs
0x672B77: mov     ecx, ebx
0x672B79: fstp    [esp+0A4h+duration]; float
0x672B7C: call    Actor_ModFatigue?
0x672B81: mov     byte ptr [esp+0A0h+var_94+7], 1
0x672B86: call    sub_5C1F70
0x672B8B: jmp     short loc_672BD6
0x672B8D: fstp    st
0x672B8F: mov     byte ptr [esp+0A0h+var_94+7], 1
0x672B94: call    sub_5C1F70
0x672B99: jmp     short loc_672BD6
0x672B9B: mov     ecx, [ebx+58h]
0x672B9E: mov     edx, [ecx]
0x672BA0: mov     eax, [edx+2C4h]
0x672BA6: push    0
0x672BA8: push    33Fh
0x672BAD: call    eax
0x672BAF: mov     ecx, [ebx+58h]
0x672BB2: mov     edx, [ecx]
0x672BB4: mov     eax, [edx+36Ch]
0x672BBA: call    eax
0x672BBC: cmp     eax, 4
0x672BBF: jnz     short loc_672BC8
0x672BC1: call    sub_5C1F70
0x672BC6: jmp     short loc_672BD6
0x672BC8: cmp     byte ptr ds:0B3B43Dh, 0
0x672BCF: jz      short loc_672BD6
0x672BD1: call    sub_5C1000
0x672BD6: push    1; a3
0x672BD8: push    10h; a2
0x672BDA: mov     ecx, edi; this
0x672BDC: call    InputGlobals__QueryControlState
0x672BE1: test    eax, eax
0x672BE3: jz      loc_672D94
0x672BE9: cmp     byte ptr [ebx+5C0h], 0
0x672BF0: jnz     loc_672D94
0x672BF6: cmp     dword ptr [ebx+608h], 0
0x672BFD: push    0
0x672BFF: jz      short loc_672C18
0x672C01: mov     ecx, ds:0B38CF0h
0x672C07: mov     edx, ds:0B38AD0h
0x672C0D: push    ecx
0x672C0E: push    1
0x672C10: push    0
0x672C12: push    edx
0x672C13: jmp     loc_672D8C
0x672C18: mov     ecx, ebx
0x672C1A: call    PlayerCharacter_IsPlayerInCombat
0x672C1F: test    al, al
0x672C21: jz      short loc_672C44
0x672C23: fld     dword ptr ds:0A379B4h
0x672C29: mov     eax, ds:0B38AE0h
0x672C2E: push    ecx
0x672C2F: fstp    [esp+0A4h+duration]; duration
0x672C32: push    1; unk2
0x672C34: push    0; unk1
0x672C36: push    eax; string
0x672C37: call    GameUI_QueueMessage
0x672C3C: add     esp, 10h
0x672C3F: jmp     loc_672D94
0x672C44: mov     edx, [ebx]
0x672C46: mov     eax, [edx+354h]
0x672C4C: mov     ecx, ebx
0x672C4E: call    eax
0x672C50: test    al, al
0x672C52: jz      short loc_672C6D
0x672C54: mov     ecx, ds:0B38CF0h
0x672C5A: mov     edx, ds:0B38AE8h
0x672C60: push    0
0x672C62: push    ecx
0x672C63: push    1
0x672C65: push    0
0x672C67: push    edx
0x672C68: jmp     loc_672D8C
0x672C6D: mov     ecx, ebx
0x672C6F: call    sub_65D9E0
0x672C74: test    al, al
0x672C76: jz      short loc_672C83
0x672C78: mov     ecx, ds:0B38AD8h
0x672C7E: jmp     loc_672D7F
0x672C83: fld     dword ptr ds:0A6E688h
0x672C89: push    ecx
0x672C8A: mov     ecx, ebx; this
0x672C8C: fstp    [esp+0A4h+duration]; float
0x672C8F: call    TESObjectREFR_GetParentCell
0x672C94: mov     edx, [ebx]
0x672C96: push    eax; int
0x672C97: mov     eax, [edx+174h]
0x672C9D: mov     ecx, ebx
0x672C9F: call    eax
0x672CA1: push    eax; int
0x672CA2: mov     ecx, ebx
0x672CA4: call    Actor_IsUnderwater??
0x672CA9: test    al, al
0x672CAB: jz      short loc_672CC6
0x672CAD: mov     ecx, ds:0B38CF0h
0x672CB3: mov     edx, ds:0B38AF0h
0x672CB9: push    0
0x672CBB: push    ecx
0x672CBC: push    1
0x672CBE: push    0
0x672CC0: push    edx
0x672CC1: jmp     loc_672D8C
0x672CC6: mov     ecx, ds:0B333C4h; this
0x672CCC: call    sub_4D8B90
0x672CD1: mov     ecx, offset ActorProcessManager_ptr
0x672CD6: push    eax
0x672CD7: call    ActorProcessManager__AreHostilesNEarby
0x672CDC: test    al, al
0x672CDE: jz      short loc_672D01
0x672CE0: fld     dword ptr ds:0A379B4h
0x672CE6: mov     eax, ds:0B38AF8h
0x672CEB: push    ecx
0x672CEC: fstp    [esp+0A4h+duration]; duration
0x672CEF: push    1; unk2
0x672CF1: push    0; unk1
0x672CF3: push    eax; string
0x672CF4: call    GameUI_QueueMessage
0x672CF9: add     esp, 10h
0x672CFC: jmp     loc_672D94
0x672D01: mov     ecx, ds:0B333C4h; this
0x672D07: call    MobileObject_GetCharProxy
0x672D0C: lea     ecx, [eax+1E0h]
0x672D12: call    sub_88D370
0x672D17: cmp     eax, 1
0x672D1A: jz      short loc_672D79
0x672D1C: mov     ecx, ds:0B333C4h; this
0x672D22: call    MobileObject_GetCharProxy
0x672D27: lea     ecx, [eax+1E0h]
0x672D2D: call    sub_88D370
0x672D32: cmp     eax, 2
0x672D35: jz      short loc_672D79
0x672D37: mov     ecx, ds:0B333C4h; this
0x672D3D: call    TESObjectREFR_GetParentCell
0x672D42: mov     ecx, eax
0x672D44: call    sub_4CA6A0
0x672D49: test    al, al
0x672D4B: jz      short loc_672D63
0x672D4D: mov     ecx, ds:0B38CF0h
0x672D53: mov     edx, ds:0B38B08h
0x672D59: push    0
0x672D5B: push    ecx
0x672D5C: push    1
0x672D5E: push    0
0x672D60: push    edx
0x672D61: jmp     short loc_672D8C
0x672D63: mov     ecx, offset ActorProcessManager_ptr
0x672D68: call    sub_676EE0
0x672D6D: push    0; a4
0x672D6F: call    ShowSleepWaitMenu
0x672D74: add     esp, 4
0x672D77: jmp     short loc_672D94
0x672D79: mov     ecx, ds:0B38B00h
0x672D7F: mov     eax, ds:0B38CF0h
0x672D84: push    0
0x672D86: push    eax
0x672D87: push    1
0x672D89: push    0
0x672D8B: push    ecx
0x672D8C: call    ShowUIMessageBox
0x672D91: add     esp, 14h
0x672D94: mov     edx, [ebx]
0x672D96: mov     eax, [edx+18Ch]
0x672D9C: mov     ecx, ebx
0x672D9E: call    eax
0x672DA0: cmp     eax, 4
0x672DA3: jnz     short loc_672DEE
0x672DA5: test    esi, esi
0x672DA7: jz      short loc_672DEE
0x672DA9: mov     edx, [ebx]
0x672DAB: mov     eax, [edx+164h]
0x672DB1: mov     ecx, ebx
0x672DB3: call    eax
0x672DB5: mov     ecx, [esp+0A0h+var_4C]
0x672DB9: mov     edx, [ecx]
0x672DBB: mov     esi, eax
0x672DBD: mov     eax, [edx+164h]
0x672DC3: call    eax
0x672DC5: test    eax, eax
0x672DC7: jz      short loc_672DD9
0x672DC9: test    esi, esi
0x672DCB: jz      short loc_672DD9
0x672DCD: fld     dword ptr [esi+94h]
0x672DD3: fstp    dword ptr [eax+94h]
0x672DD9: mov     ecx, [esp+0A0h+var_4C]
0x672DDD: fld     [ebp+arg_0]
0x672DE0: mov     edx, [ecx]
0x672DE2: mov     eax, [edx+228h]
0x672DE8: push    ecx
0x672DE9: fstp    [esp+0A4h+duration]
0x672DEC: call    eax
0x672DEE: mov     byte ptr [ebx+588h], 1
0x672DF5: fld     dword ptr ds:0B14E5Ch
0x672DFB: sub     esp, 8
0x672DFE: fstp    [esp+0A8h+duration]; int
0x672E02: mov     ecx, ebx
0x672E04: fld     dword ptr ds:0B14E58h
0x672E0A: fstp    [esp+0A8h+anonymous_0+4]; float
0x672E0D: call    Actor_ProcessAction
0x672E12: cmp     byte ptr [ebx+594h], 0
0x672E19: mov     cl, byte ptr [esp+0A0h+var_48+1]
0x672E1D: mov     [ebx+588h], cl
0x672E23: jz      short loc_672E2C
0x672E25: mov     ecx, ebx
0x672E27: call    sub_65F770
0x672E2C: cmp     byte ptr ds:0B33A34h, 0
0x672E33: jnz     short loc_672E4C
0x672E35: cmp     byte ptr ds:0B14F40h, 0
0x672E3C: jnz     short loc_672E4C
0x672E3E: push    0
0x672E40: mov     ecx, ebx
0x672E42: call    sub_46A9C0
0x672E47: jmp     loc_672ED8
0x672E4C: mov     edx, [ebx+8]
0x672E4F: shr     edx, 4
0x672E52: test    dl, 1
0x672E55: jnz     short loc_672E8C
0x672E57: mov     ecx, ebx; this
0x672E59: call    MobileObject_GetCharProxy
0x672E5E: mov     esi, eax
0x672E60: test    esi, esi
0x672E62: jz      short loc_672E83
0x672E64: lea     eax, [esp+0A0h+var_58]
0x672E68: push    eax; a2
0x672E69: mov     ecx, esi; this
0x672E6B: call    sub_452A10
0x672E70: mov     esi, [esi+8]
0x672E73: test    esi, esi
0x672E75: jz      short loc_672E83
0x672E77: push    offset stru_BA7A40; a2
0x672E7C: mov     ecx, esi; this
0x672E7E: call    sub_8AC0B0
0x672E83: push    1
0x672E85: mov     ecx, ebx
0x672E87: call    sub_46A9C0
0x672E8C: fld     [esp+0A0h+var_58.z]
0x672E90: mov     edx, [ebx]
0x672E92: fld     [esp+0A0h+var_28]
0x672E96: mov     edx, [edx+1CCh]
0x672E9C: fld     st
0x672E9E: lea     eax, [esp+0A0h+var_64]
0x672EA2: fsubp   st(2), st
0x672EA4: push    eax
0x672EA5: fxch    st(1)
0x672EA7: mov     ecx, ebx
0x672EA9: fstp    [esp+0A4h+var_78]
0x672EAD: fld     [esp+0A4h+var_78]
0x672EB1: fmul    [ebp+arg_0]
0x672EB4: fstp    [esp+0A4h+var_70]
0x672EB8: fld     [esp+0A4h+var_30]
0x672EBC: fldz
0x672EBE: fadd    st(1), st
0x672EC0: fxch    st(1)
0x672EC2: fstp    [esp+0A4h+var_64]
0x672EC6: fadd    [esp+0A4h+var_2C]
0x672ECA: fstp    [esp+0A4h+a2]
0x672ECE: fadd    [esp+0A4h+var_70]
0x672ED2: fstp    [esp+0A4h+var_5C]
0x672ED6: call    edx
0x672ED8: mov     ecx, ebx; void *
0x672EDA: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x672EDF: mov     esi, [esp+0A0h+var_44]
0x672EE3: mov     ecx, [ebx+58h]
0x672EE6: mov     edx, [ecx]
0x672EE8: sub     esp, 0Ch
0x672EEB: mov     eax, esp
0x672EED: mov     [eax], esi
0x672EEF: mov     esi, [esp+0ACh+var_40]
0x672EF3: mov     [eax+4], esi
0x672EF6: mov     esi, [esp+0ACh+var_3C]
0x672EFA: mov     [eax+8], esi
0x672EFD: mov     eax, [edx+2CCh]
0x672F03: push    ebx
0x672F04: call    eax
0x672F06: mov     ecx, ebx; int
0x672F08: call    sub_6714E0
0x672F0D: cmp     dword ptr [esp+0A0h+var_38+4], 0
0x672F12: jnz     short loc_672F22
0x672F14: cmp     dword ptr [esp+0A0h+var_38], 0
0x672F19: jnz     short loc_672F22
0x672F1B: test    byte ptr [esp+0A0h+var_8C], 0Fh
0x672F20: jz      short loc_672F27
0x672F22: mov     byte ptr [esp+0A0h+var_94+7], 1
0x672F27: push    1; a3
0x672F29: push    1Ah; a2
0x672F2B: mov     ecx, edi; this
0x672F2D: call    InputGlobals__QueryControlState
0x672F32: test    eax, eax
0x672F34: jz      short loc_672F41
0x672F36: mov     ecx, ds:0B33B00h
0x672F3C: call    sub_466AD0
0x672F41: push    1; a3
0x672F43: push    1Bh; a2
0x672F45: mov     ecx, edi; this
0x672F47: call    InputGlobals__QueryControlState
0x672F4C: test    eax, eax
0x672F4E: jz      short loc_672F5B
0x672F50: mov     ecx, ds:0B33B00h
0x672F56: call    sub_466B00
0x672F5B: push    1; a3
0x672F5D: push    0Eh; a2
0x672F5F: mov     ecx, edi; this
0x672F61: call    InputGlobals__QueryControlState
0x672F66: test    eax, eax
0x672F68: jnz     loc_673020
0x672F6E: push    eax; a3
0x672F6F: push    0Eh; a2
0x672F71: mov     ecx, edi; this
0x672F73: call    InputGlobals__QueryControlState
0x672F78: test    eax, eax
0x672F7A: jnz     loc_673020
0x672F80: push    2; a3
0x672F82: push    0Eh; a2
0x672F84: mov     ecx, edi; this
0x672F86: call    InputGlobals__QueryControlState
0x672F8B: test    eax, eax
0x672F8D: jnz     short loc_672FA7
0x672F8F: cmp     ds:0B3BB04h, al
0x672F95: jz      loc_673076
0x672F9B: cmp     ds:0B3BB05h, al
0x672FA1: jnz     loc_673076
0x672FA7: mov     ecx, offset unk_B36B50
0x672FAC: call    GameSetting_GetSafeFloatPointer
0x672FB1: fld     dword ptr ds:0B3BCE0h
0x672FB7: fld     dword ptr [eax]
0x672FB9: fcompp
0x672FBB: fnstsw  ax
0x672FBD: test    ah, 41h
0x672FC0: jnz     short loc_672FEE
0x672FC2: xor     byte ptr [ebx+588h], 1
0x672FC9: mov     byte ptr ds:0B14E4Dh, 1
0x672FD0: cmp     byte ptr [ebx+588h], 0
0x672FD7: setz    cl
0x672FDA: push    ecx; a3
0x672FDB: mov     ecx, ebx; a1
0x672FDD: call    ToggleBody
0x672FE2: fldz
0x672FE4: mov     byte ptr [esp+0A0h+var_94+7], 1
0x672FE9: jmp     loc_673070
0x672FEE: cmp     byte ptr ds:0B3BB04h, 0
0x672FF5: jz      short loc_673017
0x672FF7: mov     byte ptr ds:0B14E4Dh, 1
0x672FFE: cmp     byte ptr [ebx+588h], 0
0x673005: mov     ecx, ebx; a1
0x673007: setz    dl
0x67300A: mov     byte ptr ds:0B3BB04h, 0
0x673011: push    edx; a3
0x673012: call    ToggleBody
0x673017: fldz
0x673019: mov     byte ptr [esp+0A0h+var_94+7], 1
0x67301E: jmp     short loc_673070
0x673020: call    InterfaceManager_IsMenuMode
0x673025: test    al, al
0x673027: jnz     short loc_673076
0x673029: mov     ecx, offset unk_B36B50
0x67302E: mov     byte ptr [esp+0A0h+var_94+7], 1
0x673033: call    GameSetting_GetSafeFloatPointer
0x673038: fld     dword ptr ds:0B3BCE0h
0x67303E: fld     dword ptr [eax]
0x673040: fcomp   st(1)
0x673042: fnstsw  ax
0x673044: test    ah, 41h
0x673047: jp      short loc_67306D
0x673049: cmp     byte ptr ds:0B3BB04h, 0
0x673050: jnz     short loc_67306D
0x673052: push    0; a3
0x673054: fstp    st
0x673056: mov     ecx, ebx; a1
0x673058: mov     byte ptr ds:0B3BB04h, 1
0x67305F: mov     byte ptr ds:0B14E4Dh, 1
0x673066: call    ToggleBody
0x67306B: jmp     short loc_673076
0x67306D: fadd    [ebp+arg_0]
0x673070: fstp    dword ptr ds:0B3BCE0h
0x673076: push    1; a3
0x673078: push    5; a2
0x67307A: mov     ecx, edi; this
0x67307C: call    InputGlobals__QueryControlState
0x673081: test    eax, eax
0x673083: jz      loc_67322B
0x673089: call    InterfaceManager_IsMenuMode
0x67308E: test    al, al
0x673090: jnz     loc_67322B
0x673096: cmp     [ebx+5C0h], al
0x67309C: jnz     loc_67322B
0x6730A2: mov     eax, [ebx]
0x6730A4: mov     edx, [eax+1A0h]
0x6730AA: mov     ecx, ebx
0x6730AC: call    edx
0x6730AE: test    al, al
0x6730B0: jnz     loc_67322B
0x6730B6: cmp     [esp+0A0h+var_85], al
0x6730BA: jnz     loc_67322B
0x6730C0: call    sub_579540
0x6730C5: mov     esi, eax
0x6730C7: mov     eax, [ebx]
0x6730C9: mov     edx, [eax+284h]
0x6730CF: push    2Fh ; '/'
0x6730D1: mov     ecx, ebx
0x6730D3: call    edx
0x6730D5: test    eax, eax
0x6730D7: jle     short loc_6730E8
0x6730D9: push    0
0x6730DB: push    49564E49h
0x6730E0: lea     ecx, [ebx+68h]
0x6730E3: call    sub_6A24B0
0x6730E8: test    esi, esi
0x6730EA: mov     [esp+0A0h+var_85], 0
0x6730EF: jz      short loc_67316F
0x6730F1: mov     eax, [esi]
0x6730F3: mov     edx, [eax+0E8h]
0x6730F9: mov     ecx, esi
0x6730FB: call    edx
0x6730FD: test    al, al
0x6730FF: jz      short loc_673127
0x673101: push    0; int
0x673103: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x673108: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x67310D: push    0; int
0x67310F: push    esi; void *
0x673110: call    OblivionDynamicCast
0x673115: add     esp, 14h
0x673118: test    eax, eax
0x67311A: jz      short loc_673127
0x67311C: cmp     dword ptr [eax+60h], 0
0x673120: jnz     short loc_673127
0x673122: mov     [esp+0A0h+var_85], 1
0x673127: mov     eax, [esi]
0x673129: mov     edx, [eax+190h]
0x67312F: mov     ecx, esi
0x673131: call    edx
0x673133: test    al, al
0x673135: jz      short loc_673164
0x673137: mov     edi, [esi+58h]
0x67313A: mov     eax, [edi]
0x67313C: mov     edx, [eax+47Ch]
0x673142: mov     ecx, edi
0x673144: call    edx
0x673146: cmp     eax, 5
0x673149: jz      loc_673226
0x67314F: mov     eax, [edi]
0x673151: mov     edx, [eax+47Ch]
0x673157: mov     ecx, edi
0x673159: call    edx
0x67315B: cmp     eax, 6
0x67315E: jz      loc_673226
0x673164: cmp     [esp+0A0h+var_85], 0
0x673169: jnz     loc_673226
0x67316F: push    0
0x673171: push    0
0x673173: push    0
0x673175: call    sub_5A4980
0x67317A: add     esp, 0Ch
0x67317D: test    esi, esi
0x67317F: jz      short loc_6731DE
0x673181: push    1
0x673183: push    0
0x673185: push    0
0x673187: push    ebx
0x673188: mov     ecx, esi
0x67318A: call    ActivateRef
0x67318F: test    al, al
0x673191: jnz     loc_673226
0x673197: mov     eax, [ebx]
0x673199: mov     edx, [eax+380h]
0x67319F: mov     ecx, ebx
0x6731A1: call    edx
0x6731A3: test    eax, eax
0x6731A5: jz      short loc_6731DE
0x6731A7: mov     ecx, esi; this
0x6731A9: call    GetTeleportExtraData
0x6731AE: test    eax, eax
0x6731B0: jnz     short loc_6731C4
0x6731B2: mov     eax, [esi]
0x6731B4: mov     edx, [eax+170h]
0x6731BA: mov     ecx, esi
0x6731BC: call    edx
0x6731BE: cmp     byte ptr [eax+4], 12h
0x6731C2: jnz     short loc_6731DE
0x6731C4: mov     eax, [ebx]
0x6731C6: mov     edx, [eax+380h]
0x6731CC: push    1
0x6731CE: push    0
0x6731D0: push    0
0x6731D2: push    ebx
0x6731D3: mov     ecx, ebx
0x6731D5: call    edx
0x6731D7: mov     ecx, eax
0x6731D9: call    ActivateRef
0x6731DE: mov     ecx, [ebx+58h]
0x6731E1: mov     eax, [ecx]
0x6731E3: mov     edx, [eax+378h]
0x6731E9: call    edx
0x6731EB: test    eax, eax
0x6731ED: jz      short loc_6731FC
0x6731EF: mov     ecx, [ebx+58h]
0x6731F2: mov     eax, [ecx]
0x6731F4: mov     edx, [eax+378h]
0x6731FA: jmp     short loc_673216
0x6731FC: mov     eax, [ebx]
0x6731FE: mov     edx, [eax+380h]
0x673204: mov     ecx, ebx
0x673206: call    edx
0x673208: test    eax, eax
0x67320A: jz      short loc_673226
0x67320C: mov     eax, [ebx]
0x67320E: mov     edx, [eax+380h]
0x673214: mov     ecx, ebx
0x673216: push    1
0x673218: push    0
0x67321A: push    0
0x67321C: push    ebx
0x67321D: call    edx
0x67321F: mov     ecx, eax
0x673221: call    ActivateRef
0x673226: mov     byte ptr [esp+0A0h+var_94+7], 1
0x67322B: cmp     byte ptr ds:0B3BB05h, 0
0x673232: jz      loc_673303
0x673238: cmp     byte ptr [esp+0A0h+var_94+7], 0
0x67323D: jz      short loc_67326C
0x67323F: cmp     byte ptr [ebx+588h], 0
0x673246: fldz
0x673248: mov     ecx, ebx; a1
0x67324A: fstp    dword ptr ds:0B3BB08h
0x673250: setz    al
0x673253: mov     byte ptr ds:0B3BB05h, 0
0x67325A: mov     byte ptr ds:0B3BB04h, 0
0x673261: push    eax; a3
0x673262: call    ToggleBody
0x673267: jmp     loc_673392
0x67326C: mov     ecx, offset unk_B36BA0
0x673271: call    GameSetting_GetSafeFloatPointer
0x673276: fld     dword ptr ds:0B3BB34h
0x67327C: fld     dword ptr [eax]
0x67327E: mov     ecx, offset unk_B36BA8
0x673283: fmul    qword ptr ds:0A31C78h
0x673289: fmul    [ebp+arg_0]
0x67328C: fsubp   st(1), st
0x67328E: fstp    dword ptr ds:0B3BB34h
0x673294: call    GameSetting_GetSafeFloatPointer
0x673299: fld     dword ptr [eax]
0x67329B: mov     ecx, offset unk_B36BB0
0x6732A0: fmul    qword ptr ds:0A31C78h
0x6732A6: fmul    [ebp+arg_0]
0x6732A9: fadd    dword ptr ds:0B3BCDCh
0x6732AF: fstp    dword ptr ds:0B3BCDCh
0x6732B5: call    GameSetting_GetSafeFloatPointer
0x6732BA: fld     dword ptr ds:0B3BCDCh
0x6732C0: mov     esi, eax
0x6732C2: call    __CIsin
0x6732C7: fstp    [esp+0A0h+var_78]
0x6732CB: fld     [esp+0A0h+var_78]
0x6732CF: fmul    dword ptr [esi]
0x6732D1: fmul    qword ptr ds:0A31C78h
0x6732D7: fstp    dword ptr ds:0B3BB2Ch
0x6732DD: fld     dword ptr ds:0B3BCDCh
0x6732E3: fld     qword ptr ds:0A3D5B0h
0x6732E9: fcom    st(1)
0x6732EB: fnstsw  ax
0x6732ED: test    ah, 5
0x6732F0: jp      loc_67338E
0x6732F6: fsubp   st(1), st
0x6732F8: fstp    dword ptr ds:0B3BCDCh
0x6732FE: jmp     loc_673392
0x673303: cmp     byte ptr ds:0B3BB04h, 0
0x67330A: jnz     loc_673392
0x673310: cmp     byte ptr [esp+0A0h+var_94+7], 0
0x673315: jz      short loc_67331B
0x673317: fldz
0x673319: jmp     short loc_673324
0x67331B: fld     dword ptr ds:0B3BB08h
0x673321: fadd    [ebp+arg_0]
0x673324: mov     ecx, offset unk_B36B98
0x673329: fstp    dword ptr ds:0B3BB08h
0x67332F: call    GameSetting_GetSafeFloatPointer
0x673334: fld     dword ptr ds:0B3BB08h
0x67333A: fld     dword ptr [eax]
0x67333C: fcompp
0x67333E: fnstsw  ax
0x673340: test    ah, 5
0x673343: jp      short loc_673392
0x673345: fldz
0x673347: fst     dword ptr ds:0B3BB34h
0x67334D: cmp     byte ptr [ebx+588h], 0
0x673354: jz      short loc_67335F
0x673356: mov     ecx, ebx
0x673358: fstp    st
0x67335A: call    sub_4A9720
0x67335F: fstp    dword ptr ds:0B3BB2Ch
0x673365: mov     byte ptr ds:0B14E4Dh, 1
0x67336C: cmp     byte ptr [ebx+588h], 0
0x673373: mov     byte ptr ds:0B3BB05h, 1
0x67337A: mov     byte ptr ds:0B3BB04h, 1
0x673381: jnz     short loc_673392
0x673383: push    0; a3
0x673385: mov     ecx, ebx; a1
0x673387: call    ToggleBody
0x67338C: jmp     short loc_673392
0x67338E: fstp    st(1)
0x673390: fstp    st
0x673392: fld     [ebp+arg_0]
0x673395: push    ecx
0x673396: mov     ecx, ebx
0x673398: fstp    [esp+0A4h+duration]; float
0x67339B: call    sub_671170
0x6733A0: mov     ecx, ds:0B3BB1Ch
0x6733A6: test    ecx, ecx
0x6733A8: jz      short loc_673418
0x6733AA: mov     eax, ds:0B3BCD8h
0x6733AF: mov     edx, eax
0x6733B1: add     eax, 1
0x6733B4: cmp     edx, 14h
0x6733B7: mov     ds:0B3BCD8h, eax
0x6733BC: jnb     short loc_673418
0x6733BE: mov     eax, [esp+0A0h+var_58.x]
0x6733C2: fld     [esp+0A0h+var_58.z]
0x6733C6: fadd    qword ptr ds:0A3F428h
0x6733CC: mov     edx, [esp+0A0h+var_58.y]
0x6733D0: mov     [esp+0A0h+var_64], eax
0x6733D4: mov     eax, [esp+0A0h+var_58.z]
0x6733D8: mov     [esp+0A0h+a2], edx
0x6733DC: mov     [esp+0A0h+var_5C], eax
0x6733E0: fstp    [esp+0A0h+var_5C]
0x6733E4: fld     [esp+0A0h+a2]
0x6733E8: lea     edx, [esp+0A0h+var_64]
0x6733EC: fld     qword ptr ds:0A4D910h
0x6733F2: push    edx
0x6733F3: fadd    st(1), st
0x6733F5: fxch    st(1)
0x6733F7: fstp    [esp+0A4h+a2]
0x6733FB: fadd    [esp+0A4h+var_64]
0x6733FF: fstp    [esp+0A4h+var_64]
0x673403: call    sub_4D69A0
0x673408: mov     ecx, ds:0B3BB1Ch
0x67340E: push    offset Vector3_InitValue?
0x673413: call    sub_4D9960
0x673418: cmp     byte ptr ds:0B3BB04h, 0
0x67341F: jnz     short loc_673440
0x673421: cmp     byte ptr [ebx+588h], 0
0x673428: jnz     short loc_673440
0x67342A: cmp     byte ptr ds:0B3BB05h, 0
0x673431: jnz     short loc_673440
0x673433: call    InterfaceManager_IsMenuMode
0x673438: test    al, al
0x67343A: jnz     short loc_673440
0x67343C: push    1
0x67343E: jmp     short loc_673442
0x673440: push    0
0x673442: call    sub_578CF0
0x673447: mov     eax, [ebx]
0x673449: mov     edx, [eax+198h]
0x67344F: add     esp, 4
0x673452: push    0; a3
0x673454: mov     ecx, ebx
0x673456: call    edx
0x673458: test    al, al
0x67345A: jnz     short loc_673486
0x67345C: mov     eax, [ebx]
0x67345E: mov     edx, [eax+1F8h]
0x673464: mov     ecx, ebx
0x673466: call    edx
0x673468: test    al, al
0x67346A: jnz     short loc_673486
0x67346C: mov     esi, [ebx]
0x67346E: mov     ecx, offset ActorProcessManager_ptr
0x673473: call    sub_673B00
0x673478: mov     eax, [esi+368h]
0x67347E: push    ecx
0x67347F: mov     ecx, ebx
0x673481: fstp    [esp+0A4h+duration]
0x673484: call    eax
0x673486: mov     ecx, ebx; this
0x673488: call    TESObjectREFR_GetAnimData
0x67348D: fld     dword ptr [eax+0BCh]
0x673493: mov     ecx, [ebx+5CCh]
0x673499: fstp    dword ptr [ecx+0BCh]
0x67349F: push    ecx
0x6734A0: fld     dword ptr [eax+0C0h]
0x6734A6: fstp    dword ptr [ecx+0C0h]
0x6734AC: mov     ecx, ebx; a1
0x6734AE: fld     [ebp+arg_0]
0x6734B1: fstp    [esp+0A4h+duration]; a2
0x6734B4: call    SetAimingZoom
0x6734B9: cmp     byte ptr [ebx+588h], 0
0x6734C0: fld     [ebp+arg_0]
0x6734C3: setz    cl
0x6734C6: mov     [ebx+588h], cl
0x6734CC: push    ecx
0x6734CD: mov     ecx, ebx; this
0x6734CF: fstp    [esp+0A4h+duration]; a2
0x6734D2: call    sub_603CA0
0x6734D7: fld     [ebp+arg_0]
0x6734DA: cmp     byte ptr [ebx+588h], 0
0x6734E1: push    ecx
0x6734E2: setz    dl
0x6734E5: fstp    [esp+0A4h+duration]; a2
0x6734E8: mov     ecx, ebx; this
0x6734EA: mov     [ebx+588h], dl
0x6734F0: call    sub_603CA0
0x6734F5: cmp     byte ptr [ebx+748h], 0
0x6734FC: jnz     short loc_673507
0x6734FE: push    0
0x673500: mov     ecx, ebx
0x673502: call    sub_66B710
0x673507: mov     ecx, [ebx+58h]
0x67350A: mov     eax, [ecx]
0x67350C: mov     edx, [eax+2E4h]
0x673512: call    edx
0x673514: test    eax, eax
0x673516: jnz     short loc_673528
0x673518: mov     eax, [ebx]
0x67351A: mov     edx, [eax+1A0h]
0x673520: mov     ecx, ebx
0x673522: call    edx
0x673524: test    al, al
0x673526: jz      short loc_673538
0x673528: cmp     byte ptr [ebx+588h], 0
0x67352F: jnz     short loc_67355C
0x673531: mov     ecx, ebx
0x673533: call    RestoreCamera
0x673538: cmp     byte ptr [ebx+588h], 0
0x67353F: jnz     short loc_67355C
0x673541: mov     eax, [ebx]
0x673543: mov     edx, [eax+198h]
0x673549: push    0
0x67354B: mov     ecx, ebx
0x67354D: call    edx
0x67354F: test    al, al
0x673551: jz      short loc_67355C
0x673553: push    0; a1
0x673555: mov     ecx, ebx; this
0x673557: call    TogglePOV
0x67355C: call    sub_4D5370
0x673561: cmp     dword ptr ds:0B3BCD4h, 0
0x673568: jz      short loc_67357D
0x67356A: mov     ecx, ebx; this
0x67356C: call    TESObjectREFR_GetParentCell
0x673571: cmp     ds:0B3BCD4h, eax
0x673577: jz      loc_67396A
0x67357D: mov     ecx, ebx; this
0x67357F: call    TESObjectREFR_GetParentCell
0x673584: mov     ecx, ebx; this
0x673586: mov     ds:0B3BCD4h, eax
0x67358B: call    TESObjectREFR_GetParentCell
0x673590: mov     ecx, ds:0B33A1Ch
0x673596: push    eax
0x673597: call    sub_43E000
0x67359C: test    al, al
0x67359E: jz      loc_67396A
0x6735A4: mov     ecx, ds:0B333A0h
0x6735AA: call    LoadingAreaMessage
0x6735AF: mov     ecx, ds:0B33A1Ch
0x6735B5: call    sub_43DF10
0x6735BA: mov     ecx, ds:0B33A10h
0x6735C0: push    1
0x6735C2: call    sub_434020
0x6735C7: pop     edi
0x6735C8: pop     esi
0x6735C9: pop     ebx
0x6735CA: mov     esp, ebp
0x6735CC: pop     ebp
0x6735CD: retn    4
0x6735D0: fld     dword ptr ds:0A31C80h
0x6735D6: fld     dword ptr ds:0B3BAE0h
0x6735DC: fcom    st(1)
0x6735DE: fnstsw  ax
0x6735E0: fstp    st(1)
0x6735E2: test    ah, 41h
0x6735E5: jnz     loc_6736BD
0x6735EB: cmp     byte ptr [ebx+71Dh], 0
0x6735F2: fstp    st
0x6735F4: jz      short loc_67364C
0x6735F6: mov     ecx, [ebx+58h]
0x6735F9: mov     eax, [ecx]
0x6735FB: mov     edx, [eax+36Ch]
0x673601: call    edx
0x673603: cmp     eax, 4
0x673606: jnz     short loc_67364C
0x673608: cmp     byte ptr [ebx+71Ch], 0
0x67360F: mov     eax, [ebx]
0x673611: mov     edx, [eax+1BCh]
0x673617: mov     byte ptr [ebx+71Dh], 0
0x67361E: mov     ecx, ebx
0x673620: jz      short loc_673626
0x673622: push    0
0x673624: jmp     short loc_673628
0x673626: push    1
0x673628: call    edx
0x67362A: mov     ebx, [ebx+58h]
0x67362D: mov     eax, [ebx]
0x67362F: mov     edx, [eax+178h]
0x673635: push    0
0x673637: mov     ecx, ebx
0x673639: call    edx
0x67363B: fldz
0x67363D: fstp    dword ptr ds:0B3BAE0h
0x673643: pop     edi
0x673644: pop     esi
0x673645: pop     ebx
0x673646: mov     esp, ebp
0x673648: pop     ebp
0x673649: retn    4
0x67364C: mov     eax, [ebx]
0x67364E: mov     edx, [eax+198h]
0x673654: push    0
0x673656: mov     ecx, ebx
0x673658: call    edx
0x67365A: test    al, al
0x67365C: jnz     short loc_67366F
0x67365E: mov     ecx, [ebx+58h]
0x673661: mov     eax, [ecx]
0x673663: mov     edx, [eax+36Ch]
0x673669: call    edx
0x67366B: test    eax, eax
0x67366D: jnz     short loc_6736AC
0x67366F: mov     ecx, ebx; int
0x673671: call    sub_5EAE70
0x673676: cmp     byte ptr [ebx+71Dh], 0
0x67367D: mov     eax, [ebx]
0x67367F: mov     edx, [eax+1BCh]
0x673685: mov     byte ptr [ebx+71Ch], 0
0x67368C: mov     ecx, ebx
0x67368E: jz      short loc_673694
0x673690: push    0
0x673692: jmp     short loc_673696
0x673694: push    1
0x673696: call    edx
0x673698: mov     ecx, [ebx+58h]
0x67369B: mov     eax, [ecx]
0x67369D: mov     edx, [eax+370h]
0x6736A3: push    7Fh
0x6736A5: push    0
0x6736A7: push    0
0x6736A9: push    ebx
0x6736AA: call    edx
0x6736AC: fldz
0x6736AE: fstp    dword ptr ds:0B3BAE0h
0x6736B4: pop     edi
0x6736B5: pop     esi
0x6736B6: pop     ebx
0x6736B7: mov     esp, ebp
0x6736B9: pop     ebp
0x6736BA: retn    4
0x6736BD: cmp     byte ptr [ebx+71Ch], 0
0x6736C4: jz      loc_673753
0x6736CA: mov     ecx, [ebx+58h]
0x6736CD: fadd    dword ptr ds:0B33E9Ch
0x6736D3: mov     eax, [ecx]
0x6736D5: mov     edx, [eax+36Ch]
0x6736DB: fstp    dword ptr ds:0B3BAE0h
0x6736E1: call    edx
0x6736E3: cmp     eax, 4
0x6736E6: jz      short loc_67370F
0x6736E8: mov     ecx, [ebx+58h]
0x6736EB: mov     eax, [ecx]
0x6736ED: mov     edx, [eax+36Ch]
0x6736F3: call    edx
0x6736F5: cmp     eax, 9
0x6736F8: jz      short loc_67370F
0x6736FA: mov     ecx, [ebx+58h]
0x6736FD: mov     eax, [ecx]
0x6736FF: mov     edx, [eax+184h]
0x673705: call    edx
0x673707: test    eax, eax
0x673709: jnz     loc_6737B5
0x67370F: cmp     byte ptr [ebx+71Dh], 0
0x673716: mov     eax, [ebx]
0x673718: mov     edx, [eax+1BCh]
0x67371E: mov     byte ptr [ebx+71Ch], 0
0x673725: mov     ecx, ebx
0x673727: jz      short loc_67372D
0x673729: push    0
0x67372B: jmp     short loc_67372F
0x67372D: push    1
0x67372F: call    edx
0x673731: mov     ebx, [ebx+58h]
0x673734: mov     eax, [ebx]
0x673736: mov     edx, [eax+178h]
0x67373C: push    0
0x67373E: mov     ecx, ebx
0x673740: call    edx
0x673742: fldz
0x673744: fstp    dword ptr ds:0B3BAE0h
0x67374A: pop     edi
0x67374B: pop     esi
0x67374C: pop     ebx
0x67374D: mov     esp, ebp
0x67374F: pop     ebp
0x673750: retn    4
0x673753: cmp     byte ptr [ebx+71Dh], 0
0x67375A: jz      short loc_6737B3
0x67375C: mov     ecx, [ebx+58h]
0x67375F: fadd    dword ptr ds:0B33E9Ch
0x673765: mov     eax, [ecx]
0x673767: mov     edx, [eax+36Ch]
0x67376D: fstp    dword ptr ds:0B3BAE0h
0x673773: call    edx
0x673775: test    eax, eax
0x673777: jnz     short loc_6737B5
0x673779: cmp     byte ptr [ebx+71Ch], 0
0x673780: mov     [ebx+71Dh], al
0x673786: mov     eax, [ebx]
0x673788: mov     edx, [eax+1BCh]
0x67378E: mov     ecx, ebx
0x673790: jz      short loc_673796
0x673792: push    0
0x673794: jmp     short loc_673798
0x673796: push    1
0x673798: call    edx
0x67379A: mov     ecx, [ebx+58h]
0x67379D: mov     eax, [ecx]
0x67379F: mov     edx, [eax+178h]
0x6737A5: push    0
0x6737A7: call    edx
0x6737A9: fldz
0x6737AB: fstp    dword ptr ds:0B3BAE0h
0x6737B1: jmp     short loc_6737B5
0x6737B3: fstp    st
0x6737B5: fld     [ebp+arg_0]
0x6737B8: push    ecx
0x6737B9: mov     ecx, ebx; Actor *
0x6737BB: fstp    [esp+0A4h+duration]; float
0x6737BE: call    sub_605770
0x6737C3: mov     esi, ds:0B3F9A8h
0x6737C9: mov     ecx, [ebx+58h]
0x6737CC: mov     edx, [ecx]
0x6737CE: sub     esp, 0Ch
0x6737D1: mov     eax, esp
0x6737D3: mov     [eax], esi
0x6737D5: mov     esi, ds:0B3F9ACh
0x6737DB: mov     [eax+4], esi
0x6737DE: mov     esi, ds:0B3F9B0h
0x6737E4: mov     [eax+8], esi
0x6737E7: mov     eax, [edx+2CCh]
0x6737ED: push    ebx
0x6737EE: call    eax
0x6737F0: fldz
0x6737F2: fcomp   dword ptr ds:0B36C90h
0x6737F8: mov     ecx, ebx; this
0x6737FA: fnstsw  ax
0x6737FC: test    ah, 5
0x6737FF: jp      loc_6738CF
0x673805: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x67380A: cmp     eax, 2
0x67380D: jz      short loc_67382C
0x67380F: mov     ecx, ebx; this
0x673811: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x673816: cmp     eax, 1
0x673819: jz      short loc_67382C
0x67381B: fld     dword ptr ds:0A30634h
0x673821: fstp    dword ptr ds:0B15018h
0x673827: jmp     loc_673935
0x67382C: fldz
0x67382E: mov     esi, ds:0B33EA0h
0x673834: fcomp   dword ptr ds:0B15018h
0x67383A: fnstsw  ax
0x67383C: test    ah, 41h
0x67383F: jnz     short loc_67386D
0x673841: mov     ecx, offset flt_B36C90
0x673846: call    GameSetting_GetSafeFloatPointer
0x67384B: mov     ecx, esi
0x67384D: test    ecx, ecx
0x67384F: mov     [esp+0A0h+var_78], ecx
0x673853: fild    [esp+0A0h+var_78]
0x673857: jge     short loc_67385F
0x673859: fadd    dword ptr ds:0A2FC78h
0x67385F: fdiv    qword ptr ds:0A2FC70h
0x673865: fadd    dword ptr [eax]
0x673867: fstp    dword ptr ds:0B15018h
0x67386D: test    esi, esi
0x67386F: mov     [esp+0A0h+var_78], esi
0x673873: fild    [esp+0A0h+var_78]
0x673877: jge     short loc_67387F
0x673879: fadd    dword ptr ds:0A2FC78h
0x67387F: fdiv    qword ptr ds:0A2FC70h
0x673885: fld     dword ptr ds:0B15018h
0x67388B: fcompp
0x67388D: fnstsw  ax
0x67388F: test    ah, 5
0x673892: jp      loc_673935
0x673898: mov     edx, ds:0B33B00h
0x67389E: fld     dword ptr ds:0A30634h
0x6738A4: cmp     dword ptr [edx+1C0h], 0
0x6738AB: fstp    dword ptr ds:0B15018h
0x6738B1: jz      short loc_6738C4
0x6738B3: call    sub_5BDA90
0x6738B8: push    0
0x6738BA: call    sub_5AEA60
0x6738BF: add     esp, 4
0x6738C2: jmp     short loc_673935
0x6738C4: mov     eax, ds:0B33398h
0x6738C9: mov     byte ptr [eax+1], 1
0x6738CD: jmp     short loc_673935
0x6738CF: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x6738D4: cmp     eax, 2
0x6738D7: jnz     short loc_673935
0x6738D9: cmp     byte ptr ds:0B3BB07h, 0
0x6738E0: jnz     short loc_673935
0x6738E2: mov     edx, [ebx]
0x6738E4: mov     eax, [edx+1C8h]
0x6738EA: mov     ecx, ebx
0x6738EC: call    eax
0x6738EE: mov     ecx, ds:0B33B00h
0x6738F4: cmp     dword ptr [ecx+1C0h], 0
0x6738FB: jz      short loc_673924
0x6738FD: mov     edx, ds:0B38C18h
0x673903: mov     eax, ds:0B38C10h
0x673908: mov     ecx, ds:0B38C08h
0x67390E: push    0
0x673910: push    edx
0x673911: push    eax
0x673912: push    1
0x673914: push    offset sub_663270
0x673919: push    ecx
0x67391A: call    ShowUIMessageBox
0x67391F: add     esp, 18h
0x673922: jmp     short loc_67392E
0x673924: mov     edx, ds:0B33398h
0x67392A: mov     byte ptr [edx+1], 1
0x67392E: mov     byte ptr ds:0B3BB07h, 1
0x673935: push    0
0x673937: mov     ecx, ebx
0x673939: call    sub_66B710
0x67393E: mov     ecx, [esp+0A0h+var_7C]; this
0x673942: push    1; a3
0x673944: push    1Bh; a2
0x673946: call    InputGlobals__QueryControlState
0x67394B: test    eax, eax
0x67394D: jz      short loc_67396A
0x67394F: mov     ecx, ds:0B33B00h
0x673955: call    sub_466B00
0x67395A: test    al, al
0x67395C: jz      short loc_67396A
0x67395E: fld     dword ptr ds:0A30634h
0x673964: fstp    dword ptr ds:0B15018h
0x67396A: pop     edi
0x67396B: pop     esi
0x67396C: pop     ebx
0x67396D: mov     esp, ebp
0x67396F: pop     ebp
0x673970: retn    4
