0x758360: push    esi
0x758361: push    edi
0x758362: push    28h ; '('; Size
0x758364: call    FormHeapAlloc
0x758369: mov     esi, eax
0x75836B: xor     edi, edi
0x75836D: add     esp, 4
0x758370: cmp     esi, edi
0x758372: jz      short loc_758398
0x758374: mov     ecx, esi
0x758376: call    NiObject_constr
0x75837B: mov     [esi+8], edi
0x75837E: mov     [esi+0Ch], edi
0x758381: mov     [esi+10h], edi
0x758384: mov     [esi+18h], edi
0x758387: mov     [esi+1Ch], edi
0x75838A: mov     [esi+20h], edi
0x75838D: pop     edi
0x75838E: mov     dword ptr [esi], offset ??_7NiPSysEmitterCtlrData@@6B@; const NiPSysEmitterCtlrData::`vftable'
0x758394: mov     eax, esi
0x758396: pop     esi
0x758397: retn
0x758398: pop     edi
0x758399: xor     eax, eax
0x75839B: pop     esi
0x75839C: retn
