0x46A225: cmp     edi, ds:0B333C4h
0x46A22B: jnz     TESContainer_CopyContentsToRef___Done
0x46A231: cmp     ebx, ebp
0x46A233: jz      TESContainer_CopyContentsToRef___Done
0x46A239: mov     [esp+arg_10], ebp
0x46A23D: mov     [esp+arg_14], bp
0x46A242: mov     [esp+arg_14+2], bp
0x46A247: cmp     dword ptr [ebx], 1
0x46A24A: mov     eax, [ebx+4]
0x46A24D: mov     esi, ds:0B382A0h
0x46A253: push    ebp; int
0x46A254: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x46A259: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46A25E: push    ebp; int
0x46A25F: mov     [esp+10h+arg_13C], 2
0x46A26A: push    eax; void *
0x46A26B: jle     short loc_46A2A5
0x46A26D: mov     edi, ds:0B38298h
0x46A273: call    OblivionDynamicCast
0x46A278: add     esp, 14h
0x46A27B: cmp     eax, ebp
0x46A27D: jz      short loc_46A286
0x46A27F: mov     eax, [eax+4]
0x46A282: cmp     eax, ebp
0x46A284: jnz     short loc_46A28B
0x46A286: mov     eax, offset EmptyString
0x46A28B: mov     ecx, [ebx]
0x46A28D: push    esi
0x46A28E: push    edi
0x46A28F: push    eax
0x46A290: push    ecx; ArgList
0x46A291: lea     edx, [esp+10h+arg_10]
0x46A295: push    offset aISSS; "%i %s%s %s"
0x46A29A: push    edx; int
0x46A29B: call    BSStringT_Static_Format
0x46A2A0: add     esp, 18h
0x46A2A3: jmp     short loc_46A2D1
0x46A2A5: call    OblivionDynamicCast
0x46A2AA: add     esp, 14h
0x46A2AD: cmp     eax, ebp
0x46A2AF: jz      short loc_46A2B8
0x46A2B1: mov     eax, [eax+4]
0x46A2B4: cmp     eax, ebp
0x46A2B6: jnz     short loc_46A2BD
0x46A2B8: mov     eax, offset EmptyString
0x46A2BD: push    esi
0x46A2BE: push    eax; ArgList
0x46A2BF: lea     eax, [esp+8+arg_10]
0x46A2C3: push    offset aSS; "%s %s"
0x46A2C8: push    eax; int
0x46A2C9: call    BSStringT_Static_Format
0x46A2CE: add     esp, 10h
0x46A2D1: mov     ecx, ds:0B333C4h
0x46A2D7: mov     edx, [ebx+4]
0x46A2DA: push    ecx
0x46A2DB: push    edx
0x46A2DC: call    sub_4702D0
0x46A2E1: push    eax
0x46A2E2: push    offset aIcons; "Icons"
0x46A2E7: lea     eax, [esp+10h+arg_2C]
0x46A2EB: push    offset aSS_2; "%s\\%s"
0x46A2F0: push    eax
0x46A2F1: call    __sprintf
0x46A2F6: mov     ecx, [ebx+4]
0x46A2F9: add     esp, 18h
0x46A2FC: push    ebp
0x46A2FD: push    1
0x46A2FF: push    ecx
0x46A300: mov     ecx, ds:0B333C4h
0x46A306: call    GetItemUpDownSound
0x46A30B: fld     dword ptr ds:0A379B4h
0x46A311: mov     esi, [esp+arg_10]
0x46A315: push    eax; int
0x46A316: lea     edx, [esp+4+arg_2C]
0x46A31A: push    edx; int
0x46A31B: push    ecx
0x46A31C: fstp    [esp+0Ch+var_C]; float
0x46A31F: push    esi; int
0x46A320: call    QueueUIMessage
0x46A325: push    ebp
0x46A326: call    sub_57A3B0
0x46A32B: push    esi
0x46A32C: call    FormHeapFree
0x46A331: add     esp, 18h
