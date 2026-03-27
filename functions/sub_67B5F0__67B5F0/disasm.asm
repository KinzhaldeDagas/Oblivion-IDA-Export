0x67B5F0: push    esi
0x67B5F1: mov     esi, ecx
0x67B5F3: push    esi
0x67B5F4: mov     ecx, offset ActorProcessManager_ptr
0x67B5F9: call    sub_674FD0
0x67B5FE: mov     eax, [esi]
0x67B600: test    eax, eax
0x67B602: jz      short loc_67B63D
0x67B604: mov     eax, [eax]
0x67B606: test    eax, eax
0x67B608: jz      short loc_67B63D
0x67B60A: push    eax
0x67B60B: call    FormHeapFree
0x67B610: mov     eax, [esi]
0x67B612: mov     ecx, [eax+4]
0x67B615: add     esp, 4
0x67B618: test    ecx, ecx
0x67B61A: jz      short loc_67B631
0x67B61C: mov     edx, [ecx+4]
0x67B61F: mov     [eax+4], edx
0x67B622: mov     edx, [ecx]
0x67B624: push    ecx
0x67B625: mov     [eax], edx
0x67B627: call    FormHeapFree
0x67B62C: add     esp, 4
0x67B62F: jmp     short loc_67B637
0x67B631: mov     dword ptr [eax], 0
0x67B637: mov     eax, [esi]
0x67B639: test    eax, eax
0x67B63B: jnz     short loc_67B604
0x67B63D: mov     eax, [esi]
0x67B63F: push    eax
0x67B640: call    FormHeapFree
0x67B645: mov     ecx, [esi+8]
0x67B648: add     esp, 4
0x67B64B: push    1
0x67B64D: call    sub_566830
0x67B652: mov     ecx, [esi+8]
0x67B655: test    ecx, ecx
0x67B657: pop     esi
0x67B658: jz      short locret_67B663
0x67B65A: mov     edx, [ecx]
0x67B65C: mov     eax, [edx+10h]
0x67B65F: push    1
0x67B661: call    eax
0x67B663: retn
