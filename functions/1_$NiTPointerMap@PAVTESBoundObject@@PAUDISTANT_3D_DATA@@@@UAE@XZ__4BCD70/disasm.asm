0x4BCD70: push    0FFFFFFFFh
0x4BCD72: push    offset ??1?$NiTPointerMap@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@UAE@XZ_SEH
0x4BCD77: mov     eax, large fs:0
0x4BCD7D: push    eax
0x4BCD7E: push    ecx
0x4BCD7F: push    esi
0x4BCD80: mov     eax, ds:0B30AACh
0x4BCD85: xor     eax, esp
0x4BCD87: push    eax
0x4BCD88: lea     eax, [esp+18h+var_C]
0x4BCD8C: mov     large fs:0, eax
0x4BCD92: mov     esi, ecx
0x4BCD94: mov     [esp+18h+var_10], esi
0x4BCD98: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@6B@; const NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::`vftable'
0x4BCD9E: mov     [esp+18h+var_4], 0
0x4BCDA6: call    NiTMap_Clear
0x4BCDAB: mov     ecx, esi
0x4BCDAD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4BCDB5: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESBoundObject *,DISTANT_3D_DATA *>::`vftable'
0x4BCDBB: call    NiTMap_Clear
0x4BCDC0: mov     eax, [esi+8]
0x4BCDC3: push    eax
0x4BCDC4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BCDC9: add     esp, 4
0x4BCDCC: mov     ecx, [esp+18h+var_C]
0x4BCDD0: mov     large fs:0, ecx
0x4BCDD7: pop     ecx
0x4BCDD8: pop     esi
0x4BCDD9: add     esp, 10h
0x4BCDDC: retn
0x4BCBE0: push    esi
0x4BCBE1: mov     esi, ecx
0x4BCBE3: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,TESBoundObject *,DISTANT_3D_DATA *>::`vftable'
0x4BCBE9: call    NiTMap_Clear
0x4BCBEE: mov     eax, [esi+8]
0x4BCBF1: push    eax
0x4BCBF2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4BCBF7: add     esp, 4
0x4BCBFA: pop     esi
0x4BCBFB: retn
0x9B4240: mov     ecx, [ebp-10h]
0x9B4243: jmp     loc_4BCBE0
0x9B4248: mov     edx, [esp+arg_4]
0x9B424C: lea     eax, [edx-8]
0x9B424F: mov     ecx, [edx-0Ch]
0x9B4252: xor     ecx, eax
0x9B4254: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B4259: mov     eax, offset stru_ADF964
0x9B425E: jmp     ___CxxFrameHandler3
