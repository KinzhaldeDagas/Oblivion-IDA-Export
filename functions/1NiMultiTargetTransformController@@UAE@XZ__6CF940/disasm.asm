0x6CF940: push    0FFFFFFFFh
0x6CF942: push    offset ??1NiMultiTargetTransformController@@UAE@XZ_SEH
0x6CF947: mov     eax, large fs:0
0x6CF94D: push    eax
0x6CF94E: push    ecx
0x6CF94F: push    esi
0x6CF950: mov     eax, ds:0B30AACh
0x6CF955: xor     eax, esp
0x6CF957: push    eax
0x6CF958: lea     eax, [esp+18h+var_C]
0x6CF95C: mov     large fs:0, eax
0x6CF962: mov     esi, ecx
0x6CF964: mov     [esp+18h+var_10], esi
0x6CF968: mov     dword ptr [esi], offset ??_7NiMultiTargetTransformController@@6B@; const NiMultiTargetTransformController::`vftable'
0x6CF96E: mov     ecx, [esi+3Ch]
0x6CF971: test    ecx, ecx
0x6CF973: mov     [esp+18h+var_4], 0
0x6CF97B: jz      short loc_6CF999
0x6CF97D: cmp     dword ptr [ecx-4], 0
0x6CF981: lea     eax, [ecx-4]
0x6CF984: jz      short loc_6CF990
0x6CF986: mov     eax, [ecx]
0x6CF988: mov     edx, [eax]
0x6CF98A: push    3
0x6CF98C: call    edx
0x6CF98E: jmp     short loc_6CF999
0x6CF990: push    eax
0x6CF991: call    FormHeapFree
0x6CF996: add     esp, 4
0x6CF999: mov     eax, [esi+40h]
0x6CF99C: push    eax
0x6CF99D: call    FormHeapFree
0x6CF9A2: add     esp, 4
0x6CF9A5: mov     ecx, esi; this
0x6CF9A7: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6CF9AF: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x6CF9B4: mov     ecx, [esp+18h+var_C]
0x6CF9B8: mov     large fs:0, ecx
0x6CF9BF: pop     ecx
0x6CF9C0: pop     esi
0x6CF9C1: add     esp, 10h
0x6CF9C4: retn
