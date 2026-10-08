0x7EE270: push    0FFFFFFFFh
0x7EE272: push    offset ??1?$NiTPointerList@PAUDECAL_DATA@@@@UAE@XZ_SEH
0x7EE277: mov     eax, large fs:0
0x7EE27D: push    eax
0x7EE27E: push    ecx
0x7EE27F: push    esi
0x7EE280: mov     eax, ds:0B30AACh
0x7EE285: xor     eax, esp
0x7EE287: push    eax
0x7EE288: lea     eax, [esp+18h+var_C]
0x7EE28C: mov     large fs:0, eax
0x7EE292: mov     esi, ecx
0x7EE294: mov     [esp+18h+var_10], esi
0x7EE298: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@PAUDECAL_DATA@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,DECAL_DATA *>::`vftable'
0x7EE29E: mov     [esp+18h+var_4], 0
0x7EE2A6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7EE2AB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUDECAL_DATA@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,DECAL_DATA *>::`vftable'
0x7EE2B1: mov     ecx, [esp+18h+var_C]
0x7EE2B5: mov     large fs:0, ecx
0x7EE2BC: pop     ecx
0x7EE2BD: pop     esi
0x7EE2BE: add     esp, 10h
0x7EE2C1: retn
0x7ECC10: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAUDECAL_DATA@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,DECAL_DATA *>::`vftable'
0x7ECC16: retn
0x9CFB80: mov     ecx, [ebp-10h]
0x9CFB83: jmp     loc_7ECC10
0x9CFB88: mov     edx, [esp+arg_4]
0x9CFB8C: lea     eax, [edx-8]
0x9CFB8F: mov     ecx, [edx-0Ch]
0x9CFB92: xor     ecx, eax
0x9CFB94: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CFB99: mov     eax, offset stru_AF86E0
0x9CFB9E: jmp     ___CxxFrameHandler3
