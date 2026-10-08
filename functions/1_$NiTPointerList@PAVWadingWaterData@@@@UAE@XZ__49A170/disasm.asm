0x49A170: push    0FFFFFFFFh
0x49A172: push    offset ??1?$NiTPointerList@PAVWadingWaterData@@@@UAE@XZ_SEH
0x49A177: mov     eax, large fs:0
0x49A17D: push    eax
0x49A17E: push    ecx
0x49A17F: push    esi
0x49A180: mov     eax, ds:0B30AACh
0x49A185: xor     eax, esp
0x49A187: push    eax
0x49A188: lea     eax, [esp+18h+var_C]
0x49A18C: mov     large fs:0, eax
0x49A192: mov     esi, ecx
0x49A194: mov     [esp+18h+var_10], esi
0x49A198: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVWadingWaterData@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,WadingWaterData *>::`vftable'
0x49A19E: mov     [esp+18h+var_4], 0
0x49A1A6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x49A1AB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVWadingWaterData@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,WadingWaterData *>::`vftable'
0x49A1B1: mov     ecx, [esp+18h+var_C]
0x49A1B5: mov     large fs:0, ecx
0x49A1BC: pop     ecx
0x49A1BD: pop     esi
0x49A1BE: add     esp, 10h
0x49A1C1: retn
0x499240: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVWadingWaterData@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,WadingWaterData *>::`vftable'
0x499246: retn
0x9B18B0: mov     ecx, [ebp-10h]
0x9B18B3: jmp     loc_499240
0x9B18B8: mov     edx, [esp+arg_4]
0x9B18BC: lea     eax, [edx-8]
0x9B18BF: mov     ecx, [edx-0Ch]
0x9B18C2: xor     ecx, eax
0x9B18C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B18C9: mov     eax, offset stru_ADDA28
0x9B18CE: jmp     ___CxxFrameHandler3
