0x5BC4A0: push    0FFFFFFFFh; Verified aPortable: destructor transfers MessageMenu+0x5C callback into InterfaceManager+0xB4 before base Menu teardown. Do not create next message reentrantly from destruction; defer workflow to next safe UI dispatch.
0x5BC4A2: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x5BC4A7: mov     eax, large fs:0
0x5BC4AD: push    eax
0x5BC4AE: push    ecx
0x5BC4AF: push    esi
0x5BC4B0: mov     eax, ds:0B30AACh
0x5BC4B5: xor     eax, esp
0x5BC4B7: push    eax
0x5BC4B8: lea     eax, [esp+18h+var_C]
0x5BC4BC: mov     large fs:0, eax
0x5BC4C2: mov     esi, ecx
0x5BC4C4: mov     [esp+18h+var_10], esi
0x5BC4C8: mov     dword ptr [esi], offset ??_7MessageMenu@@6B@; const MessageMenu::`vftable'
0x5BC4CE: push    1; arg1
0x5BC4D0: push    0; canCreate
0x5BC4D2: mov     [esp+20h+var_4], 0
0x5BC4DA: call    InterfaceManager_GetSingleton
0x5BC4DF: mov     ecx, [esi+5Ch]
0x5BC4E2: mov     [eax+0B4h], ecx
0x5BC4E8: add     esp, 8
0x5BC4EB: mov     ecx, esi; this
0x5BC4ED: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5BC4F5: call    ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x5BC4FA: mov     ecx, [esp+18h+var_C]
0x5BC4FE: mov     large fs:0, ecx
0x5BC505: pop     ecx
0x5BC506: pop     esi
0x5BC507: add     esp, 10h
0x5BC50A: retn
0x9C0380: mov     ecx, [ebp-10h]; this
0x9C0383: jmp     ??1Menu@@UAE@XZ; Verified template ownership: Menu+0x1C byte gates freeing registered template objects; linked list nodes +8/+0xC always removed. Updated MenuMembr preserves size0x24; with vtable Menu total0x28. ReadFile0x5904EF sets Menu ownsTemplates=1 and BuildStorage ownsSubTemplates=0.
0x9C0388: mov     edx, [esp+arg_4]
0x9C038C: lea     eax, [edx-8]
0x9C038F: mov     ecx, [edx-0Ch]
0x9C0392: xor     ecx, eax
0x9C0394: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0399: mov     eax, offset stru_AE9668
0x9C039E: jmp     ___CxxFrameHandler3
