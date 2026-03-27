0x55E720: push    0FFFFFFFFh
0x55E722: push    offset SEH_68C280
0x55E727: mov     eax, large fs:0
0x55E72D: push    eax
0x55E72E: push    ebp
0x55E72F: push    esi
0x55E730: push    edi
0x55E731: mov     eax, ds:0B30AACh
0x55E736: xor     eax, esp
0x55E738: push    eax
0x55E739: lea     eax, [esp+1Ch+var_C]
0x55E73D: mov     large fs:0, eax
0x55E743: mov     esi, ecx
0x55E745: mov     ebp, [esp+1Ch+arg_4]
0x55E749: xor     ecx, ecx
0x55E74B: mov     eax, ebp
0x55E74D: mov     edx, 4
0x55E752: mul     edx
0x55E754: seto    cl
0x55E757: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PAVTESObjectREFR@@PAVBSTreeNode@@@@6B@; const LockFreeMap<TESObjectREFR *,BSTreeNode *>::`vftable'
0x55E75D: mov     dword ptr [esi+18h], 0
0x55E764: mov     [esi+8], ebp
0x55E767: neg     ecx
0x55E769: or      ecx, eax
0x55E76B: push    ecx; Size
0x55E76C: call    FormHeapAlloc
0x55E771: mov     edi, eax
0x55E773: add     esp, 4
0x55E776: mov     [esp+1Ch+arg_4], edi
0x55E77A: test    edi, edi
0x55E77C: mov     [esp+1Ch+var_4], 0
0x55E784: jz      short loc_55E796
0x55E786: push    offset unknown_libname_1_0; Microsoft VisualC 2-14/net runtime
0x55E78B: push    ebp
0x55E78C: push    4
0x55E78E: push    edi
0x55E78F: call    sub_401080
0x55E794: jmp     short loc_55E798
0x55E796: xor     edi, edi
0x55E798: mov     [esi+0Ch], edi
0x55E79B: mov     edi, [esp+1Ch+a2]
0x55E79F: xor     ecx, ecx
0x55E7A1: lea     eax, [edi+edi*2]
0x55E7A4: mov     edx, 4
0x55E7A9: mul     edx
0x55E7AB: seto    cl
0x55E7AE: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x55E7B6: neg     ecx
0x55E7B8: or      ecx, eax
0x55E7BA: push    ecx; Size
0x55E7BB: call    FormHeapAlloc
0x55E7C0: mov     [esi+4], eax
0x55E7C3: mov     eax, [esp+20h+arg_8]
0x55E7C7: push    10h; Size
0x55E7C9: mov     [esi+10h], eax
0x55E7CC: call    FormHeapAlloc
0x55E7D1: add     esp, 8
0x55E7D4: mov     [esp+1Ch+arg_4], eax
0x55E7D8: test    eax, eax
0x55E7DA: mov     [esp+1Ch+var_4], 1
0x55E7E2: jz      short loc_55E7EE
0x55E7E4: push    edi; a2
0x55E7E5: mov     ecx, eax; this
0x55E7E7: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x55E7EC: jmp     short loc_55E7F0
0x55E7EE: xor     eax, eax
0x55E7F0: mov     [esi+14h], eax
0x55E7F3: mov     eax, esi
0x55E7F5: mov     ecx, [esp+1Ch+var_C]
0x55E7F9: mov     large fs:0, ecx
0x55E800: pop     ecx
0x55E801: pop     edi
0x55E802: pop     esi
0x55E803: pop     ebp
0x55E804: add     esp, 0Ch
0x55E807: retn    0Ch
