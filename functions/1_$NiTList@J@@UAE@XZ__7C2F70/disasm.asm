0x7C2F70: push    0FFFFFFFFh
0x7C2F72: push    offset ??1?$NiTList@J@@UAE@XZ_SEH
0x7C2F77: mov     eax, large fs:0
0x7C2F7D: push    eax
0x7C2F7E: push    ecx
0x7C2F7F: push    esi
0x7C2F80: mov     eax, ds:0B30AACh
0x7C2F85: xor     eax, esp
0x7C2F87: push    eax
0x7C2F88: lea     eax, [esp+18h+var_C]
0x7C2F8C: mov     large fs:0, eax
0x7C2F92: mov     esi, ecx
0x7C2F94: mov     [esp+18h+var_10], esi
0x7C2F98: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@J@@J@@6B@; const NiTPointerListBase<DFALL<long>,long>::`vftable'
0x7C2F9E: mov     [esp+18h+var_4], 0
0x7C2FA6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7C2FAB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@J@@J@@6B@; const NiTListBase<DFALL<long>,long>::`vftable'
0x7C2FB1: mov     ecx, [esp+18h+var_C]
0x7C2FB5: mov     large fs:0, ecx
0x7C2FBC: pop     ecx
0x7C2FBD: pop     esi
0x7C2FBE: add     esp, 10h
0x7C2FC1: retn
0x7C2A30: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@J@@J@@6B@; const NiTListBase<DFALL<long>,long>::`vftable'
0x7C2A36: retn
0x9CE3A0: mov     ecx, [ebp-10h]
0x9CE3A3: jmp     loc_7C2A30
0x9CE3A8: mov     edx, [esp+arg_4]
0x9CE3AC: lea     eax, [edx-8]
0x9CE3AF: mov     ecx, [edx-0Ch]
0x9CE3B2: xor     ecx, eax
0x9CE3B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CE3B9: mov     eax, offset stru_AF73C4
0x9CE3BE: jmp     ___CxxFrameHandler3
