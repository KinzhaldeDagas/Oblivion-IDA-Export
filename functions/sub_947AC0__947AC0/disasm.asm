0x947AC0: push    esi
0x947AC1: mov     esi, ecx
0x947AC3: push    edi
0x947AC4: mov     edi, [esi+18h]
0x947AC7: mov     ecx, edi; lpCriticalSection
0x947AC9: call    sub_8A7720
0x947ACE: mov     edx, [esp+8+arg_4]
0x947AD2: mov     eax, [esp+8+arg_0]
0x947AD6: mov     ecx, [esi+0Ch]
0x947AD9: lea     eax, [eax+eax*2]
0x947ADC: push    edx
0x947ADD: call    dword ptr [ecx+eax*4+4]
0x947AE1: add     esp, 4
0x947AE4: push    edi; lpCriticalSection
0x947AE5: mov     esi, eax
0x947AE7: call    dword ptr ds:0A28074h
0x947AED: pop     edi
0x947AEE: mov     eax, esi
0x947AF0: pop     esi
0x947AF1: retn    8
