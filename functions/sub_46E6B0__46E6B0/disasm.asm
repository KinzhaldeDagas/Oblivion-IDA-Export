0x46E6B0: push    ecx
0x46E6B1: push    esi
0x46E6B2: push    edi
0x46E6B3: mov     edi, [esp+0Ch+ArgList]
0x46E6B7: test    edi, edi
0x46E6B9: lea     esi, [ecx+4]
0x46E6BC: jz      short loc_46E6CD
0x46E6BE: push    0FFFFFFFFh; a2
0x46E6C0: mov     ecx, edi; this
0x46E6C2: call    TESForm_GetOverrideFile
0x46E6C7: mov     [esp+0Ch+a2], eax
0x46E6CB: jmp     short loc_46E6D5
0x46E6CD: mov     [esp+0Ch+a2], 0
0x46E6D5: test    esi, esi
0x46E6D7: jz      loc_46E771
0x46E6DD: push    ebx
0x46E6DE: push    ebp
0x46E6DF: nop
0x46E6E0: mov     ebp, [esi]
0x46E6E2: test    ebp, ebp
0x46E6E4: jz      loc_46E76F
0x46E6EA: mov     ecx, [esp+14h+a2]
0x46E6EE: mov     eax, [ebp+0]
0x46E6F1: push    ecx; a2
0x46E6F2: lea     edx, [esp+18h+ArgList]
0x46E6F6: push    edx; a1
0x46E6F7: mov     [esp+1Ch+ArgList], eax
0x46E6FB: call    TESForm_ResolveFormID
0x46E700: mov     eax, [esp+1Ch+ArgList]
0x46E704: push    eax; a1
0x46E705: call    TESForm_LookupByFormID
0x46E70A: add     esp, 0Ch
0x46E70D: test    eax, eax
0x46E70F: mov     [ebp+0], eax
0x46E712: jz      short loc_46E719
0x46E714: mov     esi, [esi+4]
0x46E717: jmp     short loc_46E767
0x46E719: mov     edx, [edi]
0x46E71B: mov     eax, [edx+0D4h]
0x46E721: mov     ebx, [edi+0Ch]
0x46E724: mov     ecx, edi
0x46E726: call    eax
0x46E728: mov     ecx, [esp+14h+ArgList]
0x46E72C: push    eax
0x46E72D: push    ebx
0x46E72E: push    ecx; ArgList
0x46E72F: push    offset aForm08xNotFoun; "Form (%08X) not found for reaction of p"...
0x46E734: call    PrintError
0x46E739: mov     eax, [esi+4]
0x46E73C: add     esp, 10h
0x46E73F: test    eax, eax
0x46E741: jz      short loc_46E758
0x46E743: mov     edx, [eax+4]
0x46E746: mov     [esi+4], edx
0x46E749: mov     ecx, [eax]
0x46E74B: push    eax
0x46E74C: mov     [esi], ecx
0x46E74E: call    FormHeapFree
0x46E753: add     esp, 4
0x46E756: jmp     short loc_46E75E
0x46E758: mov     dword ptr [esi], 0
0x46E75E: push    ebp
0x46E75F: call    FormHeapFree
0x46E764: add     esp, 4
0x46E767: test    esi, esi
0x46E769: jnz     loc_46E6E0
0x46E76F: pop     ebp
0x46E770: pop     ebx
0x46E771: pop     edi
0x46E772: pop     esi
0x46E773: pop     ecx
0x46E774: retn    4
