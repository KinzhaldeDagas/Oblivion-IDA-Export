0x436690: push    0FFFFFFFFh
0x436692: push    offset ??1AttachDistant3DTask@@UAE@XZ_SEH
0x436697: mov     eax, large fs:0
0x43669D: push    eax
0x43669E: push    ecx
0x43669F: push    ebx
0x4366A0: push    esi
0x4366A1: push    edi
0x4366A2: mov     eax, ___security_cookie
0x4366A7: xor     eax, esp
0x4366A9: push    eax
0x4366AA: lea     eax, [esp+20h+var_C]
0x4366AE: mov     large fs:0, eax
0x4366B4: mov     edi, ecx
0x4366B6: mov     [esp+20h+var_10], edi
0x4366BA: mov     esi, [edi+1Ch]
0x4366BD: test    esi, esi
0x4366BF: mov     ebx, ds:InterlockedDecrement
0x4366C5: mov     [esp+20h+var_4], 0
0x4366CD: jz      short loc_4366E7
0x4366CF: lea     eax, [esi+4]
0x4366D2: push    eax; lpAddend
0x4366D3: call    ebx ; InterlockedDecrement
0x4366D5: test    eax, eax
0x4366D7: jnz     short loc_4366E7
0x4366D9: test    esi, esi
0x4366DB: jz      short loc_4366E7
0x4366DD: mov     edx, [esi]
0x4366DF: mov     eax, [edx]
0x4366E1: push    1
0x4366E3: mov     ecx, esi
0x4366E5: call    eax
0x4366E7: push    offset Addend; lpAddend
0x4366EC: mov     dword ptr [edi], offset ??_7?$BSTask@_J@@6B@; const BSTask<__int64>::`vftable'
0x4366F2: call    ebx ; InterlockedDecrement
0x4366F4: mov     ecx, dword ptr [esp+20h+var_C]
0x4366F8: mov     large fs:0, ecx
0x4366FF: pop     ecx
0x436700: pop     edi
0x436701: pop     esi
0x436702: pop     ebx
0x436703: add     esp, 10h
0x436706: retn
