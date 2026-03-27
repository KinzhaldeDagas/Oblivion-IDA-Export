0x434480: push    0FFFFFFFFh
0x434482: push    offset ??0IOManager@@QAE@XZ_SEH
0x434487: mov     eax, large fs:0
0x43448D: push    eax
0x43448E: sub     esp, 8
0x434491: push    esi
0x434492: mov     eax, ___security_cookie
0x434497: xor     eax, esp
0x434499: push    eax
0x43449A: lea     eax, [esp+1Ch+var_C]
0x43449E: mov     large fs:0, eax
0x4344A4: mov     esi, ecx
0x4344A6: mov     [esp+1Ch+var_14], esi
0x4344AA: push    12h; a4
0x4344AC: push    1; a3
0x4344AE: push    2; a2
0x4344B0: call    BSTaskManager__BSTaskManager
0x4344B5: push    1Ch; Size
0x4344B7: mov     [esp+20h+var_4], 0
0x4344BF: mov     dword ptr [esi], offset ??_7IOManager@@6B@; const IOManager::`vftable'
0x4344C5: mov     dword ptr [esi+38h], 6
0x4344CC: call    FormHeapAlloc
0x4344D1: add     esp, 4
0x4344D4: mov     [esp+1Ch+var_10], eax
0x4344D8: test    eax, eax
0x4344DA: mov     byte ptr [esp+1Ch+var_4], 1
0x4344DF: jz      short loc_4344EE
0x4344E1: push    8; a3
0x4344E3: push    3; a2
0x4344E5: mov     ecx, eax; this
0x4344E7: call    ??0?$LockFreeQueue@V?$NiPointer@VIOTask@@@@@@QAE@XZ; LockFreeQueue<NiPointer<IOTask>>::LockFreeQueue<NiPointer<IOTask>>(void)
0x4344EC: jmp     short loc_4344F0
0x4344EE: xor     eax, eax
0x4344F0: push    offset Frequency; lpFrequency
0x4344F5: mov     [esi+34h], eax
0x4344F8: call    ds:QueryPerformanceFrequency
0x4344FE: mov     eax, [esi+28h]
0x434501: mov     ecx, [eax]
0x434503: mov     edx, [ecx+8]
0x434506: mov     [esi+30h], edx
0x434509: mov     eax, esi
0x43450B: mov     ecx, [esp+1Ch+var_C]
0x43450F: mov     large fs:0, ecx
0x434516: pop     ecx
0x434517: pop     esi
0x434518: add     esp, 14h
0x43451B: retn
