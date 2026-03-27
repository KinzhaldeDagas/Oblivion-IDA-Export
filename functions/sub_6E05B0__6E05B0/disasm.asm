0x6E05B0: push    0FFFFFFFFh
0x6E05B2: push    offset SEH_8C8970
0x6E05B7: mov     eax, large fs:0
0x6E05BD: push    eax
0x6E05BE: push    ecx
0x6E05BF: push    ebx
0x6E05C0: push    esi
0x6E05C1: mov     eax, ds:0B30AACh
0x6E05C6: xor     eax, esp
0x6E05C8: push    eax
0x6E05C9: lea     eax, [esp+1Ch+var_C]
0x6E05CD: mov     large fs:0, eax
0x6E05D3: push    44h ; 'D'; Size
0x6E05D5: call    FormHeapAlloc
0x6E05DA: mov     esi, eax
0x6E05DC: add     esp, 4
0x6E05DF: mov     [esp+1Ch+var_10], esi
0x6E05E3: xor     ebx, ebx
0x6E05E5: cmp     esi, ebx
0x6E05E7: mov     [esp+1Ch+var_4], ebx
0x6E05EB: jz      short loc_6E0618
0x6E05ED: mov     ecx, esi; this
0x6E05EF: call    ??0NiTimeController@@QAE@XZ; NiTimeController::NiTimeController(void)
0x6E05F4: mov     dword ptr [esi], offset ??_7NiLookAtController@@6B@; const NiLookAtController::`vftable'
0x6E05FA: mov     [esi+40h], ebx
0x6E05FD: mov     [esi+3Ch], bx
0x6E0601: mov     [esi+2Ch], bl
0x6E0604: mov     eax, esi
0x6E0606: mov     ecx, [esp+1Ch+var_C]
0x6E060A: mov     large fs:0, ecx
0x6E0611: pop     ecx
0x6E0612: pop     esi
0x6E0613: pop     ebx
0x6E0614: add     esp, 10h
0x6E0617: retn
0x6E0618: xor     eax, eax
0x6E061A: mov     ecx, [esp+1Ch+var_C]
0x6E061E: mov     large fs:0, ecx
0x6E0625: pop     ecx
0x6E0626: pop     esi
0x6E0627: pop     ebx
0x6E0628: add     esp, 10h
0x6E062B: retn
