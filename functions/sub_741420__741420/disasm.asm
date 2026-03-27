0x741420: push    0FFFFFFFFh
0x741422: push    offset SEH_8C62B0
0x741427: mov     eax, large fs:0
0x74142D: push    eax
0x74142E: push    ecx
0x74142F: push    esi
0x741430: mov     eax, ds:0B30AACh
0x741435: xor     eax, esp
0x741437: push    eax
0x741438: lea     eax, [esp+18h+var_C]
0x74143C: mov     large fs:0, eax
0x741442: push    1Ch; Size
0x741444: call    FormHeapAlloc
0x741449: mov     esi, eax
0x74144B: add     esp, 4
0x74144E: mov     [esp+18h+var_10], esi
0x741452: test    esi, esi
0x741454: mov     [esp+18h+var_4], 0
0x74145C: jz      short loc_741484
0x74145E: mov     ecx, esi; this
0x741460: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x741465: mov     dword ptr [esi], offset ??_7NiDitherProperty@@6B@; const NiDitherProperty::`vftable'
0x74146B: mov     word ptr [esi+18h], 0
0x741471: mov     eax, esi
0x741473: mov     ecx, [esp+18h+var_C]
0x741477: mov     large fs:0, ecx
0x74147E: pop     ecx
0x74147F: pop     esi
0x741480: add     esp, 10h
0x741483: retn
0x741484: xor     eax, eax
0x741486: mov     ecx, [esp+18h+var_C]
0x74148A: mov     large fs:0, ecx
0x741491: pop     ecx
0x741492: pop     esi
0x741493: add     esp, 10h
0x741496: retn
