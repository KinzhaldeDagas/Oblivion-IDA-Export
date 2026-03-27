0x78C280: push    ebp
0x78C281: mov     ebp, esp
0x78C283: push    0FFFFFFFFh
0x78C285: push    offset SEH_78C280
0x78C28A: mov     eax, large fs:0
0x78C290: push    eax
0x78C291: sub     esp, 44h
0x78C294: push    ebx
0x78C295: push    esi
0x78C296: push    edi
0x78C297: mov     eax, ds:0B30AACh
0x78C29C: xor     eax, ebp
0x78C29E: push    eax
0x78C29F: lea     eax, [ebp+var_C]
0x78C2A2: mov     large fs:0, eax
0x78C2A8: mov     [ebp+var_10], esp
0x78C2AB: mov     ecx, [ecx+8]
0x78C2AE: xor     eax, eax
0x78C2B0: mov     [ebp+var_14], eax
0x78C2B3: mov     [ebp+var_4], eax
0x78C2B6: mov     eax, [ebp+arg_0]
0x78C2B9: push    eax
0x78C2BA: call    sub_798300
0x78C2BF: mov     [ebp+var_14], eax
0x78C2C2: mov     eax, [ebp+var_14]
0x78C2C5: mov     ecx, [ebp+var_C]
0x78C2C8: mov     large fs:0, ecx
0x78C2CF: pop     ecx
0x78C2D0: pop     edi
0x78C2D1: pop     esi
0x78C2D2: pop     ebx
0x78C2D3: mov     esp, ebp
0x78C2D5: pop     ebp
0x78C2D6: retn    4
0x78C2D9: mov     ecx, [ebp+var_18]
0x78C2DC: mov     edx, [ecx]
0x78C2DE: mov     eax, [edx+4]
0x78C2E1: call    eax
0x78C2E3: push    eax
0x78C2E4: push    offset aCspeedtreer_12; "CSpeedTreeRT::GetLeafBillboardTable"
0x78C2E9: push    offset aSFailedS; "%s - failed [%s]"
0x78C2EE: lea     esi, [ebp+var_34]
0x78C2F1: call    sub_7A54A0
0x78C2F6: add     esp, 0Ch
0x78C2F9: cmp     dword ptr [eax+18h], 10h
0x78C2FD: mov     byte ptr [ebp+var_4], 2
0x78C301: jb      short loc_78C308
0x78C303: mov     eax, [eax+4]
0x78C306: jmp     short loc_78C30B
0x78C308: add     eax, 4
0x78C30B: push    eax; Src
0x78C30C: call    sub_7895E0
0x78C311: add     esp, 4
0x78C314: lea     ecx, [ebp+var_34]
0x78C317: call    sub_79AB00
0x78C31C: mov     eax, offset loc_78C322
0x78C321: retn
0x78C322: jmp     short loc_78C2C2
0x78C324: push    offset aCspeedtreer_12; "CSpeedTreeRT::GetLeafBillboardTable"
0x78C329: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78C32E: lea     esi, [ebp+var_50]
0x78C331: call    sub_7A54A0
0x78C336: add     esp, 8
0x78C339: cmp     dword ptr [eax+18h], 10h
0x78C33D: mov     byte ptr [ebp+var_4], 3
0x78C341: jb      short loc_78C348
0x78C343: mov     eax, [eax+4]
0x78C346: jmp     short loc_78C34B
0x78C348: add     eax, 4
0x78C34B: push    eax; Src
0x78C34C: call    sub_7895E0
0x78C351: add     esp, 4
0x78C354: lea     ecx, [ebp+var_50]
0x78C357: call    sub_79AB00
0x78C35C: mov     eax, offset loc_78C2C2
0x78C361: retn
