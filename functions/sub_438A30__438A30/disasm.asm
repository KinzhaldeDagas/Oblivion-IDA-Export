0x438A30: push    0FFFFFFFFh
0x438A32: push    offset SEH_68C280
0x438A37: mov     eax, large fs:0
0x438A3D: push    eax
0x438A3E: push    ebp
0x438A3F: push    esi
0x438A40: push    edi
0x438A41: mov     eax, ___security_cookie
0x438A46: xor     eax, esp
0x438A48: push    eax
0x438A49: lea     eax, [esp+1Ch+var_C]
0x438A4D: mov     large fs:0, eax
0x438A53: mov     esi, ecx
0x438A55: mov     ebp, [esp+1Ch+arg_4]
0x438A59: xor     ecx, ecx
0x438A5B: mov     eax, ebp
0x438A5D: mov     edx, 4
0x438A62: mul     edx
0x438A64: seto    cl
0x438A67: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PAVAnimIdle@@V?$NiPointer@VQueuedAnimIdle@@@@@@6B@; const LockFreeMap<AnimIdle *,NiPointer<QueuedAnimIdle>>::`vftable'
0x438A6D: mov     dword ptr [esi+18h], 0
0x438A74: mov     [esi+8], ebp
0x438A77: neg     ecx
0x438A79: or      ecx, eax
0x438A7B: push    ecx; Size
0x438A7C: call    FormHeapAlloc
0x438A81: mov     edi, eax
0x438A83: add     esp, 4
0x438A86: mov     [esp+1Ch+arg_4], edi
0x438A8A: test    edi, edi
0x438A8C: mov     [esp+1Ch+var_4], 0
0x438A94: jz      short loc_438AA6
0x438A96: push    offset unknown_libname_1_0; Microsoft VisualC 2-14/net runtime
0x438A9B: push    ebp
0x438A9C: push    4
0x438A9E: push    edi
0x438A9F: call    sub_401080
0x438AA4: jmp     short loc_438AA8
0x438AA6: xor     edi, edi
0x438AA8: mov     [esi+0Ch], edi
0x438AAB: mov     edi, [esp+1Ch+a2]
0x438AAF: xor     ecx, ecx
0x438AB1: lea     eax, [edi+edi*2]
0x438AB4: mov     edx, 4
0x438AB9: mul     edx
0x438ABB: seto    cl
0x438ABE: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x438AC6: neg     ecx
0x438AC8: or      ecx, eax
0x438ACA: push    ecx; Size
0x438ACB: call    FormHeapAlloc
0x438AD0: mov     [esi+4], eax
0x438AD3: mov     eax, [esp+20h+arg_8]
0x438AD7: push    10h; Size
0x438AD9: mov     [esi+10h], eax
0x438ADC: call    FormHeapAlloc
0x438AE1: add     esp, 8
0x438AE4: mov     [esp+1Ch+arg_4], eax
0x438AE8: test    eax, eax
0x438AEA: mov     [esp+1Ch+var_4], 1
0x438AF2: jz      short loc_438AFE
0x438AF4: push    edi; a2
0x438AF5: mov     ecx, eax; this
0x438AF7: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x438AFC: jmp     short loc_438B00
0x438AFE: xor     eax, eax
0x438B00: mov     [esi+14h], eax
0x438B03: mov     eax, esi
0x438B05: mov     ecx, [esp+1Ch+var_C]
0x438B09: mov     large fs:0, ecx
0x438B10: pop     ecx
0x438B11: pop     edi
0x438B12: pop     esi
0x438B13: pop     ebp
0x438B14: add     esp, 0Ch
0x438B17: retn    0Ch
