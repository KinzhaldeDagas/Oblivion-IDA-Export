0x46D7E0: push    0FFFFFFFFh
0x46D7E2: push    offset ??0TESModel@@QAE@XZ_SEH
0x46D7E7: mov     eax, large fs:0
0x46D7ED: push    eax
0x46D7EE: push    ecx
0x46D7EF: push    ebx
0x46D7F0: push    esi
0x46D7F1: mov     eax, ds:0B30AACh
0x46D7F6: xor     eax, esp
0x46D7F8: push    eax
0x46D7F9: lea     eax, [esp+1Ch+var_C]
0x46D7FD: mov     large fs:0, eax
0x46D803: mov     esi, ecx
0x46D805: xor     ebx, ebx
0x46D807: mov     dword ptr [esi], offset ??_7TESModel@@6B@; const TESModel::`vftable'
0x46D80D: mov     [esi+4], ebx
0x46D810: mov     [esi+8], bx
0x46D814: mov     [esi+0Ah], bx
0x46D818: mov     [esi+10h], bl
0x46D81B: mov     [esi+14h], ebx
0x46D81E: mov     eax, [esi+4]
0x46D821: push    eax
0x46D822: call    FormHeapFree
0x46D827: fldz
0x46D829: mov     [esi+4], ebx
0x46D82C: mov     [esi+0Ah], bx
0x46D830: mov     [esi+8], bx
0x46D834: fstp    dword ptr [esi+0Ch]
0x46D837: add     esp, 4
0x46D83A: mov     eax, esi
0x46D83C: mov     ecx, [esp+1Ch+var_C]
0x46D840: mov     large fs:0, ecx
0x46D847: pop     ecx
0x46D848: pop     esi
0x46D849: pop     ebx
0x46D84A: add     esp, 10h
0x46D84D: retn
