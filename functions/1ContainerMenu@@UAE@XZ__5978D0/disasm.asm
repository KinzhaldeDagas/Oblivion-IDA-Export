0x5978D0: push    0FFFFFFFFh
0x5978D2: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x5978D7: mov     eax, large fs:0
0x5978DD: push    eax
0x5978DE: push    ecx
0x5978DF: push    esi
0x5978E0: mov     eax, ds:0B30AACh
0x5978E5: xor     eax, esp
0x5978E7: push    eax
0x5978E8: lea     eax, [esp+18h+var_C]
0x5978EC: mov     large fs:0, eax
0x5978F2: mov     esi, ecx
0x5978F4: mov     [esp+18h+var_10], esi
0x5978F8: mov     dword ptr [esi], offset ??_7ContainerMenu@@6B@; const ContainerMenu::`vftable'
0x5978FE: mov     ecx, ds:0B33A98h
0x597904: mov     [esp+18h+var_4], 0
0x59790C: call    sub_446C10
0x597911: mov     ecx, esi; this
0x597913: mov     [esp+18h+var_4], 0FFFFFFFFh
0x59791B: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x597920: mov     ecx, [esp+18h+var_C]
0x597924: mov     large fs:0, ecx
0x59792B: pop     ecx
0x59792C: pop     esi
0x59792D: add     esp, 10h
0x597930: retn
0x9C0380: mov     ecx, [ebp-10h]; this
0x9C0383: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C0388: mov     edx, [esp+arg_4]
0x9C038C: lea     eax, [edx-8]
0x9C038F: mov     ecx, [edx-0Ch]
0x9C0392: xor     ecx, eax
0x9C0394: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0399: mov     eax, offset stru_AE9668
0x9C039E: jmp     ___CxxFrameHandler3
