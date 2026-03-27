0x6E71E0: push    0FFFFFFFFh
0x6E71E2: push    offset SEH_8C8970
0x6E71E7: mov     eax, large fs:0
0x6E71ED: push    eax
0x6E71EE: push    ecx
0x6E71EF: push    esi
0x6E71F0: push    edi
0x6E71F1: mov     eax, ds:0B30AACh
0x6E71F6: xor     eax, esp
0x6E71F8: push    eax
0x6E71F9: lea     eax, [esp+1Ch+var_C]
0x6E71FD: mov     large fs:0, eax
0x6E7203: push    18h; Size
0x6E7205: call    FormHeapAlloc
0x6E720A: mov     esi, eax
0x6E720C: add     esp, 4
0x6E720F: mov     [esp+1Ch+var_10], esi
0x6E7213: xor     edi, edi
0x6E7215: cmp     esi, edi
0x6E7217: mov     [esp+1Ch+var_4], edi
0x6E721B: jz      short loc_6E724A
0x6E721D: mov     ecx, esi
0x6E721F: call    NiObject_constr
0x6E7224: mov     dword ptr [esi], offset ??_7NiBSplineData@@6B@; const NiBSplineData::`vftable'
0x6E722A: mov     [esi+8], edi
0x6E722D: mov     [esi+0Ch], edi
0x6E7230: mov     [esi+10h], edi
0x6E7233: mov     [esi+14h], edi
0x6E7236: mov     eax, esi
0x6E7238: mov     ecx, [esp+1Ch+var_C]
0x6E723C: mov     large fs:0, ecx
0x6E7243: pop     ecx
0x6E7244: pop     edi
0x6E7245: pop     esi
0x6E7246: add     esp, 10h
0x6E7249: retn
0x6E724A: xor     eax, eax
0x6E724C: mov     ecx, [esp+1Ch+var_C]
