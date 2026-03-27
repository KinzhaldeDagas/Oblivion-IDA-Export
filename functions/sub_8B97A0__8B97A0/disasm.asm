0x8B97A0: push    0FFFFFFFFh
0x8B97A2: push    offset SEH_8B97A0
0x8B97A7: mov     eax, large fs:0
0x8B97AD: push    eax
0x8B97AE: push    ecx
0x8B97AF: push    ebx
0x8B97B0: mov     eax, ds:0B30AACh
0x8B97B5: xor     eax, esp
0x8B97B7: push    eax
0x8B97B8: lea     eax, [esp+18h+var_C]
0x8B97BC: mov     large fs:0, eax
0x8B97C2: push    1
0x8B97C4: push    50h ; 'P'
0x8B97C6: mov     ecx, offset FormHeap
0x8B97CB: call    j_MemoryHeap_Alloc
0x8B97D0: mov     ebx, eax
0x8B97D2: mov     cl, bl
0x8B97D4: and     cl, 0Fh
0x8B97D7: mov     al, 10h
0x8B97D9: sub     al, cl
0x8B97DB: movzx   edx, al
0x8B97DE: add     ebx, edx
0x8B97E0: mov     [ebx-1], al
0x8B97E3: mov     [esp+18h+var_10], ebx
0x8B97E7: mov     ecx, ebx
0x8B97E9: mov     [esp+18h+var_4], 0
0x8B97F1: call    sub_8A4150
0x8B97F6: mov     dword ptr [ebx], offset ??_7bhkRigidBodyT@@6B@; const bhkRigidBodyT::`vftable'
0x8B97FC: mov     dword ptr [ebx+18h], 0
0x8B9803: add     dword ptr ds:0BA8014h, 1
0x8B980A: mov     eax, ebx
0x8B980C: mov     ecx, [esp+18h+var_C]
0x8B9810: mov     large fs:0, ecx
0x8B9817: pop     ecx
0x8B9818: pop     ebx
0x8B9819: add     esp, 10h
0x8B981C: retn
