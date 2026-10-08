0x4CD1A0: push    0FFFFFFFFh
0x4CD1A2: push    offset ??1?$NiTList@PAVTESObjectCELL@@@@UAE@XZ_SEH
0x4CD1A7: mov     eax, large fs:0
0x4CD1AD: push    eax
0x4CD1AE: push    ecx
0x4CD1AF: push    esi
0x4CD1B0: mov     eax, ds:0B30AACh
0x4CD1B5: xor     eax, esp
0x4CD1B7: push    eax
0x4CD1B8: lea     eax, [esp+18h+var_C]
0x4CD1BC: mov     large fs:0, eax
0x4CD1C2: mov     esi, ecx
0x4CD1C4: mov     [esp+18h+var_10], esi
0x4CD1C8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVTESObjectCELL@@@@PAVTESObjectCELL@@@@6B@; const NiTPointerListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::`vftable'
0x4CD1CE: mov     [esp+18h+var_4], 0
0x4CD1D6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x4CD1DB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTESObjectCELL@@@@PAVTESObjectCELL@@@@6B@; const NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::`vftable'
0x4CD1E1: mov     ecx, [esp+18h+var_C]
0x4CD1E5: mov     large fs:0, ecx
0x4CD1EC: pop     ecx
0x4CD1ED: pop     esi
0x4CD1EE: add     esp, 10h
0x4CD1F1: retn
0x4CA160: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAVTESObjectCELL@@@@PAVTESObjectCELL@@@@6B@; const NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::`vftable'
0x4CA166: retn
0x9B5260: mov     ecx, [ebp-10h]
0x9B5263: jmp     loc_4CA160
0x9B5268: mov     edx, [esp+arg_4]
0x9B526C: lea     eax, [edx-8]
0x9B526F: mov     ecx, [edx-0Ch]
0x9B5272: xor     ecx, eax
0x9B5274: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B5279: mov     eax, offset stru_AE0418
0x9B527E: jmp     ___CxxFrameHandler3
