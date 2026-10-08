0x587C60: push    0FFFFFFFFh
0x587C62: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x587C67: mov     eax, large fs:0
0x587C6D: push    eax
0x587C6E: push    ecx
0x587C6F: push    esi
0x587C70: mov     eax, ds:0B30AACh
0x587C75: xor     eax, esp
0x587C77: push    eax
0x587C78: lea     eax, [esp+18h+var_C]
0x587C7C: mov     large fs:0, eax
0x587C82: mov     esi, ecx
0x587C84: mov     [esp+18h+var_10], esi
0x587C88: mov     dword ptr [esi], offset ??_7VideoMenu@@6B@; const VideoMenu::`vftable'
0x587C8E: lea     ecx, [esi+100h]
0x587C94: mov     [esp+18h+var_4], 0
0x587C9C: call    ??1?$NiTList@UVideoRes@VideoMenu@@@@UAE@XZ; NiTList<VideoMenu::VideoRes>::~NiTList<VideoMenu::VideoRes>(void)
0x587CA1: mov     ecx, esi; this
0x587CA3: mov     [esp+18h+var_4], 0FFFFFFFFh
0x587CAB: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x587CB0: mov     ecx, [esp+18h+var_C]
0x587CB4: mov     large fs:0, ecx
0x587CBB: pop     ecx
0x587CBC: pop     esi
0x587CBD: add     esp, 10h
0x587CC0: retn
0x9C0380: mov     ecx, [ebp-10h]; this
0x9C0383: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C0388: mov     edx, [esp+arg_4]
0x9C038C: lea     eax, [edx-8]
0x9C038F: mov     ecx, [edx-0Ch]
0x9C0392: xor     ecx, eax
0x9C0394: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0399: mov     eax, offset stru_AE9668
0x9C039E: jmp     ___CxxFrameHandler3
