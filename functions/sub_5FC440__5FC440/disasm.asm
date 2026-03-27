0x5FC440: push    ebx
0x5FC441: push    ebp
0x5FC442: mov     ebp, [esp+8+arg_4]
0x5FC446: test    ebp, ebp
0x5FC448: push    esi
0x5FC449: mov     esi, ecx
0x5FC44B: jz      short loc_5FC45A
0x5FC44D: push    0
0x5FC44F: mov     ecx, ebp
0x5FC451: call    ExtraDataList_HasWorn
0x5FC456: mov     bl, al
0x5FC458: jmp     short loc_5FC45C
0x5FC45A: xor     bl, bl
0x5FC45C: cmp     esi, ds:0B333C4h
0x5FC462: jnz     short loc_5FC4A4
0x5FC464: cmp     dword ptr [esi+58h], 0
0x5FC468: jz      short loc_5FC4A4
0x5FC46A: mov     ecx, [esi+58h]
0x5FC46D: mov     eax, [ecx]
0x5FC46F: mov     edx, [eax+2D0h]
0x5FC475: call    edx
0x5FC477: cmp     eax, 0FFFFFFFFh
0x5FC47A: jz      short loc_5FC4A4
0x5FC47C: test    bl, bl
0x5FC47E: jz      short loc_5FC4A4
0x5FC480: fld     dword ptr ds:0A30634h
0x5FC486: mov     eax, ds:0B38A38h
0x5FC48B: push    ecx
0x5FC48C: fstp    [esp+10h+duration]; duration
0x5FC48F: push    1; unk2
0x5FC491: push    0; unk1
0x5FC493: push    eax; string
0x5FC494: call    GameUI_QueueMessage
0x5FC499: add     esp, 10h
0x5FC49C: pop     esi
0x5FC49D: pop     ebp
0x5FC49E: xor     eax, eax
0x5FC4A0: pop     ebx
0x5FC4A1: retn    14h
0x5FC4A4: push    edi
0x5FC4A5: mov     ecx, esi; this
0x5FC4A7: call    TESObjectREFR_GetParentCell
0x5FC4AC: mov     edi, eax
0x5FC4AE: call    sub_4C9F60
0x5FC4B3: test    al, al
0x5FC4B5: jz      short loc_5FC4FF
0x5FC4B7: test    edi, edi
0x5FC4B9: jz      short loc_5FC4FF
0x5FC4BB: mov     ecx, edi
0x5FC4BD: call    sub_4CC910
0x5FC4C2: test    eax, eax
0x5FC4C4: jnz     short loc_5FC4D2
0x5FC4C6: push    esi
0x5FC4C7: mov     ecx, edi
0x5FC4C9: call    sub_4D4790
0x5FC4CE: test    eax, eax
0x5FC4D0: jz      short loc_5FC4FF
0x5FC4D2: mov     ecx, [esp+10h+arg_0]
0x5FC4D6: mov     edx, [esi]
0x5FC4D8: mov     edx, [edx+100h]
0x5FC4DE: push    0
0x5FC4E0: push    1
0x5FC4E2: push    0
0x5FC4E4: push    0
0x5FC4E6: push    eax
0x5FC4E7: mov     eax, [esp+24h+arg_8]
0x5FC4EB: push    0
0x5FC4ED: push    0
0x5FC4EF: push    eax
0x5FC4F0: push    ebp
0x5FC4F1: push    ecx
0x5FC4F2: mov     ecx, esi
0x5FC4F4: call    edx
0x5FC4F6: pop     edi
0x5FC4F7: pop     esi
0x5FC4F8: pop     ebp
0x5FC4F9: xor     eax, eax
0x5FC4FB: pop     ebx
0x5FC4FC: retn    14h
0x5FC4FF: test    ebp, ebp
0x5FC501: mov     edi, [esp+10h+arg_0]
0x5FC505: jz      short loc_5FC550
0x5FC507: mov     ecx, ebp
0x5FC509: call    ExtraDataList_GetOwner
0x5FC50E: test    eax, eax
0x5FC510: jz      short loc_5FC537
0x5FC512: mov     ecx, ebp
0x5FC514: call    ExtraDataList_GetOwner
0x5FC519: test    eax, eax
0x5FC51B: jz      loc_5FC5B7
0x5FC521: mov     eax, [esi]
0x5FC523: mov     edx, [eax+198h]
0x5FC529: push    0
0x5FC52B: mov     ecx, esi
0x5FC52D: call    edx
0x5FC52F: test    al, al
0x5FC531: jz      loc_5FC5B7
0x5FC537: mov     eax, [esi]
0x5FC539: mov     edx, [eax+198h]
0x5FC53F: push    0
0x5FC541: mov     ecx, esi
0x5FC543: call    edx
0x5FC545: test    al, al
0x5FC547: jz      short loc_5FC550
0x5FC549: mov     ecx, ebp
0x5FC54B: call    ExtraDataList_RemoveOwner
0x5FC550: mov     ecx, esi; this
0x5FC552: call    TESObjectREFR_GetParentCell
0x5FC557: test    eax, eax
0x5FC559: jz      short loc_5FC5B7
0x5FC55B: mov     ecx, esi; this
0x5FC55D: call    TESObjectREFR_GetParentCell
0x5FC562: mov     ecx, eax
0x5FC564: call    TESObjectCELL_GetOwner
0x5FC569: test    eax, eax
0x5FC56B: jz      short loc_5FC5B7
0x5FC56D: push    edi
0x5FC56E: call    sub_470520
0x5FC573: mov     [esp+14h+arg_0], eax
0x5FC577: fild    [esp+14h+arg_0]
0x5FC57B: add     esp, 4
0x5FC57E: fld     dword ptr ds:0B373C8h
0x5FC584: fcompp
0x5FC586: fnstsw  ax
0x5FC588: test    ah, 1
0x5FC58B: jz      short loc_5FC59F
0x5FC58D: mov     eax, [esi]
0x5FC58F: mov     edx, [eax+198h]
0x5FC595: push    0
0x5FC597: mov     ecx, esi
0x5FC599: call    edx
0x5FC59B: test    al, al
0x5FC59D: jz      short loc_5FC5B7
0x5FC59F: mov     ecx, ds:0B333C4h
0x5FC5A5: mov     eax, [ecx]
0x5FC5A7: mov     edx, [eax+170h]
0x5FC5AD: call    edx
0x5FC5AF: push    eax
0x5FC5B0: mov     ecx, ebp
0x5FC5B2: call    ExtraDataList__SetOrRemoveExtraOwnership
0x5FC5B7: mov     ecx, [esp+10h+arg_10]
0x5FC5BB: mov     edx, [esp+10h+arg_C]
0x5FC5BF: mov     eax, [esi]
0x5FC5C1: push    0
0x5FC5C3: push    1
0x5FC5C5: push    ecx
0x5FC5C6: mov     ecx, [esp+1Ch+arg_8]
0x5FC5CA: push    edx
0x5FC5CB: mov     edx, [eax+100h]
0x5FC5D1: push    0
0x5FC5D3: push    1
0x5FC5D5: push    0
0x5FC5D7: push    ecx
0x5FC5D8: push    ebp
0x5FC5D9: push    edi
0x5FC5DA: mov     ecx, esi
0x5FC5DC: call    edx
0x5FC5DE: cmp     esi, ds:0B333C4h
0x5FC5E4: mov     ebx, eax
0x5FC5E6: jz      loc_5FC674
0x5FC5EC: mov     eax, [esi]
0x5FC5EE: mov     edx, [eax+170h]
0x5FC5F4: mov     ecx, esi
0x5FC5F6: call    edx
0x5FC5F8: cmp     byte ptr [eax+4], 23h ; '#'
0x5FC5FC: jnz     short loc_5FC674
0x5FC5FE: mov     eax, [esi]
0x5FC600: mov     edx, [eax+198h]
0x5FC606: push    0
0x5FC608: mov     ecx, esi
0x5FC60A: call    edx
0x5FC60C: test    al, al
0x5FC60E: jnz     short loc_5FC674
0x5FC610: movzx   eax, byte ptr [edi+4]
0x5FC614: cmp     eax, 14h
0x5FC617: jz      loc_5FC6C2
0x5FC61D: cmp     eax, 21h ; '!'
0x5FC620: jnz     short loc_5FC674
0x5FC622: mov     eax, [esi]
0x5FC624: mov     edx, [eax+334h]
0x5FC62A: push    1
0x5FC62C: mov     ecx, esi
0x5FC62E: call    edx
0x5FC630: test    al, al
0x5FC632: jnz     short loc_5FC674
0x5FC634: mov     eax, [esi]
0x5FC636: mov     edx, [eax+2B8h]
0x5FC63C: push    0FFFFFFFFh
0x5FC63E: mov     ecx, esi
0x5FC640: call    edx
0x5FC642: mov     edi, eax
0x5FC644: test    edi, edi
0x5FC646: jz      short loc_5FC674
0x5FC648: mov     ecx, [edi]
0x5FC64A: xor     eax, eax
0x5FC64C: test    ecx, ecx
0x5FC64E: jz      short loc_5FC652
0x5FC650: mov     eax, [ecx]
0x5FC652: push    0
0x5FC654: push    1
0x5FC656: push    eax
0x5FC657: mov     eax, [edi+8]
0x5FC65A: push    1
0x5FC65C: push    eax
0x5FC65D: mov     ecx, esi
0x5FC65F: call    Actor_EquipItem
0x5FC664: mov     ecx, edi
0x5FC666: call    ContainerEntryExtraData_DestroyDataTable
0x5FC66B: push    edi
0x5FC66C: call    FormHeapFree
0x5FC671: add     esp, 4
0x5FC674: test    ebx, ebx
0x5FC676: jz      short loc_5FC6B9
0x5FC678: mov     edx, [ebx]
0x5FC67A: mov     eax, [edx+154h]
0x5FC680: push    1
0x5FC682: mov     ecx, ebx
0x5FC684: call    eax
0x5FC686: push    eax
0x5FC687: call    sub_897A20
0x5FC68C: mov     edx, [esi]
0x5FC68E: mov     eax, [edx+198h]
0x5FC694: add     esp, 8
0x5FC697: push    0
0x5FC699: mov     ecx, esi
0x5FC69B: call    eax
0x5FC69D: test    al, al
0x5FC69F: jnz     short loc_5FC6B9
0x5FC6A1: mov     edx, [ebx]
0x5FC6A3: mov     eax, [edx+170h]
0x5FC6A9: push    0
0x5FC6AB: push    0
0x5FC6AD: mov     ecx, ebx
0x5FC6AF: call    eax
0x5FC6B1: push    eax
0x5FC6B2: mov     ecx, esi
0x5FC6B4: call    sub_5E99C0
0x5FC6B9: pop     edi
0x5FC6BA: pop     esi
0x5FC6BB: pop     ebp
0x5FC6BC: mov     eax, ebx
0x5FC6BE: pop     ebx
0x5FC6BF: retn    14h
0x5FC6C2: mov     eax, [esi]
0x5FC6C4: mov     edx, [eax+2C0h]
0x5FC6CA: mov     ecx, esi
0x5FC6CC: call    edx
0x5FC6CE: jmp     short loc_5FC674
