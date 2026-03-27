0x4F48F0: fldz
0x4F48F2: push    ebx
0x4F48F3: mov     ebx, [esp+4+arg_C]
0x4F48F7: fstp    qword ptr [ebx]
0x4F48F9: push    esi
0x4F48FA: mov     esi, [esp+8+arg_4]
0x4F48FE: push    edi
0x4F48FF: xor     edi, edi
0x4F4901: test    esi, esi
0x4F4903: jz      short loc_4F4917
0x4F4905: mov     eax, [esi]
0x4F4907: mov     edx, [eax+0A4h]
0x4F490D: mov     ecx, esi
0x4F490F: call    edx
0x4F4911: test    al, al
0x4F4913: jz      short loc_4F4917
0x4F4915: mov     edi, esi
0x4F4917: mov     esi, [esp+0Ch+arg_0]
0x4F491B: test    esi, esi
0x4F491D: jz      short loc_4F4953
0x4F491F: test    edi, edi
0x4F4921: jz      short loc_4F4953
0x4F4923: mov     ecx, esi; this
0x4F4925: call    TESObjectREFR_GetContainer
0x4F492A: test    eax, eax
0x4F492C: jz      short loc_4F4953
0x4F492E: push    eax
0x4F492F: push    esi; a1
0x4F4930: call    ContainerExtraData_GetContainerExtraDataForRef
0x4F4935: add     esp, 8
0x4F4938: test    eax, eax
0x4F493A: jz      short loc_4F4953
0x4F493C: push    edi; a2
0x4F493D: mov     ecx, eax; this
0x4F493F: call    ContainerExtraData_GetItemCount
0x4F4944: cdq
0x4F4945: xor     eax, edx
0x4F4947: sub     eax, edx
0x4F4949: mov     [esp+0Ch+arg_C], eax
0x4F494D: fild    [esp+0Ch+arg_C]
0x4F4951: fstp    qword ptr [ebx]
0x4F4953: cmp     byte ptr ds:0B361ACh, 0
0x4F495A: jz      short loc_4F4971
0x4F495C: fld     qword ptr [ebx]
0x4F495E: sub     esp, 8
0x4F4961: fstp    [esp+14h+var_18+4]
0x4F4964: push    offset aGetitemcount0_; "GetItemCount >> %0.2f"
0x4F4969: call    Interface_ConsolePrint
0x4F496E: add     esp, 0Ch
0x4F4971: pop     edi
0x4F4972: pop     esi
0x4F4973: mov     al, 1
0x4F4975: pop     ebx
0x4F4976: retn
