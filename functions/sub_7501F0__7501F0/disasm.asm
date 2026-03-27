0x7501F0: push    ebx
0x7501F1: push    esi
0x7501F2: push    edi
0x7501F3: push    64h ; 'd'; Size
0x7501F5: mov     edi, ecx
0x7501F7: call    FormHeapAlloc
0x7501FC: mov     esi, eax
0x7501FE: xor     ebx, ebx
0x750200: add     esp, 4
0x750203: cmp     esi, ebx
0x750205: jz      short loc_750243
0x750207: mov     ecx, esi
0x750209: call    sub_75E540
0x75020E: mov     eax, [esp+0Ch+arg_0]
0x750212: mov     dword ptr [esi], offset ??_7NiPSysEmitterCtlr@@6B@; const NiPSysEmitterCtlr::`vftable'
0x750218: mov     [esi+48h], ebx
0x75021B: fld     dword ptr ds:0A7DEB4h
0x750221: mov     [esi+54h], bl
0x750224: fchs
0x750226: fstp    dword ptr [esi+50h]
0x750229: push    eax
0x75022A: push    esi
0x75022B: mov     ecx, edi
0x75022D: mov     [esi+58h], ebx
0x750230: mov     [esi+5Ch], ebx
0x750233: mov     [esi+60h], ebx
0x750236: call    sub_74FD50
0x75023B: pop     edi
0x75023C: mov     eax, esi
0x75023E: pop     esi
0x75023F: pop     ebx
0x750240: retn    4
0x750243: mov     eax, [esp+0Ch+arg_0]
0x750247: push    eax
0x750248: xor     esi, esi
0x75024A: push    esi
0x75024B: mov     ecx, edi
0x75024D: call    sub_74FD50
0x750252: pop     edi
0x750253: mov     eax, esi
0x750255: pop     esi
0x750256: pop     ebx
0x750257: retn    4
