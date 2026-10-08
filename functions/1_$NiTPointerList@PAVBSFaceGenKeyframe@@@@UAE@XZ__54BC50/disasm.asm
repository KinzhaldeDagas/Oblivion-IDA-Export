0x54BC50: push    0FFFFFFFFh
0x54BC52: push    offset ??1?$NiTPointerList@PAVBSFaceGenKeyframe@@@@UAE@XZ_SEH
0x54BC57: mov     eax, large fs:0
0x54BC5D: push    eax
0x54BC5E: push    ecx
0x54BC5F: push    esi
0x54BC60: mov     eax, ds:0B30AACh
0x54BC65: xor     eax, esp
0x54BC67: push    eax
0x54BC68: lea     eax, [esp+18h+var_C]
0x54BC6C: mov     large fs:0, eax
0x54BC72: mov     esi, ecx
0x54BC74: mov     [esp+18h+var_10], esi
0x54BC78: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAVBSFaceGenKeyframe@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,BSFaceGenKeyframe *>::`vftable'
0x54BC7E: mov     [esp+18h+var_4], 0
0x54BC86: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x54BC8B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVBSFaceGenKeyframe@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSFaceGenKeyframe *>::`vftable'
0x54BC91: mov     ecx, [esp+18h+var_C]
0x54BC95: mov     large fs:0, ecx
0x54BC9C: pop     ecx
0x54BC9D: pop     esi
0x54BC9E: add     esp, 10h
0x54BCA1: retn
0x54A420: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVBSFaceGenKeyframe@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSFaceGenKeyframe *>::`vftable'
0x54A426: retn
0x9BB6A0: mov     ecx, [ebp-10h]
0x9BB6A3: jmp     loc_54A420
0x9BB6A8: mov     edx, [esp+arg_4]
0x9BB6AC: lea     eax, [edx-8]
0x9BB6AF: mov     ecx, [edx-0Ch]
0x9BB6B2: xor     ecx, eax
0x9BB6B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BB6B9: mov     eax, offset stru_AE5490
0x9BB6BE: jmp     ___CxxFrameHandler3
