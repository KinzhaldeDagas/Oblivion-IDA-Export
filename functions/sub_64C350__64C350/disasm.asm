0x64C350: sub     esp, 44h
0x64C353: push    ebx
0x64C354: push    ebp
0x64C355: push    esi
0x64C356: push    edi
0x64C357: mov     edi, ecx
0x64C359: mov     eax, [edi]
0x64C35B: mov     edx, [eax+184h]
0x64C361: call    edx
0x64C363: cmp     dword ptr [edi+2Ch], 0
0x64C367: mov     esi, [esp+54h+arg_0]
0x64C36B: mov     ebp, eax
0x64C36D: jnz     short loc_64C37C
0x64C36F: mov     eax, [edi]
0x64C371: mov     edx, [eax+558h]
0x64C377: push    esi
0x64C378: mov     ecx, edi
0x64C37A: call    edx
0x64C37C: mov     ecx, esi
0x64C37E: call    sub_5E6780
0x64C383: test    eax, eax
0x64C385: jnz     short loc_64C3E2
0x64C387: cmp     [edi+2Ch], eax
0x64C38A: jz      short loc_64C3AF
0x64C38C: mov     ecx, [edi+2Ch]
0x64C38F: mov     eax, [ecx]
0x64C391: mov     edx, [eax+190h]
0x64C397: call    edx
0x64C399: test    al, al
0x64C39B: jnz     short loc_64C3E2
0x64C39D: mov     eax, [edi+2Ch]
0x64C3A0: mov     eax, [eax+0Ch]
0x64C3A3: push    eax
0x64C3A4: mov     ecx, esi
0x64C3A6: call    sub_4D88C0
0x64C3AB: test    al, al
0x64C3AD: jnz     short loc_64C3E2
0x64C3AF: mov     edx, [edi]
0x64C3B1: mov     eax, [edx+188h]
0x64C3B7: push    1
0x64C3B9: push    esi
0x64C3BA: mov     ecx, edi
0x64C3BC: call    eax
0x64C3BE: cmp     byte ptr [edi+0D0h], 0
0x64C3C5: jnz     loc_64CAFB
0x64C3CB: mov     edx, [edi]
0x64C3CD: mov     eax, [edx+194h]
0x64C3D3: push    esi
0x64C3D4: mov     ecx, edi
0x64C3D6: call    eax
0x64C3D8: pop     edi
0x64C3D9: pop     esi
0x64C3DA: pop     ebp
0x64C3DB: pop     ebx
0x64C3DC: add     esp, 44h
0x64C3DF: retn    4
0x64C3E2: cmp     dword ptr [edi+2Ch], 0
0x64C3E6: mov     byte ptr [esp+54h+arg_0], 0
0x64C3EB: jz      short loc_64C45D
0x64C3ED: mov     ecx, [edi+2Ch]
0x64C3F0: mov     edx, [ecx]
0x64C3F2: mov     eax, [edx+190h]
0x64C3F8: call    eax
0x64C3FA: test    al, al
0x64C3FC: jz      short loc_64C45D
0x64C3FE: mov     eax, [edi+2Ch]
0x64C401: cmp     eax, esi
0x64C403: jz      short loc_64C45D
0x64C405: push    0; int
0x64C407: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x64C40C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x64C411: push    0; int
0x64C413: push    eax; void *
0x64C414: mov     byte ptr [esp+68h+arg_0], 1
0x64C419: call    OblivionDynamicCast
0x64C41E: mov     edx, [edi+2Ch]
0x64C421: mov     ecx, [eax+58h]
0x64C424: mov     ecx, [ecx+8]
0x64C427: add     esp, 14h
0x64C42A: cmp     edx, ds:0B333C4h
0x64C430: jz      short loc_64C45D
0x64C432: test    ecx, ecx
0x64C434: jz      short loc_64C445
0x64C436: cmp     byte ptr [ecx+20h], 1
0x64C43A: jz      short loc_64C45D
0x64C43C: call    sub_5660A0
0x64C441: test    al, al
0x64C443: jnz     short loc_64C45D
0x64C445: mov     eax, [edi]
0x64C447: mov     edx, [eax+17Ch]
0x64C44D: push    0
0x64C44F: mov     ecx, edi
0x64C451: call    edx
0x64C453: pop     edi
0x64C454: pop     esi
0x64C455: pop     ebp
0x64C456: pop     ebx
0x64C457: add     esp, 44h
0x64C45A: retn    4
0x64C45D: mov     eax, [esi]
0x64C45F: mov     edx, [eax+174h]
0x64C465: mov     ecx, esi
0x64C467: call    edx
0x64C469: mov     ebx, eax
0x64C46B: mov     eax, [esi]
0x64C46D: mov     edx, [eax+174h]
0x64C473: mov     ecx, esi
0x64C475: call    edx
0x64C477: fld     dword ptr [eax]
0x64C479: fsub    dword ptr [ebx]
0x64C47B: fstp    [esp+54h+var_18]
0x64C47F: fld     dword ptr [eax+4]
0x64C482: fsub    dword ptr [ebx+4]
0x64C485: fstp    [esp+54h+var_14]
0x64C489: fld     dword ptr [eax+8]
0x64C48C: fsub    dword ptr [ebx+8]
0x64C48F: xor     ebx, ebx
0x64C491: cmp     byte ptr [esp+54h+arg_0], bl
0x64C495: fstp    [esp+54h+var_10]
0x64C499: fldz
0x64C49B: fstp    [esp+54h+var_44]
0x64C49F: jz      loc_64C548
0x64C4A5: mov     ecx, [edi+2Ch]
0x64C4A8: mov     eax, [ecx]
0x64C4AA: mov     edx, [eax+174h]
0x64C4B0: call    edx
0x64C4B2: mov     ebx, eax
0x64C4B4: mov     eax, [esi]
0x64C4B6: mov     edx, [eax+174h]
0x64C4BC: mov     ecx, esi
0x64C4BE: call    edx
0x64C4C0: fld     dword ptr [eax]
0x64C4C2: fsub    dword ptr [ebx]
0x64C4C4: fstp    dword ptr [esp+54h+var_28+4]
0x64C4C8: fld     dword ptr [eax+4]
0x64C4CB: fsub    dword ptr [ebx+4]
0x64C4CE: fstp    [esp+54h+var_20]
0x64C4D2: mov     ecx, [esp+54h+var_20]
0x64C4D6: fld     dword ptr [eax+8]
0x64C4D9: mov     eax, dword ptr [esp+54h+var_28+4]
0x64C4DD: fsub    dword ptr [ebx+8]
0x64C4E0: mov     ebx, [edi+2Ch]
0x64C4E3: mov     [esp+54h+var_14], ecx
0x64C4E7: mov     ecx, [ebp+28h]
0x64C4EA: fstp    [esp+54h+var_1C]
0x64C4EE: mov     edx, [esp+54h+var_1C]
0x64C4F2: mov     [esp+54h+var_18], eax
0x64C4F6: mov     [esp+54h+var_10], edx
0x64C4FA: call    sub_452A60
0x64C4FF: test    eax, eax
0x64C501: mov     [esp+54h+var_44], eax
0x64C505: jg      short loc_64C50F
0x64C507: mov     [esp+54h+var_44], 0C8h ; 'È'
0x64C50F: mov     eax, [edi+2Ch]
0x64C512: cmp     eax, ds:0B333C4h
0x64C518: jnz     short loc_64C520
0x64C51A: fild    [esp+54h+var_44]
0x64C51E: jmp     short loc_64C544
0x64C520: mov     ecx, esi; this
0x64C522: call    TESObjectREFR_GetParentCell
0x64C527: mov     ecx, eax; this
0x64C529: call    TESObjectCELL_IsInterior
0x64C52E: test    al, al
0x64C530: jz      short loc_64C53A
0x64C532: fld     dword ptr ds:0B36AA0h
0x64C538: jmp     short loc_64C544
0x64C53A: fild    [esp+54h+var_44]
0x64C53E: fmul    dword ptr ds:0B36A98h
0x64C544: fstp    [esp+54h+var_44]
0x64C548: cmp     dword ptr [ebp+24h], 0
0x64C54C: jz      loc_64C7F1
0x64C552: fld     dword ptr ds:0A30634h
0x64C558: push    ecx
0x64C559: fstp    [esp+58h+var_58]; float
0x64C55C: push    0; char
0x64C55E: push    esi; int
0x64C55F: mov     ecx, ebp
0x64C561: call    sub_566DC0
0x64C566: test    al, al
0x64C568: jz      loc_64C7F1
0x64C56E: cmp     byte ptr [esp+54h+arg_0], 0
0x64C573: jnz     loc_64C700
0x64C579: mov     ecx, esi
0x64C57B: call    sub_5E6780
0x64C580: test    eax, eax
0x64C582: mov     [esp+54h+var_44], eax
0x64C586: jz      loc_64C3AF
0x64C58C: mov     eax, [eax]
0x64C58E: xor     ebx, ebx
0x64C590: test    eax, eax
0x64C592: mov     [esp+54h+arg_0], ebx
0x64C596: jz      short loc_64C5A0
0x64C598: mov     ecx, [eax]
0x64C59A: mov     [esp+54h+arg_0], ecx
0x64C59E: mov     ebx, ecx
0x64C5A0: test    ebx, ebx
0x64C5A2: mov     [esp+54h+var_40], 0
0x64C5AA: jz      short loc_64C5C5
0x64C5AC: mov     ecx, ebx
0x64C5AE: call    ExtraDataList_GetReferencePointer
0x64C5B3: test    eax, eax
0x64C5B5: jz      short loc_64C5C5
0x64C5B7: mov     ecx, ebx
0x64C5B9: call    ExtraDataList_GetReferencePointer
0x64C5BE: mov     edx, [eax+0Ch]
0x64C5C1: mov     [esp+54h+var_40], edx
0x64C5C5: mov     ecx, [ebp+24h]
0x64C5C8: call    sub_5697E0
0x64C5CD: mov     ebx, eax
0x64C5CF: test    ebx, ebx
0x64C5D1: jnz     short loc_64C5DA
0x64C5D3: mov     ebx, [edi+30h]
0x64C5D6: test    ebx, ebx
0x64C5D8: jz      short loc_64C60D
0x64C5DA: mov     ecx, ebx; this
0x64C5DC: call    TESObjectREFR_GetContainer
0x64C5E1: test    eax, eax
0x64C5E3: jz      short loc_64C60D
0x64C5E5: mov     edx, [esp+54h+var_40]
0x64C5E9: mov     eax, [esp+54h+var_44]
0x64C5ED: mov     ecx, [ebp+28h]
0x64C5F0: mov     ebp, [eax+8]
0x64C5F3: push    edx
0x64C5F4: call    sub_452A60
0x64C5F9: push    eax
0x64C5FA: mov     eax, [esp+5Ch+arg_0]
0x64C5FE: push    ebx
0x64C5FF: push    eax
0x64C600: push    ebp
0x64C601: mov     ecx, esi
0x64C603: call    sub_5FC6D0
0x64C608: jmp     loc_64C6E7
0x64C60D: mov     ecx, [esp+54h+var_44]
0x64C611: mov     eax, [ecx]
0x64C613: test    eax, eax
0x64C615: jz      short loc_64C61D
0x64C617: mov     edx, [eax]
0x64C619: mov     [esp+54h+arg_0], edx
0x64C61D: mov     ecx, [ebp+24h]
0x64C620: test    ecx, ecx
0x64C622: mov     [esp+54h+var_40], 0
0x64C62A: jz      loc_64C6B4
0x64C630: call    sub_5697E0
0x64C635: mov     ebx, eax
0x64C637: test    ebx, ebx
0x64C639: jnz     short loc_64C642
0x64C63B: mov     ebx, [edi+30h]
0x64C63E: test    ebx, ebx
0x64C640: jz      short loc_64C6B4
0x64C642: mov     eax, [ebx]
0x64C644: mov     edx, [eax+170h]
0x64C64A: mov     ecx, ebx
0x64C64C: call    edx
0x64C64E: cmp     eax, ds:0B35EACh
0x64C654: jz      short loc_64C66A
0x64C656: mov     eax, [ebx]
0x64C658: mov     edx, [eax+170h]
0x64C65E: mov     ecx, ebx
0x64C660: call    edx
0x64C662: cmp     eax, ds:0B35EB0h
0x64C668: jnz     short loc_64C6B4
0x64C66A: mov     eax, [ebx]
0x64C66C: mov     edx, [eax+174h]
0x64C672: mov     ecx, ebx
0x64C674: call    edx
0x64C676: mov     ecx, [eax]
0x64C678: mov     edx, [eax+4]
0x64C67B: mov     eax, [eax+8]
0x64C67E: push    0Ch; Size
0x64C680: mov     [esp+58h+var_18], ecx
0x64C684: mov     [esp+58h+var_14], edx
0x64C688: mov     [esp+58h+var_10], eax
0x64C68C: call    FormHeapAlloc
0x64C691: add     esp, 4
0x64C694: test    eax, eax
0x64C696: jz      short loc_64C6AE
0x64C698: fld     [esp+54h+var_18]
0x64C69C: fstp    dword ptr [eax]
0x64C69E: fld     [esp+54h+var_14]
0x64C6A2: fstp    dword ptr [eax+4]
0x64C6A5: fld     [esp+54h+var_10]
0x64C6A9: fstp    dword ptr [eax+8]
0x64C6AC: jmp     short loc_64C6B0
0x64C6AE: xor     eax, eax
0x64C6B0: mov     [esp+54h+var_40], eax
0x64C6B4: mov     ecx, [esp+54h+var_44]
0x64C6B8: mov     ebp, [ebp+28h]
0x64C6BB: mov     eax, [esp+54h+var_40]
0x64C6BF: mov     ebx, [ecx+8]
0x64C6C2: mov     edx, [esi]
0x64C6C4: push    0
0x64C6C6: push    eax
0x64C6C7: mov     ecx, ebp
0x64C6C9: mov     [esp+5Ch+var_40+4], edx
0x64C6CD: call    sub_452A60
0x64C6D2: mov     ecx, [esp+5Ch+arg_0]
0x64C6D6: mov     edx, [esp+5Ch+var_40+4]
0x64C6DA: push    eax
0x64C6DB: mov     eax, [edx+2C8h]
0x64C6E1: push    ecx
0x64C6E2: push    ebx
0x64C6E3: mov     ecx, esi
0x64C6E5: call    eax
0x64C6E7: mov     ebx, [esp+54h+var_44]
0x64C6EB: mov     ecx, ebx
0x64C6ED: call    ContainerEntryExtraData_DestroyDataTable
0x64C6F2: push    ebx
0x64C6F3: call    FormHeapFree
0x64C6F8: add     esp, 4
0x64C6FB: jmp     loc_64C3AF
0x64C700: fld     [esp+54h+var_18]
0x64C704: fld     [esp+54h+var_14]
0x64C708: fld     [esp+54h+var_10]
0x64C70C: fld     st(1)
0x64C70E: fmulp   st(2), st
0x64C710: fld     st(2)
0x64C712: fmulp   st(3), st
0x64C714: fxch    st(1)
0x64C716: faddp   st(2), st
0x64C718: fmul    st, st
0x64C71A: faddp   st(1), st
0x64C71C: fstp    [esp+54h+arg_0]
0x64C720: fld     [esp+54h+arg_0]
0x64C724: call    __CIsqrt
0x64C729: fstp    [esp+54h+arg_0]
0x64C72D: fld     [esp+54h+arg_0]
0x64C731: fld     [esp+54h+var_44]
0x64C735: fcompp
0x64C737: fnstsw  ax
0x64C739: test    ah, 1
0x64C73C: jnz     loc_64C3BE
0x64C742: mov     edx, [edi]
0x64C744: mov     eax, [edx+188h]
0x64C74A: push    1
0x64C74C: push    esi
0x64C74D: mov     ecx, edi
0x64C74F: call    eax
0x64C751: mov     ebx, [edi+2Ch]
0x64C754: mov     ecx, [ebx+58h]
0x64C757: mov     edx, [ecx]
0x64C759: mov     eax, [edx+184h]
0x64C75F: call    eax
0x64C761: test    eax, eax
0x64C763: jz      loc_64C3BE
0x64C769: mov     ecx, [ebx+58h]
0x64C76C: mov     edx, [ecx]
0x64C76E: mov     eax, [edx+188h]
0x64C774: push    1
0x64C776: push    esi
0x64C777: call    eax
0x64C779: mov     ecx, [ebx+58h]
0x64C77C: mov     edx, [ecx]
0x64C77E: mov     eax, [edx+184h]
0x64C784: call    eax
0x64C786: mov     ecx, eax
0x64C788: call    sub_5660A0
0x64C78D: test    al, al
0x64C78F: jz      loc_64C3BE
0x64C795: mov     ecx, [ebx+58h]
0x64C798: mov     edx, [ecx]
0x64C79A: mov     eax, [edx+184h]
0x64C7A0: call    eax
0x64C7A2: test    eax, eax
0x64C7A4: jz      short loc_64C7B1
0x64C7A6: mov     edx, [eax]
0x64C7A8: mov     ecx, eax
0x64C7AA: mov     eax, [edx+10h]
0x64C7AD: push    1
0x64C7AF: call    eax
0x64C7B1: mov     ecx, [ebx+58h]
0x64C7B4: mov     dword ptr [ecx+8], 0
0x64C7BB: mov     edx, [ebx]
0x64C7BD: mov     eax, [edx+44h]
0x64C7C0: push    30000h
0x64C7C5: mov     ecx, ebx
0x64C7C7: call    eax
0x64C7C9: mov     ecx, ebx
0x64C7CB: call    sub_5E05B0
0x64C7D0: test    al, al
0x64C7D2: jz      short loc_64C7DB
0x64C7D4: mov     ecx, ebx
0x64C7D6: call    sub_5E02B0
0x64C7DB: mov     edx, [edi]
0x64C7DD: mov     eax, [edx+18h]
0x64C7E0: push    0
0x64C7E2: push    esi
0x64C7E3: mov     ecx, edi
0x64C7E5: call    eax
0x64C7E7: pop     edi
0x64C7E8: pop     esi
0x64C7E9: pop     ebp
0x64C7EA: pop     ebx
0x64C7EB: add     esp, 44h
0x64C7EE: retn    4
0x64C7F1: cmp     byte ptr [esp+54h+arg_0], 0
0x64C7F6: jz      loc_64C992
0x64C7FC: push    esi
0x64C7FD: lea     ecx, [esp+58h+var_C]
0x64C801: push    ecx
0x64C802: mov     ecx, ebp
0x64C804: call    sub_566B30
0x64C809: mov     edx, [esi]
0x64C80B: mov     [esp+54h+var_40+4], eax
0x64C80F: mov     eax, [edx+174h]
0x64C815: mov     ecx, esi
0x64C817: call    eax
0x64C819: fld     dword ptr [eax]
0x64C81B: mov     ecx, [esp+54h+var_40+4]
0x64C81F: fsub    dword ptr [ecx]
0x64C821: push    esi
0x64C822: fstp    dword ptr [esp+58h+var_28+4]
0x64C826: fld     dword ptr [eax+4]
0x64C829: fsub    dword ptr [ecx+4]
0x64C82C: fstp    [esp+58h+var_20]
0x64C830: fld     dword ptr [eax+8]
0x64C833: fsub    dword ptr [ecx+8]
0x64C836: lea     ecx, [esp+58h+var_34+4]
0x64C83A: push    ecx
0x64C83B: mov     ecx, ebp
0x64C83D: fstp    [esp+5Ch+var_1C]
0x64C841: call    sub_566B30
0x64C846: mov     edx, [ebx]
0x64C848: mov     [esp+54h+var_40+4], eax
0x64C84C: mov     eax, [edx+174h]
0x64C852: mov     ecx, ebx
0x64C854: call    eax
0x64C856: fld     dword ptr [eax]
0x64C858: mov     ecx, [esp+54h+var_40+4]
0x64C85C: fsub    dword ptr [ecx]
0x64C85E: fstp    [esp+54h+var_C]
0x64C862: fld     dword ptr [eax+4]
0x64C865: fsub    dword ptr [ecx+4]
0x64C868: fstp    [esp+54h+var_8]
0x64C86C: fld     dword ptr [eax+8]
0x64C86F: fsub    dword ptr [ecx+8]
0x64C872: fstp    [esp+54h+var_4]
0x64C876: fld     [esp+54h+var_18]
0x64C87A: fld     [esp+54h+var_14]
0x64C87E: fld     [esp+54h+var_10]
0x64C882: fld     st(1)
0x64C884: fmulp   st(2), st
0x64C886: fld     st(2)
0x64C888: fmulp   st(3), st
0x64C88A: fxch    st(1)
0x64C88C: faddp   st(2), st
0x64C88E: fmul    st, st
0x64C890: faddp   st(1), st
0x64C892: fstp    [esp+54h+var_40+4]
0x64C896: fld     [esp+54h+var_40+4]
0x64C89A: call    __CIsqrt
0x64C89F: fstp    [esp+54h+var_40+4]
0x64C8A3: fld     [esp+54h+var_40+4]
0x64C8A7: fld     [esp+54h+var_44]
0x64C8AB: fcompp
0x64C8AD: fnstsw  ax
0x64C8AF: test    ah, 5
0x64C8B2: jp      loc_64C93D
0x64C8B8: fld     [esp+54h+var_20]
0x64C8BC: fld     dword ptr [esp+54h+var_28+4]
0x64C8C0: fld     [esp+54h+var_1C]
0x64C8C4: fld     [esp+54h+var_8]
0x64C8C8: fstp    [esp+54h+var_34+4]
0x64C8CC: fld     [esp+54h+var_C]
0x64C8D0: fstp    qword ptr [esp+54h+var_40+8]
0x64C8D4: fld     [esp+54h+var_4]
0x64C8D8: fstp    [esp+54h+var_28+4]
0x64C8DC: fld     st(1)
0x64C8DE: fmulp   st(2), st
0x64C8E0: fld     st(2)
0x64C8E2: fmulp   st(3), st
0x64C8E4: fxch    st(1)
0x64C8E6: faddp   st(2), st
0x64C8E8: fmul    st, st
0x64C8EA: faddp   st(1), st
0x64C8EC: fstp    [esp+54h+var_40+4]
0x64C8F0: fld     [esp+54h+var_40+4]
0x64C8F4: call    __CIsqrt
0x64C8F9: fstp    [esp+54h+var_40+4]
0x64C8FD: fld     [esp+54h+var_40+4]
0x64C901: fstp    [esp+54h+var_40]
0x64C905: fld     qword ptr [esp+54h+var_40+8]
0x64C909: fmul    st, st
0x64C90B: fld     [esp+54h+var_34+4]
0x64C90F: fmul    st, st
0x64C911: faddp   st(1), st
0x64C913: fld     [esp+54h+var_28+4]
0x64C917: fmul    st, st
0x64C919: faddp   st(1), st
0x64C91B: fstp    [esp+54h+var_40+4]
0x64C91F: fld     [esp+54h+var_40+4]
0x64C923: call    __CIsqrt
0x64C928: fstp    [esp+54h+var_40+4]
0x64C92C: fld     [esp+54h+var_40+4]
0x64C930: fld     [esp+54h+var_40]
0x64C934: fcompp
0x64C936: fnstsw  ax
0x64C938: test    ah, 41h
0x64C93B: jnp     short loc_64C962
0x64C93D: cmp     ebx, ds:0B333C4h
0x64C943: jz      short loc_64C992
0x64C945: mov     ecx, ebx
0x64C947: call    sub_5E0380
0x64C94C: test    eax, eax
0x64C94E: jz      short loc_64C992
0x64C950: mov     ecx, ebx
0x64C952: call    sub_5E0380
0x64C957: mov     ecx, eax
0x64C959: call    sub_567770
0x64C95E: test    al, al
0x64C960: jz      short loc_64C992
0x64C962: cmp     byte ptr [edi+0D0h], 0
0x64C969: jnz     short loc_64C99F
0x64C96B: mov     edx, [edi]
0x64C96D: mov     eax, [edx+0C4h]
0x64C973: push    1
0x64C975: mov     ecx, edi
0x64C977: call    eax
0x64C979: mov     edx, [edi]
0x64C97B: mov     eax, [edx+188h]
0x64C981: push    0FFFFFFFFh
0x64C983: push    esi
0x64C984: mov     ecx, edi
0x64C986: call    eax
0x64C988: pop     edi
0x64C989: pop     esi
0x64C98A: pop     ebp
0x64C98B: pop     ebx
0x64C98C: add     esp, 44h
0x64C98F: retn    4
0x64C992: cmp     byte ptr [edi+0D0h], 0
0x64C999: jz      loc_64CA44
0x64C99F: cmp     byte ptr [esp+54h+arg_0], 0
0x64C9A4: jz      short loc_64C9E4
0x64C9A6: fld     [esp+54h+var_18]
0x64C9AA: fld     [esp+54h+var_14]
0x64C9AE: fld     [esp+54h+var_10]
0x64C9B2: fld     st(1)
0x64C9B4: fmulp   st(2), st
0x64C9B6: fld     st(2)
0x64C9B8: fmulp   st(3), st
0x64C9BA: fxch    st(1)
0x64C9BC: faddp   st(2), st
0x64C9BE: fmul    st, st
0x64C9C0: faddp   st(1), st
0x64C9C2: fstp    [esp+54h+arg_0]
0x64C9C6: fld     [esp+54h+arg_0]
0x64C9CA: call    __CIsqrt
0x64C9CF: fstp    [esp+54h+arg_0]
0x64C9D3: fld     [esp+54h+arg_0]
0x64C9D7: fld     [esp+54h+var_44]
0x64C9DB: fcompp
0x64C9DD: fnstsw  ax
0x64C9DF: test    ah, 1
0x64C9E2: jnz     short loc_64CA37
0x64C9E4: mov     ecx, [edi]
0x64C9E6: push    esi
0x64C9E7: lea     edx, [esp+58h+var_C]
0x64C9EB: mov     [esp+58h+arg_0], ecx
0x64C9EF: push    edx
0x64C9F0: mov     ecx, ebp
0x64C9F2: call    sub_566B30
0x64C9F7: push    esi
0x64C9F8: mov     ecx, ebp
0x64C9FA: mov     ebx, eax
0x64C9FC: call    sub_566940
0x64CA01: push    eax
0x64CA02: push    esi
0x64CA03: mov     ecx, ebp
0x64CA05: call    sub_566A40
0x64CA0A: mov     ecx, [ebx]
0x64CA0C: mov     edx, [ebx+4]
0x64CA0F: push    eax
0x64CA10: sub     esp, 0Ch
0x64CA13: mov     eax, esp
0x64CA15: mov     [eax], ecx
0x64CA17: mov     ecx, [ebx+8]
0x64CA1A: mov     [eax+4], edx
0x64CA1D: mov     edx, [esp+68h+arg_0]
0x64CA21: mov     [eax+8], ecx
0x64CA24: mov     eax, [edx+3DCh]
0x64CA2A: push    esi
0x64CA2B: mov     ecx, edi
0x64CA2D: call    eax
0x64CA2F: test    al, al
0x64CA31: jz      loc_64CAFB
0x64CA37: cmp     byte ptr [edi+0D0h], 0
0x64CA3E: jnz     loc_64CAFB
0x64CA44: push    3Ah ; ':'; a1
0x64CA46: call    TESForm_LookupByFormID
0x64CA4B: add     esp, 4
0x64CA4E: mov     ecx, offset TimeGlobals
0x64CA53: mov     ebx, eax
0x64CA55: call    TimeGlobals_GetGameHour
0x64CA5A: fstp    [esp+54h+arg_0]
0x64CA5E: fld     [esp+54h+arg_0]
0x64CA62: mov     ecx, esi; this
0x64CA64: fstp    [esp+54h+var_28+4]
0x64CA68: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x64CA6D: fcomp   [esp+54h+var_28+4]
0x64CA71: fnstsw  ax
0x64CA73: test    ah, 41h
0x64CA76: jnz     short loc_64CA86
0x64CA78: fld     [esp+54h+arg_0]
0x64CA7C: fadd    qword ptr ds:0A2F920h
0x64CA82: fstp    [esp+54h+arg_0]
0x64CA86: fld     [esp+54h+arg_0]
0x64CA8A: mov     ecx, esi; this
0x64CA8C: fstp    [esp+54h+var_28+4]
0x64CA90: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x64CA95: fsubr   [esp+54h+var_28+4]
0x64CA99: push    1
0x64CA9B: push    esi
0x64CA9C: mov     ecx, ebp
0x64CA9E: fstp    [esp+5Ch+var_40+4]
0x64CAA2: fld     dword ptr [ebx+24h]
0x64CAA5: mov     ebx, [edi]
0x64CAA7: fstp    [esp+5Ch+arg_0]
0x64CAAB: call    sub_5677B0
0x64CAB0: sub     esp, 8
0x64CAB3: fstp    [esp+5Ch+var_58]
0x64CAB7: mov     ecx, ebp
0x64CAB9: fld     [esp+5Ch+arg_0]
0x64CABD: fdivr   qword ptr ds:0A2F938h
0x64CAC3: fmul    [esp+5Ch+var_40+4]
0x64CAC7: fstp    [esp+5Ch+arg_0]
0x64CACB: fld     [esp+5Ch+arg_0]
0x64CACF: fstp    [esp+5Ch+var_5C]
0x64CAD2: push    esi
0x64CAD3: call    sub_566940
0x64CAD8: push    eax
0x64CAD9: push    esi
0x64CADA: mov     ecx, ebp
0x64CADC: call    sub_566A40
0x64CAE1: push    eax
0x64CAE2: push    esi
0x64CAE3: lea     ecx, [esp+68h+var_C]
0x64CAE7: push    ecx
0x64CAE8: mov     ecx, ebp
0x64CAEA: call    sub_566B30
0x64CAEF: mov     edx, [ebx+418h]
0x64CAF5: push    eax
0x64CAF6: push    esi
0x64CAF7: mov     ecx, edi
0x64CAF9: call    edx
0x64CAFB: pop     edi
0x64CAFC: pop     esi
0x64CAFD: pop     ebp
0x64CAFE: pop     ebx
0x64CAFF: add     esp, 44h
0x64CB02: retn    4
