0x589690: push    0FFFFFFFFh
0x589692: push    offset ??1?$NiTList@M@@UAE@XZ_SEH
0x589697: mov     eax, large fs:0
0x58969D: push    eax
0x58969E: push    ecx
0x58969F: push    esi
0x5896A0: mov     eax, ds:0B30AACh
0x5896A5: xor     eax, esp
0x5896A7: push    eax
0x5896A8: lea     eax, [esp+18h+var_C]
0x5896AC: mov     large fs:0, eax
0x5896B2: mov     esi, ecx
0x5896B4: mov     [esp+18h+var_10], esi
0x5896B8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@M@@M@@6B@; const NiTPointerListBase<DFALL<float>,float>::`vftable'
0x5896BE: mov     [esp+18h+var_4], 0
0x5896C6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x5896CB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@M@@M@@6B@; const NiTListBase<DFALL<float>,float>::`vftable'
0x5896D1: mov     ecx, [esp+18h+var_C]
0x5896D5: mov     large fs:0, ecx
0x5896DC: pop     ecx
0x5896DD: pop     esi
0x5896DE: add     esp, 10h
0x5896E1: retn
0x588A30: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@M@@M@@6B@; const NiTListBase<DFALL<float>,float>::`vftable'
0x588A36: retn
0x9BF710: mov     ecx, [ebp-10h]
0x9BF713: jmp     loc_588A30
0x9BF718: mov     edx, [esp+arg_4]
0x9BF71C: lea     eax, [edx-8]
0x9BF71F: mov     ecx, [edx-0Ch]
0x9BF722: xor     ecx, eax
0x9BF724: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF729: mov     eax, offset stru_AE8C20
0x9BF72E: jmp     ___CxxFrameHandler3
