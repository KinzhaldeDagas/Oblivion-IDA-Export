0x6E8740: push    0FFFFFFFFh
0x6E8742: push    offset SEH_8C8970
0x6E8747: mov     eax, large fs:0
0x6E874D: push    eax
0x6E874E: push    ecx
0x6E874F: push    ebx
0x6E8750: push    esi
0x6E8751: mov     eax, ds:0B30AACh
0x6E8756: xor     eax, esp
0x6E8758: push    eax
0x6E8759: lea     eax, [esp+1Ch+var_C]
0x6E875D: mov     large fs:0, eax
0x6E8763: push    18h; Size
0x6E8765: call    FormHeapAlloc
0x6E876A: mov     esi, eax
0x6E876C: add     esp, 4
0x6E876F: mov     [esp+1Ch+var_10], esi
0x6E8773: xor     ebx, ebx
0x6E8775: cmp     esi, ebx
0x6E8777: mov     [esp+1Ch+var_4], ebx
0x6E877B: jz      short loc_6E87AA
0x6E877D: mov     ecx, esi
0x6E877F: call    NiObject_constr
0x6E8784: mov     dword ptr [esi], offset ??_7NiBoolData@@6B@; const NiBoolData::`vftable'
0x6E878A: mov     [esi+8], ebx
0x6E878D: mov     [esi+0Ch], ebx
0x6E8790: mov     [esi+10h], ebx
0x6E8793: mov     [esi+14h], bl
0x6E8796: mov     eax, esi
0x6E8798: mov     ecx, [esp+1Ch+var_C]
0x6E879C: mov     large fs:0, ecx
0x6E87A3: pop     ecx
0x6E87A4: pop     esi
0x6E87A5: pop     ebx
0x6E87A6: add     esp, 10h
0x6E87A9: retn
0x6E87AA: xor     eax, eax
0x6E87AC: mov     ecx, [esp+1Ch+var_C]
0x6E87B0: mov     large fs:0, ecx
0x6E87B7: pop     ecx
0x6E87B8: pop     esi
0x6E87B9: pop     ebx
0x6E87BA: add     esp, 10h
0x6E87BD: retn
