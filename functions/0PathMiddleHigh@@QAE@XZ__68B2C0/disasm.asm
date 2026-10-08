0x68B2C0: push    0FFFFFFFFh
0x68B2C2: push    offset ??0PathMiddleHigh@@QAE@XZ_SEH
0x68B2C7: mov     eax, large fs:0
0x68B2CD: push    eax
0x68B2CE: push    ecx
0x68B2CF: push    esi
0x68B2D0: mov     eax, ds:0B30AACh
0x68B2D5: xor     eax, esp
0x68B2D7: push    eax
0x68B2D8: lea     eax, [esp+18h+var_C]
0x68B2DC: mov     large fs:0, eax
0x68B2E2: mov     esi, ecx
0x68B2E4: mov     [esp+18h+var_10], esi
0x68B2E8: call    PathLow_ctor; Verified PathLow constructor: installs the PathLow vtable at +0, initializes the BSSimpleList at +4/+8 to empty, copies unk_B3A458 to +0x0C, and sets byte +0x10 to 1. +0x0C and byte +0x10 semantics remain Unknown.
0x68B2ED: lea     ecx, [esi+14h]
0x68B2F0: mov     [esp+18h+var_4], 0
0x68B2F8: mov     dword ptr [esi], offset ??_7PathMiddleHigh@@6B@; const PathMiddleHigh::`vftable'
0x68B2FE: call    sub_68C040
0x68B303: mov     eax, esi
0x68B305: mov     ecx, [esp+18h+var_C]
0x68B309: mov     large fs:0, ecx
0x68B310: pop     ecx
0x68B311: pop     esi
0x68B312: add     esp, 10h
0x68B315: retn
0x9C52F0: mov     ecx, [ebp-10h]; this
0x9C52F3: jmp     PathLow_dtor; Verified PathLow destructor: restores the PathLow vtable and frees/clears owned TravelPathNode records through TravelPath_ClearNodes. This routine does not free the containing object.
0x9C52F8: mov     edx, [esp+arg_4]
0x9C52FC: lea     eax, [edx-8]
0x9C52FF: mov     ecx, [edx-0Ch]
0x9C5302: xor     ecx, eax
0x9C5304: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5309: mov     eax, offset stru_AEDAE8
0x9C530E: jmp     ___CxxFrameHandler3
