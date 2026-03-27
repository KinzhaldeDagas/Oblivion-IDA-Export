0x4F4980: fldz
0x4F4982: push    ebx
0x4F4983: mov     ebx, [esp+4+arg_C]
0x4F4987: fstp    qword ptr [ebx]
0x4F4989: push    esi
0x4F498A: mov     esi, [esp+8+arg_0]
0x4F498E: test    esi, esi
0x4F4990: jz      short loc_4F49D7
0x4F4992: mov     eax, [esi]
0x4F4994: mov     edx, [eax+190h]
0x4F499A: mov     ecx, esi
0x4F499C: call    edx
0x4F499E: test    al, al
0x4F49A0: jz      short loc_4F49D7
0x4F49A2: push    edi
0x4F49A3: mov     edi, [esp+0Ch+arg_4]
0x4F49A7: test    edi, edi
0x4F49A9: jz      short loc_4F49D6
0x4F49AB: mov     ecx, esi; this
0x4F49AD: call    TESObjectREFR_GetContainer
0x4F49B2: test    eax, eax
0x4F49B4: jz      short loc_4F49D6
0x4F49B6: push    eax
0x4F49B7: push    esi; a1
0x4F49B8: call    ContainerExtraData_GetContainerExtraDataForRef
0x4F49BD: add     esp, 8
0x4F49C0: test    eax, eax
0x4F49C2: jz      short loc_4F49D6
0x4F49C4: push    0
0x4F49C6: push    edi
0x4F49C7: mov     ecx, eax
0x4F49C9: call    ExtraContainerChanges_SetEquipped
0x4F49CE: test    eax, eax
0x4F49D0: jz      short loc_4F49D6
0x4F49D2: fld1
0x4F49D4: fstp    qword ptr [ebx]
0x4F49D6: pop     edi
0x4F49D7: cmp     byte ptr ds:0B361ACh, 0
0x4F49DE: jz      short loc_4F49F5
0x4F49E0: fld     qword ptr [ebx]
0x4F49E2: sub     esp, 8
0x4F49E5: fstp    [esp+10h+var_10]
0x4F49E8: push    offset aGetequipped0_2; "GetEquipped >> %0.2f"
0x4F49ED: call    Interface_ConsolePrint
0x4F49F2: add     esp, 0Ch
0x4F49F5: pop     esi
0x4F49F6: mov     al, 1
0x4F49F8: pop     ebx
0x4F49F9: retn
