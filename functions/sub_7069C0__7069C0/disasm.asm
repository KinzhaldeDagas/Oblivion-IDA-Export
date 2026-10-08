0x7069C0: push    0FFFFFFFFh
0x7069C2: push    offset SEH_8C62B0
0x7069C7: mov     eax, large fs:0
0x7069CD: push    eax
0x7069CE: push    ecx
0x7069CF: push    esi
0x7069D0: mov     eax, ds:0B30AACh
0x7069D5: xor     eax, esp
0x7069D7: push    eax
0x7069D8: lea     eax, [esp+18h+var_C]
0x7069DC: mov     large fs:0, eax
0x7069E2: push    1Ch; Size
0x7069E4: call    FormHeapAlloc
0x7069E9: mov     esi, eax
0x7069EB: add     esp, 4
0x7069EE: mov     [esp+18h+var_10], esi
0x7069F2: test    esi, esi
0x7069F4: mov     [esp+18h+var_4], 0
0x7069FC: jz      short loc_706A24
0x7069FE: mov     ecx, esi; this
0x706A00: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x706A05: mov     dword ptr [esi], offset ??_7NiWireframeProperty@@6B@; const NiWireframeProperty::`vftable'
0x706A0B: mov     word ptr [esi+18h], 0
0x706A11: mov     eax, esi
0x706A13: mov     ecx, [esp+18h+var_C]
0x706A17: mov     large fs:0, ecx
0x706A1E: pop     ecx
0x706A1F: pop     esi
0x706A20: add     esp, 10h
0x706A23: retn
0x706A24: xor     eax, eax
0x706A26: mov     ecx, [esp+18h+var_C]
0x706A2A: mov     large fs:0, ecx
0x706A31: pop     ecx
0x706A32: pop     esi
0x706A33: add     esp, 10h
0x706A36: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
