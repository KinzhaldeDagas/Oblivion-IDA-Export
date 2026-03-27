0x968AD0: push    esi
0x968AD1: push    40h ; '@'; Size
0x968AD3: mov     esi, ecx
0x968AD5: call    FormHeapAlloc
0x968ADA: add     esp, 4
0x968ADD: test    eax, eax
0x968ADF: jz      short loc_968AF8
0x968AE1: push    edi
0x968AE2: add     esi, 4
0x968AE5: lea     edi, [eax+4]
0x968AE8: mov     ecx, 0Fh
0x968AED: mov     dword ptr [eax], offset ??_7NiBoxBV@@6B@; const NiBoxBV::`vftable'
0x968AF3: rep movsd
0x968AF5: pop     edi
0x968AF6: pop     esi
0x968AF7: retn
0x968AF8: xor     eax, eax
0x968AFA: pop     esi
0x968AFB: retn
