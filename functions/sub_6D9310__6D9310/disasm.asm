0x6D9310: push    0FFFFFFFFh
0x6D9312: push    offset SEH_8C62B0
0x6D9317: mov     eax, large fs:0
0x6D931D: push    eax
0x6D931E: push    ecx
0x6D931F: push    esi
0x6D9320: mov     eax, ds:0B30AACh
0x6D9325: xor     eax, esp
0x6D9327: push    eax
0x6D9328: lea     eax, [esp+18h+var_C]
0x6D932C: mov     large fs:0, eax
0x6D9332: push    44h ; 'D'; Size
0x6D9334: call    FormHeapAlloc
0x6D9339: mov     esi, eax
0x6D933B: add     esp, 4
0x6D933E: mov     [esp+18h+var_10], esi
0x6D9342: test    esi, esi
0x6D9344: mov     [esp+18h+var_4], 0
0x6D934C: jz      short loc_6D937C
0x6D934E: mov     ecx, esi; this
0x6D9350: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x6D9355: mov     dword ptr [esi+40h], 0
0x6D935C: mov     dword ptr [esi+3Ch], 0
0x6D9363: mov     dword ptr [esi], offset ??_7NiRollController@@6B@; const NiRollController::`vftable'
0x6D9369: mov     eax, esi
0x6D936B: mov     ecx, [esp+18h+var_C]
0x6D936F: mov     large fs:0, ecx
0x6D9376: pop     ecx
0x6D9377: pop     esi
0x6D9378: add     esp, 10h
0x6D937B: retn
0x6D937C: xor     eax, eax
0x6D937E: mov     ecx, [esp+18h+var_C]
0x6D9382: mov     large fs:0, ecx
0x6D9389: pop     ecx
0x6D938A: pop     esi
0x6D938B: add     esp, 10h
0x6D938E: retn
