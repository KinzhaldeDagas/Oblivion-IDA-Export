0x701700: push    ebx
0x701701: push    esi
0x701702: push    edi
0x701703: mov     esi, ecx
0x701705: call    NiObject_constr
0x70170A: mov     edi, ds:0A28064h
0x701710: lea     eax, [esi+80h]
0x701716: mov     dword ptr [esi], offset ??_7NiRenderer@@6B@; const NiRenderer::`vftable'
0x70171C: xor     ebx, ebx
0x70171E: mov     [esi+8], ebx
0x701721: push    eax; lpCriticalSection
0x701722: mov     [eax+78h], ebx
0x701725: mov     [eax+7Ch], ebx
0x701728: call    edi ; InitializeCriticalSection
0x70172A: lea     eax, [esi+100h]
0x701730: push    eax; lpCriticalSection
0x701731: mov     [eax+78h], ebx
0x701734: mov     [eax+7Ch], ebx
0x701737: call    edi ; InitializeCriticalSection
0x701739: lea     eax, [esi+180h]
0x70173F: push    eax; lpCriticalSection
0x701740: mov     [eax+78h], ebx
0x701743: mov     [eax+7Ch], ebx
0x701746: call    edi ; InitializeCriticalSection
0x701748: mov     [esi+200h], ebx
0x70174E: mov     [esi+204h], ebx
0x701754: mov     [esi+208h], ebx
0x70175A: mov     [esi+20Ch], bl
0x701760: mov     [esi+20Dh], bl
0x701766: pop     edi
0x701767: mov     ds:0B3F928h, esi
0x70176D: mov     eax, esi
0x70176F: pop     esi
0x701770: pop     ebx
0x701771: retn
