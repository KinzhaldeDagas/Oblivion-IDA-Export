0x4CD200: push    0FFFFFFFFh
0x4CD202: push    offset ??1?$NiTList@PAVTESObjectREFR@@@@UAE@XZ_SEH
0x4CD207: mov     eax, large fs:0
0x4CD20D: push    eax
0x4CD20E: push    ecx
0x4CD20F: push    esi
0x4CD210: mov     eax, ds:0B30AACh
0x4CD215: xor     eax, esp
0x4CD217: push    eax
0x4CD218: lea     eax, [esp+18h+var_C]
0x4CD21C: mov     large fs:0, eax
0x4CD222: mov     esi, ecx
0x4CD224: mov     [esp+18h+var_10], esi
0x4CD228: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVTESObjectREFR@@@@PAVTESObjectREFR@@@@6B@; const NiTPointerListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::`vftable'
0x4CD22E: mov     [esp+18h+var_4], 0
0x4CD236: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x4CD23B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTESObjectREFR@@@@PAVTESObjectREFR@@@@6B@; const NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::`vftable'
0x4CD241: mov     ecx, [esp+18h+var_C]
0x4CD245: mov     large fs:0, ecx
0x4CD24C: pop     ecx
0x4CD24D: pop     esi
0x4CD24E: add     esp, 10h
0x4CD251: retn
0x4CA170: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAVTESObjectREFR@@@@PAVTESObjectREFR@@@@6B@; const NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::`vftable'
0x4CA176: retn
0x9B5290: mov     ecx, [ebp-10h]
0x9B5293: jmp     loc_4CA170
0x9B5298: mov     edx, [esp+arg_4]
0x9B529C: lea     eax, [edx-8]
0x9B529F: mov     ecx, [edx-0Ch]
0x9B52A2: xor     ecx, eax
0x9B52A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B52A9: mov     eax, offset stru_AE0444
0x9B52AE: jmp     ___CxxFrameHandler3
